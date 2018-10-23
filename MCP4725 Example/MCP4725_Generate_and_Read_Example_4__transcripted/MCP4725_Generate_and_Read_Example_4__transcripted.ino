#include <ArduinoSTL.h>
#include <vector>
#include <Wire.h>
#include <Adafruit_MCP4725.h>
using namespace std;

void MCP4725_Generate_and_Read_Example_4(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    Adafruit_MCP4725 wireUID_2200_;
    Adafruit_MCP4725 wireUID_2125_;
    unsigned char wireUID_2112_ = 96;
    Adafruit_MCP4725 wireUID_754_;
    long wireUID_664_ = 14;
    long wireUID_644_ = 15;
    long wireUID_622_ = 16;
    bool wireUID_752_ = false;
    long wireUID_2076_ = 115200;
    long wireUID_472_ = 17;
    unsigned char wireUID_338_ = 97;
    Adafruit_MCP4725 wireUID_660_;
    pinMode(wireUID_472_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_622_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_644_,wireUID_752_?OUTPUT:INPUT);
    pinMode(wireUID_664_,wireUID_752_?OUTPUT:INPUT);
    wireUID_660_.begin(wireUID_338_);
    wireUID_754_ = wireUID_660_;
    wireUID_2125_.begin(wireUID_2112_);
    wireUID_2200_ = wireUID_2125_;
    Serial.begin(wireUID_2076_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_439_ = false; //LoopEndRef.
    int iteratorUID_383 = 0; //loop iterator
    do{
     //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_1916_ = 10;
        Adafruit_MCP4725 wireUID_2973_DAC_96 = wireUID_2200_;
        long wireUID_1795_ = wireUID_664_;
        long wireUID_1761_ = wireUID_644_;
        long wireUID_1524_ = wireUID_622_;
        long wireUID_1334_ = wireUID_472_;
        Adafruit_MCP4725 wireUID_740_DAC_97 = wireUID_754_;
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_1712 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_1916_; LVHardcodedCnt++){
         // shift regs
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            Adafruit_MCP4725 wireUID_1073_ = wireUID_2973_DAC_96;
            Adafruit_MCP4725 wireUID_1763_ = wireUID_740_DAC_97;
            bool wireUID_3841_ = false;
            unsigned int wireUID_3758_;
            long wireUID_3727_;
            long wireUID_3706_ = 400;
            long wireUID_3547_ = iteratorUID_1712 /*Diagram owned wire terminal*/;
            long wireUID_3527_;
            long wireUID_3464_ = 4095;
            long wireUID_1854_ = wireUID_1795_;
            long wireUID_1839_ = wireUID_1761_;
            long wireUID_1824_ = wireUID_1524_;
            long wireUID_438_ = 100;
            long wireUID_1808_ = wireUID_1334_;
            wireUID_3527_ = wireUID_3547_ * wireUID_3706_;
            wireUID_3727_ = wireUID_3464_ - wireUID_3527_;
            wireUID_3758_ = (unsigned short) wireUID_3727_;
            wireUID_1073_.setVoltage(wireUID_3758_, wireUID_3841_);
            
            /**** BEGIN ForLoop *****/
            
            int iteratorUID_462 = 0; //loop iterator
            for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_438_; LVHardcodedCnt++){
             // shift regs
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned int wireUID_1199_;
                unsigned int wireUID_1186_ = 40;
                unsigned int wireUID_1173_;
                unsigned int wireUID_832_;
                bool wireUID_316_ = false;
                String wireUID_1727_ = ",";
                String wireUID_3206_;
                String wireUID_3175_;
                String wireUID_3162_;
                unsigned int wireUID_2903_;
                unsigned int wireUID_358_;
                unsigned int wireUID_2392_;
                long wireUID_1848_ = wireUID_1854_;
                long wireUID_1835_ = wireUID_1839_;
                long wireUID_571_ = wireUID_1824_;
                unsigned int wireUID_1514_;
                unsigned int wireUID_747_ = 0;
                long wireUID_915_ = 42;
                long wireUID_517_ = iteratorUID_462 /*Diagram owned wire terminal*/;
                String wireUID_209_;
                String wireUID_1593_;
                String wireUID_1637_ = "";
                String wireUID_1586_;
                long wireUID_1298_ = wireUID_1808_;
                Adafruit_MCP4725 wireUID_1389_ = wireUID_1763_;
                wireUID_1199_ = (unsigned short) wireUID_517_;
                wireUID_1173_ = wireUID_1199_ * wireUID_1186_;
                wireUID_832_ = wireUID_1173_ + wireUID_747_;
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
            
            
             /* C code*/
            
             /* output assignements */
            iteratorUID_1712++; //iterator increment
        }
        
        /***** END ForLoop ******/
        
        
         //C code
        
         //output assgn.
        iteratorUID_383++; //iterator increment
    }while(!wireUID_439_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    MCP4725_Generate_and_Read_Example_4();
}
void loop(){
}
