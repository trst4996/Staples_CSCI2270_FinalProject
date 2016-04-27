#include "game.h"
#include <iostream>
#include <cstdlib>

using namespace std;

game::game()
{
    headfallen=NULL;
    headgod=NULL;
    test;
    godanswer;
    test2;
    //ctor
}

game::~game()
{
    //dtor
}


int game::hashsumspell(string spell)
{
    int sum=0;
    for(int i=0;i<spell.size();i++){
        sum=sum+spell[i];
    }
    sum=sum%100;
    if(sum==0){
        return 100;
    }else{
        return sum+10;
    }
}

void game::Thefallen(string name, string how)
{
    listname *node=new listname;
    node->name=name;
    node->how=how;
    node->previous=NULL;
    node->next=NULL;
    listname *tmp=new listname;
    tmp=headfallen;
    if(headfallen==NULL){
        headfallen=node;
    }else{
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next=node;
        node->previous=tmp;
    }
}

void game::TheGods(string name, string how)
{
    listname *node=new listname;
    node->name=name;
    node->how=how;
    node->previous=NULL;
    node->next=NULL;
    listname *tmp=new listname;
    tmp=headgod;
    if(headgod==NULL){
        headgod=node;
    }else{
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next=node;
        node->previous=tmp;
    }
}

void game::printThefallen()
{
    listname *tmp=new listname;
    tmp=headfallen;
    while(tmp!=NULL){
        cout<<tmp->name<<" was killed by "<<tmp->how<<endl;
        tmp=tmp->next;
    }
}

void game::printthegods()
{
    listname *tmp=new listname;
    tmp=headgod;
    while(tmp!=NULL){
        cout<<tmp->name<<" became a god by "<<tmp->how<<endl;
        tmp=tmp->next;
    }
}

int game::zero_one()
{
    if(test%2==0){
        test=1;
    }else{
        test++;
    }
    return test;
}

int game::monsterHP()
{
    int hp;
    hp=rand()%100+1;
    return hp;
}

int game::sword()
{
    int attack;
    attack=rand()%70+10;
    return attack;
}

int game::sing()
{
    int song;
    song=rand()%100+50;
    return song;
}

int game::answer()
{
    if(test2==1){
        int what;
        what=rand()%10+1;
        godanswer=godanswer+what;
        return godanswer;
    }else{
        test2=1;
        return 42;
    }
}



