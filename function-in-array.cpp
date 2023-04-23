//using functions in array
#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    cout << "Hence the array is: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int first[10] = {1};
    printArray(first, 10);

    //finding the size of the array 
    int firstSize = sizeof(first) / sizeof(int);
    cout << "Size of array is " << firstSize << endl;

    return 0;

}
