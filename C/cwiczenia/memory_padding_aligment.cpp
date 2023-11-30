#include <bits/stdc++.h>

class TestClass
{
    public:
    TestClass(int _x) {x = _x;}
    private:
    char x;
    double y;
};

struct test_struct_s
{
    bool x;
    int y;
};

int main()
{
    TestClass test(5);

    struct test_struct_s test_struct;

    std::cout <<"sizeof(text) = "<<sizeof(test)<<std::endl;

    std::cout <<"sizeof test = "<<sizeof test<<std::endl;

    std::cout <<"sizeof(test_struct) = "<<sizeof(test_struct)<<std::endl;

    std::cout <<"sizeof test_struct = "<< sizeof test_struct;




} 