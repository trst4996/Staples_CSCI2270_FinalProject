#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int test=0;
    game newgame;
    while(test==0){
        int test2=0;
        string player="n";
        cout<<"Do you wish to play a game(enter y for yes or n for no)"<<endl;
        cout<<"There will be cake at the end"<<endl;
        string play;
        getline(cin,play);
        if(play=="y"){
            cout<<"Stop"<<endl;
            cout<<"Who would cross the Bridge of Death must answer me these questions three, ere the other side he or she see."<<endl;
            cout<<"What...is your name?"<<endl;
            string name;
            getline(cin,name);
            cout<<"What...is your quest"<<endl;
            string nothing;
            getline(cin,nothing);
            int numb;
            numb=newgame.zero_one();
            if(numb==1){
                cout<<"What...is a color"<<endl;
                cout<<"Enter f for fish, d for dog, r for red"<<endl;
                string enter;
                getline(cin,enter);
                if(enter!="r"){
                    newgame.Thefallen(name,"not knowing what a color is");
                    cout<<"You are thrown into the volcano"<<endl;
                    cout<<endl;
                    cout<<"Now it's time to give tribute to the fallen"<<endl;
                    newgame.printThefallen();
                    cout<<endl;
                }else{
                    test2=1;
                    player=name;
                }
            }else{
                cout<<"What...is the airspeed velocity of an unladen swallow in miles per hour"<<endl;
                string airspeed;
                getline(cin,airspeed);
                if(airspeed=="24"){
                    test2=1;
                    player=name;
                }else if(airspeed=="What do you mean? An African or European swallow?"){
                    cout<<"I don't know that"<<endl;
                    cout<<"I am thrown into the volcano"<<endl;
                    cout<<endl;
                    newgame.TheGods(name,"knowing so much about swallows");
                    cout<<"List of the Gods"<<endl;
                    newgame.printthegods();
                    cout<<endl;
                }else{
                    newgame.Thefallen(name,"not knowing the airspeed velocity of an unladen swallow");
                    cout<<"You are thrown into the volcano"<<endl;
                    cout<<endl;
                    cout<<"Now it's time to give tribute to the fallen"<<endl;
                    newgame.printThefallen();
                    cout<<endl;
                }
            }
        }else if(play=="the cake is a lie"){
            newgame.TheGods("cake hater","eating cake");
            cout<<"You are right"<<endl;
            cout<<"You win"<<endl;
            cout<<"You are a god now"<<endl;
            cout<<endl;
            cout<<"The list of the gods"<<endl;
            newgame.printthegods();
            cout<<endl;
        }else{
            cout<<":("<<endl;
            test=1;
        }
        if(test2==1){
            int hp;
            hp=newgame.monsterHP();
            cout<<"You have pass the three questions.  Now you must do battle."<<endl;
            cout<<"The most foul, cruel, and bad-tempered rabbit is right in front of you"<<endl;
            cout<<"Good thing that you are a great magic user in my game."<<endl;
            cout<<"Type what spell you wish to use"<<endl;
            string spell;
            getline(cin,spell);
            int attack;
            attack=newgame.hashsumspell(spell);
            if(attack>=hp){
                test2=2;
                cout<<"You have killed the most foul, cruel, and bad-tempered rabbit"<<endl;
            }else{
                cout<<"Your spell did not work"<<endl;
                cout<<"You are now rabbit food"<<endl;
                newgame.Thefallen(player,"a rabbit");
                cout<<endl;
                cout<<"Now it's time to give tribute to the fallen"<<endl;
                newgame.printThefallen();
                cout<<endl;
            }
        }
        if(test2==2){

        }
    }
    return 0;
}
