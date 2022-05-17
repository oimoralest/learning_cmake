# Cmake

## Synopsis

```Plain
Generate a Project Buildsystem
 cmake [<options>] <path-to-source>
 cmake [<options>] <path-to-existing-build>
 cmake [<options>] -S <path-to-source> -B <path-to-build>

Build a Project
 cmake --build <dir> [<options>] [-- <build-tool-options>]

Install a Project
 cmake --install <dir> [<options>]

Open a Project
 cmake --open <dir>

Run a Script
 cmake [{-D <var>=<value>}...] -P <cmake-script-file>

Run a Command-Line Tool
 cmake -E <command> [<options>]

Run the Find-Package Tool
 cmake --find-package [<options>]

View Help
 cmake --help[-<topic>]
```
## Build and run

To create a build for this folder, run

```shell
mkdir Step1_build
cd Step1_build
cmake ../
cmake --build .
```

You will see a compiled file called Tutorial defined in [CMakeLists.txt](./CMakeLists.txt) under command project

Now, you can run the compiled file

```shell
./Tutorial
```

## Adding a version number and configured header file
Check the code comments in: [tutorial.cxx](./tutorial.cxx), [TutorialConfig.h.in](./TutorialConfig.h.in), [CMakeLists.txt](./CMakeLists.txt)

Cmake commands used here: 
- [project](https://cmake.org/cmake/help/latest/command/project.html#command:project)
- [configure_file](https://cmake.org/cmake/help/latest/command/configure_file.html?highlight=configure_file)
- [target_include_directories](https://cmake.org/cmake/help/latest/command/target_include_directories.html?highlight=target_include_directories)
- [set](https://cmake.org/cmake/help/latest/command/set.html?highlight=set)
