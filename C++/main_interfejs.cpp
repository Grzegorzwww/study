#include <iostream>
#include <array>


class Liczby{
    public:
        // virtual T  &operator[](int i);
        virtual int size()  = 0;
        virtual void show() = 0;
        virtual ~Liczby() {}
};


class Liczby_int : public Liczby
{
    public:
        Liczby_int(std::initializer_list<int> licz): kontener{new int[licz.size()]}, ilosc{licz.size()}
        {
            std::copy(licz.begin(), licz.end(), kontener);
        };

        int  &operator[](int i) {return kontener[i];}
        int size() {return ilosc;}
        ~Liczby_int() {delete kontener;}
        void show()   { 
            for(int i = 0; i < ilosc; i++){
             std::cout << kontener[i] <<" ";
        }
    }
    private:
        int *kontener;
        int ilosc;

};

class Liczby_double : public Liczby
{
    public:
        Liczby_double(std::initializer_list<double> licz): kontener{new double[licz.size()]}, ilosc{licz.size()}
        {
            std::copy(licz.begin(), licz.end(), kontener);
        };

        double  &operator[](int i) {return  kontener[i];}
        int size() {return ilosc;}
        ~Liczby_double() {delete kontener;}

        void show()   { 
            for(int i = 0; i < ilosc; i++){
             std::cout << kontener[i] <<" ";
            }
        }
    private:
        double *kontener;
        int ilosc;
};

void show_liczby(Liczby &liczby)
{
   liczby.show();
   std::cout << std::endl;
   
}
int main()
{
    Liczby_int licz = {5,7,6,3,1,4,9,7,5,2};
    Liczby_double licz_2 = {5.2, 7.5, 6.5, 3.5, 1.0, 4.1, 9.3, 7.4, 5.5, 2.6};
    show_liczby(licz);
    show_liczby(licz_2);
}