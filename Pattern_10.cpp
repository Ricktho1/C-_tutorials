#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter the rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=row;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}