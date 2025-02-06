//Given n, read n symbols and output all of the different combinations of two elements
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    char symbols[100];int n;
    
    cout<<"Give me n: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Give me a symbol #"<<i<<": ";cin>>symbols[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        if (i!=j)
        cout<<symbols[i]<<symbols[j]<<endl;
    }

}