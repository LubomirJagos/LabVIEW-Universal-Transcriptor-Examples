#include <ArduinoSTL.h>
#include <vector>
#include <Wire.h>
#include <Adafruit_MCP4725.h>
using namespace std;

void MCP4725_Generate_and_Read_Example_3(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_664_ = 14;
    long wireUID_644_ = 15;
    long wireUID_622_ = 16;
    bool wireUID_752_ = false;
    long wireUID_2076_ = 115200;
    long wireUID_472_ = 17;
    unsigned char wireUID_338_ = 97;
    Adafruit_MCP4725 wireUID_754_;
    Adafruit_MCP4725 wireUID_660_;
    pinMode(wireUID_472_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_622_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_644_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_664_,wireUID_752_?OUTPUT:INPUT);
    wireUID_660_.begin(wireUID_338_);
    wireUID_754_ = wireUID_660_;
    Serial.begin(wireUID_2076_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_439_ = false; //LoopEndRef.
    int iteratorUID_383 = 0; //loop iterator
    do{
     //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_1795_ = wireUID_664_;
        long wireUID_1761_ = wireUID_644_;
        long wireUID_1524_ = wireUID_622_;
        long wireUID_438_ = 1000;
        long wireUID_1334_ = wireUID_472_;
        Adafruit_MCP4725 wireUID_740_ = wireUID_754_;
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_462 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_438_; LVHardcodedCnt++){
         // shift regs
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_1727_ = ",";
            String wireUID_3206_;
            String wireUID_3175_;
            String wireUID_3162_;
            unsigned int wireUID_2903_;
            unsigned int wireUID_358_;
            unsigned int wireUID_2392_;
            long wireUID_1848_ = wireUID_1795_;
            long wireUID_1835_ = wireUID_1761_;
            long wireUID_571_ = wireUID_1524_;
            unsigned int wireUID_1514_;
            unsigned int wireUID_832_;
            unsigned int wireUID_560_;
            unsigned int wireUID_747_ = 420;
            long wireUID_915_ = 42;
            long wireUID_517_ = iteratorUID_462 /*Diagram owned wire terminal*/;
            String wireUID_209_;
            String wireUID_1593_;
            String wireUID_1637_ = "";
            String wireUID_1586_;
            long wireUID_1298_ = wireUID_1334_;
            bool wireUID_316_ = false;
            Adafruit_MCP4725 wireUID_1389_ = wireUID_740_;
            wireUID_560_ = (unsigned short) wireUID_517_;
            wireUID_832_ = wireUID_560_ + wireUID_747_;
            wireUID_1586_ = String(wireUID_832_);
            wireUID_1389_.setVoltage(wireUID_832_, wireUID_316_);
            
            wireUID_1514_ = analogRead(wireUID_1298_);
            wireUID_2392_ = analogRead(wireUID_571_);
            wireUID_1593_ = String(wireUID_1514_);
            wireUID_358_ = analogRead(wireUID_1835_);
            wireUID_3162_ = String(wireUID_2392_);
            wireUID_2903_ = analogRead(wireUID_1848_);
            wireUID_3175_ = String(wireUID_358_);
            wireUID_3206_ = String(wireUID_2903_);
            wireUID_209_ = wireUID_1637_ + wireUID_1586_ + wireUID_1727_ + wireUID_1593_ + wireUID_1727_ + wireUID_3162_ + wireUID_1727_ + wireUID_3175_ + wireUID_1727_ + wireUID_3206_;
            Serial.println(wireUID_209_);
            delay(wireUID_915_);
            
            
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
    MCP4725_Generate_and_Read_Example_3();
}
void loop(){
}
