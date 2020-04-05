#include "net.hpp"



template<class T> Neuron<T>::Neuron(T* input_signals, const size_t& input_signals_size_)
{
    output_signal = 0;
    
}

template<class T> T Neuron<T>::activator(T in)
{
    return tanh(in);
}
