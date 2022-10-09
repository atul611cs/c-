#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter the size of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
         for(int i=0;i<n;i++)
            {
             sum=sum+array[i];
            }
              cout<<"sum of array: "<<sum;
         return 0;
}

