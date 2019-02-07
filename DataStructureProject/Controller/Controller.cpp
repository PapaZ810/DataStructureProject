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
    //cout << "Welcome to App." << endl;
    //usingNodes();
    testFiles();
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
    vector<CrimeData> Crime = FileController :: readCrimeDataToVector("/Users/zdur0324/Documents/C++/DataStructureProject/DataStructureProject/Resources/crime.csv");
    
    for (int i = 234; i < 256; i++)
    {
        cout << i << ": contents are : " << Crime[i] << endl;
    }
}
