/*You are developing the Battleship game. In this game, a player "hides" 5 ships on the grid. We can assume he won't cheat.

    1 carrier (5 cells)
    1 battleship (4 cells)
    1 cruiser (3 cells)
    1 submarine (3 cells)
    1 destroyer (2 cells)

The grid is horizontally numbered with letters (A to J) and vertically with numbers (1-10).

After hiding these ships, display the grid (for grading purposes only). The full game will not be programmed, only the grid display for one of the players. 
Then, prompt the player to guess a position. If the guessed position contains a ship, the ship is sunk. 
Otherwise, the player missed. Count the number of turns it takes for the player to sink all ships.

Once the player has guessed the location of all ships, show the number of attempts it took for them to win.*/

// Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;
//I had to look up a lot to get this into a better state
const int rows= 10;//using const let's me set the unchanging values for my game
const int cols= 10;
int maxships = 5;//I set the ships but this doesn't really apply with how my code ended up
int matrix[rows][cols];
//this is to clear my cells
void Clear()
{
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            matrix[i][j]=0;  
        }
    }
}    
//this is to set my cells
void Show()
{
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";  
        }
        cout<<endl;
    }
}    
//this is my function for counting targets
int NumberOfShips()
{
    int c = 0;
    
    for(int i=0; i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==1) 
            c++;
        }
    }
    
    return c;
} 

/*
void SetShips()
{
    int s = 0;
    while(s < maxships)
    {
        int x = 0;
        int y = 0;
        cout<<"Give x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
}  
*/

//I seperated these so I can have the player set all the points. It lets them set up their own orientation
void SetCarrier()
{
    int s = 0;
    while(s < 5)
    {
        int x = 0;
        int y = 0;
        cout<<"Give Carrier x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give Carrier y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
}

void SetBattleship()
{
    int s = 0;
    while(s < 4)
    {
        int x = 0;
        int y = 0;
        cout<<"Give Battleship x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give Battleship y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
} 

void SetCruiser()
{
    int s = 0;
    while(s < 3)
    {
        int x = 0;
        int y = 0;
        cout<<"Give Cruiser x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give Cruiser y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
} 

void SetSubmarine()
{
    int s = 0;
    while(s < 3)
    {
        int x = 0;
        int y = 0;
        cout<<"Give Submarine x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give Submarine y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
} 

void SetDestroyer()
{
    int s = 0;
    while(s < 2)
    {
        int x = 0;
        int y = 0;
        cout<<"Give Destroyer x #"<<s<<" (0-9): ";cin>>x;
        cout<<"Give Destroyer y #"<<s<<" (0-9): ";cin>>y;

        if (matrix[x][y] !=1)
        {
            s++;
            matrix[x][y] = 1;
        }
    }
} 
//This is the attempt counter
int Attempts()
{
    int a= 0;
        a++;
    cout<<"Game Over! It took "<<a<<" attempts to complete this game."<<endl;

    return a;
}
// This is my attack function that let's me change cells to show they were hit
bool Attack(int x, int y)
{
    if(matrix[x][y] == 1)
    {
        matrix[x][y] =2;
        return true;
    }
    return false;
}
int main()
{
//since I made a bunch of functions I can just call them into main and this is significantly easier to manage than my original version all in main
    Clear();
    Show();
    SetCarrier();
    Show();
    SetBattleship();
    Show();    
    SetCruiser();
    Show();    
    SetSubmarine();
    Show();    
    SetDestroyer();
    Show();//I made sure I show the grid often to allow the player to not have to fully remember where they placed ships
    cout<<"----------------------------------"<<endl;
    int pos1,pos2;//set targets for bombing
    char prompt;
    while(1)
    {
        //now we can play!
        cout<<"Please input location: ";cin>>pos1>>pos2;
        if(Attack(pos1,pos2))
            cout<<"You got me! :)"<<endl;
        else
            cout<<"Sorry no ship at that position!"<<endl;
        cout<<"Number of targets left: "<<NumberOfShips()<<"/17 "<<endl;
        cout<<"Do you surrender (y/n)?: ";cin>>prompt;//in case you want to end early 
        if (prompt=='y')
            break;
    }
    Attempts();
    Show();
    
return 0;
}