
#include <iostream>
#include <cstdint>

using namespace std;

enum class Status {
    Unknown,
    Connected,
    Disconnected,
};

enum class UserPerission {
    unknown,
    User,
    Admin,
};


struct User {
    Status status;
    std::uint64_t id;
};

int main(){
    
    User user1 = {Status::Connected, 42U};

    // User user1 = {.status = Status::Connected, .id = 42U}

    std::cout << user1.id << '\n';
    std::cout << static_cast<std::int32_t>(user1.status) << '\n';


    return 0;
}