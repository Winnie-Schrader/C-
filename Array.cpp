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

/* // Selection Sort
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
*/

/* //Addtion of arr
#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    
    }

    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    cout<<"The val is:"<<sum<<endl;
    

}
*/

/* // Reverse an array
#include<iostream>
using namespace std;

int main()
{
    int n,j=0,tmp=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    
    }
    j=n-1;
    for (int i = 0; i < n/2; i++)
    {
        tmp = a[i];
        a[i] = a[j-i];
        a[j-i] = tmp;
        //cout<<a[i]<<endl;
    }

     for (int i = 0; i < n; i++)
     {
         cout<<a[i];
     }
     cout<<endl;
}
*/

//LeetCode easy.

/* // Swap Alternate 
#include<iostream>
using namespace std;

int main()
{
    int n,tmp=0,alt1=0 ,alt2=1;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    
    }
  
    for (int i = 0; i < n/2; i++)
    {
        tmp = a[alt1];
        a[alt1] = a[alt2];
        a[alt2] = tmp;
        alt1= alt1 + 2;
        alt2 = alt2 + 2;
      //  cout<<a[alt1]<<endl;
    }

      for (int i = 0; i < n; i++)
      {
          cout<<a[i];
      }
     cout<<endl;
}
*/

/* // The BullSht Way to find the unique number in an array (LeetCode easy)
#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int a[5]={2,3,2,3,9};
    int counts[5];
    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if(count == 1)
        cout<<a[i]<<endl;
    }
}    
*/

/* // The optimised way to find the unique val in array

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],ans=0;
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ans = ans^a[i];
    }
    cout<<ans<<endl;
}
*/

/* //Find the Duplicate val (value using XOR)
#include<iostream>
using namespace std;

int main()
{
    int a[7]={2,5,1,3,2,4,6},ans=0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans^a[i]; // XOR ing the values in the array
    }

    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ i; // XOR ing with the n-1 length with the XOR array(ans) 
                       //so that x^x^x = x and rest of them will be 0
    }
    
    cout<<ans<<endl;
}
*/

/* // Find duplicate values and store it in an array as well, BS way.

include<iostream>
using namespace std;

int main()
{
    int count=0;
    int n;
    cin>>n;
    int a[n];
    int k=0;
    int ans[k];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = -100;
                ans[k]=a[i];
                k++;
                break;               
            }
        }   
    }
    for (int i = 0; i < k; i++)
        {
            cout<<ans[i]<<endl;;
        }
}    

*/

/* // **(redo in 2 pointer approach)Intersection of 2 arrays. BS way.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m,count=0,k=0;
    cin>>n>>m;
    int a[n],b[m],ans[k];
    cout<<"For array a:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

     cout<<"For array b:"<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = 0; j < m; j++)
        {
                   
             if (a[i] == b[j])
            {
                
               // ans[k] = a[i];
                k++;
                b[j] = INT_MIN;
                cout<<a[i]<<endl;     
                break;    
            }   
        }
    }
}
*/

/*  //Pair Sum
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int sum = 0;
        for (int j = i+1; j < n; j++)
        {
            sum = a[i]+a[j];
            
                if (sum == s)
                {
                    cout<<a[i]<<" + "<<a[j]<<endl;
                    break;
                }
        }
    }    
}
*/

/*  //Triplets with given sum OR 3Sum

#include<iostream>
using namespace std;

int main()
{
    int n,s,sum=0;
    cin>>n>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            sum = 0;
            for (int k = j+1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if (sum == s)
                {
                cout<<a[i]<<" + "<<a[j]<<" + "<<a[k]<<endl;
                }
            }
        }   
    }   
}
*/

/*  // 0 1 Sort
#include<iostream>
using namespace std;

int main()
{
    int n,tmp;
    cin>>n;
    int a[n],i=0,j=n-1;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    while (i<j)
    {
        if (a[i] == 0)
        {
            i++;
        }       
        if (a[j] == 1)
        {
            j--;
        }
        else
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;   
}
*/

