#include<iostream>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;

   int arr[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
int x;
cin>>x;
for(int i=0;i,n;i++)
{
    for(int j=0;j<n;j++)
    {
        int temp=0;
        if(x==arr[i][j])
        {
            cout<<"Element is found"<<endl;
            temp=1;

        }if(x!=arr[i][j])
    {
        cout<<"Element is not found"<<endl;
    }
    }
    
}
   
   
   
    return 0;

}
