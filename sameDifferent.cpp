#include <iostream>
using namespace std;

int main() {

//I create to arrays with all of the values so you don't need to read each value into the array

int array1[10]={1,5,7,2,8,19,11,-3,4,7};

int array2[10]={1,5,7,2,8,19,11,-3,4,7};

//compare both arrays

bool same=true;

    for (int i=0;i<10;i++)
    if (array1[i]!=array2[i])
       same=false;

//output the result: are they equal or are they not?
if (same)
    cout<<"same"; else cout<<"different";
 

return 0; }