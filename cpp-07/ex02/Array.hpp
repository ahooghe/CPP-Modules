#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        ~Array();

        Array &operator=(Array const &src);
        T &operator[](unsigned int index);
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{

}

template <typename T>
Array<T>::Array(Array const &src)
{
    *this = src;
}

template <typename T>
Array<T>::~Array()
{
    if (_array)
        delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
    if (this != &src)
    {
        if (_array)
            delete[] _array;
        _size = src._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
        {
            _array[i] = src._array[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return _array[index];
}

#endif