/*  //0 1 2 Sort (Count) 
#include<iostream>
using namespace std;

int main()
{
    int n,count0=0,count1=0,count2=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }

        if (a[i] == 1)
        {
            count1++;
        }
        if (a[i] == 2)
        {
            count2++;
        }        
    }

    for (int i = 0; i < count0; i++)
    {
        a[i] = 0;
    }

    for (int i = count0; i < count0+count1; i++)
    {
        a[i] = 1;
    }

    for (int i = count0+count1; i < n; i++)
    {
        a[i] = 2;
    }
    
      for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
}
*/

/*  // Intersection using two pointer approach
#include<iostream>
using namespace std;

int main()
{
    int n,n1,i=0,j=0,count=0;
    cin>>n>>n1;
    int a[n],b[n1],ans[count];
    cout<<"Array a:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Array b:"<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>b[i];
    }
    while (i<=n)
    {
        if (a[i] == b[j])
        {
            ans[count] = a[i]; 
            count++;
            i++;
            j++;
        }
        else
            j++;
        if (j == n1-1)
        {
            j = 0;
            i++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout<<" "<<ans[i];
    }
    cout<<endl;
}
*/

// Coding questions from TCS and other Companys
/*  //Stock

#include<iostream>
using namespace std;

int main()
{
    int n,stock_,flag=0;
    int num[4]={101,102,103,104};
    string Name[4] ={"Milk","Cheese","Ghee","Bread"};
    int price[4] = {42,50,500,40};
    int stock[4] = {10,20,15,16};

    cin>>n>>stock_;

    for (int i = 0; i < 4; i++)
    {
        if (n == num[i] && stock_ <= stock[i])
        {
            flag = 1;
            stock[i] = stock[i] - stock_;
            cout<<price[i] * stock_<<".0 INR"<<endl;
            cout<<stock[i]<<" LEFT"<<endl;
            break;
        }
       else if(n == num[i] && stock_ > stock[i])
        {
            flag = 1;
            cout<<"NO STOCK"<<endl;
            break;
        }
       
    }
    if(flag == 0)
    {
        cout<<"Invalid"<<endl;
    }
}
*/

/*  //Sum Of Peak
#include<iostream>
using namespace std;

int SumOfPeak(int arr[], int n);
int main()
{
    int n,sum =0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<SumOfPeak(arr,n)<<endl;
    
}

int SumOfPeak(int arr[], int n)
{
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            
            for (int k = j+1; k < n; k++)
            {
                if (arr[i] > arr[j] && arr[i] > arr[k] && arr[j] > arr[k])
                {
                    sum++;
                }
            }   
        }
    }
    return sum;
}
*/

/* //Test
 #include<iostream>
using namespace std;

int main()
{
    int val;
    int a[9] = {1,2,6,4,6,8,1,9,6};
    int i=0,s=0;
    int n;
    cin>>n;
    while (i<n)
    {
        if (a[i]%2 == i%2)
        {
            s = s+a[i];
        }
        else{
        s = s-a[i];
        }
        i++;
    }
    cout<<s<<endl;
}    
*/

/* //  next larger val based on addr 
#include<iostream>
using namespace std;

int main()
{
    int n,val,sum;
    cin>>n;
    int a[n];
    
    int ans;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>val;
    sum = a[val];
    for (int i = val; i < n; i++)
    {
        if (sum < a[i])
        {
           ans = a[i];
           break;
        }
    }

    cout<<ans<<endl;
}
*/

/* //Array Index 
#include<iostream>
using namespace std;

int main()
{
    int n,val;
    cin>>n;
    int a[n];
    int ans;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>val;
     for (int i = 0; i < n; i++)
    {
        if (a[i] > val)
        {
           ans = a[i];
           break;
        }
    }

    cout<<"Output: "<<ans<<endl;
    return 0;
}
*/

//COunt the number of pair
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,dif=0,i=0,j=i+1,count = 0;
//     cin>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     while (i<n)
//     {
//         dif = a[i] - a[j];
//         if (abs(dif) == 3)
//         {
//             count++;
//             i++;
//             j = i +1;
//         }
//         else
//             j++;
//         if (j == n-1)
//         {
//             i++;
//             j = i+1;

