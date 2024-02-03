#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"enter the row";
    cin>>row;
    cout<<"Enter the column";
    cin>>col;
    for(i=0;i<=row;i++){
        for(j=0;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}