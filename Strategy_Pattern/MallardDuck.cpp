//
// Created by sunc on 18-10-20.
//

#include "MallardDuck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
#include <memory>
MallardDuck::MallardDuck() {
    FlyWithWings *f_ptr = new FlyWithWings();
    QuackNormal  *q_ptr = new QuackNormal();
    setquackBehavior(q_ptr);
    setFlyBehavior(f_ptr);
//    flyBehavior_ptr = std::make_shared<FlyWithWings>();
//    quackBehavior_ptr = std::make_shared<QuackNormal>();
}

MallardDuck::~MallardDuck(){

}

void MallardDuck::display() {
    std::cout<<"I am a MallardDuck."<<std::endl;
}