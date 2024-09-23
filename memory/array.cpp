#include <array>
#include <cstdint>
#include <iostream>

using namespace std;


void print_array_value2(const std::array<std::uint32_t, 5U> my_array){
    for(std::uint32_t i = 0; i < my_array.size(); i++){

        std::cout << my_array[i] << "\n";
    }
}

int main(){

    constexpr auto len = 5U;
    // std::uint32_t my_array[len] = {};

    // // std::cout << my_array << "\n";

    // for (std::int32_t i = 0; i < len; i++){
    //     std::cout << my_array[i] << "\n";
    // }

    // std::array<std::uint32_t, len> my_array2 = {};

    auto my_array2 = std::array<std::uint32_t, len>{6,7,8,9,10};
    print_array_value2(my_array2);


    return 0;
}