#include<iostream>
using namespace std;
int main(){
int p,q,m,n;
cout<<"Enter the number of rows and coloumns of first matrix:";
cin>>p>>q;
cout<<"Enter the number of rows and coloumns of second matrix:";
cin>>m>>n;
int arr1[p][q];
int arr2[m][n];
if(q!=m){
    cout<<"Invalid matrix";
}else{
    cout<<"Enter the elements of first matrix:";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr1[i][j];
        }
    }
}

    return 0;
}