#!/bin/bash

cat $(cat still-errors.txt | shuf | head -n1) > example.txt
