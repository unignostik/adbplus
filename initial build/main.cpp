//
//  main.cpp
//  adbplus
//
//  Created by Chase Tillar on 1/8/18.
//  Copyright © 2018 Chase Tillar. All rights reserved.
//

#include <iostream>
#include <vector>
#include "adbExtensions.hpp"

//function prototype to search string vector for given element
bool in_array(const string &value, const vector<string> &array);

int main(int argc, const char * argv[]) {
    //supported commands array, used to prevent wrongful commands
    vector<string> supported = {"install", "push", "pull"};
    
    //for use with adbplusInstall
    vector<string> install;
    
    //create instance
    adbExtensions adbplus;
    
    //single argument provided in command line, show help menu
    if (argc == 1) {
        adbplus.adbplusHelp();
    }
    //second argument is adb command to execute, rest are parameters
    else {
        //check for valid arguments, if not exit with help menu
        if (in_array(argv[1], supported)) {
            if (strcmp(argv[1], "install") == 0) {
                for(int i = 2; i < argc; i++) install.push_back(argv[i]);
                adbplus.adbplusInstall(install);
            }
            if (strcmp(argv[1], "push") == 0) adbplus.adbplusPush(argv[2], argv[3]);
            if (strcmp(argv[1], "pull") == 0) adbplus.adbplusPull(argv[2], argv[3]);
        } else {
            cout << argv[1] << " is not a supported command..\n\n";
            adbplus.adbplusHelp();
        }
    }
    cout << endl;
    return 0;
}

//function definition to search string vector for given element
bool in_array(const string &value, const vector<string> &array)
{
    return std::find(array.begin(), array.end(), value) != array.end();
}
