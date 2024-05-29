#include <iostream>
#define pi 3.14
using namespace std;
float ms(int x)
{

    return (pi*x*x);
}
float mh(int y)
{
    return (2*pi*y);
}

int main()
{
    int r;
    cout <<"Enter Radius:";
    cin >>r;
    cout << "Area:" << ms(r) << endl;
    cout<< "primeter:" << mh(r);
    return 0;
}
