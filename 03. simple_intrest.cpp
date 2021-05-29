#include<iostream>
using namespace std;
int main(){
int p,t;
float amt,si,i;

cin>>p>>i>>t;
si=(p*i*t)/100;
amt=p+si;
cout<<"Simple Intrest:"<<si;
cout<<"Total amount:"<<amt;
    return 0;
}