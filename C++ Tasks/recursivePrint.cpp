#include <iostream>

void rec_print(int x, int const_x) {

    if (x <= const_x/2) {
        std::cout << (x * 2) - 1 << "\n" << x * 2 << "\n";
        rec_print(++x, const_x);
    }

}
/*
int main() {
    int range_end = 20;
    int range_start = 1;

    rec_print(range_start,range_end);

    return 0;
}
*/