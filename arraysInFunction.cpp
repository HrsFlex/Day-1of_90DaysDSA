#include <iostream>
using namespace std;
void swap(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] =temp;
}
int main()
{
    int arr[2]= {10,20};
    
    swap(arr);
    cout<< arr[0]<<endl;
    cout<< arr[1] ;
}
//variables stores call stack can't connect each other 
//arrays are stored in Heap and can be accesed as same
//By Harsh Kumar
