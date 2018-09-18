#include <ArduinoSTL.h>
#include <vector>
using namespace std;
/***** interruption *****/
void StaticVIReferenceUID_533(){
LVSubVI_Increment_Counter();
}
/***** end interruption *****/
long intCounter;
long intCounter2;
void LVSubVI_Increment_Counter(){
    /*feedback and shift regs. declarations */
    
    /* END feedback and shift regs declarations */
    long wireUID_637_;
    long wireUID_632_;
    long wireUID_432_;
    long wireUID_468_;
    long wireUID_426_ = 2000;
    noInterrupts();
    wireUID_468_ = intCounter;
    wireUID_432_ = wireUID_468_ + 1;
    intCounter = wireUID_432_;
    wireUID_637_ = intCounter2;
    wireUID_632_ = wireUID_637_ - 1;
    intCounter2 = wireUID_632_;
    delay(wireUID_426_);
    interrupts();
    
    
    
} //SubVI not locked auto-generated call

void Interupt_Example_1(){
    /*feedback and shift regs. declarations */
    vector<long> shiftRegister_1189;
    bool shiftRegisterInitBool_1189 = true;
    
    /* END feedback and shift regs declarations */
    unsigned short wireUID_693_ = 2;
    long wireUID_585_ = 2;
    long wireUID_1621_ = 115200;
    long wireUID_893_ = 0;
    unsigned int wireUID_682_ = 2;
    void* wireUID_594_;
    /* StaticVIReference transcripted, ISR name "StaticVIReferenceUID_533" */
    pinMode(wireUID_585_,wireUID_693_?(wireUID_693_==2?INPUT_PULLUP:OUTPUT):INPUT);
    attachInterrupt(digitalPinToInterrupt(wireUID_585_), StaticVIReferenceUID_533, wireUID_682_);
    interrupts();
    Serial.begin(wireUID_1621_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_2009_ = false; //LoopEndRef.
    int iteratorUID_637 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_1189){
            shiftRegister_1189.push_back(wireUID_893_);
            shiftRegisterInitBool_1189 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_1128_;
        long wireUID_1165_;
        long wireUID_1093_ = shiftRegister_1189.front(); shiftRegister_1189.erase(shiftRegister_1189.begin());
        bool wireUID_1116_;
        long wireUID_776_ = 1;
        wireUID_1128_ = intCounter;
        wireUID_1116_ = (wireUID_1128_ != wireUID_1093_);
        /***** BEGIN CaseStructure ********/
        switch(wireUID_1116_){
            case true:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                long wireUID_1158_;
                String wireUID_994_;
                String wireUID_991_ = "Counter2: ";
                String wireUID_988_;
                long wireUID_558_ = wireUID_1128_;
                String wireUID_1892_;
                String wireUID_1869_ = "Counter: ";
                String wireUID_1837_;
                wireUID_1837_ = String(wireUID_558_);
                wireUID_1892_ = wireUID_1869_ + wireUID_1837_;
                Serial.println(wireUID_1892_);
                wireUID_1158_ = intCounter2;
                wireUID_994_ = String(wireUID_1158_);
                wireUID_988_ = wireUID_991_ + wireUID_994_;
                Serial.println(wireUID_988_);
                
                
                 /* C code */
                wireUID_1165_ = wireUID_558_; /* output assgn. */
            }
            break;
            case false:
            {
                /*feedback and shift regs. declarations */
                
                /* END feedback and shift regs declarations */
                long wireUID_1183_ = wireUID_1093_;
                
                
                 /* C code */
                wireUID_1165_ = wireUID_1183_; /* output assgn. */
            }
            break;
        }
        /****** END CaseStructure ********/
        delay(wireUID_776_);
        
        
         //C code
        
        shiftRegister_1189.push_back(wireUID_1165_); //output assgn.
        iteratorUID_637++; //iterator increment
    }while(!wireUID_2009_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    Interupt_Example_1();
}
void loop(){
}
