#include <iostream>

class Wielokat{
private:
    int base;
public:
    Wielokat(int a): base(a){};

    int getBase() const{ return base;}
    virtual void calc_area(){}

    ~Wielokat(){};
};

class Trojkat : public Wielokat{
private:
    int height;
public:
    Trojkat(int a, int b) : Wielokat(a), height(b){};

    void calc_area(){
        double area = height * Wielokat::getBase() /(double)2;
        std::cout << "The area of the triangle is equal to " << area <<std::endl;
    }

    ~Trojkat(){};
};

class Prostokat : public Wielokat{
private:
    int height;
public:
    Prostokat(int a, int b) : Wielokat(a), height(b){};

    void calc_area(){
        double area = Wielokat::getBase() * height;
        std::cout << "The area of the rectangle is equal to " << area << std::endl;
    }

    ~Prostokat(){};
};

class Kwadrat : public Prostokat{
public:
    Kwadrat(int a):Prostokat(a, a){};
    ~Kwadrat(){};
};

int main() {

    Wielokat a(2);
    Trojkat b(3, 5);
    Prostokat c(5, 10);
    Kwadrat d(9);

    a.calc_area();
    b.calc_area();
    c.calc_area();
    d.calc_area();

    return 0;
}
