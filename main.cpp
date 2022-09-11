#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Nem létezik ilyen nevű statikus változó.
    std::cout << "1-100 ertekek duplazasa"<< std::endl; // Nincs pontos vesző a sor végén és hiányzik << std::endl.
    for(int i=0; i < N_ELEMENTS; i++) //rossz szintaxisú for ciklus helyes for(int i=0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2; // helyesen b[i] = (i + 1) * 2;
    }
    std::cout << "Ertek:";
    for (int i = 0; i < N_ELEMENTS ; i++) // rossz szintaxisú for ciklus helyes for (int i = 0; i < N_ELEMENTS ; i++)
    {
        std::cout << b[i]<<' '; // Nincs pontos vesző a sor végén és az igy mindig kiírja az Ertek szót ezt a for cikluson elé kell rakni és még nem írja ki a b tömb értékeit sem.
    }    
    std::cout << std::endl;// itt édemes új sort kezdeni std::cout << std::endl;
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; // Ha egészre kerekített átlagra van szükség, akkor jó egyébként az átlagnak double típusunak kell lennie.
    for (int i = 0; i < N_ELEMENTS; i++) //i++ elött lévő vesző helyet pontos vesszőnek kell lenie.
    {
        atlag += b[i]; // hiányzik a pontos vessző;
    }
    delete[] b;// Itt még kell egy delete[] b;
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "teszt " << atlag << std::endl;
    return 0;
}
