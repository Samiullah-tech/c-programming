#!/bin/bash

# Usage: ./run_c.sh filename.c

filename="$1"
basename="${filename%.c}"

gcc "$filename" -o "$basename"

if [ $? -eq 0 ]; then
  ./"$basename"
  rm "$basename"
else
  echo "Compilation failed."
fi
