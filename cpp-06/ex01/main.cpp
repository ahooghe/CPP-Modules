#include "Serializer.hpp"

int main( void )
{
    Data* data = new Data();
    data->data = "Hello, World!";
    std::cout << data->data << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << raw << std::endl;
    std::cout << Serializer::deserialize(raw)->data << std::endl;
    //delete data;
    return (0);
}