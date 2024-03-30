#include <iostream>

using namespace std;

class Line {
   public:
      int getLength( void );
      Line( int len );             // simple constructor
      Line( const Line &obj);  // copy constructor
      ~Line();                     // destructor

   private:
      int *ptr;
};

// Member functions definitions including constructor
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;
   
   // allocate memory for the pointer;
   ptr = new int;
   *ptr = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   ptr = new int;
   *ptr = *obj.ptr; // copy the value
}

Line::~Line(void) {
   cout << "Freeing memory!" << " " <<*ptr << endl;
   delete ptr;
}

int Line::getLength( void ) {
   return *ptr;
}

void display(Line obj) {    /// variable object pass korci tarmane eta copy hoyeche so copy constructor call hobe 
   cout << "Length of line : " << obj.getLength() <<endl;
}

void fun(Line obj){

}
// অবজেক্ট ফাংশনের মধযে পাস করলেও কপি কন্সট্রাকটর কল হবে । 
// ফাংশনের পযারামিটার যে অবজেক্ট পাস করছি অটাও ফাংশন শেষে ডেস্ট্রাকটর কল হবে ।
// Main function for the program
int main() {

   Line line1(10);

   Line line2 = line1 ; // This also calls copy constructor

   display(line1); 
   Line ln(11) ;
   fun(line1) ;
   Line ln1(20) ;    // সবার শেষে যেটা সেটা আগে ডেস্ট্রাক্টর কল হবে তারপর নিচ থেকে উপরের গুলা ।
      // display(line2);

   return 0;
}