#include <iostream>
using namespace std;

class Animal
{
    public :
    
    void AnimalTalk()
    {
      cout << "i am animal \n";
    }
};
//............
class Dog : virtual public Animal
{
   /* public :
    
    void DogTalk()
    {
      cout << "i am dog \n";
    }*/
};

//............
class MaleDog : virtual public Animal
{
   /* public :
    
    void DogTalk()
    {
      cout << "i am dog \n";
    }*/
};

//............
class WolfBoxer : public MaleDog , public Dog 
{
   
};
int main() {
    
   WolfBoxer neta;
  // neta.Dog::DogTalk();
  // neta.Animal::AnimalTalk();
  neta.AnimalTalk();
    return 0; 
    
}
