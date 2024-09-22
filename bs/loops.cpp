#include <iostream>
#include <cstdint>

using namespace std;

int main(){

    for (std::uint32_t i = 0U; i < 3U; i++){
       
        std::cout << i << "\n";
    }

std::cout << "--------" << "\n";    
    for (std::int32_t i = 3U; i > 0U; i--){
        
        std::cout << i << "\n";
    }
std::cout << "--------"<< "\n";
    for(std::uint32_t i = 0U; i < 3U; ++i){
        
        std::cout << i << "\n";
    }
std::cout << "--------"<< "\n";

    for(std::uint32_t i = 3U; i > 0U; --i){
        std::cout << i << "\n";
    }
std::cout << "--------"<< "\n";

    std::int32_t i = 1;
    std::int32_t result = ++i;
    std::cout << "\n" << result << "\n";

std::cout << "--------"<< "\n";

    while (true){
        if (i > 3){
            break;
        }
        ++i;
    }
std::cout << "--------"<< "\n";

    for (int i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }    

std::cout << "--------"<< "\n";
    int fact = 7;
    int factorial = fact;
    for (int i = factorial - 1; i > 1; i--){
        factorial = factorial * i;
    }
    std::cout << "factorial of " << fact << ": " << factorial << std::endl;

std::cout << "--------"<< "\n";

    int io = 10;
    while(io >= 1){
        std::cout << io << "\t";
        io--;
    }
std::cout << "--------"<< "\n";

    int factorial2 = 5;
    int io2 = factorial2 - 1;
    while (io2 > 1){
        factorial2 *= io2;
        io2--;
    }
    std::cout << factorial2 << std::endl;

std::cout << "--------"<< "\n";

    std::string password = "hello12345";
    std::string input;
    do {
        std::cout << "Guess the password: "; 
        std::cin >> input;
    } while(input != password);


    return 0;
}