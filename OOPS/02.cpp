//Constructor and Destructor
//Default Constructor
//Parameterized Constructor
#include <iostream>
using namespace std;

class Hero{
    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    Hero(int health){
        cout<<"Parameterized Constructor called"<<endl;
    }
};
int main(){
    cout<<"HI"<<endl;
    Hero h1;
    Hero *h2 = new Hero;
    Hero *h3 = new Hero();
    cout<<"BYE"<<endl;
    return 0;
}