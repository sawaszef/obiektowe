#include <iostream>

class First
{
private:
    int a;
public:
    First(int a): a(a){};

    void print () const {
        std::cout << "a = " << a << std::endl;
    }

    ~First(){};
};



class Second : public First
{
private:
    int b;
public:
    Second (int a, int b): First(a), b(b){};

    void print () const{
        First::print();
        std::cout <<"b = " << b << std::endl;
    }

    ~Second(){};
};

class Third : public Second
{
private:
    int c;
public:
    Third (int a, int b, int c) : Second(a,b), c(c){};

    void print () const{
        Second::print();
        std::cout << "c = " << c << std::endl;
    }

    ~Third(){};
};



int main()
{
    First f(1);
    f.print();

    Second s(1, 2);
    s.print();

    Third t(1, 2, 3);
    t.print();

    return 0;
}