#include <iostream>
#include <array>

class Liczby
{
    public:
        Liczby(std::initializer_list<int> licz): kontener{new int[licz.size()]}, ilosc{licz.size()}
        {
            std::copy(licz.begin(), licz.end(), kontener);
        };
        int  &operator[](int i) {return kontener[i];}

    private:

    int *kontener;
    int ilosc;

};


int main()
{

    Liczby licz = {5,7,6,3,1,4,9,7,5,2};

    std::cout << licz[4];


}