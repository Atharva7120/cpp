#include<iostream>
#include<climits>
using namespace std;
// int main(){
//     int array[4]={10,20,30,40};
    
//     cout<<array[2]<<endl;
// }
// int main(){
//     int n;
//     cin>>n;

//     int array[n];

//     for(int i=0;i<n;i++){
//         cin>>array[i];
//         cout<<array[i]<<" ";
//     }

   
    
//     return 0;
// }

// To find max and min number in array:-
int main(){

    int n;
    cin>>n;
    

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        if(maxNo<arr[i]){
            maxNo=arr[i];
        }
        if(minNo>arr[i]){
            minNo=arr[i];
        }
    }cout<<maxNo<<" "<<minNo<<endl;
     
     
    
        return 0;
    }
       
    
  
   
    




