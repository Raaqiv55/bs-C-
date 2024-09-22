#include <iostream>
#include <cstdint>

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
    Status s1 = Status::Unknown;
    //UserPerission s2 = UserPerission::unknown;
    switch (s1){
        case Status::Unknown:
        {
            std::cout << "Unknow\n";
            break;
        }
        case Status::Connected:
        {
            std::cout << "Connected\n";
            break;
        }
        case Status::Disconnected:
        {
            std::cout << "Disconnected\n";
            break;
        }
        
    }

}