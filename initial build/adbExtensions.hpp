//
//  adbExtensions.hpp
//  adbplus
//
//  Created by Chase Tillar on 1/8/18.
//  Copyright © 2018 Chase Tillar. All rights reserved.
//

#ifndef adbExtensions_hpp
#define adbExtensions_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

using namespace std;

class adbExtensions{
public:
    void adbplusHelp();
    void adbplusInstall(vector<string>);
    void adbplusPush(string, string);
    void adbplusPull(string, string);
};

#endif /* adbExtensions_hpp */
