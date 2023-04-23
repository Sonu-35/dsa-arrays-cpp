//intialisation of entire array with any number
#include<iostream>
using namespace std;

int main(){
    int val = 1, size = 10;

    int array[size];
    for(int i = 0; i < size; i++){
        array[i] = val; 
        cout << array[i] << " ";
    }

    return 0;
}