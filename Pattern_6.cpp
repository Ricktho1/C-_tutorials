#include<iostream>
using namespace std;
int main(){
    int i,j,row,count=0;
    cout<<"Enter the rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<++count<<" ";
        }
        cout<<endl;
    }
    return 0;
}