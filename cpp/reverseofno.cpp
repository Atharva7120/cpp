#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool counter;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
         cout<<"Non-prime"<<endl;
         counter=1;
            break;
           

            
        }
    }if(counter==0){
        cout<<"Prime"<<endl;
    }return 0;
}