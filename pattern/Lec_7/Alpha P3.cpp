#include<iostream>
using namespace std;
int main(){
    int n,row;
    cout<<"enter the num: ";
    cin>>n;
    
    for(row=1;row<=n;row++){
        char name='a'+row-1;
        for(int col=1;col<=row;col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}