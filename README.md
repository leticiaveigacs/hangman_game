# Hangman Game 💡

This is a simple Hangman game developed in C++. It utilises various functionalities to create an engaging experience.

- [Click](https://leticiaveigacs.github.io/hangman_game/)

## Features 🛠️

- Allows the user to input a word to be guessed.
- Displays a series of dashes on the screen representing each letter of the word.
- The player can attempt to guess letters.
- The game checks if the letter entered by the player is part of the word.
- Limits the number of attempts (6 incorrect attempts result in defeat).
- Informs the player whether they have guessed correctly or incorrectly.
- Asks if the player wishes to continue playing after the end of each round.

## Representative Image 🖼️

[Hangman Game](https://github.com/leticiaveigacs/hangman_game/issues/1#issue-2289630901)

## How to Play 🎮

1. Run the programme.
2. Enter a word that you want your opponent to guess.
3. The game will display a series of dashes representing each letter of the word.
4. Try to guess the letters by entering them via the keyboard.
5. If you guess a letter correctly, it will be revealed in the corresponding position in the word.
6. If you guess a letter incorrectly, your remaining attempts will decrease.
7. Continue guessing until you guess the word or run out of attempts.
8. After each round, the game will ask if you wish to play again.

## Prerequisites 📋

- This game was developed in C++ and requires a compatible C++ compiler to run.

## How to Compile and Run ▶️

1. Clone this repository to your computer.
2. Navigate to the directory where the `HangmanGame.cpp` file is located.
3. Compile the file using a compatible C++ compiler. For example:
   ```
   g++ HangmanGame.cpp -o HangmanGame
   ```
4. Run the generated programme:
   ```
   ./HangmanGame
   ```

## Technical Details 🖥️

The code is divided into different functions to facilitate understanding and maintenance:

- `startGame(string& word)`: This function takes a reference to a string representing the word to be guessed and initialises the game.

- `checkLetter(string& correct, string& guesses, string word, int& attempts)`: This function checks if the letter guessed by the user is part of the word, updates the `correct` string, and decrements the number of remaining `attempts`.

- `repeatGame(bool won, string correct)`: This function asks the player if they wish to continue playing after the end of a round and informs them whether they have won or lost.
