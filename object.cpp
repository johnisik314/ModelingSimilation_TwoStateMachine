#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;
 struct object{
    int state=0;                                  //satte of the obj  
    float looped0=0;
    float looped1=0;
    float changed0 =0;
    float changed1 =0;
    object(int current){                        //initilization
        this->state = current;
    }
    void roll(int times){                                //roll until state changes
        for (int i =1;i<times+1;i++){                           //PROBABILITY
            int num = rand() % 3;               //left over of a random variable can only be 0,1, or 2
            int c = 0;
            if (num == 0||num == 1){            //which gives 2/3 probability if not changing 
                if (state == 0){    looped0++;}
                if (state == 1){    looped1++;}
                cout <<state << ",";
                                     //increase the count whenever state stays unchanged
            }
            if (num == 2){  
                if (state == 0){    changed0++;}
                if (state == 1){    changed1++;}
                if (state == 0){state = 1;}
                else if(state ==1 && state !=0){ state = 0;}

                cout <<state<< ",";
            }
            c++;
            if ( c%1000 == 0){cout <<endl;}
        }
    }
    int getState(){
        return(state);
    };
    int getChanged0(){
        return(changed0);
    };
    int getLooped0(){
        return(looped0);
    };
    int getChanged1(){
        return(changed1);
    };
    int getLooped1(){
        return(looped1);
    };
};