#include <iostream>
using namespace std;
class Monk{
    int baseHealth = 365000;
    int agility, stamina;
    string specialization, monkName;
public:
    double health(){ return baseHealth * (stamina * 0.0012); }
    double damage(){return agility * 2.4;}

    string specName(){return specialization;}
    Monk(int, int, string, string);

};

Monk::Monk(int stam, int agil, string spec, string name):stamina(stam),
            agility(agil),specialization(spec),monkName(name)
{
    if(health() > 1000000){cout << name << "'s Health is " << (health()/1000000) << " million HP." << endl;}
    else{cout << name << "'s Health is " << health() << " HP." << endl;}
    cout << name << "'s DPS is " << damage() << " damage per second."<< endl;
    cout << name << "'s current specification is a " << specName() << " monk." << endl;
}
int main() {
    Monk Schwifty1sh0t(5000, 1263, "Windwalker", "Schwifty1sh0t");
    return 0;
}