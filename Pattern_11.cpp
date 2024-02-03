#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter the rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        col=0;
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<++col<<" ";
        }
        cout<<endl;
    }
    return 0;
}