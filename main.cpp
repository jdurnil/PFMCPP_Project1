#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Employee
//  action 1: Performs Task
Employee.performTask();

//  action 2: Clocks in
Employee.clockIn();

//  action 3: Rotates Employee
Employee.rotate();

//  2)
//  Noun: Student
//  action 1: Leaves home and heads to school
Student.goToSchool();

//  action 2: Student goes from homework to class
Student.goToClass();

//  action 3: Student does homework
Student.doHomework();

//  3) 
//  Noun: Bus Driver
//  action 1: Starts the bus
BusDriver.startBus();

//  action 2:Stops at bus stop
BusDriver.makeStop();

//  action 3: heads to station
BusDriver.goToStation();

//  4) 
//  Noun: Doctor
//  action 1: Performs checkup
Doctor.performCheckup();

//  action 2: Orders bloodwork
Doctor.orderBloodwork();

//  action 3: Performs surgery
Doctor.performSurgery();

//  5)
//  Noun: Elevator
//  action 1: moves to specified floor
Elevator.gotoNthFloor();

//  action 2: Stops at floor
Elevator.stop();

//  action 3: opens door
Elevator.open();

//  6)
//  Noun: Fireman
//  action 1: puts on fire equipment
Fireman.getSuitedUp();

//  action 2: slides down firehouse pole
Fireman.slideDownPole();

//  action 3: outs out fire
Fireman.putOutFire();

//  7)
//  Noun: ConvenienceClerk
//  action 1: Stocks shelves
ConvenienceClerk.stockShelves();

//  action 2: rings out customer
ConvenienceClerk.ringUpCustomer();

//  action 3: takes down thief
ConvenienceClerk.takeDownThief();

//  8)
//  Noun: Thief
//  action 1: puts on mask
Thief.putOnMask();

//  action 2: calls get away driver
Thief.callDriver();

//  action 3: robs convenience store
Thief.robConvenienceStore();

//  9)
//  Noun: Marine
//  action 1: goes to boot camp
Marine.goToBootCamp();

//  action 2: flies jet
Marine.flyJet();

//  action 3: salutes captain
Marine.saluteCaptain();

//  10)
//  Noun: Musician
//  action 1: plays instrument
Musician.playInstrument()

//  action 2: writes song
Musician.writeSong()

//  action 3: reads music
Musician.readMusic()



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
