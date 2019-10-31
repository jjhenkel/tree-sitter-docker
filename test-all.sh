#!/bin/bash

export PATH=$PATH:`pwd`/node_modules/.bin/

tree-sitter generate

find ./sources -type f | sort | xargs -n 1 -P 7 -i{} bash -c "tree-sitter parse {} > ./asts/\$(basename {}).ast"

for RANDOM_TARGET in $(find ./sources -type f | sort); do
  echo "${RANDOM_TARGET}" >&2
  
  if grep -qF 'ERROR' ./asts/$(basename "${RANDOM_TARGET}").ast; then
    echo "${RANDOM_TARGET}"
    echo "  - FAILED" >&2
  else
    echo "  + PASSED" >&2
  fi
done
