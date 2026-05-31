#include <iostream>
#include <cmath>
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

int binToDec(int n){
    int ans=0;
    int power=0;
    while(n>0){
        ans+=(n%10==1)?pow(2,power):0;
        n/=10;
        power++;
    }
    return ans;
}

int decToBin(int n){
    int ans=0;
    int power = 1;
    while(n > 0){
        int rem = n % 2;
        ans += rem * power;
        power *= 10;
        n /= 2;
    }
    return ans;
}

int main()
{
    cout<<decToBin(10)<<endl;
    return 0;
}