//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int SumProduct(int a,int b, int c, char op);
// int main()
// {
//     int a,b,c;
//     char op;
//     cin>>a>>b>>c;
//     cout<<endl;
//     cin>>op;
//     cout<<SumProduct(a,b,c,op)<<endl;
// }

// int SumProduct(int a,int b,int c, char op)
// {
//     int sum = 0, prod = 0,ans;

//     sum = -b/a;
//     prod = c/a;

//     if (op == '+')
//     {
//         ans = sum + prod;
//         return ans;
//     }
//     else if (op == '*')
//     {
//         ans = sum * prod;
//         return ans;
//     }
//     return -100;

// }

// #include<iostream>
// using namespace std;

// int MinMaxArray(int arr1[], int arr2[],int k, int len1, int len2);
// int main()
// {
//     int len1,len2,k;
//     cin>>len1>>len2;
//     int arr1[len1],arr2[len2],result;
//     cout<<"Array a:"<<endl;
//     for (int i = 0; i < len1; i++)
//     {
//         cin>>arr1[i];
//     }

//     cout<<"Array b:"<<endl;
//     for (int i = 0; i < len2; i++)
//     {
//         cin>>arr2[i];
//     }

//     cin>>k;
//     result = MinMaxArray(arr1,arr2,k,len1,len2);
//     cout<<result;
// }

// int MinMaxArray(int arr1[], int arr2[], int k, int len1, int len2)
// {

//     int count1=0,count2=0;
//     for (int i = 0; i < len1; i++)
//     {
//         if (arr1[i] > k)
//         {
//             count1++;
//         }
//     }

//     for (int j = 0; j < len2; j++)
//     {
//         if (arr2[j] < k )
//         {
//             count2++;
//         }
//     }

//     if (count1 > count2)
//     {
//         return count1;
//     }
//     else
//     {
//     return count2;
//     }
// }

// #include<iostream>
// using namespace std;

// int Majority(int a[],int n);
// int main()
// {

//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     cout<<Majority(a,n)<<endl;
// }

// int Majority(int a[], int n)
// {
//     int avg = n/2;
//     int count = 1,flag = 0;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         count = 1;
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 count++;
//             }
//         }

//         if (count > avg)
//         {
//             flag = 1;
//             ans = ans +1;
//         }
//     }
//         if (flag == 1)
//         {
//             return ans;
//         }
//         else
//             return -1;
//         return -100;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int Sum(int a[], int n);
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     cout<<Sum(a,n)<<endl;
// }

// int Sum(int a[], int n)
// {
//     int count=0;
//     int sum =0;
//     int ans[count];
//     int maxno;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             sum += a[i];
//             ans[count] = sum;

//         }

//         else
//         {
//             count = count + 1;
//             sum = 0;
//         }
//     }

//     if (a[n] > 0)
//     {
//         sum = sum + a[n];
//         ans[count] = sum;
//     }
//     maxno = INT_MIN;
//     for (int i = 0; i <= count; i++)
//     {
//        maxno = max(maxno,ans[i]);
//     }
//     return maxno;
// }

// #include<iostream>
// using namespace std;

// int minDist(int a[], int n);
// int main()
// {
//     int n,dist;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<minDist(a,n)<<endl;
// }

// int minDist(int a[],int n)
// {
//     int sum = 0,dist;
//     int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }
//     dist = sum/n;

//     for (int i = 0; i < n; i++)
//     {
//         ans = ans + abs(dist - a[i]);
//     }

//     return ans;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     int count=0,sum,b[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int x = a[i];
//             int y = a[j];
//             sum = (x*y)-(x+y);
//             b[count] = sum;
//          count = count + 1;
//         }

//     }

//     for (int k = 0; k < count; k++)
//     {
//         cout<<b[k]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,num;;
//     cin>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     cin>>num;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == num)
//         {
//             num = num*2;
//         }
//     }

//     cout<<num<<endl;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int tmp=0,n,index=0,sum = 0;
//     cin>>n;
//     int arr[n],b[n],temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];

