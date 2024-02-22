#include<iostream>
using namespace std;

int countFactors(int n){
    int count = 0;
    for(int i = 1; i*i<=n;i++){
        if(n%i == 0){
            if(i != n/i){
                count = count+2;
            }
            else{
                count ++;
            }
        }
    }
    return count;
}

int main() {
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    return countFactors(num);

}
