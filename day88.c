//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>
enum TrafficLight { RED, YELLOW, GREEN };
int main() {
    enum TrafficLight light;
    for (light = RED; light <= GREEN; light++) {
        printf("%s=%d\n", (light == RED) ? "RED" : (light == YELLOW) ? "YELLOW" : "GREEN", light);
    }
    return 0;
}
