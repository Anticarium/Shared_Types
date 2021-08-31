#include <iostream>
#include <shared_types/ControlSerializer.hpp>

int main(int argc, char* argv[]) {
    shared_types::Control a;
    a.setIsAuto(true);
    std::cout << "Is auto: " << a.isAuto() << std::endl;
    return 0;
}
