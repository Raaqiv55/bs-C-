#include <iostream>
#include <cstdint>

int main()
{

    bool b1 = true;
    bool b2 = false;

    bool c1 = (b1 || b2) && b1;

    if (b1 == true)
    {
        std::cout << "Printy Printy \n";
    }
    else if (!b2)
    {
    }
    else
    {
    }

    std::int32_t result;
    if (b1 == true)
    {
        result = 10;
    }
    else
    {
        result = -10;
    }

    std::int32_t result = b1 == true ? 10 : -10;

    return 0;
}