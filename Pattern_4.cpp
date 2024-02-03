#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter the rows";
    cin>>row;
    /*for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i+j>=row+1)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }*/
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++){
            if(j<=row-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}