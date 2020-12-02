#include <iostream>
#include <random>

using namespace std;


int liczbaLosowa(default_random_engine &e, const int a, const int b)
{
    uniform_int_distribution<int> uniform_dist(a, b);
    return uniform_dist(e);
}

int main()
{
    random_device r;
    default_random_engine e1(r());
    for (int n = 1 ; n <= 10 ; n++)    cout << liczbaLosowa(e1, 1, 6) << endl;
}
