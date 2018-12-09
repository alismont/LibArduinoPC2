/* Virtuino example No2 (Bluetooth)
 * Example name = "Read inputs - write to outputs via bluetooth"
 * Created by Ilias Lamprou
 * Updated Jul 01 2016
 * This is the code you need to run on your arduino board to cummunicate whith VirtUino app via bluetooth
 * Before  running this code config the settings below as the instructions on the right
 * 
 * 
 * Download latest Virtuino android app from the link: https://play.google.com/store/apps/details?id=com.virtuino_automations.virtuino
 * Getting starting link:
 * Video tutorial link: https://www.youtube.com/watch?v=CYR_jigRkgk
 * Contact address for questions or comments: iliaslampr@gmail.com
 */

/*========= VirtuinoBluetooth Class methods  
*  vPinMode(int pin, int state)                                  set pin as digital OUTPUT or digital INPUT.  (Insteed default pinMode method
*
*========= Virtuino General methods  
*  void vDigitalMemoryWrite(int digitalMemoryIndex, int value)   write a value to a Virtuino digital memory   (digitalMemoryIndex=0..31, value range = 0 or 1)
*  int  vDigitalMemoryRead(int digitalMemoryIndex)               read  the value of a Virtuino digital memory (digitalMemoryIndex=0..31, returned value range = 0 or 1)
*  void vMemoryWrite(int analogMemoryIndex, float value)         write a value to Virtuino float memory       (memoryIndex=0..31, value range as float value)
*  float vMemoryRead(int analogMemoryIndex)                      read the value of  Virtuino analog memory    (analogMemoryIndex=0..31, returned value range = 0..1023)
*  run()                                                         neccesary command to communicate with Virtuino android app  (on start of void loop)
*  int getPinValue(int pin)                                      read the value of a Pin. Usefull for PWM pins
*  void vDelay(long milliseconds);                               Pauses the program (without block communication) for the amount of time (in miliseconds) specified as parameter
*/



#include "VirtuinoBluetooth.h"                           // Include VirtuinoBluetooth library to your code

#include <Time.h>
#include <Timer.h>
#include "TimerOne.h"
int T[10];
int TDN[10];
boolean CptT[10];
boolean Condition;
// Code to use SoftwareSerial
//#include <SoftwareSerial.h>                              //  Disable this line if you want to use hardware serial 
//SoftwareSerial bluetoothSerial =  SoftwareSerial(2,3);   // arduino RX pin=2  arduino TX pin=3    connect the arduino RX pin to bluetooth module TX pin   -  connect the arduino TX pin to bluetooth module RX pin.  Disable this line if you want to use hardware serial 
//VirtuinoBluetooth virtuino(bluetoothSerial,9600);       // Set SoftwareSerial baud rate.  -  Disable this line if you want to use hardware serial 


// Code to use HardwareSerial
VirtuinoBluetooth virtuino(Serial3,9600);            // enable this line and disable all SoftwareSerial lines
                                                   // Open VirtuinoBluetooth.h file on the virtuino library folder ->  disable the line: #define BLUETOOTH_USE_SOFTWARE_SERIAL 
  float cpt=0.0;                                                
float cpt2=500.0;
float cpt2Memo=500.0;
                                              


//================================================================== setup
//==================================================================
//==================================================================
void setup() 
{
  //virtuino.DEBUG=true;               // set this value TRUE to enable the serial monitor status
  Serial.begin(9600);                // Set serial monitor baud rate
  Serial3.begin(9600);
 Timer1.initialize(100000);         // initialize timer1
  Timer1.attachInterrupt(callback);  
    Condition=true;
}


//================================================================== loop



void loop(){
   //virtuino.run();           //  neccesary command to communicate with Virtuino android app
   
   //cpt= virtuino.vMemoryRead(0) ;
 //Serial.println(cpt);
   if (cpt2==500 && cpt2Memo<501){
   cpt2=800;
   }
   if (cpt2==800 && cpt2Memo>799){
   cpt2=500 ;
   }
   

    // Temporisation  TON
if (Condition) {
    CptT[8] = true;
  }
  else {
    T[8] =  0.0;
    TDN[8] =  0.0;
    CptT[8] = false;
  }
  if (T[8] >= 50) { // présélection de 600 donc 60 secondes
    TDN[8] =  1.0;   // bit down
    T[8] = 50;
  }


if (TDN[8]==1){
   // integrateur();
   Serial3.write("AT"+'\r'+'\n');
      Serial.println("AT");
          Condition=false;
      
    }
    
    //integrateur();
    //virtuino.vMemoryWrite(1, cpt2Memo);
 

    //virtuino.vMemoryWrite(0, cpt2); 
   
    
    
    if (Serial3.available()){
                  Serial.println(Serial3.read());
                }
//
//                if (Serial.available()){
//                  Serial3.write(Serial.read());
//                }  
   
   
   
    
  }  
//*******************************************************  
 void integrateur()
 {
  cpt2Memo = ((cpt2Memo * 10) + cpt ) / (10 + 1);
}

void callback() {
  //cpt2Memo = ((cpt2Memo * 1) + cpt ) / (1 + 1);
  if (CptT[8]) {
    T[8] =  T[8] + 1.0;
  }
  }




