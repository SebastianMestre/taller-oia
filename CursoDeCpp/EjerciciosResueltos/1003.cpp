#include <iostream>

using namespace std;

struct punto{
    int x;
    int y;
};

struct rectangulo{
    punto inf_izq;
    punto sup_der;
};

void mostrar_punto(punto p){
    cout << "(" << p.x << "," << p.y << ")";
}

void mostrar_rectangulo(rectangulo r){
    mostrar_punto(r.inf_izq);
    cout << " -- ";
    mostrar_punto(r.sup_der);
    cout << endl;
}

rectangulo crear_rectangulo(punto p, punto q){
    /* Esta funcion recibe dos vertices opuestos de
    un rectangulo y crea el rectangulo de modo tal
    que se guarden los vertices inferior izquierdo
    y superior derecho. */
    rectangulo r;

    r.inf_izq.x = min(p.x, q.x);
    r.inf_izq.y = min(p.y, q.y);

    r.sup_der.x = max(p.x, q.x);
    r.sup_der.y = max(p.y, q.y);

    return r;
}

int main()
{
    punto p,q;

    cout << "Ingrese dos vertices opuestos del rectangulo:" << endl;
    cin >> p.x >> p.y;
    cin >> q.x >> q.y;

    cout << "El rectangulo creado es: ";
    rectangulo r = crear_rectangulo(p,q);
    mostrar_rectangulo(r);

    return 0;
}
