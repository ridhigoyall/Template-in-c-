#include <iostream>
using namespace std;
template <class T>
class Me
{
public:
    int data;
    Me(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Me<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "This is templatesed  func()" << a << endl;
}
int main()
{
    // Me<int> m(5);
    // Me<char> n('c');
    // Me<float> o(3.2);

    // cout << m.data << endl;
    // m.display();
    // cout << n.data << endl;
    // n.display();
    // cout << o.data << endl;
    // o.display();

    func(4); // Exact match takes the highest priority
    return 0;
}