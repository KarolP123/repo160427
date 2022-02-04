#include<iostream>
#include<cmath>

using namespace std;
//! Klasa MyLna */
class MyLna
{ 
//! Zmienne publiczne */
public:

    MyLna(double a = 0)  /*!<Metoda klasy MyLna */
    {
        mA =a;
        
    }
    MyLna(double x, double a = 0) /*!<Metoda klasy MyLna */ 
    {
        mX = x;
        mA = a;
    }
    
    MyLna(const MyLna &obj) /*!<Metoda klasy MyLna */ 
    {
        mX = obj.mX;
        mA = obj.mA;
    }
    ~MyLna() // Destruktor klasy MyLna *!/
    {
      mX = 0;
      mA = 0;
    }
    double value(double mX, double mA) /*<! Zwraca wartosc w otoczeniu punktu a */
    {
        
    }
    void setX(double) 
    {
       mX = x; 
    }
    double getX()
    {
        return mX; /*Zwraca mX */
    }
    void setA(double)
    {
        mA = a;
    }
    double getA()
    {
      return mA;  /* Zwraca mA */
    }
//! Zmienne prywatne */    
private:
double mX, /*<! double mX */
double mA  /*<! double mA */
        
};

//! main */
int main()
{

}
    
