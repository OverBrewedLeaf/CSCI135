#include "Competition.h"
#include <cstdlib> 
#include <iostream> 
#include <iomanip> 

Competition::Competition(){
   srand(1); 
   rabbit = new Hare; 
   tor = new Tortoise;
   rd = new Road;
}

Competition::Competition(Hare* rabbit, Tortoise* tor, int length)
{
    srand(1);
    this->rabbit = new Hare(rabbit->getPattern(), rabbit->getPatternLength(), rabbit->getPosition());
    this->tor = new Tortoise(tor->getPattern(), tor->getPatternLength(), tor->getPosition());
    rd = new Road(length);
}

Competition::~Competition()
{
    delete rabbit;
    rabbit = 0;
    delete tor;
    tor = 0;
    delete rd;
    rd = 0;
}

void Competition::start() 
{
    int lastBlock = rd->getLastBlock();
    int round = 1;

    while(rabbit->getPosition() < lastBlock && tor->getPosition() < lastBlock){
        rabbit->move();
        tor->move();

        if(rabbit->getPosition() < 0){
            rabbit->setPosition(0);
        }
        else if(rabbit->getPosition() > lastBlock){
            rabbit->setPosition(lastBlock);
        }
        if(tor->getPosition() < 0){
            tor->setPosition(0);
        }
        else if(tor->getPosition() > lastBlock) {
            tor->setPosition(lastBlock);
        }
        rd->mark(rabbit->getPosition(), 'H');
        rd->mark(tor->getPosition(), 'T');

        std::cout << std::setw(3) << round << " ";
        std::cout << rd->toString() << std::endl;

        if(rabbit->getPosition() == tor->getPosition())
            std::cout << "Ouch, Tortoise bites Hare." << std::endl;
        round++;
        rd->mark(rabbit->getPosition(), ' ');
        rd->mark(tor->getPosition(), ' ');
    }
    if (rabbit->getPosition() == lastBlock){
        std::cout << "Yuck, hare wins." << std::endl;
    }
    if (tor->getPosition() == lastBlock){
        std::cout << "Yay!!! tortoise wins!" << std::endl;
    }
}