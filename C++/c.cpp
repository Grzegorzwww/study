//---------------------------------------------------/*
//1. Uzywaniij unieque_ptr -> do obiektór polimorficznych
//2. Uzywaj shared_ptr -> do obiektów nie mających jednego właściciela
//3. C++ to język statycznej kontroli typów tzn. typ (obiekt / wartośc / nazwa / wyrażenie musi byc znany kompilatorowi w chwili jej użycua )
//   4.   Typ - zawiera zestaw dozwolonych wartości i operacji
//        Obiekt Miejsce w pamięci w którym przechowywana jest wartość jakiegoś jakiegoś jakiegos typu
//        Wartosc - zbior bitow interpretowanych zgodnie z typenamem
//        zmienna to nazwany obiekt\
//5. constexpr - pozostawiono do obliczenia w czasie kompilacji

<<<<<<< HEAD
/*
//----------------------------------------------------------
    6. lista inicjalizacyjna :
    Vector()std::initalizer_list<int>);













//----------------------------------------------------------
*/
//mając tylko wskaźnik klasy bazowej nie wiemy jakie sładowe zawiera klasa  pochodna (nie wiemy jak je skopiować)
//mechanizm delete jest ogolny mozna stlumic dowoln a operacje
class Shape {

public :
    Shape(const Shape &s) = delete;
    Shape operator=(const Shape &s) = delete;

    Shape(Shape &&) = delete; // żadnych operacji przenoszenia
}

//




=======
/*------------------------------------------------------------Konstruktor i przypisanie kopiujący  */ 
Vector::Vector(const Vector &a)
    :elem {new double[a.size()]}, sz{a.size()}
    {
        for (int  i = 0; i !+ sz; ++i){
            elem[i] = a.elem[i];
        }

    }

Vector Vector::operator+(const Vector & a)
{
    if(a.size() != b.size()){
        throw Vector_size_mismatch();
    }
    Vector res (a.size());
    for(int i = 0; i != a.size(); ++i){
        
    }
}


/*--------------------------------------*/
unique_ptr -> wskaźnik posiadający obiekt, usunie obiekt gdy nie bedzie już używany tzn 
gdy wskaźnik wyjdzie poza zakres dostęponości. 
>>>>>>> 8efc68097fd3b02914da326716bcd203d8c22236
