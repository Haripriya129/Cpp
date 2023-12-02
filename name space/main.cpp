#include <iostream>

using namespace std;

namespace don
{
    int x=20;
    void printx()
    {
        cout<<x<<endl;
    }
}
namespace mari
{
    int y=100;
    void printx()
    {
        cout<<y<<endl;
    }
}
int main()
{
    don::printx();
    mari::printx();
    return 0;
}
