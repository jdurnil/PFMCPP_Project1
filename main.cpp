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
employee.performTask();

//  action 2: Clocks in
employee.clockIn();

//  action 3: Rotates Employee
employee.rotate();

//  2)
//  Noun: Student
//  action 1: Leaves home and heads to school
student.goToSchool();

//  action 2: Student goes from homework to class
student.goToClass();

//  action 3: Student does homework
student.doHomework();

//  3) 
//  Noun: Bus Driver
//  action 1: Starts the bus
busDriver.startBus();

//  action 2:Stops at bus stop
busDriver.makeStop();

//  action 3: heads to station
busDriver.goToStation();

//  4) 
//  Noun: Doctor
//  action 1: Performs checkup
doctor.performCheckup();

//  action 2: Orders bloodwork
doctor.orderBloodwork();

//  action 3: Performs surgery
doctor.performSurgery();

//  5)
//  Noun: Elevator
//  action 1: moves to specified floor
elevator.gotoNthFloor();

//  action 2: Stops at floor
elevator.stop();

//  action 3: opens door
elevator.open();

//  6)
//  Noun: Fireman
//  action 1: puts on fire equipment
fireman.getSuitedUp();

//  action 2: slides down firehouse pole
fireman.slideDownPole();

//  action 3: outs out fire
fireman.putOutFire();

//  7)
//  Noun: ConvenienceClerk
//  action 1: Stocks shelves
convenienceClerk.stockShelves();

//  action 2: rings out customer
convenienceClerk.ringUpCustomer();

//  action 3: takes down thief
convenienceClerk.takeDownThief();

//  8)
//  Noun: Big wave surfer
//  action 1: paddles out
bigWaveSurfer.paddleOut();

//  action 2: catches wave
bigWaveSurfer.catchWave();

//  action 3: waxes board
bigWavesurfer.waxBoard();

//  9)
//  Noun: Marine
//  action 1: goes to boot camp
marine.goToBootCamp();

//  action 2: flies jet
marine.flyJet();

//  action 3: salutes captain
marine.saluteCaptain();

//  10)
//  Noun: Musician
//  action 1: plays instrument
musician.playInstrument()

//  action 2: writes song
musician.writeSong()

//  action 3: reads music
musician.readMusic()



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
