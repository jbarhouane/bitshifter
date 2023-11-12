# Bitshifter

## Overview
Bitshifter is a C program that manages a set of flags represented as bits within an array of unsigned integers. It provides functionality to set, unset, check, and display these flags. The program demonstrates the use of bitwise operations to manipulate bits efficiently.

## Features

- **Set Flag**: Enables a specific bit to represent a flag being active.
- **Unset Flag**: Disables a specific bit to represent a flag being inactive.
- **Check Flag**: Evaluates whether a specific bit is enabled or disabled.
- **Display Flags**: Outputs the current state of all flags in a human-readable format.

## Getting Started

Follow these instructions to get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

Ensure you have a C compiler such as `gcc` installed on your machine to compile and run the program.

### Installation

1. Clone the repository to your local machine:
    ```shell
    git clone https://github.com/jbarhouane/bitshifter.git
    ```

2. Navigate to the main directory of the cloned repository:
    ```shell
    cd bitshifter
    ```

3. Compile the program using `gcc`:
    ```shell
    gcc -o flag_manager main.c
    ```

4. Run the compiled program:
    ```shell
    ./flag_manager
    ```

## Usage

Once the program is running, it will automatically perform a set of flag operations defined in the `main` function and display the results.
