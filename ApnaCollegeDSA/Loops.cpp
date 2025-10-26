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

    for(int i=1;i<=10;i++)
    {
        cout<<i<<" ";
    }

    //while
    cout<<endl;
    int i=1;
    while(i<=10)
    {
        cout<<i++<<" ";
    }
    cout<<endl;

    // do-while
    /* program asking user to enter a positive number repeatedly untill he does so */
    do
    {
        /* code */
        cin>>i;
    } while (i%10!=0);
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

bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    cout<<isPrime(11)<<endl;
    
    return 0;
}