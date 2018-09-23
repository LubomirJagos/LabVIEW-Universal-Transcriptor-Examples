#include <ArduinoSTL.h>
#include <vector>
#include <SPI.h>
#include <SD.h>
using namespace std;

void Write_Signal_Samples_to_File(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_218_ = 115200;
    String wireUID_2824_;
    File wireUID_2673_;
    String wireUID_1346_ = "LVGen_SignalSamples.dat";
    bool wireUID_1651_;
    unsigned short wireUID_1256_ = 1;
    bool wireUID_616_;
    unsigned char wireUID_568_ = 4;
    String wireUID_433_ = "DEMO Writing Samples to File (on SD card)";
    Serial.begin(wireUID_218_);
    Serial.flush();
    Serial.println(wireUID_433_);
    wireUID_616_ = SD.begin(wireUID_568_);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_616_){
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_1056_ = "SD card begin ERROR.";
            Serial.println(wireUID_1056_);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_739_ = "SD card initialized.";
            Serial.println(wireUID_739_);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    wireUID_2673_ = SD.open(wireUID_1346_);
    wireUID_1651_ = bool(wireUID_2673_);
    /***** BEGIN CaseStructure ********/
    switch(wireUID_1651_){
        case true:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_1133_ = "OK samples written, file closed.";
            long wireUID_940_ = 42;
            File wireUID_757_;
            File wireUID_2915_ = wireUID_2673_;
            String wireUID_2011_ = wireUID_1346_;
            String wireUID_2021_;
            String wireUID_2018_ = "'";
            String wireUID_2015_ = "OK create file '";
            wireUID_2021_ = wireUID_2015_ + wireUID_2011_ + wireUID_2018_;
            Serial.println(wireUID_2021_);
            /**** BEGIN ForLoop *****/
            
            int iteratorUID_2115 = 0; //loop iterator
            for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_940_; LVHardcodedCnt++){
             // shift regs
                /*feedback and shift regs. declarations */
                vector<vector<unsigned char>> shiftRegister_1422;
                bool shiftRegisterInitBool_1422 = true;
                
                /* END feedback and shift regs declarations */
                vector<unsigned char> wireUID_1528_;
                long wireUID_2630_;
                long wireUID_2415_ = iteratorUID_2115 /*Diagram owned wire terminal*/;
                long wireUID_2250_ = 10;
                long wireUID_477_;
                String wireUID_1663_;
                String wireUID_1518_ = "Generating samples... iteration ";
                String wireUID_595_;
                File wireUID_243_FILE_ref = wireUID_2915_;
                float wireUID_2868_;
                float wireUID_2729_ = 0.001000;
                float wireUID_2437_;
                vector<unsigned char> wireUID_1352_ = vector<unsigned char>();
                wireUID_595_ = String(wireUID_2415_);
                wireUID_2630_ = wireUID_2415_ * wireUID_2250_;
                wireUID_1663_ = wireUID_1518_ + wireUID_595_;
                wireUID_2437_ = (float) wireUID_2630_;
                Serial.println(wireUID_1663_);
                wireUID_2868_ = wireUID_2437_ * wireUID_2729_;
                /**** BEGIN ForLoop *****/
                
                int iteratorUID_2220 = 0; //loop iterator
                for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_2250_; LVHardcodedCnt++){
                    if (shiftRegisterInitBool_1422){
                        shiftRegister_1422.push_back(wireUID_1352_);
                        shiftRegisterInitBool_1422 = false;
                    } // shift regs
                    /*feedback and shift regs. declarations */
                    
                    /* END feedback and shift regs declarations */
                    float wireUID_1391_;
                    unsigned char wireUID_1500_ = 0;
                    unsigned char wireUID_1420_;
                    float wireUID_2544_ = wireUID_2868_;
                    float wireUID_2624_ = wireUID_2729_;
                    float wireUID_2320_;
                    float wireUID_2252_;
                    vector<unsigned char> wireUID_1477_;
                    vector<unsigned char> wireUID_1371_ = shiftRegister_1422.front(); shiftRegister_1422.erase(shiftRegister_1422.begin());
                    float wireUID_2597_;
                    float wireUID_2511_ = 42.000000;
                    float wireUID_2478_;
                    float wireUID_2413_ = 6.280000;
                    long wireUID_2333_ = iteratorUID_2220 /*Diagram owned wire terminal*/;
                    wireUID_2597_ = (float) wireUID_2333_;
                    wireUID_2252_ = wireUID_2597_ * wireUID_2624_;
                    wireUID_2320_ = wireUID_2544_ + wireUID_2252_;
                    wireUID_2478_ = wireUID_2320_ * wireUID_2413_;
                    wireUID_1391_ = wireUID_2511_ * wireUID_2478_;
                    wireUID_1420_ = *(unsigned char *) &wireUID_1391_;
                    wireUID_1477_.insert(wireUID_1477_.end(), wireUID_1371_.begin(), wireUID_1371_.end());
                    wireUID_1477_.insert(wireUID_1477_.end(), wireUID_1420_);
                    
                    
                     /* C code*/
                    
                    shiftRegister_1422.push_back(wireUID_1477_); /* output assignements */
                    iteratorUID_2220++; //iterator increment
                }
                wireUID_1528_ = shiftRegister_1422.front();
                /***** END ForLoop ******/
                wireUID_477_ = wireUID_1528_.size();
                wireUID_243_FILE_ref.write(&wireUID_1528_.front(), (int) wireUID_477_);
                /**** BEGIN ForLoop *****/
                
                int iteratorUID_2148 = 0; //loop iterator
                for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_477_; LVHardcodedCnt++){
                 // shift regs
                    /*feedback and shift regs. declarations */
                    
                    /* END feedback and shift regs declarations */
                    String wireUID_55_;
                    String wireUID_49_;
                    String wireUID_2677_ = " ";
                    unsigned char wireUID_2254_;
                    long wireUID_2381_ = iteratorUID_2148 /*Diagram owned wire terminal*/;
                    vector<unsigned char> wireUID_2343_ = wireUID_1528_;
                    wireUID_2254_ = wireUID_2343_[wireUID_2381_];
                    wireUID_49_ = String(wireUID_2254_);
                    wireUID_55_ = wireUID_49_ + wireUID_2677_;
                    Serial.print(wireUID_55_);
                    
                    
                     /* C code*/
                    
                     /* output assignements */
                    iteratorUID_2148++; //iterator increment
                }
                
                /***** END ForLoop ******/
                
                
                 /* C code*/
                wireUID_757_ = wireUID_243_FILE_ref;
                 /* output assignements */
                iteratorUID_2115++; //iterator increment
            }
            
            /***** END ForLoop ******/
            wireUID_757_.close();
            Serial.println(wireUID_1133_);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
        case false:
        {
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            String wireUID_1889_;
            String wireUID_1872_ = "'";
            String wireUID_1843_ = "ERROR create file '";
            String wireUID_1799_ = wireUID_1346_;
            wireUID_1889_ = wireUID_1843_ + wireUID_1799_ + wireUID_1872_;
            Serial.println(wireUID_1889_);
            
            
             /* C code */
         /* output assgn. */
        }
        break;
    }
    /****** END CaseStructure ********/
    /* Translator.vi not found for "System Serial Library Variables.lvlib:Serial Read Buffer.vi" */
    
    
    
}

void setup(){
    Write_Signal_Samples_to_File();
}
void loop(){
}
