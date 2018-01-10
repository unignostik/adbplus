//
//  adbExtensions.cpp
//  adbplus
//
//  Created by Chase Tillar on 1/8/18.
//  Copyright © 2018 Chase Tillar. All rights reserved.
//

#include "adbExtensions.hpp"

using namespace std;

//explaination of features adbplus provides
void adbExtensions::adbplusHelp() {
    cout << "Welcome to the adbplus help menu, extensions include..\n\n";
    cout << "1. Standard adb push and pull with support for spaces in directory and file names\n";
    cout << "Example: adbplus push /Example Folder/Example File.txt\n\n";
    cout << "2. Install multiple specified applications in a directory with one commnad\n";
    cout << "Example: adbplus install ExampleApp1.apk, ExampleApp3.apk, ExampleApp4.apk.\n\n";
    
}

//deal with spaces in directories and file names for adb install
void adbExtensions::adbplusInstall(vector<string> apps) {
    //remove comma from all but last element in 'apps'
    for (int i = 0; i < apps.size()-1; i++) {
        if (apps[i].find(',') != string::npos) {
            apps[i].pop_back();
        }
    }
    //last element designated by peroid at the end, remove it
    apps.back().pop_back();
    //run adb install for each app
    for (int i = 0; i < apps.size(); i++) {
        string arg = "adb install -r "+apps[i];
        system(arg.c_str());
    }
}

//deal with spaces in directories and file names for adb push
void adbExtensions::adbplusPush(string pushFrom, string pushTo) {
    string old(" ");
    string rep("\\ ");
    //check for spaces in passed parameters
    if ((pushFrom.find(' ') != string::npos) || (pushTo.find(' ') != string::npos)) {
        //found spaces:
        //replace them with appropriate format
        for (int pos=0; (pos = pushFrom.find(old, pos)) != string::npos; pos+=rep.length()) pushFrom.replace(pos, old.length(), rep);
        for (int pos=0; (pos = pushTo.find(old, pos)) != string::npos; pos+=rep.length()) pushTo.replace(pos, old.length(), rep);
        //perform push
        string arg = "adb push " + pushFrom + " " + pushTo;
        cout << arg;
        //system(arg.c_str());
    } else {
        //no spaces found
        cout << "No spaces found.. please use adb for basic pushes";
    }
}

//deal with spaces in directories and file names for adb pull
void adbExtensions::adbplusPull(string pullFrom, string pullTo) {
    string old(" ");
    string rep("\\ ");
    
    //check for spaces in passed parameters
    if ((pullFrom.find(' ') != string::npos) || (pullTo.find(' ') != string::npos)) {
        //found spaces:
        //replace them with appropriate format
        for (int pos=0; (pos = pullFrom.find(old, pos)) != string::npos; pos+=rep.length()) pullFrom.replace(pos, old.length(), rep);
        for (int pos=0; (pos = pullTo.find(old, pos)) != string::npos; pos+=rep.length()) pullTo.replace(pos, old.length(), rep);
        //perform pull
        string arg = "adb pull " + pullFrom + " " + pullTo;
        system(arg.c_str());
    } else {
        //no spaces found
        cout << "No spaces found.. please use adb for basic pulls";
    }
}
