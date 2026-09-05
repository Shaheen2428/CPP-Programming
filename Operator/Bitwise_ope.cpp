#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;

    // And Oper(&)..
    int c=a&b;
    cout<<c<<endl;

    // Or Oper(|)..
    int d=a|b;
    cout<<d<<endl;

    // // Xor Oper(^)..
    int e=a^b;
    cout<<e<<endl;

    // // Left shift Oper(<<)..
    int f=a<<b;
    cout<<f<<endl;

    // // Right Shift Oper(>>)..
    int g=a>>b;
    cout<<g<<endl;

    int ans=18>>3;
    cout<<ans<<endl;


    // // Compliment Oper(~)..
    int h=~5;
    cout<<h<<endl;

    int i=~-10;
    cout<<i<<endl;
}

