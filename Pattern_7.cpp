#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter the rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        col=2*row-2*i;
        for(j=1;j<=col;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {  
            cout<<"*";
        }
        col=2*row-2*i;
        for(j=1;j<=col;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}