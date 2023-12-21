#include <iostream>
#include <array>




class MyClass {

    public:
        MyClass(int x) :storage {new int(x)}
        {
            s = x;
        };
        int size() {return s;}



    private:

    int *storage;;
    int s;
     

};

MyClass create_MyClass_value()
{
    char choose;
    std::cout <<"Stworzyć ?";
    std::cin >> choose;
    if(choose == 't'){
        MyClass my_class(100);
        return std::move(my_class);
    }


}


int main()
{
    MyClass  my(100);
    MyClass  my_c = create_MyClass_value();
    std::cout << my_c.size();
    std::cout << my.size();


    
   
}
