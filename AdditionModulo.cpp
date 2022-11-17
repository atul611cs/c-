#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    cin>>n;
    int m;
    cout<<"enter the  modulo operator:",&m;
    cin>>m;
    
    vector<int>V(n);
    
    for(i=0;i<n;i++)
    {
        cin>> V[i];
    }
    
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<< ((V[i]+V[j])%m)<<" ";
            }
            cout<< endl;
        }
        
}
