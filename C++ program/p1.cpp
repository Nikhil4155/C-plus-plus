#include<iostream>
using namespace std;

int main()
{
    int n,mul,sum=0,i;
    cout <<"Enter the number" << endl;
    cin >>n;
    mul=n*n;
    for(i=mul; i>0; i/=10)
    {
        sum=sum+i%10;
    }
    if(sum==n)
      cout <<"Neon Number" << endl;
    else
      cout <<"not a neon number" << endl;
    

}
