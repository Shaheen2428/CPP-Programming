//print all even number up to n.. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=n;i=i+2){
        cout<<i<<endl;

    }
}
// second method...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}