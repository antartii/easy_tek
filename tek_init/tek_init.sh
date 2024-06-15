#!/bin/sh

year=$(date +%Y)
root_dir=$(basename "$(dirname "$(pwd)")")

# creating the needed folders
mkdir ./src
mkdir ./includes

# creating the needed files
touch ./src/main.c
touch "./includes/$root_dir.h"
touch Makefile

# adding headers to the new .c files and to the .h file
for file in $(find ./src -name "*.c"; echo "./includes/$root_dir.h"); do

    filename="${file#./src/}"

    echo "/*" > "$file"
    echo "** EPITECH PROJECT, $year" >> "$file"
    echo "** $root_dir" >> "$file"
    echo "** File description:" >> "$file"
    echo "** $filename" >> "$file"
    echo "*/" >> "$file"

    if [[ "$file" == *.c ]]; then
        echo -e "\n#include \"$root_dir.h\"" >> "$file"
    fi
    
    if [[ "$file" == */main.c ]]; then
        echo -e "\nint main(void)\n{\n    return 0;\n}" >> "$file"
    fi
done

# adding the ifndef to the .h file template
echo -e "\n#ifndef ${root_dir^^}" >> "./includes/$root_dir.h"
echo -e "    #define ${root_dir^^}" >> "./includes/$root_dir.h"
echo -e "\n#endif" >> "./includes/$root_dir.h"

# adding everything for the Makefile template
## defining variables
echo -e "##\n## EPITECH PROJECT, $year\n## $root_dir\n## File description:\n## Makefile\n##\n" > Makefile

echo -e "CC = gcc\nAR = rcs\n" >> Makefile

echo -e "TARGET = program\nTARGET_DEBUG = \$(TARGET)_debug" >> Makefile
echo -e "CFLAGS_INCLUDES = -I\$(INCLUDE_DIR)\\" >> Makefile
echo -e "\t\$(foreach dep,\$(DEPENDENCIES_PATH),-I\$(dep)/includes)" >> Makefile
echo -e "CFLAGS = \$(CFLAGS_INCLUDES) -W -Wextra\nCFLAGS_DEBUG = -g\n" >> Makefile

echo -e "INCLUDE_DIR = includes\nSRC_DIR = src\nOBJ_DIR = obj\nDEPENDENCIES_PATH =\n" >> Makefile
echo -e "SRC = \$(shell find \$(SRC_DIR) -name '*.c')\nOBJ = \$(patsubst \$(SRC_DIR)/%.c, \$(OBJ_DIR)/%.o, \$(SRC))\n" >> Makefile

## build
echo -e "all: build_dependencies \$(TARGET)\n" >> Makefile

echo -e "build_dependencies:" >> Makefile
echo -e "\t@\$(foreach dep, \$(DEPENDENCIES_PATH), make -C \$(dep);)\n" >> Makefile

echo -e "\$(TARGET): \$(OBJ)" >> Makefile
echo -e "\t\$(CC) \$(CFLAGS) \$(OBJ)\\" >> Makefile
echo -e "\t\$(foreach dep,\$(DEPENDENCIES_PATH),-L\$(dep) -l\$(dep)) -o \$(TARGET)" >> Makefile
echo -e "\t@echo \"project '\$(TARGET)' successfully build\"\n" >> Makefile

echo -e "\$(TARGET_DEBUG): \$(OBJ)" >> Makefile
echo -e "\t@echo \"project '\$(TARGET_DEBUG)' successfully build\"" >> Makefile
echo -e "\t\$(CC) \$(CFLAGS) \$(CFLAGS_DEBUG) \$(OBJ)\\" >> Makefile
echo -e "\t\$(foreach dep,\$(DEPENDENCIES_PATH),-L\$(dep) -l\$(dep)) -o \$(TARGET_DEBUG)\n" >> Makefile

echo -e "\$(OBJ_DIR)/%.o: \$(SRC_DIR)/%.c | \$(OBJ_DIR)" >> Makefile
echo -e "\t@mkdir -p \$(dir \$@)" >> Makefile
echo -e "\t\$(CC) \$(CFLAGS) -c \$< -o \$@\n" >> Makefile

echo -e "\$(OBJ_DIR):" >> Makefile
echo -e "\t@mkdir -p \$(OBJ_DIR)" >> Makefile
echo -e "\t@echo \"making directory '\$(OBJ_DIR)' since it doesn't exist\"\n" >> Makefile

echo -e "debug: build_dependencies \$(TARGET_DEBUG)\n" >> Makefile

echo -e "clean:" >> Makefile
echo -e "\t@\$(foreach dep, \$(DEPENDENCIES_PATH), make -C \$(dep) clean;)" >> Makefile
echo -e "\t@rm -rf \$(OBJ_DIR)\n" >> Makefile

echo -e "fclean: clean" >> Makefile
echo -e "\t@\$(foreach dep, \$(DEPENDENCIES_PATH), make -C \$(dep) fclean;)" >> Makefile
echo -e "\t@rm -f \$(TARGET)\n" >> Makefile

echo -e "re: fclean all\n" >> Makefile

echo -e ".PHONY: all clean fclean re build_dependencies" >> Makefile
