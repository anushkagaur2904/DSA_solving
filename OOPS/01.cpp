//Getters and Setters
//Static and Dynamic allocation of objects
#include <iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }
};

int main(){
    //Static allocation of object
    Hero h1;
    //using setter to set the value of health
    h1.setHealth(100);
    //using getter to get the value of health
    cout << "Health is: " << h1.getHealth() << endl;

    //Dyanmically allocation of object
    Hero *h2 = new Hero;
    cout<<"Level is "<<(*h2).level<<endl;
    cout<<"Health is"<<(*h2).getHealth()<<endl;

    //agar h2.getHealth() likhte toh compiler ko pata nahi hota ki h2 pointer hai ya object hai, isliye humein dereference operator * ka use karna padta hai...idhr toh h2 address store kar raha hai, toh humein us address pe jaake value ko access karna padta hai, isliye *h2 likhte hain...ab *h2 se humein object mil jayega, toh uske baad . operator ka use karke hum getHealth() function ko call kar sakte hain.
    
    //Alternative way to access members of a class using pointer is to use arrow operator (->)
    cout<<"Level is "<<h2->level<<endl;
    cout<<"Health is "<<h2->getHealth()<<endl;

    return 0;
}