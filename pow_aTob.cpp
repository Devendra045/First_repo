#include<iostream>
using namespace std;
int pov(int a,int b){


    int i,sum;
    if(b==1){
        return a;
    }

    for(i=1;i<=b;i++){
        sum=a*pov(a,b-1);
    }

    return sum;
}
int main(){
    int a,b;
cout<<"Enter the number:";
cin>>a>>b;
cout<<a<<"^"<<b<<"="<<pov(a,b);

    return 0;
}