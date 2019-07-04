# Password Generator

This is a simple password generator application written in C/C++.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

The project requires CMake for compilation.

### Compilation

After cloning the repository, just run the [build.sh] script. Alternativelly, you can run

```
$ cmake .
$ make
```

Now, there should be an executable named [pwgen] in the project root directory.

## Usage

The app allows you to generate random password where you can choose the difficulty and length of it. The program has the following systax:

```
$ pwgen [difficulty] [length]
```

Where:
<bold>Difficulty</bold> is a value between 0 and 3, being:

```
0\tlowercase letters
1\tuppercase and lowercase letters
2\tnumbers with lowercase and uppercase letters
3\tspecial character with numbers, lowercase and uppercase letters
```

0 is the default difficulty.

<bold>Length</bold> is the amount of character you want your password to have. The default value is 16.
