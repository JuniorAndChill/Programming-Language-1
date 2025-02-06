// Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;
const int rows=50;
const int cols=50;
const int planes=50;
int cube[rows][cols][planes];

void Clear()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<planes;k++)
            {
                cube[i][j][k]=0;
            }
        }
    }
}

void Show()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<planes;k++)
            {
                cout<<cube[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}    

void Diag()
{
    for(int i=0;i<rows;i++)
    {
        cube[i][i][i]=1;
    }
}    
    

int main()
{
    Clear();
    Diag();
    Show();
    
}