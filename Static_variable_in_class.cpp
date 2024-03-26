#include<bits/stdc++.h>
using namespace std;


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

};

int Employe :: count ;

int main(){
    Employe one ;
    one.setId() ;
    one.getId() ;
    Employe two ;
    two.setId() ;
    two.getId() ;
}