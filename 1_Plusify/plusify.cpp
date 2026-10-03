#include <iostream>
#include <string>

// Input
int angka1, angka2;
int hasil;
std::string hitungan;

int main()
{
    while(true)
    {
        std::cout << "Welcome to Plusify, your lightweight calculator!" << std::endl;
        std::cout << "Type number: ";
        std::cin >> angka1;

        std::cout << "Type operator (+ - * /): ";
        std::cin >> hitungan;

        std::cout << "Type number: ";
        std::cin >> angka2;

        if(hitungan == "+") hasil = angka1 + angka2;
        else if(hitungan == "-") hasil = angka1 - angka2;
        else if(hitungan == "*") hasil = angka1 * angka2;
        else if(hitungan == "/") hasil = angka1 / angka2;  // hati-hati: angka2 bisa 0

        angka1 = hasil;
        std::cout << "Hasil: " << hasil << std::endl;
    }

    return 0;
}