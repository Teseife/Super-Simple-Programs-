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

## License

This program is licensed under the MIT License.
