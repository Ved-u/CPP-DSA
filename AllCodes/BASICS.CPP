#include <iostream>
using namespace std;
int main() {
   cout<<"HELLO WORLD"<<endl;

   //conditionals
   //Ternary operator
   int age = 69;
   bool isAdult = (age>=18)? true : false;
   
   // calculator
    int a,b;
    char op;
    cout<<"Enter 1st no:"<<endl;
    cin>>a;
    cout<<"the operaration:"<<endl;
    cin>>op;
    cout<<"Enter 2nd no:"<<endl;
    cin>>b;

    switch (op)
    {
    case '+':
        /* code */
        cout<<a+b;
        break;

     case '-':
        /* code */
        cout<<a-b;
        break;

     case '*':
        /* code */
        cout<<a*b;
        break;

     case '/':
        /* code */
        cout<<a/b;
        break;

    default:
    cout<<"invalid"<<endl;
        break;
    }
   cout<<"-------------END--------------\n";

    return 0;
}