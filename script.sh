#!/bin/bash

# Root README
echo "# C++ Semester Journey" > README.md
echo "Structured weekly progression for mastering C++ and OOP." >> README.md

# Weeks array
weeks=(
week01_basics
week02_functions
week03_classes
week04_dynamic_classes
week05_friends
week06_operator_overloading
week07_inheritance
week08_advanced_inheritance
week09_virtual
week10_abstract_polymorphism
)

# Create structure
for week in "${weeks[@]}"; do
    mkdir -p "$week/exercises"
    mkdir -p "$week/mini_project"

    echo "# $week" > "$week/README.md"
    echo "## Topics" >> "$week/README.md"
    echo "- " >> "$week/README.md"
    echo "" >> "$week/README.md"
    echo "## Exercises" >> "$week/README.md"
    echo "" >> "$week/README.md"
    echo "## Mini Project" >> "$week/README.md"
done

echo "Structure created successfully."

