#include <iostream>
using namespace std;

float withDraw(int x, float y) {
    if (x > y) return y;
    if ( (x % 5 == 0) && !((y - x - 0.5) < 0) ) {
        return (y - x) - 0.5;
    }
    else {
        return y;
    }

}

int main(void) {
    printf("%.2f\n", withDraw(30, 120.00));
    printf("%.2f\n", withDraw(42, 120.00));
    printf("%.2f\n", withDraw(300, 120.00));
    printf("%.2f\n", withDraw(120, 120.00)); // edge case


    return 0;
}
