#include <bits/stdc++.h>
#include <string>
using namespace std;

class Player
{
public:
    int health;
    int strength;
    int attackpower;

    

    Player(int health, int strength, int attackpower)
    {
        this->health = health;
        this->strength = strength;
        this->attackpower = attackpower;
    }

    int attack(int dice)
    {
        return attackpower * dice;
    }

    int defend(int dice)
    {
        return strength * dice;
    }
    
};


class Game
{

public:
    //Properties
    Player& p1;
    Player& p2;
    bool currentTurn;
    
    //Functions
    Game(Player &player1, Player &player2) : p1(player1) , p2(player2)
    {
        cout << "Game starts between player 1 and player 2." << endl;
        currentTurn = determine_first_turn();
    }
    
    // if true, player1 goes
    // if false, player2 goes
    
    bool determine_first_turn() {
        if(p1.health < p2.health) {
            cout << "Player1 goes first." << endl;
            return true;
        } else {
            cout << "Player2 goes first." << endl;
            return false;
        }
    }

    void battle()
    {
        while(p1.health > 0 && p2.health > 0) {
            Player& attacker = currentTurn ? p1 : p2;
            Player& defender = currentTurn ? p2 : p1;

            int attackDice = 1 + rand() % 6;
            int defenseDice = 1 + rand() % 6;
            
            int damage = attacker.attack(attackDice);
            int defense = defender.defend(defenseDice);

            if(damage > defense) {
                defender.health -= (damage - defense);
                cout << "Damage dealt: " << (damage - defense) << endl;
            }

            // Switch turns
            currentTurn = !currentTurn;
        }

        // Determine winner
        if(p1.health > 0) 
            cout << "Player1 wins!" << endl;
        else 
            cout << "Player2 wins!" << endl;
    }
};


int main(){

    srand(time(0));
    
    Player p1(250, 100, 30);
    Player p2(249, 110, 30);
    
    Game game1(p1,p2);
    game1.battle();
    
    return 0;
}