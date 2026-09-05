#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // for(int row=1;row<=n;row++){
    //     for(int col=1;col<=n-row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
     for(int row=5;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

}