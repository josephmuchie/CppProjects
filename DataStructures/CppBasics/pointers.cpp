#include <iostream>

using namespace std;

class ComplexNumber{
    private:
        int real;
        float imaginary;
    
    public:
        ComplexNumber(){
            cout<<"default constructor called.."<<endl;
        }
        ComplexNumber(int r, float i){
            real = r;
            imaginary = i;
        }
        void displayData(){
            cout<<"Complex number is: "<<real<<" + " <<imaginary<<"i"<<endl<<endl;
        }
        int getRealPart(){
            return real;
        }
        float getImaginaryPart(){
            return imaginary;
        }
        ~ComplexNumber(){
            cout<<"Destructor called.."<<endl;
        }
};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2){
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();
    ComplexNumber temp(r,i);
    return temp;
}

int main()
{
    ComplexNumber comp1(3,8),comp2(2,4), comp3;
    comp1.displayData();
    comp2.displayData();

    cout<<"Addition of comp1 & comp2"<<endl;
    comp3 = add2number(comp1,comp2);
    comp3.displayData();

    cout<<"pointer to object "<<endl;
    ComplexNumber *ptr1;
    ptr1 = &comp3;
    ptr1->displayData();
    cout<<ptr1<<endl;

    ptr1 = &comp2;
    ptr1->displayData();
    cout<<ptr1<<endl;
    return 0;
}