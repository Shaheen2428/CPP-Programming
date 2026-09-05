#include<iostream>
using namespace std;
// Func Declare
int Sum(int m, int n){
    // fun define
    int ans= m+n;
    return ans;
}
int Mul(int m,int n){
    int ans=m*n;
    return ans;
}
void fun(){
    cout<<"Hello World";
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    // fun call
    cout<<Sum(a,b)<<endl;
    cout<<Mul(a,b)<<endl;
    fun();

}