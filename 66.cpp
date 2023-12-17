// matrix or 2D array
// taking input
// printing output
// and searching in a matrix

#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};  //declaration and initializatin
    int n,m;
    cin>>n>>m;
    int arr[n][m];    //declaration
    //taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //printing output
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    //searching an element x
    int x;
    cin>>x;

      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<"Element Found"<<endl;
            }
            
        }
        
    }
    
    return 0;
}