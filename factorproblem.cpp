//check if all the numbers are factors of one of them in the array
//Daniel Critchlow
#include <iostream>
using namespace std;

int main() {
int arr[6]={3, 18, 2, 1, 6, 9};
int largest = arr[0];

for (int i= 0; i<6;i++){
    if(arr[i]<largest){
        largest=arr[i];
    }
}
bool factors= true;

for (int i=0; i<6;i++){
    if(largest%arr[i] !=0){
        factors=false;
    }
}
        
if(factors)
    cout<<"This array is all factors"<<endl; 
else
    cout<<"This array is not all factors"<<endl;

}