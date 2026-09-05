// print reverse number from n to 1..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n;i>0;i--){
        cout<<i<<" ";
    }
}