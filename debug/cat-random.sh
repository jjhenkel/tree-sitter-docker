#!/bin/bash

CHOICE=$(cat still-errors.txt | shuf | head -n1)
echo $CHOICE
cat "${CHOICE}" > example.txt
