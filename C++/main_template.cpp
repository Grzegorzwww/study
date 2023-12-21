#include <iostream>
#include <array>



template <typename T>
class Vector {

    public:
        using value_type = T;
        Vector(int s) :elem{new T[s]}, sz{s}
        {};
        ~Vector() {delete [] elem;}
        int size() {return sz;}
        T & operator[](int i) {return elem[i];};



    private:
        T *elem;
        int sz;

};


template <typename T>
T * begin(Vector<T> &x)
{
    return x.size() ? &x[0] : nullptr;
}
template <typename T>
T * end(Vector<T> &x)
{
    return begin(x)+x.size();
}

//  template<typename C>
//  using Element_type = C::value_type;

int main()
{
    Vector<int> liczba_vec(10);
    Vector<char> liczba_char(10);


    

    
   
}
// template<typename Container>
// void conteiner_size(Container &c)
// {
//     std::cout << sizeof(Element_type);
// }