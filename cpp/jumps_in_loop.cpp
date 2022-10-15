#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     for(int i=0;i<=100;i++){
//         if(i%3==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n;
//     int count=0;
//     cin>>n;
//     if (n==2){
//         cout<<"Prime";
//     }
//     for(int i=3;i<n;i++){
//         if(n%i==0){
//             cout<<"Not Prime"<<endl;
//             break;
//         }count=count+1;
        
//     } 
//     if(count!=0){
//         cout<<"Prime"<<endl;
//     } 
// }
int main(){
    int a,b;
    cin>>a>>b;
     int i;
    for(int num=a; num<=b; num++){    
        for( i=3;i<num;i++){
            if(num%i==0){   //Condition for Non prime
                break;
            }
        }if(num==i){
            cout<<num<<endl;
        
    }
}
}
// int main(){
//     int n;
//     cin>>n;
//     bool counter;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//          cout<<"Non-prime"<<endl;
//          counter=1;
//             break;
           

            
//         }
//     }if(counter==0){
//         cout<<"Prime"<<endl;
//     }return 0;
// }