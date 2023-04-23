//understanding how arrays work
#include<iostream>
using namespace std;

int main(){
    //declare
    int first[15];

    //accessing an array
    cout << "Value at 14th index: "<< first[14] << endl;

    //intilisation
    int second[5] = {1,5,6,8,10};

    //aceessing an array
    cout << "Value at 4th index: "<< second[4] << endl;

    int third[15] = {1,2};

    //for printing the entire array
    for(int i = 0; i < 15; i++){
        cout << third[i] << " ";
    }
}