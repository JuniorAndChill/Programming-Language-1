//Do a program that displays a triangle of n X m
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

void triangle(int n, int m)
{
    for(int height=0;height<n;height++){
        for(int length=0;length<=height;length++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{

triangle(7,8);

}