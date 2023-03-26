#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"
#include <iostream>


int main() {
    //Северный Ледовитый океан
    Ocean ocean1("Arctic", 5527, 14060000);
    std::cout << ocean1 << '\n';

    //Море Лаптевых
    Sea sea1("Laptev", 3385, 662000, &ocean1);
    std::cout << sea1 << '\n';

    //Бухта Тикси
    Bay bay1("Tiksi", 11, NULL, &sea1);
    std::cout << bay1 << '\n';

    //Внутреннее море
    Sea sea2("Caspian", 1025, 371000);
    std::cout << sea2 << '\n';
}
