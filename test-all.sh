#!/bin/bash

export PATH=$PATH:`pwd`/node_modules/.bin/

tree-sitter generate

for RANDOM_TARGET in $(find ./sources -type f); do
  echo "${RANDOM_TARGET}" >&2
  tree-sitter parse "${RANDOM_TARGET}" > ./asts/$(basename "${RANDOM_TARGET}").ast
  
  if grep -qF 'ERROR' ./asts/$(basename "${RANDOM_TARGET}").ast; then
    echo "${RANDOM_TARGET}"
    echo "  - FAILED" >&2
  else
    echo "  + PASSED" >&2
  fi
done
