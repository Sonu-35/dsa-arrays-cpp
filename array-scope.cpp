//Scopes in array
#include<iostream>
using namespace std;

void update(int arr[], int n){
    arr[1] = 257;

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int arr[3] = {10, 15, 20};

    update(arr,3);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
//value of array is changing in main function too when we change it in update function only coz The reason the array elements are changing their value is because you've passed a pointer to an int as the first argument. And that pointer points to the first element of the original array.