//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin>>b[i];

//     }

//     for (int i = 0; i < n; i++)
//     {
//         temp[i] = arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (temp[j] < temp[i])
//             {
//                 tmp = temp[j];
//                 temp[j] = temp[i];
//                 temp[i] = tmp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (temp[i] == arr[j])
//             {
//                index = j;
//                break;
//             }
//         }

//         sum = sum +b[index];
//     }
//       cout<<sum<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int k,n,index=0;
//     cin>>n;
//     int arr[n],b[n],tmp;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];

//     }

//     cin>>k;

//     for (int i = 0; i < k; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 tmp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = tmp;
//             }
//         }
//     }
//     cout<<arr[k-1]<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//    int max = a[0][0];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//            cin>>a[i][j];
//         }
//     }

//       for (int i = 0; i < n; i++)
//     {
//         max = 0;
//         for (int j = 0; j < m; j++)
//         {
//                 if (max < a[i][j])
//                 {
//                     max = a[i][j];
//                 }
//         }
//         cout<<max<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     int a[4];
//     cin>>n;
//     if (n%4 == 0)
//     {
//         m = n/4;
//         for (int i = 0; i < 4; i++)
//         {
//             a[i] = m;
//         }
//     }
//     else if (n%4 != 0)
//     {
//        m = n/4;
//        m = m*4;
//        m = n - m;
//         for (int i = 0; i < 4-1; i++)
//         {
//             a[i] = n/4;
//         }
//         a[3] = n/4 + m;
//     }
//     for (int i = 0; i < 4; i++)
//         {
//             cout<<a[i]<<endl;
//         }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int tmp=0,n,index=0;
//     cin>>n;
//     int count = 0;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 count++;
//             }
//         }
//     }

//     cout<<count<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,val = 1;
//     cin>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 1 || a[i] == 2)
//         {
//             a[i] = 1;
//             continue;
//         }
//       else if (a[i] % 2 == 0)
//         {
//             val = a[i];
//             while (val != 2)
//             {
//                  val = val/2;
//                 if (val % 2 == 0)
//                 {
//                      a[i] = 1;
//                 }
//                 else
//                 {
//                 a[i] = 0;
//                 break;
//                 }
//             }
//         }
//         else if (a[i] % 2 != 0)
//         {
//             a[i] = 0;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, dif = 0, k;
//     cin >> n;
//     int a[n], b[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cin >> k;

//     for (int j = 1; j <= k; j++)
//     {
//         if (j % 2 != 0)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (i == n - 1)
//                 {
//                     dif = abs(a[i] - a[0]);
//                     b[i] = dif;
//                 }
//                 else
//                 {
//                     dif = abs(a[i] - a[i + 1]);
//                     b[i] = dif;
//                 }
//             }
//         }

//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (i == n - 1)
//                 {
//                     dif = abs(b[i] - b[0]);
//                     a[i] = dif;
//                 }
//                 else
//                 {
//                     dif = abs(b[i] - b[i + 1]);
//                     a[i] = dif;
//                 }
//             }
//         }
//    }

//     for (int i = 0; i < n; i++)
//         {
//             cout << a[i] <<"  ";
//         }
//         cout<<endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << b[i] <<"  ";
//         }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int count=0;
//     int n;
//     cin>>n;
//     int a[n];
//     int k=0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i] == -100)
//             {
//                 count = 0;
//                 break;
//             }

//             else if (a[i] == a[j])
//             {
//                 a[j] = -100;
//                 count++;
//             }
//         }

//         if (count >= 1)
//         {
//             k++;
//         }
//     }
//     cout<<k<<endl;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;

// int findEquation(int a[],int n);
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     cout<<findEquation(a,n)<<endl;

// }

// int findEquation(int a[], int n)
// {
//     int q,r,p = 0;

//     for (int i = 0; i < n; i++)
//     {
//         q = a[i]/10;
//         r = a[i] %10;
//         p = p + pow(q,r);
//     }
//     return p;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,num1,num2,count = 0;
//     cin>>num1>>num2>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] >= num1 && a[i] <= num2)
//         {
//             count= count + 1;
//         }
//     }

