#!/bin/bash

tree-sitter generate

for RANDOM_TARGET in $(find ./sources -type f | shuf); do
  echo "${RANDOM_TARGET}"
  tree-sitter parse "${RANDOM_TARGET}" > ./asts/$(basename "${RANDOM_TARGET}").ast
done
