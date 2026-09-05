#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem,ans=0,mul=1; 
    while(num>0){
        // reminder
        rem=num%10;
        // quotient
        num/=10;
        // answer
        ans=rem*mul+ans;
        // multiply
        mul*=2;
    }
    cout<<ans<<" ";
}