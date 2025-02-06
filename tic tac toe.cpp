//Tic Tac Toe
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;
const int rows=3;
const int cols=3;
char matrix[rows][cols];

void Clear()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            matrix[i][j]= '-';
        }
    }
}

void Show()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Line()
{
        cout<<"------------------------------------"<<endl;
}

void TTT()
{
    cout<<"Tic Tac Toe, 3-in-a-row!";
}

/*void Set_X()
{
    int s=0;
    while(s<2)
}*/

int main()
{
    Clear();
    Show();
    Line();
    TTT();

}