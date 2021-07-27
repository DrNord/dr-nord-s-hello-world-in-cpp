# Dr. Nord's Hello World in C++

The "Hello World" program for C++ beginners with explanatory comments and support files including documentation and useful links.  
The classic source code, despite its brevity, clarifies the basic structure of a C++ program.  
The extended source code covers additional issues such as copyright, licensing information, user interaction, etc.  
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
Consider using [Code::Blocks][] - the free C/C++ and Fortran IDE. Be sure to install the IDE's binary release with a compiler (that is the [MinGW-W64][] compiler if you are on Windows).

#### <a name=command-line /> Command line - advanced
Using an IDE is not mandatory. It is absolutely possible to install a bare compiler, such as [GCC][] and do the compilation from a command line.  
In this case usage of buld tools, such as [GNU Make][] is recommended. A file [makefile][] is included to this project for such a purpose, you may simply type ```make``` from the project folder and the [GNU Make][] will do the rest.
For extended version you can use the file [makefile-x][] ('x' stands for 'extended'). In this case it is needed to explicitly specify the filename 'makefile-x': ```make -f makefile-x```.


### Running the program
Follow the steps below to see the "Hello World" in action:
1. Place the [main.cpp][] file somewhere on a local drive. For extended version you can use the file [main-x.cpp][] ('x' stands for 'extended').
2. Compile it (see [Prerequisites](#prerequisites) for details).
3. Run the obtained executable.
If you are executing the classic version and don't see any effect (the console window may be opened and closed instantly giving no opportunity to see the displayed text), try executing it from a command line. You can do the same with the extended version to catch the output, printed before exiting the program.

## Installation

Only the source code file [main.cpp][] or [main-x.cpp][] is used, no installation is needed.  
The rest files are supportive and represent formal attributes of a complete project.  
Also you may find useful the [Git commands memo for this repository][]

## Deployment

Usually the obtained executable size is reduced by means of dynamic linking of some libraries, not obligatory included to every operating system's software.
To ensure your executable launchability consider compiling it using static linking (look for example in the file [makefile][]).

## Code of Conduct and Contributing

Please read [CODE-OF-CONDUCT.md][] and [CONTRIBUTING.md][] for details respectively on the code of conduct and the process for submitting pull requests.

## Versioning

The [SemVer][] is used for versioning. For the versions available, see [tags on this repository][]. 

## Author and contacts

Supervisor, chief executive: ***Alexander Nord***, aka ***'Dr. Nord'*** - Doctor of Engineering Sciences, Professor   
:e-mail: <nordexium@gmail.com>  
:octocat: https://github.com/DrNord

## License

This project is licensed under the GNU General Public License - see the official site [GNU GPL v3.0][], [SPDX-GPL-3.0-or-later][] or [local-license-GPL-3.0-or-later][] file for details.

You can still use the previous [release v1.0.0][] under its [MIT License][].

Some specified content of the [.gitignore][] file is taken from [C++.gitignore][], that is published under the [CC0 1.0 Universal license][], its text is also placed here: [CC0-1.0][local-license-CC0-1.0].

## Acknowledgments

*Inspired by those who strive for everything from nothing.*

Take the time to explore additional files, you may discover useful links there (thanks to its content authors).

[Code::Blocks]: https://www.codeblocks.org
[MinGW-W64]: https://mingw-w64.org
[GCC]: https://gcc.gnu.org
[GNU Make]: https://www.gnu.org/software/make
[SemVer]: http://semver.org
[GNU GPL v3.0]: https://www.gnu.org/licenses/gpl-3.0.html
[SPDX-GPL-3.0-or-later]: https://spdx.org/licenses/GPL-3.0-or-later.html
[MIT License]: https://spdx.org/licenses/MIT.html
[CC0 1.0 Universal license]: https://spdx.org/licenses/CC0-1.0.html
[C++.gitignore]: https://github.com/github/gitignore/blob/master/C++.gitignore
[tags on this repository]: https://github.com/DrNord/dr-nord-s-hello-world-in-cpp/tags
[release v1.0.0]: https://github.com/DrNord/dr-nord-s-hello-world-in-cpp/releases/tag/v1.0.0

[main.cpp]: /main.cpp
[main-x.cpp]: /main-x.cpp
[makefile]: /makefile
[makefile-x]: /makefile-x
[CODE-OF-CONDUCT.md]: /docs/CODE-OF-CONDUCT.md
[CONTRIBUTING.md]: /docs/CONTRIBUTING.md
[local-license-GPL-3.0-or-later]: /LICENSE-GNU-GPL.txt
[local-license-CC0-1.0]: /docs/LICENSES/CC0-1.0.txt
[.gitignore]: /.gitignore
[Git commands memo for this repository]: /docs/git-commands-memo-for-this-repo.md
