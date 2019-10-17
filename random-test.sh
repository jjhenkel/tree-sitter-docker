#!/bin/bash

set -ex

tree-sitter generate

for RANDOM_TARGET in $(find ./tests -type f | shuf | head -n100); do
  cat "${RANDOM_TARGET}" > target.Dockerfile
  tree-sitter parse "${RANDOM_TARGET}"
done
