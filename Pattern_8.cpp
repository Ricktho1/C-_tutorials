#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter the rows";
    cin>>row;
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}