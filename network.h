double sigmoid(double x);
double dx_sigmoid(double x);

typedef struct neuron{
    double in;
    double activation;
    double* weight;
    double bias;
} Neuron;

typedef struct layer{
    Neuron* neurons;
} Layer;

typedef struct network{
    Layer* layers;
} Network;

void initialize(Network* net, int* shape);