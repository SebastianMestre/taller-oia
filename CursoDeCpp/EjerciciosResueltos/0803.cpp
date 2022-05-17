#include <iostream>

using namespace std;

int max2(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int max3(int a, int b, int c){
    return max2(a,max2(b,c));
}


int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << max3(a,b,c);

    return 0;
}
