#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class Success
{
public:
    T1 a;
    T2 b;
    Success(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Success<> s(1, 0.23);
    s.display();
    return 0;
}