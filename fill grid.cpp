//Daniel Critchlow
#include <iostream>
#include <ctime>//I need to include this library to use the functions
using namespace std;
//I declare my dimensions here and create var for user input
const int row= 3;//these are const because I don't want them changing during my run
const int col= 4;//I can change these to fit my grid sizes
int matrix[row][col];
int num;
//This function sets a cleared out grid using 0's or whatever else I want. Since this is simple math I use 0.
//Due to the Sum() function setup later on, use 0 to ensure the math works out
void Clear()
{
    for(int i=0; i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            matrix[i][j]=0;  
        }
    }
} 
//I start with my starting inputs from the user to build the grid
void Input()
{
    int count=1;//This counter is so it's a bit more user friendly
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Give me number (left to right, from top to bottom) #"<<count<<": ";cin>>num;
                matrix[i][j]=num;
                count++;
        }
    }
}
//This is so the user can see what the values are without the sums
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
//This is my sum math for this grid. I can modify it by changing the equation
void Sum()
{
    int sum=0;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            sum+=matrix[i][j];
        matrix[i][3]=sum;
        sum=0;
    }
}
//Here in main I can call my functions  
int main() 
{
    Clear();
    Show();
    cout<<"------------------------------------"<<endl;//These are for formating 
    Input();
    Show();
    cout<<"------------------------------------"<<endl;
    cout<<"***Sums are listed in the last column of each line!***"<<endl;
    Sum();
    Show();
    cout<<"------------------------------------"<<endl;
}
