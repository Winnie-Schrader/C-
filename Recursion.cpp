/* n*n^(p-1)
#include <iostream>
using namespace std;

int Power(int n, int p);

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<Power(n,p)<<endl;
    return 0;
}

int Power(int n , int p)
{
    if (p==0)
    {
        return 1;
    }
    return n*Power(n,p-1);
}
*/

/* Factorial recursion
#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }

    return n*fact(n-1);
    
}
*/

/* Fibonacci of nth number:
#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}

int fib(int n)
{
    if (n==0 || n==1)   
    {
        return n;
    }

    return fib(n-1)+fib(n-2);    
}
*/

