#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[]={10,20,7,5};
    sort (arr,arr+n);

    for (int x: arr)
    cout<<x<<" ";
    sort (arr,arr+n,greater <int>());

    cout<<endl;
    for(int x:arr)
    cout<<x<<" ";
}
