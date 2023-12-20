#include <iostream>
#include <array>
#include <string>
#include <vector>

template <typename C, typename V>
int count(C &c, V prod)
{
    int cnt = 0;
    for(const auto &i:c){
        if(prod(i)){
            ++cnt;
        }
    }
    return cnt;
}

template <typename T>
class Less_then
{
    public:
    Less_then(T n) : comp(n)
    {}

    bool operator()(const T &x) const {
        return x < comp;
    };
    private:
    T comp;
};

template <typename T>
class Equal_to
{
    public:
    Equal_to(T n) : comp(n)
    {}

    bool operator()(const T &x) const {
        return x == comp;
    };
    private:
    const T comp;
};


int main()
{


    std::vector<std::string> nazwy = {"pies", "kot", "mysza", "mysza", "mysza", "pies", "mysza"};
    std::vector<int> liczby;
    for(int i = 0; i < 100; i++){
        liczby.push_back(rand()% 100);
    }

    // lambda
    std::cout <<"mniejsze niz 50 = " << count(liczby, [](int a) {  return a < 50; }) << std::endl;
    std::string key = "mysza";
    std::cout <<"wysapienia: " << key <<" : "<< count(nazwy, [&key](std::string a) {  if(key.compare(a) == 0 ) {return true;} else {return false;}}) <<std::endl;

    
    //functor
    key = "pies";
    std::cout <<"mniejsze niz 5 = " << count(liczby, Less_then<int>{50}) << std::endl;
    std::cout <<"wysapienia = "<< key <<" : "<< count(nazwy, Equal_to<std::string>{key}) << std::endl;


}