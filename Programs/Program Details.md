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


```
# Word Scoring Game

The Word Scoring Game is a simple command-line program written in C. It allows two players to enter words, and then calculates and compares the scores of the words based on the point values assigned to each letter of the alphabet.

## How to Play

1. The program prompts for input from Player 1: "Player 1: ".
2. Player 1 enters a word.
3. The program prompts for input from Player 2: "Player 2: ".
4. Player 2 enters a word.
5. The program calculates the score for each word based on the assigned point values of the letters.
6. The program compares the scores and determines the winner:
   - If Player 1's score is higher than Player 2's score, it displays "Player 1 wins".
   - If Player 2's score is higher than Player 1's score, it displays "Player 2 wins".
   - If both players have the same score, it displays "Tie!".

## How to Run

1. Ensure you have a C compiler (e.g., GCC) installed on your system.
2. Compile the source code by running the following command in your terminal:

   ```shell
   gcc -o word_scoring_game word_scoring_game.c
   ```

3. Run the program with the following command:

   ```shell
   ./word_scoring_game
   ```

4. Follow the prompts to input words for Player 1 and Player 2.
5. The program will display the winner or a tie.

## Points Assignment

The scoring of the words is based on the following point values assigned to each letter of the alphabet:

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

## License

This program is open source and distributed under the [MIT License](LICENSE). Feel free to modify and use it according to your needs.

```

Make sure to include this README file in the same directory as the program file (`word_scoring_game.c`). Feel free to adjust or expand the content as needed.
## License

This program is licensed under the MIT License.
