#include<iostream>
#include <cmath> 
using namespace std;

int main()
{
    int n,i,count=0;
    int ld,sq;
    cout << "Enter a number" << endl;
    cin >> n;
    sq=n*n;
    for(i=n; i>0; i/=10)
    {
        count+=1;
    }
    double p= pow(10,count);
    int q= static_cast<int>(p);
    ld = sq % q;
    
    if(ld == n)
        cout << "Entered number is a automorphic number" << endl;
    else
        cout << "Not an automorphic number" << endl;

}
