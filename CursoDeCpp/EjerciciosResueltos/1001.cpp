#include <iostream>

using namespace std;

struct punto{
    int x;
    int y;
};

int main()
{
    punto p = {11,8};
    cout << "p = (" << p.x << "," << p.y << ")" << endl;

    return 0;
}
