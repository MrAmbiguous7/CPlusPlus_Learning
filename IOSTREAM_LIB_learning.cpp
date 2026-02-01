// This is Jacob Porter Banks' original work
// This is an attempt to learn the library of iostream, 



#include <iostream>
#include <string>


void CinFunction(int &a);
void CoutFunction(int a);
void CerrFunction(int a);


int main() {
    int newVar{0};
    CinFunction(newVar);
    CoutFunction(newVar);
    std::cout << "\n";
    CerrFunction(newVar);
    return 0;


}

// cin is an object of class istream  - and can be retrieved as formatted
//                                      data using extraction operater >>
//                                      or unformatted, user member functions
//                                      like read
void CinFunction(int &a) {
    std::cout << "This is cin, what is the input?(type int) : ";
    std::cin >> a;
}
// cout is an object of class ostream - can be written to ether as formatted
//                                      data using the insertion operator <<
//                                      or as unformatted data, using member
//                                      functions like write
void CoutFunction(int a) {
    std::cout << a;
}
// cerr is an object of class ostream - can be written to it either as formatted
//                                      data using insertion operator <<
//                                      or as unformatted data, using members
//                                      such as write
void CerrFunction(int a) {
    (a == 5) ? std::cerr << "Error: integer cannot be 5" : std::cout << "No error";

}


