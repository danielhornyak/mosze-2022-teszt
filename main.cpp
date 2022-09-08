#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Nem létezik ilyen nevű statikus változó.
    std::cout << '1-100 ertekek duplazasa' // Nincs pontos vesző a sor végén és hiányzik << std::endl.
    for (int i = 0;) //rossz szintaxisú for ciklus helyes for(int i=0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2; // helyesen b[i] = (i + 1) * 2;
    }
    for (int i = 0; i; i++) // rossz szintaxisú for ciklus helyes for (int i = 0; i < N_ELEMENTS ; i++)
    {
        std::cout << "Ertek:" // Nincs pontos vesző a sor végén és az igy mindig kiírja az Ertek szót ezt a for cikluson elé kell rakni és még nem írja ki a b tömb értékeit sem.
    }    
    // itt édemes új sort kezdeni std::cout << std::endl;
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Ha egészre kerekített átlagra van szükség, akkor jó egyébként az átlagnak double típusunak kell lennie.
    for (int i = 0; i < N_ELEMENTS, i++) //i++ elött lévő vesző helyet pontos vesszőnek kell lenie.
    {
        atlag += b[i]
    }
    // Itt még kell egy delete[] b;
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
