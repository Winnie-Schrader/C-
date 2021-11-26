/* Max and Min using array
#include <iostream>
//#include<climits>
using namespace std;

int main()
{
    int n,p=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0], min = arr[0];
    // int maxNo =INT_MIN;                  ... Stores the minimum possible int value in C++
    // int minNo = INT_MAX;                 ... Stores the maximum possible int value in C++
    for (int i = 1; i < n; i++)
    {
        if ( max < arr[i])
        {
            max = arr[i];
            p = i;
        }        
    }
    cout<<"Max val:"<<max<<"  At Position:"<<p<<endl;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            p = i;
        }
        
    }
        
    cout<<"Min val:"<<min<<"  At Position:"<<p<<endl;

    return 0;

// Alternative METHOD
    // for (int i = 1; i < n; i++)
    // {
    //     maxNo = max(maxNo,arr[i]);
    //     minNo = min(minNo,arr[i]);          ... Built-in function for max and min.        
    // }

}
*/

/* Linear Search main()
#include <iostream>
using namespace std;

int main()
{
    int val=0,n,p=-1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value:"<<endl;
    cin>>val;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==val)
        {
            p=i;
            break;
        }        
    }
    
    if (p==-1)
    {
        cout<<"Value not found"<<endl;
    }
    else
        cout<<"Value found at index: "<<p<<endl;      
}
*/

/* Linear Search using Function
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n , int val);

int main()
{
    int val=0,n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value:"<<endl;
    cin>>val;
    if ( LinearSearch(arr, n , val) == -1)
    {
        cout<<"Value not found"<<endl;
    }
    else
        cout<<"Value found at index: "<<LinearSearch(arr, n , val)<<endl;
}
   

    int LinearSearch(int arr[], int n , int val)
    {
        int p = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]== val)
            {
                p=i;
                break;
            }            
        }
        
       return p;
    }
    */


/* //Binary Search
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n , int val);

int main()
{
    int val=0,n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value:"<<endl;
    cin>>val;
    if( BinarySearch( arr, n, val) == -1)
    {
        cout<<"Value not found"<<endl;
    }
    else
        cout<<"Value found at index: "<<BinarySearch(arr, n , val)<<endl;
    return 0;
}

int BinarySearch(int arr[], int n , int val)
{
    int s=0;
    int e=n-1;
    int mid,p=-1;
    for (int i = 0; i < n; i++)
    {
        mid = (s+e)/2;
        if (arr[mid]== val)
        {   
            p = mid;
            return p;
        }
        else if (arr[mid] < val)
        {
            s = mid+1;
        }
        else
         e = mid-1;        
    }

    return p;    
}
*/


#include<iostream>
using namespace std;

int main()
{
    int tmp=0,n,index=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    
    }

    for (int i = 0; i < n; i++)
    {        
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;   
              // cout<<arr[i]<<endl; 
              // cout<<endl<<arr[j]<<endl;
            }
        }
        cout<<"Pass:"<<i<<endl;
        for (int k = 0; k < n; k++)
        {
            cout<<arr[k];
        }
        cout<<endl;
    }   
}