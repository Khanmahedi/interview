#include <bits/stdc++.h>
using namespace std;


class Base{
public:
    Base(){
        cout << "I am base constructor" << endl ;
    }
    virtual ~Base(){
        cout << "I am base destructor" << endl ;
    }
};

class Drived : public Base{
public:
    Drived(){
        cout << "I am Drived constructor " << endl ;
    }
    ~Drived(){
        cout << "I am Drived destructor " << endl ;
    }
} ;


int main() {

   Base *b = new Drived() ;
   delete b ;
    return 0;
}
/*
Output: 
I am base constructor
I am Drived constructor
I am Drived destructor
I am base destructor


if we write 
    Base b ;
    then its calling base destructor since it is not dynamic allocation
    but if we write
    Base *b = new Drive() ;
    it s a dynamic memory allocation
    now if we use delete b 
    then destructor will be call 
    and destructor of Base clss will be called
    if we use virtual keyword then Drived class destructor will be called
*/

// there is no virtual constructor in c++