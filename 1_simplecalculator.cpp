//   TASK 1 
/* Develop a calculator program that performs basic arithmetic operations such as
   addition subtraction,multiplication, and division. Allow the user to input two numbers 
   and choose an operation to perform.  */

#include<iostream>
using namespace std;
int calculator(int a , int b ,char op){
    //for addition
   if(op=='+' ){
    cout<<a+b<<endl;
   }

   //for subtraction
   else if(op=='-' ){
    cout<<a-b<<endl;
   }

   //for division
   else if(op=='/'){
    cout<<a/b<<endl;
   }

   //for multiplication
   else if(op=='*'){
    cout<<a*b<<endl;
   }

}

int main(){
   int a , b;
   cout<<"enter value of first number : ";
   cin>>a;
   cout<<"enter value of second number : ";
   cin>>b;
   char op;
   cout<<"choose a operation amoung the following : "<<endl;
   cout<<"a) + "<<endl;
   cout<<"b) - "<<endl;
   cout<<"c) / "<<endl;
   cout<<"d) * "<<endl;
   cin>>op;
   cout<<"Answer = ";
   calculator(a,b,op);
   
}