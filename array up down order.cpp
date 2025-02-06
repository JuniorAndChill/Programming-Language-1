//check if array is ascending or decending or unordered
// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main(){
    int nums[5]; 
    
    for (int i=0; i<5;i++){
    cout<<"Give me numbers: ";cin>>nums[i];
    }
    int asc_check=0;
    for (int i=0; i<4; i++){
        if (nums[i]<=nums[i+1]){
            asc_check++;
        }
    }
    int des_check=0;
    for (int i=0; i<4; i++){
        if (nums[i]>=nums[i+1]){
            des_check++;
        }
    }
    if (asc_check==4){
        cout<<"It's ascending order.";
    }
    else if (des_check==4){
        cout<<"It's descending order.";
    }
    else {
        cout<<"It's unordered.";
    }
    
}