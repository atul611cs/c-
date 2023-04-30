#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    cout << "enter the size :";
    cin >> st->size;
}