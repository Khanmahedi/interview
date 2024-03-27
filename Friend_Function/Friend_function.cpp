#include<bits/stdc++.h>
using namespace std;


class A{
     int a , b ;
     void get(){
        cout << a << " and " << b << endl ;
        return ;
     }
     void friend fun() ;
};

class B{
    int b , c ;
    void get(){
        cout << b << " and  " << c << endl ;
        return ;
    }
    void friend fun() ;                    // a function can be friend function of multiple class 
};

void fun(){
    A ob ;
    B ob1 ;
    ob.a = 5 ;   // we can access private member of class A since fun function is a friend function of this class  
    ob.b = 6 ;   // Hence friend function violates the rule of encapsulation C++ is not completely object oriented
    ob.get() ;
    ob1.b = 7 ;
    ob1.c = 8 ;
    ob1.get() ;
}


int main(){
  
        fun() ;

}
