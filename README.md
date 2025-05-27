# Caesar Cipher Implementation using Circular Queue

## Project Overview

This project implements the classic Caesar Cipher encryption and decryption algorithm using a circular queue data structure in C Language.
this application demonstrates fundamental concepts of data structures, character manipulation, and modular arithmetic within the context of classical cryptography.

The program allows users to input a message and a shift key, then choose to either encrypt or decrypt the message. It is designed to handle both uppercase and lowercase English alphabetic characters while leaving non-alphabetic characters (like spaces, numbers, and punctuation) unchanged.

## Features

* **Encryption:** Encrypts a given message by shifting each alphabetic character forward by a specified key.
* **Decryption:** Decrypts an encrypted message by shifting each alphabetic character backward by the same key.
* **Circular Queue Logic:** Utilizes a circular queue to manage the alphabet, ensuring correct character rotation and wrap-around (e.g., 'Z' shifted by 1 becomes 'A').
* **Case Preservation:** Preserves the original casing of alphabetic characters in the output.
* **Non-Alphabetic Handling:** Ignores and outputs non-alphabetic characters as they are.
* **Robust Input Handling:** Includes validation for user choices (Encryption/Decryption) and the numerical shift key.

## Project Structure

* `main.c`: Contains the main program logic, including input/output handling, the `initAlphabetQueue`, `shiftChar`, `encryptMessage`, and `decryptMessage` functions.
* `queue.h`: The header file defining the `CircularQueue` structure and function prototypes for the cipher operations.
* `README.md`: This file, providing an overview of the project.

## How to Compile and Run

To compile and run this project, you will need a C compiler (e.g., GCC). If using an IDE like Code::Blocks, follow the steps provided in the assignment's setup guide.

**Using GCC (Command Line):**

1.  **Save the files:** Save `main.c` and `queue.h` in the same directory.
2.  **Open a terminal or command prompt.**
3.  **Navigate to the project directory:**
    ```bash
    cd path/to/your/project
    ```
4.  **Compile the code:**
    ```bash
    gcc main.c -o caesar_cipher
    ```
    (On Windows, this will create `caesar_cipher.exe`; on Linux/macOS, it will create `caesar_cipher`)
5.  **Run the executable:**
    ```bash
    ./caesar_cipher  # On Linux/macOS
    caesar_cipher    # On Windows
    ```

## Usage Example

The program will prompt you for input: ![image](https://github.com/user-attachments/assets/43fa200f-b158-46d0-b2f6-957ffb0ad9c0)
