#!/bin/bash

# Usage: ./save_solution.sh <platform> <problem_name>
# Example: ./save_solution.sh leetCode twoSum

PLATFORM=$1
PROBLEM_NAME=$2
SOURCE_FILE="main.cpp"

if [ -z "$PLATFORM" ] || [ -z "$PROBLEM_NAME" ]; then
  echo "Error: Platform and problem name are required."
  echo "Usage: ./save_solution.sh <platform> <problem_name>"
  exit 1
fi

DEST_DIR="./$PLATFORM"
DEST_FILE="$DEST_DIR/$PROBLEM_NAME.cpp"

if [ ! -f "$SOURCE_FILE" ]; then
  echo "Error: $SOURCE_FILE not found."
  exit 1
fi

if [ ! -d "$DEST_DIR" ]; then
  echo "Creating directory: $DEST_DIR"
  mkdir -p "$DEST_DIR"
fi

cp "$SOURCE_FILE" "$DEST_FILE"
echo "Successfully copied $SOURCE_FILE to $DEST_FILE"

# Git operations
echo "Adding files to Git..."
git add .

COMMIT_MESSAGE="feat($PLATFORM): add solution for $PROBLEM_NAME"
echo "Committing with message: $COMMIT_MESSAGE"
git commit -m "$COMMIT_MESSAGE"

echo "Pushing to remote..."
git push

echo "All done!"
