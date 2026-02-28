#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: NELEMENTS helyett N_ELEMENTS kell
    int *b = new int[NELEMENTS]; 
    
    // HIBA: hiányzó pontosvessző és rossz idézőjel (dupla " kell)
    std::cout << '1-100 ertekek duplazasa' 
    
    // HIBA: hiányzó feltétel és növekmény a ciklusfejben
    for (int i = 0;) 
    {
        b[i] = i * 2;
    }
    
    // HIBA: rossz ciklusfeltétel (i értéke 0, így hamis, el sem indul)
    for (int i = 0; i; i++) 
    {
        // HIBA: hiányzó érték kiíratás és pontosvessző
        std::cout << "Ertek:" 
    }    
    
    std::cout << "Atlag szamitasa: " << std::endl;
    
    // HIBA: az atlag változó nincs inicializálva (0-ra kellene állítani)
    int atlag; 
    
    // HIBA: vessző helyett pontosvessző kell a feltétel és a léptetés közé
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        // HIBA: hiányzó pontosvessző a sor végéről
        atlag += b[i] 
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    // HIBA: hiányzik a lefoglalt memória felszabadítása (delete[] b;)
    
    return 0;
}