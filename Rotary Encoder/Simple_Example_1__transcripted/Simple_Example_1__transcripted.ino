#include <ArduinoSTL.h>
#include <vector>
#include <Encoder.h>
using namespace std;

void Simple_Example_1(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_2073_ = 0;
    Encoder* wireUID_602_;
    unsigned char wireUID_559_;
    unsigned char wireUID_536_;
    long wireUID_910_ = 7;
    long wireUID_875_ = 6;
    bool wireUID_943_ = false;
    long wireUID_272_ = 115200;
    Serial.begin(wireUID_272_);
    wireUID_536_ = (unsigned byte) wireUID_875_;
    wireUID_559_ = (unsigned byte) wireUID_910_;
    pinMode(wireUID_875_,wireUID_943_?OUTPUT:INPUT);
    pinMode(wireUID_910_,wireUID_943_?OUTPUT:INPUT);
    wireUID_602_ = new Encoder(wireUID_536_, wireUID_559_);
    wireUID_602_->write(wireUID_2073_);
    /***** BEGIN WhileLoop ********/
    vector<long> feedbackNode_710;
    bool feedbackNodeInitBool_710 = true;
    
    bool wireUID_1650_ = false; //LoopEndRef.
    int iteratorUID_67 = 0; //loop iterator
    do{
     //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_688_;
        bool wireUID_1003_;
        long wireUID_876_ = 0;
        long wireUID_802_;
        Encoder* wireUID_659_ = wireUID_602_;
        long wireUID_360_ = 1;
        wireUID_688_ = wireUID_659_->read();
        if (feedbackNodeInitBool_710){
            feedbackNode_710.push_back(wireUID_876_);
            feedbackNodeInitBool_710 = false;
        }
        wireUID_802_ = feedbackNode_710.front(); feedbackNode_710.erase(feedbackNode_710.begin());
        /* Don't know how to translate class "Generic ->GObject ->Node": "" */
        wireUID_1003_ = (wireUID_688_ != wireUID_802_);
        /***** BEGIN CaseStructure ********/
        switch(wireUID_1003_){
            case true:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                long wireUID_336_ = wireUID_688_;
                String wireUID_1503_;
                String wireUID_1462_ = "Encoder value: ";
                String wireUID_1431_;
                wireUID_1503_ = String(wireUID_336_);
                wireUID_1431_ = wireUID_1462_ + wireUID_1503_;
                Serial.println(wireUID_1431_);
                
                
                 /* C code */
             /* output assgn. */
            }
            break;
            case false:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                
                
                 /* C code */
             /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        delay(wireUID_360_);
        feedbackNode_710.push_back(wireUID_688_);
        
        
         //C code
        
         //output assgn.
        iteratorUID_67++; //iterator increment
    }while(!wireUID_1650_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    Simple_Example_1();
}
void loop(){
}
