#include<iostream>
using namespace std;
int main(){
    // And operator(&&)..find the largest number among three..
    int a,b,c;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Enter the number c: ";
    cin>>c;
    if(a>b&&a>c)
    cout<<"yes"<<endl;
    else
    cout<<"No"<<endl;

    // Or operator (||)...
    // check given character is vowel or consonant..
    char name;
    cout<<"Enter the character: ";
    cin>>name;
    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    cout<<"Vowel"<<endl;
    else
    cout<<"Consonant\n";

    // Not Operator(!)..
    cout<<!5<<endl;
    cout<<!0<<endl;
    cout<<!8<<endl;


}