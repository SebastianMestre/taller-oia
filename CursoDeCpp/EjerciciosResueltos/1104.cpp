#include <iostream>
#include <cstdio>

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
    cout << p.x << " " << p.y << endl;
}

void mostrar_rectangulo(rectangulo r){
    mostrar_punto(r.inf_izq);
    mostrar_punto(r.sup_der);
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
    freopen("puntos.in","r",stdin);
    freopen("puntos.out","w",stdout);

    int n;
    cin >> n;

    punto p[n];
    for(int i=0;i<n;i++)
        cin >> p[i].x >> p[i].y;

    rectangulo r;
    r.inf_izq.x = menor_x(n,p);
    r.inf_izq.y = menor_y(n,p);
    r.sup_der.x = mayor_x(n,p);
    r.sup_der.y = mayor_y(n,p);

    mostrar_rectangulo(r);

    return 0;
}
