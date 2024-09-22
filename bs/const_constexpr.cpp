#include <iostream>
#include <cstdint>

constexpr std::uint64_t faculty(const std::uint8_t n){

    auto result = std::uint64_t{1};

    for(std::uint8_t i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}


int main(){
    
    const auto result1 = faculty(5);
    constexpr auto var = 5 * 3 * 2;
    constexpr auto ro = faculty(5);

    return 0;
}