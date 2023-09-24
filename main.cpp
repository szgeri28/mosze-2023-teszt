#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //[N_ELEMENTS]
    std::cout << '1-100 ertekek duplazasa' //Hianyzik a ; végérõl és "" közé kellett volna írni
    for (int i = 0;) //Hiányos a for ciklus
    {
        b[i] = i * 2; // b[i] helyett b[i-1] kéne írni
    }
    for (int i = 0; i; i++) //0-tol 0-ig megy? ez igy nem jo
    {
        std::cout << "Ertek:" //Hianyzo értek és nincs endl hogy jól nézzen ki
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; kell írni
    {
        atlag += b[i] // Itt is hiányzik ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
