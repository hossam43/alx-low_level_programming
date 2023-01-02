#!/bin/bash

# Get the project name from the user
read -p "Enter the project name: " project_name

# Create the directory with the given name
if [ ! -d "$project_name" ]; then
    mkdir $project_name
    echo "Directory '$project_name' created."
else
    echo "Directory '$project_name' already exists."
fi
cd $project_name

# Set a default value for the name
name=${1:-Hossam-Ayman-Hassan}
echo""
echo "Wellcome $name!"
echo""
# Get the current date
date=$(date +%Y-%m-%d)
# Create the README file
cat > README.md << EOF
### Author: $name
### Date: $date
### Project Name: $project_name
## Description: 

EOF

# Initialize an empty array to store the concepts
concepts=()

# Keep asking for input until "finish" is entered
while true; do
  read -p "Enter a concept: " concept
  if [ "$concept" == "finish" ]; then
    break
  fi
  concepts+=("$concept")
done

# write the concepts as a list
echo "### Today Project Concepts" >> README.md
echo "" >> README.md
for concept in "${concepts[@]}"; do
  echo "- $concept" >> README.md
done

# Initialize an empty array to store the objectives
objectives=()

# Keep asking for input until "finish" is entered
while true; do
  read -p "Enter an objective: " objective
  if [ "$objective" == "finish" ]; then
    break
  fi
  objectives+=("$objective")
done

# write the objectives as a list
echo "### Today Project Objectives" >> README.md
echo "" >> README.md
for objective in "${objectives[@]}"; do
  echo "- $objective" >> README.md
done

echo "README.md file created."
