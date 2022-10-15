#include<iostream>
using namespace std;
// int main(){

//     char button;
//     cout<<"Input a character: ";
//     cin>>button;
//     switch(button)
//     {
//         case 'a':
//              cout<<"Hello"<<endl;
//              break;
//         case 'b':
//              cout<<"Namaste"<<endl;
//              break;
//         case 'c':
//               cout<<"Salute"<<endl;
//               break;
//               default:
//         cout<<"I'm still leaarning"<<endl;
//              break;
        
//     }
        
//          return 0;

// }


// Simple Calculator

int main(){
    float a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    char op;
    cout<<"Input an operator: ";
    cin>>op;

    switch(op)
    {
        case '+':
           cout<<a+b<<endl;
              break;
        case '-':
           cout<<a-b<<endl;
              break;
        case '*':
            cout<<a*b<<endl;
              break;
        case '/':
            cout<<a/b<<endl;
             break;
        default:
            cout<<"Please enter a valid no."<<endl;
             break;
    }return 0;
}
