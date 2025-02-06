//Hangman game with graphic and random word generator
// Daniel Critchlow
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void DisplayMessage(string message,bool showTop = true, bool showBot = true )
{
    if(showTop)
    {
        cout<<"+-----------------------------------+"<<endl;
        cout<<"|";
    }
    else
    {
        cout<<"|";
    }
    bool front= true;
    for(int i = message.length();i<35;i++)
    {
        if(front)
        {
            message= " "+ message;
        }
        else
        {
            message= message +" ";
        }
        front= !front;
    }
    cout<< message.c_str();
    
    if (showBot)
    {
        cout<< "|"<<endl;
        cout<< "+-----------------------------------+"<< endl;
    }
    else
    {
    cout<<"|"<<endl;
    }
}

void Hangedman(int guessCount=0)
{
    if(guessCount>=1)
        DisplayMessage("|", false, false);
    else
        DisplayMessage("",false, false);
    if(guessCount>=2)
        DisplayMessage("|", false, false);
    else
        DisplayMessage("",false, false);
    if(guessCount>=3)
        DisplayMessage("O", false, false);
    else
        DisplayMessage("",false, false);
    if(guessCount==4)
        DisplayMessage("/  ", false, false);
    if(guessCount==5)
        DisplayMessage("/| ", false, false);
    if(guessCount>=6)
        DisplayMessage("/|\\", false, false);
    else
        DisplayMessage("",false, false);
    if(guessCount==7)
        DisplayMessage("/  ", false, false);
    if(guessCount>=8)
        DisplayMessage("/ \\", false, false);
    else
        DisplayMessage("",false, false);
}

void ShowLetters(string input, char from, char to)
{
    string s;
    for(char i = from; i<= to; i++)
    {
        if(input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
            s += "  ";
    }
    DisplayMessage(s, false, false);
}

void ShowAvailableLetters(string used)
{
    DisplayMessage("***Usable Letters***");
    ShowLetters(used,'A','M');
    ShowLetters(used,'N','Z');
}

bool DisplayWordAndCheckWin(string word, string guessed)
{
    bool win=true;
    string s;
    for(int i=0; i < word.length();i++)
    {
        if(guessed.find(word[i])== string::npos)
        {
            win=false;
            s += "_ ";
        }
        else
        {
            s+= word[i];
            s+= " ";
        }
    }
    DisplayMessage(s, false);
    return win;
}

string LoadRandomWord(string word)/*Researching this function got rid of my headache*/
{
    srand(time(0));
    const string wordList[4]={"PROGRAM","MOUSE","KEYBOARD","MONITOR"};
    string secretword = wordList[rand() % 4];
    return secretword;
}
    
int LivesLeft(string word,string guessed)
{
    int error=0;
    for (int i = 0; i < guessed.length();i++)
    {
        if(word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}
/*
+-----------------------------------+
|            Hang Man               |
+-----------------------------------+
|                |                  |
|                |                  |
|                O                  |
|               /|\                 |
|               / \                 |
+-----------------------------------+
|         Useable Letters           |
+-----------------------------------+
|     A B C D E F G H I J K L M     |
|     N O P Q R S T U V W X Y Z     |
+-----------------------------------+
|         Guess the word            |
+-----------------------------------+
| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |
+-----------------------------------+
*/
int main()
{
    string guesses;
    string wordToGuess= LoadRandomWord("word");
    int tries= 0;
    bool win= false;
    cout<<"***The word will be computer related and up to 15 characters long***"<<endl;
    cout<<"***USE CAPS ONLY***"<<endl;

    do
    {
        DisplayMessage("HANGMAN");
        Hangedman(tries);
        ShowAvailableLetters(guesses);
        DisplayMessage("Guess the word");
        win= DisplayWordAndCheckWin(wordToGuess,guesses);
        
        if(win)
            break;
            
        char x;
        cout<<"-->";cin>> x;
        if (guesses.find(x) == string::npos)
            guesses += x;            
        tries = LivesLeft(wordToGuess, guesses);        
    } while(tries < 9);
    
    if(win)
        DisplayMessage("YOU WIN!");
    else
        DisplayMessage("YOU LOSE!");
    getchar();
    return 0;
}