//     cout<<count<<endl;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,s,sum=0,count = 0;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n-2; i++)
//     {
//            sum = a[i] + a[i+1] + a[i+2];
//                 if (sum % 3 == 0)
//                 {
//                    // cout<<sum<<endl;
//                     count = count + 1;
//                 }
//     }
//     cout<<count<<endl;
// }

//  Sum Of Product
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n],b[n],ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin>>b[i];
//     }

//     int j = n-1;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans + (a[i] * b[j]);
//         j = j - 1;
//     }

//     cout<<ans<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,k,ans =0;
//     cin>>k>>n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//      for(int i = 0; i<n; i++)
//         {
//             if(a[i] > k)
//             {
//                 a[i] = a[i] - k;
//             }
//             else if(a[i] <= k)
//             {
//                 a[i] = a[i] + k;
//             }
//         }

//         int maxNo = a[n-1], minNo = a[0];
//         for (int i = 0; i < n; i++)
//         {
//         //    maxNo = max(maxNo,a[i]);
//         //    minNo = min(minNo,a[i]);

//         cout<<a[i]<<"  ";
//         }
//         cout<<endl;
//         // cout<<maxNo<<endl;
//         // cout<<minNo<<endl;
//         //  ans = maxNo - minNo;
//         //  cout<<ans<<endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int tmp = 0, n, k, dif = 0, min, p, q;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cin >> k;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 tmp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = tmp;
//             }
//         }
//     }

//     if (k == 1)
//     {
//         cout << arr[0];
//     }
//     else
//     {
//         min = arr[0] - arr[1];
//         for (int i = 1; i <= n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 dif = arr[i] - arr[j];
//                 if (dif < min)
//                 {
//                     min = dif;
//                     p = i;
//                     q = j;
//                 }
//             }
//         }

//         cout << arr[p] << " " << arr[q] << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,sum = 0, k;
//     cin>>n;
//     int a[n];
    
//     for (int i = 0; i < n; i++)
//     {
//         cin>> a[i];
//     }

//     cin>>k;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }

//     sum = (sum - k) + 1;
    
//     cout<<sum<<endl;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int d,n,sum = 0,val=0;
//     char f;
//     cin>> f >> n;
//     cin>> d ;

//     if (f == 'N' || f == 'n')
//     {
//         sum = sum + 15;
//     }
//     else if (f == 'V' || f == 'v')
//     {
//         sum = sum + 12;
//     }
//      sum = sum * n;
//     if (d >= 6 )
//     {
//         sum = sum + 3;
//         val = d - 6;
//         val = val * 2;
//     }

//     sum = sum + val;

//     cout << sum<<endl;  

// }


// Hackerrank Easy
// #include<iostream>
// using namespace std;

// int main()
// {

//     int n,m;
//     cin >> n >> m;
//     int a[n],b[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
        
//     int count = 0;
//     int minval = a[n-1],maxval = b[0],flag = -1;

//     int val = n + m;
//     int alt[val];

//     for (int i = 0; i < n; i++)
//     {
//         alt[i] = a[i];
//     }

//    for (int i = 0; i < m; i++)
//    {
//        alt[n+i] = b[i];
//    }
   

//     while (minval <= maxval)
//     {
//         for (int i = 0; i < val; i++)
//         {
//            if (minval% alt[i] == 0 || alt[i] % minval == 0)
//                 {
//                     flag = 0;
//                     continue;
//                 }
//                 else 
//                 {
//                 flag = -1;
//                 break;
//                 }
//         }
//         if (flag == 0)
//             {
//                 count++;
//                 minval = minval + 1;
//             }
//             else
//             {
//                 minval = minval + 1;
//             }
//     }
    
// cout << count<<endl;
// }


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0,val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  
    for (int i = 0; i < n; i++)
    {
        sum = sum+a[i];
    }
    sum = sum/n;
    for (int i = 0; i < n; i++)
    {
        val = val + abs(sum - a[i]);
    }

    cout<<val;
}
