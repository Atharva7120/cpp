#include<iostream>
using namespace std;
// int main(){

//     int n;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int iteration=1;
//     while(iteration<n){
//         for(int i=0;i<n-iteration;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;

//             }
//         }
//         iteration++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
   
   
   
   
//     return 0;
// }

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;;
            }
        }
    }
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

