#include <iostream>
#include <string>
using namespace std;
class gameObject
{
private:
    string name;
    int x;
    int y;
    public:
    gameObject(){}
    gameObject(string name, int x, int y)
    {
        setName(name);
        setX(x);
        setY(y);
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()  
    {
        return name;
    }
    virtual void draw()
    {
        cout << "Drawing " << getName() << " at " << getX() << ", " << getY() << endl;
    }


};
class Player:public gameObject
{
    int health;

    public:
    Player(){}
    Player(string name, int x, int y, int health):gameObject(name, x, y)
    {
        setHealth(health);
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    int getHealth()
    {
        return health;
    }
    void draw() override
    {
        cout << "Drawing " << getName() << " at " << getX() << ", " << getY() << endl;
        cout<< "Health: "<<getHealth()<<endl;
    }
    friend bool operator==(Player& p1, Player& p2);
};
class Enemy:public gameObject
{
    int demage;

    public:
    Enemy(){}
    Enemy(string name, int x, int y, int demage):gameObject(name, x, y)
    {
        setDemage(demage);
    }
    void setDemage(int demage)
    {
        this->demage = demage;
    }
    int getDemage()
    {
        return demage;
    }
    void draw() override
    {
       
        gameObject::draw();
        cout<< "Demage: "<<getDemage()<<endl;
    }


};
 class Powerup:public gameObject
 {
    int effect;

    public:
    Powerup(){}
    Powerup(string name, int x, int y, int effect):gameObject(name, x, y)
    {
        setEffect(effect);
    }
    void setEffect(int effect)
    {
        this->effect = effect;
    }
    int getEffect()
    {
        return effect;
    }
    void draw() override
    {
        
        gameObject::draw();
        cout<< "Effect: "<<getEffect()<<endl;
    }

 };
 class Game
 {
        gameObject *arr[3];
        public:
        Game(){}
        Game(gameObject *arr[3])
        {
            for(int i = 0; i < 3; i++)
            {
                this->arr[i] = arr[i];
            }
        }
        void drawAll()
        {
            for(int i = 0; i < 3; i++)
            {
                arr[i]->draw();
            }
        }
    };
    bool operator==(Player& p1, Player& p2)
    {
        if(p1.getHealth() == p2.getHealth())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

int main()
{
    cout<<"\n### 22k-4489 ###\n### Abdullah Shafiq ###"<<endl;
    Player p1("Player 1", 10, 20, 100);
    Enemy e1("Enemy", 30, 40, 50);
    Powerup pu1("Powerup", 50, 60, 70);
    gameObject *arr[3] = {&p1, &e1, &pu1};
    Game g1(arr);
    g1.drawAll();
    // Creating player 2 form comapring health.
    cout<<"\nComparing Health:"<<endl;
    Player p2("Player 2", 10, 20, 200);
    cout<<endl;
    p1.draw();
    p2.draw();
    if(p1 == p2)
    {
        cout << "Both player have same health" << endl;
    }
    else
    {
        cout << "Both player have different health" << endl;
    }
    Player p3("Player 3", 10, 20, 100);
    cout<<endl;
    p1.draw();
    p3.draw();
    if(p1 == p3)
    {
        cout << "Both player have same health" << endl;
    }
    else
    {
        cout << "Both player have different health" << endl;
    }
    
    return 0;
}