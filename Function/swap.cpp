#include<iostream>
using namespace std;
// Pass by Reference
void Swap(int &a,int &b)  
{
    int c;
    c=b;
    b=a;
    a=c;
}
void Swap(float &c,float &d) //Function overloading 
{
    float r;
    r=d;
    d=c;
    c=r;
}
int main(){
    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=4.8, f2=8.4;
    swap(f1,f2);
    cout<<f1<<" "<<f2;

}