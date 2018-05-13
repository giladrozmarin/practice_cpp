#include <iostream>
using namespace std;
int main() {
    
    int *p1;
    int *p2;
    int *p3;
    int *p4;
    //shadow copy example
    p1 = new int (5);
    cout << "p1 add: " << p1;
    p2=p1;//this is example of a shadow copy now p1 and p2 point on the same memory adress like p1 
    cout << "\np2 add: " << p2;
    *p1=3;
    cout<<"\np2= "<<*p2;//now p2 point on 3 also 
    
    //deep copy example
    p3 = new int (5);
    p4 = new int (*p3);//this is example of a deep copy now i take all value from  p3 and put in p4 adress 
    cout << "\np3=" << *p3<<" add: "<<p3;
    cout << "\np4=" << *p4<<" add: "<<p4;
    *p3 = 77;
    cout << "\np3=" << *p3<<" add: "<<p3;
    cout << "\np4=" << *p4<<" add: "<<p4;
    return 0;
}
