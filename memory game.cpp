// Memory Game Final Project Instructions
// Objective:

// The objective of this project is to design and implement a memory game using the C++ programming language. The memory game should consist of a grid of cards 
// with matching pairs, where a player flips over two cards at a time, attempting to find matching pairs by remembering the positions of different cards. The 
// player strives to do it in the least amount of turns.
// Requirements:

//     Grid Size: The grid size (number of rows and columns) should be a 4x4 grid.
//     Card Symbols: Each card should have a letter or symbol to represent it. There should be matching pairs of symbols on the grid. Use the toupper function 
//     to ensure all symbols are read in all caps.
//     Game Logic: Implement the game logic to handle where numbers will be stored, checking for matches, keeping track of the number of moves, and determining 
//     when the game is over.
//     User Interface: Design a simple user interface to display the game grid and interact with the player. Use text-based output for simplicity.
//     Error Handling: Implement error handling to ensure that the player's input is within the valid range and that they cannot flip already matched cards.
//     Scoring: Implement a scoring system based on the number of moves to complete the game.

// Steps to Complete the Project:

//     Understanding the Game: Make sure you understand the rules and mechanics of a memory game. Consider playing a few rounds of a memory game online or with 
//     physical cards to familiarize yourself with the gameplay.

//     Planning: Before writing any code, plan out the structure and logic of your memory game. Consider how you will represent the game grid, handle player 
//     input, and track the state of the game.

//     Setting Up Your Development Environment: Ensure that you have access to C++ Shell or Visual Studio C++.

//     Writing Code: Start by writing the code for your memory game according to your plan. Break down the problem into smaller tasks and implement them one 
//     by one. Test each component as you go to ensure it functions as expected.

//     Testing and Debugging: Once you have implemented the basic functionality of your memory game, thoroughly test it to identify and fix any bugs or errors. 
//     Pay special attention to edge cases and unexpected user input.

//     Refining Your Code: Refine your code by improving its readability, efficiency, and organization. Add comments to explain your code and make it easier to 
//     understand for others.

//     Playtesting: Playtest your memory game to ensure that it is enjoyable and functional. Gather feedback from classmates or friends and make any necessary 
//     adjustments based on their suggestions.

//     Submission: Once you are satisfied with your memory game, submit your code along with any necessary documentation or instructions to the teacher for 
//     evaluation.

// Additional Tips:

//     To create a random number, you have to do three things:
//         Add to the top of the file #include <time.h>
//         Add these two commands at the beginning of int main () { srand(time(NULL));
//         When you need to generate a number between 1 to 8, use int r=rand( ) % 8 + 1;
//     Break down the problem into smaller, manageable tasks.
//     Use meaningful variable names and comments to make your code more understandable.
//     Test your code frequently as you develop it to catch errors early.
//     Don't hesitate to ask for help to your teacher if you get stuck or encounter difficulties.
