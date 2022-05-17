#include <iostream>

using namespace std;

struct persona{
    char nombre[32];
    int edad, DNI;
};

int main()
{
    persona A, B = { "Roman", 18, 39654321 };
    A = B;
    cout << "Soy " << A.nombre << " y mi DNI es " << A.DNI << endl;

    return 0;
}
