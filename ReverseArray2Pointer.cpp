#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout<<"Enter "<<i<<"th Element of the array: ";
        cin>>arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<"original Array is :";
        cout<<arr[i]<<endl ;
    }
    int sp = 0;
    int lp = n-1;
    while(sp<lp){
        int temp = arr[sp];
        arr[sp] = arr[lp];
        arr[lp] = temp;

        sp++;
        lp--;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] ;
    }
}
