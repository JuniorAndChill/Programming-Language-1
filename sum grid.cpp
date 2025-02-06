//fill out a grid of 5 by 7 with a character you ask the user for
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

const int row= 4;
const int col= 5;
int matrix[row][col];
int num;

void Clear()
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            matrix[i][j]=0;
        }
    }
}
void Show()
{
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";  
        }
        cout<<endl;
    }
} 
void Sum()
{
    for (int i=0;i<row-1;i++)
return void;        
}

void Input()
{
    
}
    
int main() 
{
    Input();
    Clear();
    Show();
return 0;
}