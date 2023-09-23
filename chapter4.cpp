// Function Template with parameters
#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(3, 8);
    printf("The avg of a is %.3f", a);
    cout << endl;

    int x = 3, y = 5;
    swapp(x, y);
    cout << x << endl;
    cout << y << endl;

    return 0;
}