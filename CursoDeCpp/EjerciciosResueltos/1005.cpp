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

rectangulo pedir_rectangulo(){
    punto p,q;

    cout << "Ingrese dos vertices opuestos de un rectangulo:" << endl;
    cin >> p.x >> p.y;
    cin >> q.x >> q.y;

    cout << "El rectangulo creado es: ";
    rectangulo r = crear_rectangulo(p,q);
    mostrar_rectangulo(r);

    return r;
}

bool se_superponen(rectangulo r1, rectangulo r2){
    // Vamos a analizar 5 casos:

    if(r1.sup_der.y <= r2.inf_izq.y){
        // r1 está totalmente debajo de r2
        return false;
    }

    if(r1.inf_izq.x >= r2.sup_der.y){
        // r1 está totalmente encima de r2
        return false;
    }

    if(r1.sup_der.x <= r2.inf_izq.x){
        // r1 está totalmente a la izquierda de r2
        return false;
    }

    if(r1.inf_izq.x >= r2.sup_der.x){
        // r1 está totalmente a la derecha de r2
        return false;
    }

    // Si no es ninguno de los anteriores, los rectangulos se superponen
    return true;
}


int main()
{
    rectangulo a = pedir_rectangulo();
    rectangulo b = pedir_rectangulo();

    cout <<  "Los rectangulos " << (se_superponen(a,b) ? "" : "no ") << "se superponen." << endl;

    return 0;
}
