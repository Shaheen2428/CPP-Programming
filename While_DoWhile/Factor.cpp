#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n){
        if(n%i==0){
            cout<<i<<endl;
        }
        i++;
    }
}