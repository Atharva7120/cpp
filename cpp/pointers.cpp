#include<iostream>
using namespace std;
// int main()
// {
//     int a=10;
//     int *aptr=&a;

//     cout<<*aptr<<endl;
//     *aptr=20;
//     cout<<*aptr<<endl;
// }

//Pointer Arithmetic
// int main()
// {
//     int a=10;
//     int *aptr=&a;
//     cout<<aptr<<endl;
//     aptr++;
//     cout<<aptr<<endl;
// }
//Pointer and Arrays
// int main()
// {
//     int arr[]={10,20,30,40};
//     cout<<*arr<<endl; //by default constant pointer

//     int *ptr=arr;//arr itself is = address of array
//     for(int i=0;i<3;i++)
//     {
//         cout<<*ptr<<endl;//used pointer
//         ptr++;
//     }
// 
//Pointers to pointer
// int main()
// {
//     int a=10;
//     int *p=&a;
//     cout<<*p<<endl;
//     int **q=&p;
//     cout<<*q<<endl;
//     cout<<**q<<endl;
// }
//Passing pointer to function
void swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int a=10;
    int b=20;

    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}