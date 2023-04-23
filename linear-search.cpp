//finding an element in an arrat=y
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

   for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
   }

    return 0;
}

int main(){

    int arr[10] = {1, -2, 58, 89, 20, -87, 52, 22, 45, 1};

    int key;
    cout << "Enter an element to find in the array" << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Entered element is present in the array" << endl;
    }
    else{
        cout << "Entered element is absent in the array" << endl;
    }

    return 0;

}