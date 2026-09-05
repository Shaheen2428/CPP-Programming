// Binary and Unary Operator..
#include<iostream>
using namespace std;
int main(){

    // Binary Operator
    cout<<13/2<<endl;
    cout<<13.7/2<<endl;
    cout<<13.2*4<<endl;
    cout<<2*3-4/2<<endl;
    
    // Unary Operator
    int a=10;
    cout<<a++<<endl;
    cout<<a<<endl;

    // post increment
    int c=10;   
    int b=c++;
    cout<<b<<" "<<c<<endl;

    // pre increment
    int d=10;
    int e=++d;
    cout<<e<<" "<<d<<endl;

    // pre decrement
    int f=10;
    int g=--f;
    cout<<g<<" "<<f<<endl;
    
    // post decrement
    int i=10;
    int j=i--;
    cout<<j<<" "<<i<<endl;

}