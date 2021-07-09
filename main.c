#include "network.h"

int main(void) {
    Network net; int shape[3] = {2,2,1}; int depth = 3;
    initialize(&net, &shape, depth);
    return 0;
}