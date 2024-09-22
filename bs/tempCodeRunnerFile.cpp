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