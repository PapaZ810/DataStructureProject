//
//  LinearTester.cpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL read time" << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP node read time" << endl;
    musicOOP.displayInformation();
    
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << "microseconds." << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL retrieval time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP node retrieval time" << endl;
    crimeTimerOOP.displayInformation();
    
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << "microseconds." << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
}

void LinearTester :: testVsStack()
{
    
}

void LinearTester :: testVsQueue()
{
    
}

void LinearTester :: testVsDouble()
{
    
}

