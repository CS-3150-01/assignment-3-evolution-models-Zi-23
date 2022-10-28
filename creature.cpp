#include <stdio.h>
using namespace std;

class Actions{
    public:
        void run();
        void sleep();
        void eat();
}

class Environment{
    public:
        void updateWorld();
};

class Chances{
    float spawnChance;
    float deathChance;
    float reproduceChance;

    public:
        bool trySpawn(float spawnChance){
            return true;
        }
        bool tryDeath(float deathChance){
            return false;
        }
        bool tryReproduce(float reproduceChance){
            return true;
        }
};

class Animal: public Actions{
    int position;
    
    public:
        void setPosition(int newPosition){
            position = newPosition;
        }
        void getPosition(){
            return position;
        }
};

class creature: public Animal, public Chances, public Actions{
    private:
    creature createCreature(bool tryReproduce()){
        creature c;
        return c;
    }
    void die(bool tryDeath()){
        printf("The creature try to die");
    }
};

class world: public Environment, public Chances, public Actions{
    private:
    creature createCreature(bool trySpawn()){
        creature w;
        return w;
    }
};

int main(){
    
};