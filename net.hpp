#pragma ones
#include<iostream>
#include <cmath>
#include <vector>


template<class T = double> class Neuron
{
private:
    size_t input_signals_size;
    T output_signal;
    T* input_signals;

public:


    Neuron(T* input_signals_, const size_t& input_signals_size_);
    ~Neuron();
    T activator(T);
    T summator(T*, T*);
    

};
template<class T = double> class input_Neuron:Neuron
{

};


template<class T = double> class Layer
{
public:
    Layer();
    ~Layer();
    const size_t layer_size;
    Neuron<T>* neurons;


};

class Neural_network
{
private:
    //weights
    Neural_network();


};

template<class T>
bool check_tipeid(T& value)
{
    char Name[] = typeid(T).Name();
    if(Name == 'double' || Name == 'long double' || Name == 'float')
        return 1;
    else:
        return 0;
}