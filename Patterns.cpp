/*// Print n rows and columns:

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/* // * Pattern Right Angle Triangle.

 #include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           printf("x");
        }
        cout<<endl;
    }    
}
*/

/* // Hollow rectangle
#include<iostream>
using namespace std;

int main()
{
    int rows,col;
    cin>>rows>>col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i== 1 || i == rows || j == 1 || j == col)    
            {
                cout<<"x";
            }
            else           
                cout<<" ";        
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
*/

/* // Upside down Right angle Triangle
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" x ";
        }
        cout<<endl;   
    }
}
*/

/* //   Do this pattern later
    x
   xx
  xxx
 xxxx
xxxxx
*/

/* // Pattern numbers i

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i;    
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/* // Pattern Count

#include<iostream>
using namespace std;

int main()
{
    int n, val=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
                val++;
                cout<<val<<" ";
        }

        cout<<endl;   
    }    
    return 0;
}
*/

/* Pattern:
// x        x
// xx      xx
// xxx    xxx
// xxxx  xxxx
// xxxxxxxxxx
// xxxxxxxxxx
// xxxx  xxxx
// xxx    xxx
// xx      xx
// x        x

#include<iostream>
using namespace std;

int main()
{
    int n,val=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<"x";
        //    val++;
        //    cout<<val;
          
        }
         val = 2*n-2*i;
        for (int j = 1; j <= val; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
           cout<<"x";
        //    val++;
        //    cout<<val;
        }
        cout<<endl;
        
    }
    
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
           cout<<"x";
        }
        for (int j = 1; j <= 2*n-2*i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}
//Always check the rows and cols then try to break the problem(s).
// ALWAYS Dry run the program before u execute it.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
            
        }

        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<"x";
        }
        
         cout<<endl;       
    }
    
}