#!/bin/bash


cat ./debug/part1.html > debug.html

jq -nc --arg str "$(cat example.txt)" '$str' >> debug.html

cat ./debug/part2.html >> debug.html

tree-sitter generate

jq -nc --arg str "$(tree-sitter parse example.txt)" '$str' >> debug.html

cat ./debug/part3.html >> debug.html

tree-sitter test | aha -n >> debug.html

cat ./debug/part4.html >> debug.html
