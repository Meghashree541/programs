#include<iostream>
using namespace std;
int sumofprimes(int n);
int main() {
    int n,i;
    cout<<"Enter a positive integer:\n";
    cin>>n;
    int flag=0;
    for(i=2;i<=n/2;++i)
    {
        if(sumofprimes(i)==1)
        {
            if(sumofprimes(n-i)==1)
             {
                cout<<n<<"="<<i<<"+"<<n-i<<endl;
             }
        }
        
    }
     return 0;
}
int sumofprimes(int n)
{
    int i,isprime=1;
    for(i=2;i<=n/2;++i)
    {    
        if(n%i==0)
        {
            isprime=0;
            break;
         }
     }
    return isprime;
}