# Tek_init.sh
## The best and only way to init your epitech projects

### How to use
- Navigate to the root folder of your project
    ```bash
    cd [YOUR_PROJECT_PATH]
    ```
- Use the `tek_init.sh` program from the `tek_init` directory
    ```bash
    ./tek_init/tek_init.sh
    ```
- And you'll be ready to start your C project

### Tips
- The template Makefile output a program called `program` when you use it, make sure to change it to the name of your project's program.
  ```Makefile
    TARGET = program_name
  ```
- You can add your dependencies libraries folder into the DEPENDENCIES_PATH
  ```Makefile
  DEPENDENCIES_PATH = lib1_directory \
                        lib2_directory
  ```

### Version
`1.0` - initial version
