#include<iostream>
using namespace std;
int main(){
    int n;
    int last=0,prev=1,curr=0;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==0){
        cout<<last;
        return 0;
    }
    if(n==1){
        cout<<prev;
        return 0;
    }

    for(int i=2;i<=n;i++){
        curr=prev +last;
        last=prev;
        prev=curr;
        
    } 
    cout<<curr;
    return 0;
} 