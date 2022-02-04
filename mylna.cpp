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
      double lnx = log(mA); /*<! logarytm naturalny z mA */
        
      for(int i=0; i<10; i++) /* petla 10 wyrazów */
      {
        lnx+=pow(-1,i)/(pow(mA,i+1))*pow((mX-mA),i+1)/(i+1);
      }
        return lnx; /*zwraca 10 pierwszych wyrazow */ 
    }
    void setX(double) 
    {
       mX = x;  /* mX = x */
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
    
