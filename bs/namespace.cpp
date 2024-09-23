#include <iostream>
#include <cstdint>

namespace DB {

    namespace Types {
            enum class Status {
            Unknown,
            Connected,
            Disconnected,
        };
            struct User {
            Status status;
            std::uint64_t id;
        };
    }

    namespace Methods {
        void printUserStatus(DB::Types::User user){

                std::cout << (std::int32_t)user1.status << '\n';
                std::cout << static_cast<std::int32_t>(user1.status) << '\n';
        }
    }

}




int main(){

    DB::Types::Status user1 = {status = DB::Types::Status::Connected, id = 42U};

    // std::cout << user1.id << '\n';

    DB::Methods::printUserStatus(user1);

    return 0;
}