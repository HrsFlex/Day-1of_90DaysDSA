#include <iostream>
using namespace std;

void countGreater(int arr[],int n){
    int max = arr[0];
    int count=0;
    for(int i=0; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    //pahale max nikalega fir count karega !
    for(int i =0 ; i<n ; i++){
        if(arr[i]==max){
            count++;
        }
    }
    cout<<endl;
    cout<<count<<endl;
    cout<<n-count;
}

int main() {
    int n;
    cout<<"Enter a number";
    cin>>n;
    int arr[n];
    cout<<"enter the Array elements";
    for(int i =0; i<n ;i++){
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i =0; i<n ;i++){
        cout<<arr[i]<<" ";
    }

    countGreater(arr,n);
}
