#include <iostream>
bool running = true;
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
    string input;
    cout << "What is your Monk's name?" << endl;
    cin >> input;
    Monk Schwifty1sh0t(5000, 1263, "Windwalker", input);
    return 0;
}