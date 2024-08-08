#include <iostream>

int main(){

    std::string nombre;
    int edad;
    std::cout << "Cual es tu edad?";
    std::cin >> edad;
    std::cout << "Ingrese su nombre : ";
    std::getline(std::cin>>std::ws, nombre);
    std::cout << nombre << '\n';
    std::cout << edad << '\n';
    return 0;
}