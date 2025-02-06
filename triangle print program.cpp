//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
int height;
    cout<<"Enter the height of the triangle: ";cin>>height;
        for(int i = 1; i <= height; ++i){
            for(int j = 1; j <= i; ++j){
                cout<<"*";
            }
            cout<<endl;
        }
}

//this is the same program but prints hollow
int main ()
{
int height;
    cout<<"Enter the height of the triangle: ";cin>>height;
        for(int i = 1; i <= height; ++i){
            for(int j = 1; j <= i; ++j){
//by creating else if statements you can create a situation that omits correct spaces
                if ((i==1) || (j==1) || (i==j))
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
}

//This is the same inverted
int main ()
{
int height;
    cout<<"Enter the height of the triangle: ";cin>>height;
//The bulk of this is to change how the row function works by inverting it
        for(int i = height; i >=  1; --i){
//The rest will be the same
            for(int j = 1; j <= i; ++j){
                if ((i==1) || (j==1) || (i==j))
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
}