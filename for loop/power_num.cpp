// Calculate power of and number..
#include<iostream>
using namespace std;
int main(){
    int num,pow,n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;
    num=n;
    
    for(int i=1;i<pow;i++){
        num=num*n;
    }
    cout<<num<<endl;
}
