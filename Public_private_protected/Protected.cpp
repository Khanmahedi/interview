#include <iostream>

using namespace std;

class A{
   protected:
      int a , b ;
   protected:
      void fun1(){
         cout << a << " " << b << endl ;
      }
};

class B : public A{
    public :
    void fun(){
     a = 5 ;
     b = 6 ;
                   // ekta class er protected member amra child class theke access korte pari 
                   // je class er protected member oi class er outside a kno oi class er object create kore amra
                   // oi protected member access korte pari na . child class er object theke access korte pari
                  // jemon ekhan A ob, ob.a = 5 dile error
                  
    }
    void fun2(){
      fun1() ;
      cout << a << " " << b << endl ;
    }
};

int main() {

   B b ;
   b.fun() ;
   b.fun2() ;
   A a ;
   return 0;
}