### Program Details
This file provides an overview of the programs, instructions for usage, example usage, requirements, licensing information, contribution guidelines, acknowledgements, and a message encouraging users to ask questions or provide feedback. Feel free to customize it further based on your specific needs.
For a brief description of the programs click  the [README](https://github.com/Teseife/Super-Simple-Programs-/blob/main/README.md) file

## Llama_pop_Growth

To use this program, simply compile the `Lama_Pop_Growth.c` file and run the resulting executable. The program will prompt the user to enter the starting population of llamas and the target population. Once the user has entered these values, the program will calculate the number of years it would take to reach the target population using the following formula:

```
n = current_population
Years_amount = n + (n / 3) - (n / 4)
```
where each year, (n / 3) new llamas are born, and (n / 4) llamas pass away

The program will repeat the above formula until the new population is greater than or equal to the target population. It will then output the number of years it would take to reach the target population.
# Shift Cipher

This is a simple program that encrypts a given plain text message using the shift cipher algorithm. The shift cipher replaces each letter in the plain text message with the letter that is a fixed number of positions down the alphabet. 

## Formula

The formula used to encrypt the plain text message is: 
```
c = (p + k) % 26
```
where `c` is the resulting ciphertext letter, `p` is the corresponding plaintext letter, `k` is the key (i.e., the number of positions to shift), and `%` is the modulo operator.

## Usage

To run the program, use the following command in the terminal: 

```
./shiftcipher key
```
Replace `key` with an integer value between 0 and 25. 

The program will then prompt you to enter the plain text message that you want to encrypt. Simply type your message and hit Enter.

The program will output the encrypted ciphertext message. 

## Example

Here is an example of how to use the program:

```
./shiftcipher 3
plaintext: hello world
ciphertext: khoor zruog
```
# Substitution Cipher

This program is a simple implementation of the Substitution Cipher algorithm in C. The user can input a substitution key as a command line argument, and then enter a plaintext message to be encrypted using that key. The program will output the ciphertext message.

## Usage

To run the program, navigate to the directory where it is installed and type the following command:

```
./substitution-cipher [key]
```

Replace `[key]` with a 26-letter substitution key. The key should be a permutation of the 26 letters of the alphabet (i.e., each letter should appear exactly once).

The program will then prompt you to enter a plaintext message. Simply type your message and hit Enter.

The program will output the ciphertext message.

## Example

```
./substitution-cipher ZXCVBNMASDFGHJKLQWERTYUIOP
plaintext: Hello world
ciphertext: Tqxxa txygx
```


Sure! Here's a README file for your program:

# Word Scoring Game

This program allows two players to enter words and calculates the scores for each word based on a predefined scoring system. The player with the higher score wins the game.

## Scoring System

The scoring system assigns points to each letter of the alphabet. The points assigned to each letter are as follows:

| Letter | Points |
|--------|--------|
| A      | 1      |
| B      | 3      |
| C      | 3      |
| D      | 2      |
| E      | 1      |
| F      | 4      |
| G      | 2      |
| H      | 4      |
| I      | 1      |
| J      | 8      |
| K      | 5      |
| L      | 1      |
| M      | 3      |
| N      | 1      |
| O      | 1      |
| P      | 3      |
| Q      | 10     |
| R      | 1      |
| S      | 1      |
| T      | 1      |
| U      | 1      |
| V      | 4      |
| W      | 4      |
| X      | 8      |
| Y      | 4      |
| Z      | 10     |

## How to Use

1. Run the program.
2. Player 1 will be prompted to enter their word.
3. Player 2 will be prompted to enter their word.
4. The program will calculate and display the scores for both words.
5. The program will determine the winner based on the scores:
   - If player 1 has a higher score than player 2, it will display "Player 1 wins."
   - If player 2 has a higher score than player 1, it will display "Player 2 wins."
   - If both players have the same score, it will display "Tie!"

## How Scores are Calculated

The program calculates the score for each word by iterating over each character in the word. It checks whether the character is a lowercase or uppercase letter and adds the corresponding points to the total score.

## Example

```
Player 1: hello
Player 2: world

Player 1 score: 8
Player 2 score: 9
Player 2 wins!
```

## Dependencies

The program uses the following libraries:

- ctype.h: for character type checking functions
- stdio.h: for standard input/output functions
- string.h: for string manipulation functions

## Compatibility

This program is written in C and is compatible with any C compiler that supports the standard libraries used.

Feel free to modify the program or scoring system according to your needs.

Enjoy playing the word scoring game!

## Points Assignment

The scoring of the words is based on the following point values assigned to each letter of the alphabet:


# VolumeScale

VolumeScale is a simple program that allows you to modify the volume of a WAV audio file. This program is written in C and can be used as a command-line tool. Do not know what a WAV file is ? CLICK here to read more [WAVFILE](https://www.wikiwand.com/en/WAV#Description)

## Usage

To use VolumeScale, follow the steps below:

1. Clone the repository or download the source code.
2. Compile the program using a C compiler.
3. Run the compiled executable with the following command-line arguments:

```
./volume input.wav output.wav factor
```

- `input.wav`: The path to the input audio file (WAV format).
- `output.wav`: The path to the output audio file (WAV format).
- `factor`: The scaling factor to modify the volume. Use a float value greater than 0.0 to increase the volume or less than 0.0 to decrease the volume.

Make sure to replace `input.wav`, `output.wav`, and `factor` with the appropriate values for your use case.

## Example

To increase the volume of an audio file called `audio.wav` by a factor of 1.5 and save the modified file as `output.wav`, use the following command:

```shell
./volume audio.wav output.wav 1.5
```
## Requirements

- C compiler 


# GeneInheritance 

## Description

GeneInheritance.c, simulates the genetic inheritance of blood types for a family tree structure. It represents a person with a struct, where each person has two parents and two alleles. The alleles represent the blood type of the person.

The main purpose of this program is to demonstrate the inheritance of blood types in a family structure for educational purposes. It helps students understand the concept of genetic inheritance and how genes are passed from parents to offspring. It also helps in understanding some key concepts in C programming such as structs, pointers, dynamic memory allocation, and recursion.

## Usage

To use this program, follow these steps:

1. Compile the program with a C compiler:

```bash
gcc GeneInheritance.c -o GeneInheritance
```

2. Run the executable:

```bash
./GeneInheritance
```

The program will output a family tree of three generations with their blood types.

```
The above instructions for all programs assume that the user has access to a Unix-like terminal and a GCC compiler. 
```
## License

These programs are open source and distributed under the [MIT License](https://github.com/Teseife/Super-Simple-Programs-/blob/main/LICENSE).  
