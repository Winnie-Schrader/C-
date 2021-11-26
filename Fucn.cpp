/* Add Function
#include <iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int a,b,c;
    cin>>a>>b;
    c = add(a,b);
    cout<<c<<endl;
    return 0;
}

int add (int a, int b)
{
    return a+b;
}
*/

/* Prime or not?
#include <iostream>
#include <cmath>
using namespace std;

int prime(int n);

int main()
{
    int a;
    cin>>a;
    if(prime(a) == 1)
    {
        cout<<"Not Prime"<<endl;
    }

    else
        cout<<"Prime"<<endl;

return 0;
}

int prime(int n)
{   int flag = 0;
    for ( int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    return flag;
}
*/

/* Prime numbers
#include <iostream>
#include <cmath>
using namespace std;

int prime(int n);

int main()
{
    int b;
    cin>>b;
    for (int i = 2; i <= b; i++)
    {
        if (prime(i) == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
}

int prime(int n)
{   int flag = 0;
    for ( int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    return flag;
}
*/

/* Fibonacci Series
#include <iostream>
using namespace std;

void fib(int n);

int main()
{
    int a;
    cin>>a;
    cout<<endl;
    fib(a);
    return 0;
}

void fib(int n)
{
    int a=0,b=1,sum=0;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        sum = a+b;
        a=b;
        b=sum;        
    }
}
*/

