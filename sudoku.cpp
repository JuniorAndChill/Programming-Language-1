//Check if an array is a valid sudoku solution. That is, all numbers 1 through 9 are present in the array.
//Daniel Critchlow & Antoine Biegle
#include <iostream>
#include <ctime>
using namespace std;
const int row=3;
const int col=3;
int matrix[row][col];


int main()
{
    bool sudoku=false;bool one=false;bool two=false;bool three=false;bool four=false;bool five=false;bool six=false;bool seven=false;bool eight=false;bool nine=false;
    int matrix[row][col]={
        {4,3,9},
        {5,2,1},
        {6,7,3} };
        
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------"<<endl;
    
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            switch (matrix[i][j]){
                case 1:
                one=true;
                break;
                case 2:
                two=true;
                break;
                case 3:
                three=true;
                break;
                case 4:
                four=true;
                break;
                case 5:
                five=true;
                break;
                case 6:
                six=true;
                break;
                case 7:
                seven=true;
                break;
                case 8:
                eight=true;
                break;
                case 9:
                nine=true;
                break;
            }}
        sudoku=one&&two&&three&&four&&five&&six&&seven&&eight&&nine;
        
    }        
    if (sudoku==true)
        cout<<"This is a sudoku"<<endl;
    else
        cout<<"This is not a sudoku"<<endl;
    
    cout<<boolalpha<<"|Has 1: "<<one<<"|Has 2: "<<two<<"|Has 3: "<<three<<"|Has 4: "<<four<<"|Has 5: "<<five<<"|Has 6: "<<six<<"|Has 7: "<<seven<<"|Has 8: "<<eight<<"|Has 9: "<<nine<<"|"<<endl;
return 1;    
    
}