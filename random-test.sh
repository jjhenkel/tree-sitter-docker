#!/bin/bash

RANDOM_TARGET=$(find ./tests -type f | shuf | head -n1)

tree-sitter generate && tree-sitter parse "${RANDOM_TARGET}"

cat "${RANDOM_TARGET}" > target.Dockerfile
