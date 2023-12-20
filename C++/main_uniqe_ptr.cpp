#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <memory>

class Base
{
    public:
       virtual int size() = 0;
       virtual ~Base() {}
};

class MYClass_int : public Base
{
    public:
    MYClass_int(int x) :container{new int[x]}
    {
        s = x;
    }

    ~MYClass_int(){std::cout << "MYClass_int deleted" <<std::endl;}

    int size() {return s;}

    private:
        int *container;
        int s;

};

class MYClass_char : public Base
{
    public:
    MYClass_char(int x) :container{new char[x]}
    {
        s = x;
    }
    ~MYClass_char(){std::cout << "MYClass_char deleted" <<std::endl;}

    int size() {return s;}

    private:
        char *container;
        int s;

};


std::unique_ptr<Base> class_create()
{

  auto choose = rand() % 2;
  auto quantity = rand() % 100;
  
  if(choose == 0){
    return std::unique_ptr<Base>{new MYClass_char(quantity)};
  }else if (choose == 1){
     return std::unique_ptr<Base>{new MYClass_int(quantity)};
  }
  else{
    return nullptr;
  }
}

int main()
{

    std::unique_ptr<Base> ptr = nullptr;

    int i = 10;

    while(i-- > 0){
        ptr = class_create();
        std::cout << "size: "<< ptr->size() <<" -> ";
    }

}