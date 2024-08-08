#include <iostream>
#include <cmath>

double hipotenusa(int ladoA, int ladoB){
    using namespace std;
    double hipo = sqrt(pow(ladoA,2) + pow(ladoB,2));
    return  hipo;
}

int main(){
    using namespace std;
    int a, b;
    cout << "Ingrese el lado A: ";
    cin >> a;
    cout << "Ingrese el lado B: ";
    cin >> b;
    double c = hipotenusa(a,b);
    cout << "La hipotenusa es " << c << " centimentros";
    return 0;
}

