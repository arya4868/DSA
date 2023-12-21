#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero{

 public:
   
    
    int health;
    char level;
    static int timeToComplete ;

     Hero(int health, char level){
        this->health = health;
        this->level = level;

    }
    Hero(){
        cout << "default constructor" << endl;
    }
    // copy constructor
    Hero(Hero & h){
        this->health = h.health;
        this->level = h.level;
    }
    
    void print(){
        cout << " print function " << endl;
        cout << " health is :- " << health << endl;
        cout << " level is :- " << level << endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level = ch;
    }

    static int random(){
        return timeToComplete;
    }



};

/*
int main(){

   // STATICALLY ALLOCATION
    Hero h1;

    h1.setHealth(56);
    cout << " size of h1 :- " << sizeof(h1);
    cout << " health is :- " << h1.getHealth() << endl;
    cout << " level is :- " << h1.level << endl;
    h1.print();
}
*/

/*
// DYNAMICALLY ALLOCATION 

int main(){

    Hero *h = new Hero;

    h->setHealth(67);

    cout << (*h).level << endl;
    cout << (*h).getHealth() << endl;
    cout << h->level << endl;
    cout << h->getHealth() << endl;
}
*/

// int main(){
// cout << " hiii" << endl;
// Hero ramesh();
// cout << " hello" << endl;
// Hero *h = new Hero();
// }

/*
int main(){
    Hero h1(56, 'A');

    Hero *h2 = new Hero(h1);

    cout << h2->getHealth() << endl;
    cout << h2->getLevel() << endl;
}
*/

/*


// COPY ASSIGNMENT OPERATOR
    int main(){
        Hero *h1 = new Hero(67 ,'s');
        Hero *h2 = new Hero(89, 'k');

        *h1 = *h2;

        h2->print();
        h1->print();
    }

*/
    int Hero::timeToComplete = 8;

// Static keyword
// int main(){
//     Hero h1;
//     cout << Hero::timeToComplete << endl;

//     cout << h1.timeToComplete << endl; // not recommended 

//     cout << Hero::random() << endl;
// }

/*
// Encapsulation

class Employee{
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return age;
    }
};

int main(){
    Employee e1 ;

}
*/

/*

// INHERITANCE

class Human{

public:
    int height;
    int weight;
    int leg;
    int eye;

   // private:
    int age;

    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }

};

class male : protected Human{

    public:
    string name;
    
    void sleep(){
        cout << " male is sleeping" << endl;
    }
    int getHeight(){
        return height;
    }
};

int main(){
    male m1;
   // m1.setAge(56);
   // cout << m1.age << endl;
   cout << m1.getHeight() << endl;
}

*/

/*

// TYPES OF INHERITANCE 
// 1. SINGLE LEVEL INHERITANCE

class Animal{

    public:
    int weight;
    int height;

    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog d1;
    d1.speak();
}
*/

/*

// MULTILEVEL INHERITANCE

class Animal{

    public:
    int weight;
    int height;

    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog : public Animal{

};



class JermanShephard : public Dog{

};
int main(){
    // Dog d1;
    // d1.speak();

    JermanShephard j1;
    j1.speak();
}

*/

/*

// MULTIPLE INHERITANCE

class Animal{

    public:
    int weight;
    int height;

public:
    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog{

    public:
    void DogSpeak(){
        cout << " Dog class method" << endl;
    }

};
class BigCat : public Animal{

    public:
    void CatSpeak(){
        cout << " BigCat class method " << endl;
    }
};

class JermanShephard : public Dog, public BigCat{

};


int main(){
    // Dog d1;
    // d1.speak();

    JermanShephard j1;
    
    j1.DogSpeak();
    j1.speak();

    
}

*/

/*

// HEIRARCHY INHERITANCE

class Animal{

    public:
    int weight;
    int height;

public:
    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog: public Animal{

    public:
    void DogSpeak(){
        cout << " Dog class method" << endl;
    }

};
class Cat : public Animal{

    public:
    void CatSpeak(){
        cout << " BigCat class method " << endl;
    }
};

int main(){
    Dog d1;
    Cat c1;

    d1.speak();
    c1.speak();
}


*/

/*

// HYBRID INHERITANCE

class Animal{

    public:
    int weight;
    int height;

public:
    void speak(){
        cout << " speaking " << endl;
    }
};

class Dog: public Animal{

    public:
    void DogSpeak(){
        cout << " Dog class method" << endl;
    }

};
class BigCat {
    public:
    void BigcatSpeak(){
        cout << " Bigcat is speaking "<< endl;
    }
};

class Cat : public Animal, public BigCat{

    public:
    void CatSpeak(){
        cout << " BigCat class method " << endl;
    }
};
class jermanSephard : public Animal{

};


int main(){
    jermanSephard j1;
    j1.speak();

    Cat c1;
    c1.BigcatSpeak();

}
*/

/*

// INHERITANCE AMBIGUITY

class A{
    public:
    void speak(){
        cout << " A is speaking " << endl;
    }
};
class B {
    public:
    void speak(){
        cout << " B is speaking " << endl;
    }
};

class C : public A, public B{


};

int main(){
    C c1;
    c1.A::speak();
    c1.B::speak();
}
*/

/*

// POLYMORPHISM

// 1. COMPILE TIME :- Method overloading 

class A{
    public:
    void speak(){
        cout << " first function of A" << endl;
    }
    void speak(int x){
        cout << " seconf func of A with x is :- " << x << endl;
    }
};
int main(){
    A a1;
    a1.speak();
    a1.speak(5);
}

*/

/*

// COMPILE TIME :- Operator overloading 

class B{
    public:
    int x;
    int y;

    public:
    void add(int x, int y){
        cout << x+y << endl;
    }

    void operator+ (B &obj){
        int val1 = x;
        int val2 = obj.x;

        cout << "operator is called " << val1 - val2 << endl;
    }

    void operator() (){
        cout << " main operator hun : -"<< this->x << endl;
    }

};
int main(){
    B b1, b2, b3;
    b1();

    b2.x = 5;
    b3.x = 1;

    b2 + b3;



}

*/

/*

// RUNTIME POLYMORPHISM

class Animal{
    public :
    void speak(){
        cout << " speaking" << endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout << " barking " << endl;
    }
};

int main(){
    Dog d1;
    d1.speak();


}
*/


// ABSTRACTION : -Implementation hiding 












