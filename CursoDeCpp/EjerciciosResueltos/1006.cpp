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

void mostrar_varios_puntos(int n, punto p[]){
    for(int i=0;i<n;i++){
        mostrar_punto(p[i]);
        cout << endl;
    }
}

void mostrar_rectangulo(rectangulo r){
    mostrar_punto(r.inf_izq);
    cout << " -- ";
    mostrar_punto(r.sup_der);
    cout << endl;
}

int menor_x(int n, punto p[]){
    int m = p[0].x;
    for(int i=1;i<n;i++){
        if(p[i].x < m){
            m = p[i].x;
        }
    }

    return m;
}

int menor_y(int n, punto p[]){
    int m = p[0].y;
    for(int i=1;i<n;i++){
        if(p[i].y < m){
            m = p[i].y;
        }
    }

    return m;
}

int mayor_x(int n, punto p[]){
    int m = p[0].x;
    for(int i=1;i<n;i++){
        if(p[i].x > m){
            m = p[i].x;
        }
    }

    return m;
}

int mayor_y(int n, punto p[]){
    int m = p[0].y;
    for(int i=1;i<n;i++){
        if(p[i].y > m){
            m = p[i].y;
        }
    }

    return m;
}


int main()
{
    punto p[10];
    for(int i=0;i<10;i++)
        cin >> p[i].x >> p[i].y;

    cout << endl;
    mostrar_varios_puntos(10,p);

    rectangulo r;
    r.inf_izq.x = menor_x(10,p);
    r.inf_izq.y = menor_y(10,p);
    r.sup_der.x = mayor_x(10,p);
    r.sup_der.y = mayor_y(10,p);

    cout << endl << "Un rectangulo que cubre todos los puntos es: ";
    mostrar_rectangulo(r);

    return 0;
}
