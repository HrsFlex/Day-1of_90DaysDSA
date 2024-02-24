#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int sp = 0;
    int lp = n-1;
    while(sp<lp){
        int temp = arr[sp];
        arr[sp] = arr[lp];
        arr[lp] = temp;

        sp++;
        lp--;
    }

}


int main() {
    int n;
    cout << "Enter the Value of N : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << "th Element of the array: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "original Array is :";
        cout << arr[i] << endl;
    }

    reverse(arr,n);

    cout<<"Reversed Array is : ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//done using Concept of array with Function and making change in heap and arr location in heap.
//By Harsh Kumar
