#include<bits/stdc++.h>
using namespace std;

// why we need static function?
// actually a static function can only access static variable
// object er dorkar hoy na run korte 



class Employe{
    int id ;   // by default private
    static int count ;
public:
     void setId(){ 
        count++ ;  
        cin >> id ;
        return ;
    }  
    void getId(){
        cout << "This is Employe id : " << id << endl ;
        cout << "Employe number " << count << endl ;
        return ;
    }
  
    static fun(){
        cout << "this is count " << count << endl ;
    }

};

int Employe :: count ;

int main(){
    Employe one ;
    one.setId() ;
    one.getId() ;
    Employe::fun() ;
    Employe two ;
    two.setId() ;
    two.getId() ;
    Employe::fun() ;
}