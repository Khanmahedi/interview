#include <bits/stdc++.h>
using namespace std;


class Base{
    public:
     virtual void fun(){                                    // See without using virtual keyword
            cout << "I am in base class bro " << endl ;
            return;
        }
};

class Derived : public Base{
public:
     void fun(){
        cout << "I am in Derived class bro" << endl ;
     }
};
class NewDrived : public Derived{
   public:
    void fun(){
        cout << "I am in new drived class bro" << endl ;
    }
};

int main() {

   Base *d = new NewDrived();
   d->fun() ;
   Base *b = new Derived() ;
   b->fun() ;

    return 0;
}
