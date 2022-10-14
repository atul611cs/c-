#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
};

bool mycmp(point p1,point p2)
{
    return(p1.x <p2.x);
}

int main()
{
    int n;
    point arr[]={{3,10},{2,8},{5,4}};
    for(auto i:arr) 
    {
        cin>>n;

        sort(arr,arr+n,mycmp);

        cout<<i.x<<" "<<i.y<<endl;
    }
}
