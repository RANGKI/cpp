#include <iostream>
#include <unistd.h>

int main() {

    static const char* expressions[] = { ":>", ":)", ":(" };

    
    for (int x = 0; x < 100; x++) {
        std::cout << "Alright you can play xbox :)" << std::endl;
        std::cout << "But after my counting end, you gotta sleep >:( !" << std::endl;
        int random_value = rand() % 3;
        std::cout << x << " " << expressions[random_value] << std::endl;
        sleep(1);
    }
    std::cout << "Time For Sleep :> " << std::endl;
    return 0;
}