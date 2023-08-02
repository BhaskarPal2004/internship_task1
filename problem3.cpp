#include <iostream>

int main() {
    int i = 0;

    // Named loop label
    loop_start:

    if (i < 5) {
        std::cout << "Iteration: " << i << std::endl;
        i++;
        goto loop_start; // Jump back to the named loop label
    }

    return 0;
}
