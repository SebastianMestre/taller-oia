#include <iostream>

using namespace std;

int main()
{
    int x1,y1;
    int x2,y2;
    int x3,y3;

    cout << "Ingrese las coordenadas del primer punto: ";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas del segundo punto: ";
    cin >> x2 >> y2;

    cout << "Ingrese las coordenadas del tercer punto: ";
    cin >> x3 >> y3;


    if(                                                    // Vemos si
        ((x1 <= x3 && x3 <= x2) || (x2 <= x3 && x3 <= x1)) // x3 esta entre x1 y x2
     &&                                                    // y
        ((y1 <= y3 && y3 <= y2) || (y2 <= y3 && y3 <= y1)) // y3 esta entre y1 y y2
    ){
        cout << "El tercer punto pertenece al rectangulo determinado por los otros dos." << endl;
    }else{
        cout << "El tercer punto NO pertenece al rectangulo determinado por los otros dos." << endl;
    }


    return 0;
}
