#include<iostream>
using namespace std;

bool isSafe(int** arr,int x, int y, int n);
bool RatinMaze(int** arr,int x,int y, int n, int** solArr);


int main()
{
    int n;
    cout<<"Enter the number of rows and col: "<<endl;
    cin>>n;
    int** arr= new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    cout<<"Enter the val of arr: "<<endl;
    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
    }
    
    int** solArr= new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j]== 0;
        }
    }
cout<<endl;
cout<<"Val of solArr: "<<endl;
if (RatinMaze(arr,0,0,n,solArr))
{
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

    return 0;
}


bool isSafe(int** arr,int x, int y, int n)
{
    if (x<n && y<n && arr[x][y] == 1)
    {
        return true;
    }
    return false;    
}

bool RatinMaze(int** arr,int x,int y, int n, int** solArr)
{
    if (x==n-1 && y==n-1)
    {
        solArr[x][y]=1;
        return true;
    }
    
    if (isSafe(arr,x,y,n)== true)
    {
        solArr[x][y]= 1;
        if (RatinMaze(arr,x+1,y,n,solArr))
        {
            return true;
        }
        if ( RatinMaze(arr,x,y+1,n,solArr) )
        {
            return true;
        }
        solArr[x][y]= 0; 
        return false;     
    }
    return false;    
}

