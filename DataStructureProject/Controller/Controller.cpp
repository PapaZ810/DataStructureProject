//
//  Controller.cpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"

void Controller :: start()
{
//    cout << "Welcome to App." << endl;
//    usingNodes();
//    testFiles();
    testGraph();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl ;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
}

void testFiles()
{
    LinkedList<CrimeData> Crime = FileController :: readDataToList("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/crime.csv");
    
    for (int i = 234; i < 256; i++)
    {
        cout << i << ": contents are : " << Crime.getFromIndex(i) << endl;
    }
    
    LinkedList<int> intList;
    intList.add(1);
    intList.add(2);
    cout << intList.getFromIndex(0) << intList.getFromIndex(1) << "yeet" << endl;
    
    
    LinkedList<string> wordList;
    wordList.add("yeet");
    wordList.add("bean");
    cout << wordList.getFromIndex(1) << wordList.getFromIndex(0) << endl;
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

void Controller :: testGraph()
{
    GraphTester lokiher;
    lokiher.testGraphs();
}
