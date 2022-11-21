#include <iostream>
using namespace std;
class marks
{
public:
    int phy, che, math;
    marks()
    {
        phy = 0;
        che = 0;
        math = 0;
    }
    ~marks()
    {
        cout << "Destructor has been invoked\n";
    }
    void getdata();
};
class total : public marks
{
public:
    int total;
    float percentage;
    void sum();
    void display();
};
void marks ::getdata()
{
    cout << "Enter Physics Marks: ";
    cin >> phy;
    cout << "Enter Chemistry Marks: ";
    cin >> che;
    cout << "Enter Maths Marks: ";
    cin >> math;
}
void total ::display()
{
    cout << "Marks in Physics: " << phy;
    cout << "\nMarks in Chemistry: " << che;
    cout << "\nMarks in Maths: " << math;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "\n";
}
void total::sum()
{
    total = phy + che + math;
    percentage = total / 3;
}
class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};
void area(int side)
{
    cout << "Area of square is " << side * side << "\n";
}
void area(float radius, float pi)
{
    cout << "Area of circle is " << radius * radius * pi << "\n";
}
int main()
{
    total student1;
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;

    int n = 1, ch;
    while (n == 1)
    {
        printf("1. Constructor , Destructor & Inheritance\n2. Operator Overloading\n3. Function Overloading\n4. Exit\nEnter your Choice: ");
        cin >> ch;
        switch (ch)
        {
        case 1:
            student1.getdata();
            student1.sum();
            student1.display();
            break;
        case 2:
            c3.print();
            break;
        case 3:
            area(4);
            area(6.2 ,3.14);
            break;
        case 4:
            exit(0);
        }
        cout << "Press 1 to continue || 0 to exit: ";
        cin >> n;
        if (n == 0)
        {
            exit(0);
        }
    }
    return 0;
}

