#include <ArduinoSTL.h>
#include <vector>
#include <Servo.h>
using namespace std;

void Example_Tractor_Lights_2(){
    /*feedback and shift regs. declarations */
    vector< bool > shiftRegister_971;
    bool shiftRegisterInitBool_971 = true;
    
    vector< bool > shiftRegister_1040;
    bool shiftRegisterInitBool_1040 = true;
    
    vector< bool > shiftRegister_1083;
    bool shiftRegisterInitBool_1083 = true;
    
    vector< bool > shiftRegister_1126;
    bool shiftRegisterInitBool_1126 = true;
    
    vector< Servo > shiftRegister_953;
    bool shiftRegisterInitBool_953 = true;
    
    /* END feedback and shift regs declarations */
    Servo wireUID_853_;
    long wireUID_722_ = 12;
    Servo wireUID_697_;
    long wireUID_470_ = 6;
    long wireUID_495_ = 5;
    long wireUID_520_ = 4;
    long wireUID_545_ = 3;
    bool wireUID_1120_ = false;
    bool wireUID_1077_ = false;
    bool wireUID_1034_ = false;
    bool wireUID_949_ = false;
    bool wireUID_404_ = true;
    pinMode(wireUID_545_,wireUID_404_?OUTPUT:INPUT);
    pinMode(wireUID_520_,wireUID_404_?OUTPUT:INPUT);
    pinMode(wireUID_495_,wireUID_404_?OUTPUT:INPUT);
    pinMode(wireUID_470_,wireUID_404_?OUTPUT:INPUT);
    wireUID_697_.attach(wireUID_722_);
    wireUID_853_ = wireUID_697_;
    /***** BEGIN WhileLoop ********/
    bool wireUID_1761_ = false; //LoopEndRef.
    int iteratorUID_767 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_971){
            shiftRegister_971.push_back(wireUID_949_);
            shiftRegisterInitBool_971 = false;
        }
        if (shiftRegisterInitBool_1040){
            shiftRegister_1040.push_back(wireUID_1034_);
            shiftRegisterInitBool_1040 = false;
        }
        if (shiftRegisterInitBool_1083){
            shiftRegister_1083.push_back(wireUID_1077_);
            shiftRegisterInitBool_1083 = false;
        }
        if (shiftRegisterInitBool_1126){
            shiftRegister_1126.push_back(wireUID_1120_);
            shiftRegisterInitBool_1126 = false;
        }
        if (shiftRegisterInitBool_953){
            shiftRegister_953.push_back(wireUID_853_);
            shiftRegisterInitBool_953 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        Servo wireUID_947_;
        Servo wireUID_890_ = shiftRegister_953.front(); shiftRegister_953.erase(shiftRegister_953.begin());
        long wireUID_822_ = wireUID_722_;
        long wireUID_1874_ = 840;
        bool wireUID_1261_ = shiftRegister_1126.front(); shiftRegister_1126.erase(shiftRegister_1126.begin());
        bool wireUID_1239_ = shiftRegister_1083.front(); shiftRegister_1083.erase(shiftRegister_1083.begin());
        bool wireUID_1214_ = shiftRegister_1040.front(); shiftRegister_1040.erase(shiftRegister_1040.begin());
        bool wireUID_966_ = shiftRegister_971.front(); shiftRegister_971.erase(shiftRegister_971.begin());
        long wireUID_1682_ = wireUID_470_;
        long wireUID_1638_ = wireUID_495_;
        long wireUID_1576_ = wireUID_520_;
        long wireUID_1616_ = wireUID_545_;
        bool wireUID_1272_;
        bool wireUID_1250_;
        bool wireUID_1228_;
        bool wireUID_1015_;
        wireUID_1015_ = !wireUID_966_;
        wireUID_1228_ = !wireUID_1214_;
        wireUID_1250_ = !wireUID_1239_;
        wireUID_1272_ = !wireUID_1261_;
        digitalWrite(wireUID_1616_,wireUID_966_?HIGH:LOW);
        digitalWrite(wireUID_1576_,wireUID_1214_?HIGH:LOW);
        digitalWrite(wireUID_1638_,wireUID_1239_?HIGH:LOW);
        digitalWrite(wireUID_1682_,wireUID_1261_?HIGH:LOW);
        wireUID_890_.write(wireUID_822_);
        wireUID_947_ = wireUID_890_;
        delay(wireUID_1874_);
        
        
         //C code
        
        shiftRegister_971.push_back(wireUID_1015_);
        shiftRegister_1040.push_back(wireUID_1228_);
        shiftRegister_1083.push_back(wireUID_1250_);
        shiftRegister_1126.push_back(wireUID_1272_);
        shiftRegister_953.push_back(wireUID_947_); //output assgn.
        iteratorUID_767++; //iterator increment
    }while(!wireUID_1761_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    Example_Tractor_Lights_2();
}
void loop(){
}
