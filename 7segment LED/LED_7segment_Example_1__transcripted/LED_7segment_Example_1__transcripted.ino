#include <ArduinoSTL.h>
#include <vector>
using namespace std;

void LED_7segment_Example_1(){
    /*feedback and shift regs. declarations */
    vector< unsigned short > shiftRegister_245;
    bool shiftRegisterInitBool_245 = true;
    
    /* END feedback and shift regs declarations */
    unsigned short wireUID_3524_ = 0;
    vector< long > wireUID_2361_;
    long wireUID_1795_ = 10;
    long wireUID_1808_ = 9;
    long wireUID_1822_ = 8;
    long wireUID_1715_ = 7;
    long wireUID_1833_ = 6;
    long wireUID_1856_ = 4;
    long wireUID_1870_ = 3;
    long wireUID_1614_ = 2;
    bool wireUID_1101_ = true;
    pinMode(wireUID_1614_,wireUID_1101_?OUTPUT:INPUT);
    wireUID_2361_.push_back(wireUID_1614_);
    wireUID_2361_.push_back(wireUID_1870_);
    wireUID_2361_.push_back(wireUID_1856_);
    wireUID_2361_.push_back(wireUID_1833_);
    wireUID_2361_.push_back(wireUID_1715_);
    wireUID_2361_.push_back(wireUID_1822_);
    wireUID_2361_.push_back(wireUID_1808_);
    wireUID_2361_.push_back(wireUID_1795_);
    pinMode(wireUID_1870_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1856_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1833_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1715_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1822_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1808_,wireUID_1101_?OUTPUT:INPUT);
    pinMode(wireUID_1795_,wireUID_1101_?OUTPUT:INPUT);
    /***** BEGIN WhileLoop ********/
    bool wireUID_419_ = false; //LoopEndRef.
    int iteratorUID_350 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_245){
            shiftRegister_245.push_back(wireUID_3524_);
            shiftRegisterInitBool_245 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_190_;
        unsigned short wireUID_240_7seg_display_state_;
        unsigned short wireUID_2322_ = shiftRegister_245.front(); shiftRegister_245.erase(shiftRegister_245.begin());
        vector< bool > wireUID_1862_;
        vector< long > wireUID_2375_ = wireUID_2361_;
        long wireUID_495_ = 2000;
        wireUID_190_ = wireUID_2375_.size();
        /***** BEGIN CaseStructure ********/
        switch(wireUID_2322_){
            case 22:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2658_ = 0;
                vector< bool > wireUID_2661_ = {true,false,false,false,true,false,true,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2658_;
                wireUID_1862_ = wireUID_2661_; /* output assgn. */
            }
            break;
            case 21:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2617_ = 22;
                vector< bool > wireUID_2620_ = {true,false,false,true,false,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2617_;
                wireUID_1862_ = wireUID_2620_; /* output assgn. */
            }
            break;
            case 20:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2428_ = 21;
                vector< bool > wireUID_2456_ = {true,true,true,false,false,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2428_;
                wireUID_1862_ = wireUID_2456_; /* output assgn. */
            }
            break;
            case 19:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2337_ = 20;
                vector< bool > wireUID_2340_ = {false,false,false,false,true,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2337_;
                wireUID_1862_ = wireUID_2340_; /* output assgn. */
            }
            break;
            case 18:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2265_ = 19;
                vector< bool > wireUID_2268_ = {true,true,false,false,true,false,true,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2265_;
                wireUID_1862_ = wireUID_2268_; /* output assgn. */
            }
            break;
            case 17:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2098_ = 18;
                vector< bool > wireUID_2114_ = {true,false,false,true,true,true,true,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2098_;
                wireUID_1862_ = wireUID_2114_; /* output assgn. */
            }
            break;
            case 16:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2020_ = 17;
                vector< bool > wireUID_2023_ = {true,true,true,false,false,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2020_;
                wireUID_1862_ = wireUID_2023_; /* output assgn. */
            }
            break;
            case 15:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1952_ = 16;
                vector< bool > wireUID_1955_ = {true,true,false,false,false,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1952_;
                wireUID_1862_ = wireUID_1955_; /* output assgn. */
            }
            break;
            case 14:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1885_ = 15;
                vector< bool > wireUID_1888_ = {false,false,false,false,true,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1885_;
                wireUID_1862_ = wireUID_1888_; /* output assgn. */
            }
            break;
            case 13:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1794_ = 14;
                vector< bool > wireUID_1798_ = {true,true,false,false,true,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1794_;
                wireUID_1862_ = wireUID_1798_; /* output assgn. */
            }
            break;
            case 12:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1633_ = 13;
                vector< bool > wireUID_1651_ = {false,false,false,false,false,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1633_;
                wireUID_1862_ = wireUID_1651_; /* output assgn. */
            }
            break;
            case 11:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1540_ = 12;
                vector< bool > wireUID_1543_ = {true,false,true,false,false,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1540_;
                wireUID_1862_ = wireUID_1543_; /* output assgn. */
            }
            break;
            case 10:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1482_ = 11;
                vector< bool > wireUID_1485_ = {true,false,true,true,false,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1482_;
                wireUID_1862_ = wireUID_1485_; /* output assgn. */
            }
            break;
            case 9:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1413_ = 10;
                vector< bool > wireUID_1416_ = {true,false,false,false,false,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1413_;
                wireUID_1862_ = wireUID_1416_; /* output assgn. */
            }
            break;
            case 8:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1234_ = 9;
                vector< bool > wireUID_3402_ = {true,false,true,true,true,true,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1234_;
                wireUID_1862_ = wireUID_3402_; /* output assgn. */
            }
            break;
            case 7:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_1196_ = 8;
                vector< bool > wireUID_3338_ = {true,false,false,false,false,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_1196_;
                wireUID_1862_ = wireUID_3338_; /* output assgn. */
            }
            break;
            case 6:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_889_ = 7;
                vector< bool > wireUID_3285_ = {true,false,false,true,false,false,false,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_889_;
                wireUID_1862_ = wireUID_3285_; /* output assgn. */
            }
            break;
            case 5:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2574_ = 6;
                vector< bool > wireUID_3221_ = {true,false,true,true,false,false,true,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2574_;
                wireUID_1862_ = wireUID_3221_; /* output assgn. */
            }
            break;
            case 4:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2551_ = 5;
                vector< bool > wireUID_3166_ = {true,false,false,true,false,true,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2551_;
                wireUID_1862_ = wireUID_3166_; /* output assgn. */
            }
            break;
            case 3:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2510_ = 4;
                vector< bool > wireUID_2513_ = {true,true,false,false,false,true,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2510_;
                wireUID_1862_ = wireUID_2513_; /* output assgn. */
            }
            break;
            case 2:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_406_ = 3;
                vector< bool > wireUID_3108_ = {true,false,true,true,true,true,true,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_406_;
                wireUID_1862_ = wireUID_3108_; /* output assgn. */
            }
            break;
            case 1:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_204_ = 2;
                vector< bool > wireUID_1574_ = {true,false,false,false,true,false,false,false};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_204_;
                wireUID_1862_ = wireUID_1574_; /* output assgn. */
            }
            break;
            case 0:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                unsigned short wireUID_2481_ = 1;
                vector< bool > wireUID_461_ = {true,true,true,true,true,true,true,true};
                
                
                 /* C code */
                wireUID_240_7seg_display_state_ = wireUID_2481_;
                wireUID_1862_ = wireUID_461_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_2387 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_190_; LVHardcodedCnt++){
         // shift regs
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            bool wireUID_1839_;
            vector< bool > wireUID_511_ = wireUID_1862_;
            long wireUID_327_ = iteratorUID_2387 /*Diagram owned wire terminal*/;
            long wireUID_423_;
            vector< long > wireUID_2424_ = wireUID_2375_;
            wireUID_423_ = wireUID_2424_[wireUID_327_];
            wireUID_1839_ = wireUID_511_[wireUID_327_];
            digitalWrite(wireUID_423_,wireUID_1839_?HIGH:LOW);
            
            
             /* C code*/
            
             /* output assignements */
            iteratorUID_2387++; //iterator increment
        }
        
        /***** END ForLoop ******/
        delay(wireUID_495_);
        
        
         //C code
        
        shiftRegister_245.push_back(wireUID_240_7seg_display_state_); //output assgn.
        iteratorUID_350++; //iterator increment
    }while(!wireUID_419_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    LED_7segment_Example_1();
}
void loop(){
}
