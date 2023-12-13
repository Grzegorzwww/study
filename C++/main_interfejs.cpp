#include <iostream>
#include <array>

template <typename  T>
class Liczby{
    public:
        virtual T  &operator[](int i);
        virtual int size()  = 0;
        virtual void show() = 0;
        virtual ~Liczby() {}
};

template <typename  T>
class Liczby_int : public Liczby<T>
{
    public:
        Liczby_int(std::initializer_list<T> licz): kontener{new T[licz.size()]}, ilosc{licz.size()}
        {
            std::copy(licz.begin(), licz.end(), kontener);
        };

        T  &operator[](int i) {return kontener[i];}
        int size() {return ilosc;}
        ~Liczby_int() {delete kontener;}

    private:

    T *kontener;
    int ilosc;

};
template <typename  T>
class Liczby_double : public Liczby<T>
{
    public:
        Liczby_double(std::initializer_list<T> licz): kontener{new T[licz.size()]}, ilosc{licz.size()}
        {
            std::copy(licz.begin(), licz.end(), kontener);
        };

        T  &operator[](int i) {return  kontener[i];}
        int size() {return ilosc;}
        ~Liczby_double() {delete kontener;}

    private:

    T *kontener;
    int ilosc;

};

void show_liczby(Liczby &liczby)
{
    for(int i = 0; i < liczby.size(); i++){
             std::cout << liczby[i] <<" ";
    }
   std::cout << std::endl;
   
}
int main()
{

    Liczby_int<int> licz = {5,7,6,3,1,4,9,7,5,2};
    Liczby_double<double> licz_2 = {5.2, 7.5, 6.5, 3.5, 1.0, 4.1, 9.3, 7.4, 5.5, 2.6};
 
    show_liczby(licz);
    show_liczby(licz_2);


}