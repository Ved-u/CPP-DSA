#include <iostream>
using namespace std;

int sumDigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int sumOddDigits(int n)
{
    int sum=0;
    while(n>0)
    {
        if((n%10)%2!=0)
            sum+=n%10;
        n/=10;
    }
    return sum;
}

void loops()
{
    //for loop 
    for(int i=1;i<=100;i++)
    {
        cout<<i<<" ";
    }
    //while
    cout<<endl;
    int i=1;
    while(i<=100)
    {
        cout<<i++<<" ";
    }
    cout<<endl;
    // do-while
}

int revNum(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
   return rev;
}

int main()
{
    cout<<revNum(12345)<<endl;
    
    return 0;
}