
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j >= 1)
        {
            cout << char(j + 64);
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}