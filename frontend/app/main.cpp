#include <iostream>
#include "frontTests.hpp"
#include "backTests.hpp"

int main()
{
    print_frontend_hello_world();

    std::cout << "Trying the backend\n";
     
    print_backend_hello_world();

    return 0;
}