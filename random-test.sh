#!/bin/bash

export PATH=$PATH:`pwd`/node_modules/.bin/

tree-sitter generate

for RANDOM_TARGET in $(cat ./errors.txt); do
  tree-sitter parse "${RANDOM_TARGET}" > ./asts/$(basename "${RANDOM_TARGET}").ast
  grep -qF 'ERROR' ./asts/$(basename "${RANDOM_TARGET}").ast && echo "${RANDOM_TARGET}"
done
