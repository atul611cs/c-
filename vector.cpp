#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> A;
    cout<<"capacity="<<A.capacity()<<endl;

    A.push_back(1);
    cout<<"capacity="<<A.capacity()<<endl;

       A.push_back(2);
       cout<<"capacity="<<A.capacity()<<endl;

         A.push_back(3);
         cout<<"capacity="<<A.capacity()<<endl;
          cout<<"size="<<A.size()<<endl;
          cout<<"Elements at second index="<<A.at(2)<<endl;
          cout<<"front="<<A.front()<<endl;
          cout<<"back="<<A.back()<<endl;


          cout<<"before pop"<<endl;
          for(int i:A)
            {
              cout<<i<<" ";
            }cout<<endl;
          A.pop_back();
          cout<<"after pop"<<endl;
          for(int i:A)
            {
                cout<<i<<" ";
            }


}
