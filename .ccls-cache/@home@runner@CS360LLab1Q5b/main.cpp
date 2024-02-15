#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    // Print strings centered using manipulators
    cout << std::setw(20) << std::left << std::setfill(' ') << "Good Morning"
         << std::setw(20) << std::left << std::setfill(' ') << "Sarah"
         << std::setw(20) << std::left << std::setfill(' ') << "Sunshine!" << std::endl;

    return 0;
}
