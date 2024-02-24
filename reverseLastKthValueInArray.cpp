#include <iostream>
using namespace std;

void reverse(int arr[],int n,int s,int l){

    while(s<l){
        int temp = arr[s];
        arr[s] = arr[l];
        arr[l] = temp;
        s++;
        l--;
    }
}

int main() {
    int n;
    cout << "Enter the Size of Array  : ";
    cin >> n ;
    //Input of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << "th Element of the array: ";
        cin >> arr[i];
    }
    int k ;
    cout<<"enter the value of k :";
    cin>>k;
    k = k%n; //taking care of large value of k

    cout<<"Original Array is : ";
    for (int i = 0; i < n; i++) {

        cout << arr[i] <<" ";
    }

    reverse(arr,n,0,n-1);
    reverse(arr,n,0,k-1);
    reverse(arr,n,k,n-1);

    cout<<"Reversed Array is : ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

