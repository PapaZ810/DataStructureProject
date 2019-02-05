//
//  FileController.hpp
//  DataStructureProject
//
//  Created by Durham, Zachary on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
};



#endif /* FileController_hpp */
