#include <ArduinoSTL.h>
#include <vector>
#include <Wire.h>
#include <Adafruit_MCP4725.h>
using namespace std;

void MCP4725_Example_1(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    unsigned char wireUID_338_ = 97;
    vector< unsigned int > wireUID_1038_ = {0,200,800,1400,2500,3200,4000,3200,2500,1400,800,200};
    Adafruit_MCP4725 wireUID_754_;
    Adafruit_MCP4725 wireUID_660_;
    wireUID_660_.begin(wireUID_338_);
    wireUID_754_ = wireUID_660_;
    /***** BEGIN WhileLoop ********/
    bool wireUID_439_ = false; //LoopEndRef.
    int iteratorUID_383 = 0; //loop iterator
    do{
     //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_1167_;
        vector< unsigned int > wireUID_1024_ = wireUID_1038_;
        Adafruit_MCP4725 wireUID_740_ = wireUID_754_;
        wireUID_1167_ = wireUID_1024_.size();
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_462 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1167_; LVHardcodedCnt++){
         // shift regs
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            bool wireUID_316_ = false;
            Adafruit_MCP4725 wireUID_1389_ = wireUID_740_;
            unsigned int wireUID_1358_;
            long wireUID_1282_ = iteratorUID_462 /*Diagram owned wire terminal*/;
            vector< unsigned int > wireUID_1276_ = wireUID_1024_;
            wireUID_1358_ = wireUID_1276_[wireUID_1282_];
            wireUID_1389_.setVoltage(wireUID_1358_, wireUID_316_);
            
            
            
             /* C code*/
            
             /* output assignements */
            iteratorUID_462++; //iterator increment
        }
        
        /***** END ForLoop ******/
        
        
         //C code
        
         //output assgn.
        iteratorUID_383++; //iterator increment
    }while(!wireUID_439_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    MCP4725_Example_1();
}
void loop(){
}
