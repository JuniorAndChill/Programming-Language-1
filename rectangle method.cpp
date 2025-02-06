//Do a program that displays a rectangle of n X m
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

void rectangle(int n, int m)
{
    for(int row=1;row<=n;row++){
        for(int col=1;col<=m;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{

    rectangle(7,8);

}