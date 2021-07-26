# Dr. Nord's Hello World in C++

The "Hello World" program for C++ beginners with support files including documentation and useful links. 
The classic source code, despite its brevity, clarifies the basic structure of a C++ program.
The support files will help to understand the project structure relatively to Open Source Community standards and conventions.

Copyright (C) 2021 Dr. Nord

<details>
  <summary> Table of contents </summary>
  
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
      - [IDE (recommended)](#ide)
      - [Command Line (advanced)](#command-line)
    - [Running the program](#running-the-program)
  - [Installation](#installation)
  - [Deployment](#deployment)
  - [Code of Conduct and Contributing](#code-of-conduct-and-contributing)
  - [Versioning](#versioning)
  - [Authors and contacts](#authors-and-contacts)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)
</details>


## Getting Started

### Prerequisites

#### <a name=ide /> Integrated Development Environment (IDE) - recommended
Generally, to be able to build an executable from a source code it is recommended to install an IDE.
Consider using [Code::Blocks](https://www.codeblocks.org) - the free C/C++ and Fortran IDE. Be sure to install the IDE's binary release with a compiler (that is the [MinGW-W64](https://mingw-w64.org) compiler if you are on Windows).

#### <a name=command-line /> Command line - advanced
Using an IDE is not mandatory. It is absolutely possible to install a bare compiler, such as [GCC](https://gcc.gnu.org) and do the compilation from a command line.
In this case usage of buld tools, such as [GNU Make](https://www.gnu.org/software/make) is recommended.
A file [makefile](/makefile) is included to this project for such a purpose.

### Running the program
Follow the steps below to see the "Hello World" in action:
1. Place the [main.cpp](/main.cpp) file somewhere on a local drive.
2. Compile it (see [Prerequisites](#prerequisites) for details).
3. Run the obtained executable.
If you don't see any effect (the console window may be opened and closed instantly giving no opportunity to see the displayed text), try executing it from a command line.

## Installation

Only the source code file [main.cpp](/main.cpp) is used, no installation is needed.
The rest files are supportive and represent formal attributes of a complete project.

## Deployment

Usually the obtained executable size is reduced by means of dynamic linking of some libraries, not obligatory included to every operating system's software.
To ensure your executable launchability consider compiling it using static linking (look for example in the file [makefile](/makefile)).

## Code of Conduct and Contributing

Please read [CODE-OF-CONDUCT.md](/docs/CODE-OF-CONDUCT.md) and [CONTRIBUTING.md](/docs/CONTRIBUTING.md) for details respectively on the code of conduct and the process for submitting pull requests.

## Versioning

The [SemVer](http://semver.org/) is used for versioning. For the versions available, see [tags on this repository](https://github.com/DrNord/dr-nord-s-hello-world-in-cpp/tags). 

## Author and contacts

Supervisor, chief executive: ***Alexander Nord***, aka ***'Dr. Nord'*** - Doctor of Engineering Sciences, Professor   
:e-mail: <nordexium@gmail.com>  
:octocat: https://github.com/DrNord

## License

This project is licensed under the [MIT License](https://spdx.org/licenses/MIT.html) - see the [LICENSE](/LICENSE-MIT.txt) file for details.

Some specified content of the [.gitignore](/.gitignore) file is taken from [C++.gitignore](https://github.com/github/gitignore/blob/master/C++.gitignore), that is published under the [CC0 1.0 Universal license](https://spdx.org/licenses/CC0-1.0.html), its text is also placed here: [CC0-1.0](/docs/LICENSES/CC0-1.0.txt).

## Acknowledgments

*Inspired by those who strive for everything from nothing.*

Take the time to explore additional files, you may find useful links there (thanks to its content authors).
