#include <iostream>
using namespace std;
bool healthMill;
class Monk{
    int baseHealth = 365000;
    int agility, stamina;
    string specialization, monkName;
public:
    double health(){
        if(baseHealth * (double(stamina/6000)) > 1000000) {
            healthMill = true;
            return (baseHealth * (double(stamina / 6000)))/1000000;
        }
        else {
            healthMill = false;
            return baseHealth * (double(stamina / 6000));
        }
    }
    double damage(){return agility * 2.4;}
    string specName(){return specialization;}
    Monk(int, int, string, string);

};

Monk::Monk(int stam, int agil, string spec, string name):stamina(stam),
            agility(agil),specialization(spec),monkName(name){
    if (healthMill) {
        cout << name << "'s Health is " << health() << " million." << endl;
    }
    else{
        cout << name << "'s Health is " << health() << "." << endl;
    }
    cout << name << "'s DPS is " << damage() << "."<< endl;
    cout << name << "'s current specification is a " << specName() << " monk." << endl;
}
int main() {
    Monk Tyler(25000, 1245, "Brewmaster", "Tyler");
    Monk Jackson(12500, 3000, "Windwalker", "Jackson");
    return 0;
}