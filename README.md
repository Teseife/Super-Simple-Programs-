# Super-Simple-Programs-
This repository is a compilation of programs that perform simple tasks. 

# Simple Programs

This repository contains a collection of simple programs that perform various tasks. Each program is written in C programming language and can be compiled and run on any platform that supports C.

## Programs

The following programs are included in this repository:

# Llama_Pop_Growth

This program calculates the number of years it would take to reach a specified population of llamas. The program uses a simple formula that takes into account the number of llamas born and passed in a given year. 

## Usage

To use this program, simply compile the `Lama_Pop_Growth.c` file and run the resulting executable. The program will prompt the user to enter the starting population of llamas and the target population. Once the user has entered these values, the program will calculate the number of years it would take to reach the target population using the following formula:

```
n = current_population
Years_amount = n + (n / 3) - (n / 4)
```
where each year, (n / 3) new llamas are born, and (n / 4) llamas pass away

The program will repeat the above formula until the new population is greater than or equal to the target population. It will then output the number of years it would take to reach the target population.

- **encrypt_text:** This program encrypts a given text using a simple substitution cipher. The user can provide a key that defines the mapping between plaintext characters and ciphertext characters.

- **decrypt_text:** This program decrypts a given ciphertext using a simple substitution cipher. The user must provide the same key that was used to encrypt the plaintext.

- **count_words:** This program counts the number of words in a given text. A word is defined as a sequence of characters separated by whitespace.

- **reverse_string:** This program reverses a given string. For example, the string "hello" would be reversed to "olleh".

## Usage

To use these programs, you must have a C compiler installed on your system. You can then compile each program by running the following command:

```
gcc -o <output_file> <input_file.c>
```

Replace `<output_file>` with the name of the output file you want to create, and `<input_file.c>` with the name of the input file containing the program code.

Once you have compiled a program, you can run it by executing the output file:

```
./<output_file>
```

Replace `<output_file>` with the name of the output file you compiled earlier.

## Contributing

If you have any suggestions or improvements for any of these programs, feel free to submit a pull request.
