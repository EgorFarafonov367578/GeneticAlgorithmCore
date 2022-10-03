//
// Created by User on 01.10.2022.
//

#ifndef GENETICALGORITHM_BOT_H
#define GENETICALGORITHM_BOT_H

#endif //GENETICALGORITHM_BOT_H

#include<vector>

class Bot{
private:
    int dna[64];
    int iterator;
    int health;
public:
    Bot(int given_dna[]): iterator(0), health(99){
        for(int i = 0; i < 64; i ++)
        {
            dna[i] = given_dna[i];
        }
    }
    void ChangeDna(int where,int on_what)
    {
        dna[where] = on_what;
    }
    int GetDna(int i)
    {
        return dna[i];
    }
};