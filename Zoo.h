//
// Created by Nathan Nunes on 10/20/22.
//

/**
 * Nathan Nunes & Rajat Pandey
 */

#ifndef A2_ZOO_H
#define A2_ZOO_H

// This class will be singleton

#include <string>

using namespace std;

class Zoo {
public:
    static Zoo* getInstance();
    static void incrementTigers();
    static void incrementWolves();
    static void incrementSerpent();
    static void incrementLemur();
    static void incrementKangaroo();
    static string getTotalAnimals(){
        string a = "There are total ";
        a.append(to_string(totalLemur + totalWolves + totalKangaroo + totalSerpant + totalTigers));
        a.append(" animals in the Zoo\n");
        a.append("There are ");
        if(totalTigers!=0){a.append(to_string(totalTigers)); totalTigers>1 ? a.append(" tigers ,") : a.append(" tiger ,");}
        if(totalWolves!=0){a.append(to_string(totalWolves)); totalWolves>1 ? a.append(" wolves ") : a.append(" wolf");}
        if(totalKangaroo!=0){a.append(","); a.append(to_string(totalKangaroo)); totalKangaroo>1 ? a.append(" kangaroos ") : a.append(" kangaroo");}
        if(totalLemur!=0){a.append(","); a.append(to_string(totalLemur)); totalLemur>1 ? a.append(" lemurs ") : a.append(" lemur");}
        if(totalSerpant!=0){a.append(","); a.append(to_string(totalSerpant)); totalSerpant>1 ? a.append(" serpants") : a.append(" serpent");}
        a.append("\n");

        return a;
    }

private:
    static int totalTigers;
    static int totalWolves;
    static int totalSerpant;
    static int totalLemur;
    static int totalKangaroo;
    Zoo(){};
    ~Zoo(){};
    static Zoo* instance_;
};


#endif //A2_ZOO_H
