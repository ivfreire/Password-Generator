# Password Generator

This is a simple password generator application written in C/C++.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

The project requires CMake for compilation.

### Compilation

After cloning the repository, just run the build.sh script. Alternativelly, you can run

```
$ cmake .
$ make
```

Now, there should be an executable named pwgen in the project root directory.

### Installation

To install the program, just run

```
$ sh ./install.sh
```

The script is going to compile the program (if not compiled yet) and then copy it to the /usr/local/bin folder, where bash will detect it as an executable that can be called from the system terminal. You can aswell do it yourself manually :)

## Usage

The app allows you to generate random passwords where you can choose the difficulty and length of it. The program has the following systax:

```
$ ./pwgen [difficulty] [length]
```

Where <strong>difficulty</strong> is a value between 0 and 3, being:

```
0	->		lowercase letters
1	->		uppercase and lowercase letters
2	->		numbers with lowercase and uppercase letters
3	->		special character with numbers, lowercase and uppercase letters
```

and 0 is the default difficulty.

<strong>Length</strong> is the amount of character you want your password to have. The default value is 16.

## Authors

* ** Icaro Freire **
