#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //[N_ELEMENTS]
    std::cout << '1-100 ertekek duplazasa' //Hianyzik a ; v�g�r�l �s "" k�z� kellett volna �rni
    for (int i = 0;) //Hi�nyos a for ciklus
    {
        b[i] = i * 2; // b[i] helyett b[i-1] k�ne �rni
    }
    for (int i = 0; i; i++) //0-tol 0-ig megy? ez igy nem jo
    {
        std::cout << "Ertek:" //Hianyzo �rtek �s nincs endl hogy j�l n�zzen ki
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // , helyett ; kell �rni
    {
        atlag += b[i] // Itt is hi�nyzik ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
