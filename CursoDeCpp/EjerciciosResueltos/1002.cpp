#include <iostream>

using namespace std;

struct punto{
    int x;
    int y;
};

void mostrar_punto(punto p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    punto p;
    cin >> p.x >> p.y;

    punto a = p, b = p;
    cout << "1ra copia: ";
    mostrar_punto(a);
    cout << "2da copia: ";
    mostrar_punto(b);

    return 0;
}
