#include<iostream>
using namespace std;
// int main(){
//     char arr[100]="apple";
//     int i=0;
//     while(arr[i] != '\0')
//     {
//         cout<<arr[i]<<" ";
//         i++;
//     }
//     return 0;

// }
// int main(){
    
//     int n;
//     cin>>n;

//     char arr[n];
//     cin>>arr;

//     cout<<arr;

//     return 0;
// }

// Check Palindrome

// int  main()
// {
//     int n;
//     cin>>n;

//     char arr[n+1];
//     cin>>arr;
//     bool check=true;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] !=arr[n-1-i])
//         {
//             check=false;
//             break;
//         }
        
//     }
//     if(check==true)
//         {
//             cout<<"word is palindrome";
//         }
//         else
//         {
//             check=false;
//             cout<<"word is not palindrome";
//         }
// }
// Largest word
int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    cin.ignore();

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currlen=0,maxlen=0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        
        
        else
        currlen++;
        if(arr[i]=='\0')
        break;
        i++;

    }
    cout<<maxlen<<endl;
    return 0;

}
