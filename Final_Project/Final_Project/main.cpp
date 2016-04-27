#include <iostream>
#include "game.h"
#include <sstream>

using namespace std;

int main()
{
    int test=0;
    game newgame;
    while(test==0){
        int test2=0;
        string player="n";
        cout<<"Do you wish to play a game to become a god(enter y for yes or n for no)"<<endl;
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
            cout<<"Good thing that you are a great magic using samurai who also can sing."<<endl;
            cout<<"What do you wish to use"<<endl;
            cout<<"m for magic, s for sword, lalala for your great song"<<endl;
            string attack;
            getline(cin,attack);
            if(attack=="m"){
                cout<<"Type what spell you wish to use"<<endl;
                string spell;
                getline(cin,spell);
                int magic;
                magic=newgame.hashsumspell(spell);
                if(magic>=hp){
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
            }else if(attack=="s"){
                cout<<"You attack with your mad skills and..."<<endl;
                int sword;
                sword=newgame.sword();
                if(sword>=hp){
                    test2=2;
                    cout<<"You have killed the most foul, cruel, and bad-tempered rabbit"<<endl;
                }else{
                    cout<<"You died"<<endl;
                    cout<<"You are now rabbit food"<<endl;
                    newgame.Thefallen(player,"a rabbit");
                    cout<<endl;
                    cout<<"Now it's time to give tribute to the fallen"<<endl;
                    newgame.printThefallen();
                    cout<<endl;
                }
            }else if(attack=="lalala"){
                cout<<"Now type the words you wish to sing"<<endl;
                string nothing;
                getline(cin,nothing);
                int song;
                song=newgame.sing();
                if(song>=hp){
                    test2=2;
                    cout<<"The most foul, cruel, and bad-tempered rabbit runs away from your terrible song"<<endl;
                }else{
                    cout<<"That was so beautiful, but the rabbit kills you anyway"<<endl;
                    cout<<"You are now rabbit food"<<endl;
                    newgame.Thefallen(player, "a rabbit");
                    cout<<endl;
                    cout<<"Now it's time to give tribute to the fallen"<<endl;
                    newgame.printThefallen();
                    cout<<endl;
                }
            }else{
                cout<<"What are you doing?!!!!!!"<<endl;
                cout<<"The rabbit has killed you"<<endl;
                cout<<"You are now rabbit food"<<endl;
                newgame.Thefallen(player, "a rabbit");
                cout<<endl;
                cout<<"Now it's time to give tribute to the fallen"<<endl;
                newgame.printThefallen();
                cout<<endl;
            }
        }
        if(test2==2){
            cout<<"Congrats!!!"<<endl;
            cout<<"but now you must take the final test"<<endl;
            cout<<"What...is the ultimate answer to life, the universe and everything"<<endl;
            string answer;
            getline(cin,answer);
            int answer2;
            answer2=newgame.answer();
            string result;
            ostringstream convert;
            convert<<answer2;
            result=convert.str();
            if(answer==result){
                cout<<"You are now a god"<<endl;
                newgame.TheGods(player,"the power of friendship");
                cout<<"You win, but every time you play the answer has change"<<endl;
                cout<<endl;
                cout<<"The list of the gods"<<endl;
                newgame.printthegods();
                cout<<endl;
            }else{
                cout<<"That is not the correct answer"<<endl;
                cout<<"You lose and die by the power of friendship"<<endl;
                newgame.Thefallen(player, "by the power of friendship");
                cout<<endl;
                cout<<"Now it's time to give tribute to the fallen"<<endl;
                newgame.printThefallen();
                cout<<endl;
            }
        }
    }
    return 0;
}
