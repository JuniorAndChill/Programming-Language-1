//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
int sum=0;
int array[3][4]=
{
    {10,8,9},
    {7,10,10},
    {6,4,10},
};
for (int row=0;row<3;row++){
    for(int col=0;col<4;col++)
        sum+=array[row][col];
    array[row][3]=sum;
    sum=0;
    }
for (int row=0;row<3;row++){
    for(int col=0;col<4;col++)
        cout<<array[row][col]<<" ";;
    cout<<endl;}
}