#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "network.h"
#include <time.h>

double sigmoid(double x) { return 1 / ( 1 + exp(-x) ) ; }
double dx_sigmoid(double x) { return sigmoid(x) * (1 - sigmoid(x)) ; }

void initialize(Layer* l, int height, int depth) {
    double** w = (double **) malloc(height * sizeof(double *));
    for (int i = 0; i < height; i++) { w[i] = (double *) malloc(depth * sizeof(double)); }
    double* b = (double *) malloc(height * sizeof(double)); srand(time(NULL));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < depth; j++) {
            w[i][j] = 0.5;
        }
        b[i] = 0.5;
    }
    l -> weights = w; l -> biases = b; l -> height = height; l -> depth = depth;
}

void initialize(Network* net, int* shape, size_t depth) {
    net->layers = (Layer*) malloc(depth * sizeof(Layer));
    for (size_t i = 0; i < depth; i++) {
        net->layers[i].neurons = (Neuron*) malloc(shape[i] * sizeof(Neuron));
        
    }
    
}