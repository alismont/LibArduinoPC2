/* Virtuino ESP8266 web server Library ver 1.46
 * Created by Ilias Lamprou
 * Updated Noe 30 2016
 * 
 * Download latest Virtuino android app from the link: https://play.google.com/store/apps/details?id=com.virtuino_automations.virtuino
 * Getting starting link: 
 * Video tutorial link: 
 * Contact address for questions or comments: iliaslampr@gmail.com
 */



//========= VirtuinoEsp8266 Class methods  
// boolean connectESP8266_toInternet(String wifiNetworkName,String wifiNetworkPassword, int port);  Set your home wifi network SSID and PASSWORD  (Put this function on start of void setup)

// boolean createLocalESP8266_wifiServer(String wifiNetworkName,String wifiNetworkPassword, int port, int mode); Use this function to create an ESP8266 wifi local network
//                                                                    set port to 80 
//                                                                    set mode=2 to use ESP8266 only as access point 
//                                                                    set mode=3 to use ESP8266 as access point and internet station.

//  bool esp8266_setIP(byte a1, byte a2, byte a3, byte a4);           set ESP8266 local IP. Use this function after connectESP8266_toInternet function 

//========= Virtuino general methods  
//  void vDigitalMemoryWrite(int digitalMemoryIndex, int value)       write a value to a Virtuino digital memory   (digitalMemoryIndex=0..31, value range = 0 or 1)
//  int  vDigitalMemoryRead(int digitalMemoryIndex)                   read  the value of a Virtuino digital memory (digitalMemoryIndex=0..31, returned value range = 0 or 1)
//  void vMemoryWrite(int memoryIndex, float value);                  write a value to Virtuino memory             (memoryIndex=0..31, value range as float value)
//  float vMemoryRead(int memoryIndex);                               read a value of  Virtuino memory             (memoryIndex=0..31, returned a float value
//  run();                                                            neccesary command to communicate with Virtuino android app  (on start of void loop)
//  int getPinValue(int pin);                                         read the value of a Pin. Usefull to read the value of a PWM pin





#ifndef VirtuinoEsp8266_WebServer_h
#define VirtuinoEsp8266_WebServer_h

#include "Arduino.h"

#define ESP8266_USE_SOFTWARE_SERIAL  // disable this command if you want to use hardware serial


#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
      #define arduinoAnalogPinsSize 16  
      #define analogInputPinsMap_ { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15 }

#elif defined(ARDUINO_AVR_NANO)
      #define arduinoAnalogPinsSize 8 
      #define analogInputPinsMap_ { A0, A1, A2, A3, A4, A5, A6, A7}

#else
      #define arduinoAnalogPinsSize 6 
      #define analogInputPinsMap_ { A0, A1, A2, A3, A4, A5}
     
#endif


#ifdef ESP8266_USE_SOFTWARE_SERIAL
#include "SoftwareSerial.h"
#endif

  const float firmwareCode =1.46;                 
  const int arduinoPinsSize = 54;               // max pins of all arduino boards
  const int virtualDigitalMemorySize = 32;
  const int virtualAnalogMemorySize = 32;

const byte ERROR_PIN      = 1;
const byte ERROR_VALUE    = 2;
const byte ERROR_TYPE     = 3;
const byte ERROR_SIZE     = 4;
const byte ERROR_PASSWORD = 5;
const byte ERROR_COMMAND  = 6;
const byte ERROR_UNKNOWN  = 7;

const char COMMAND_START_CHAR ='!';
const char COMMAND_END_CHAR   ='$';
const String COMMAND_ERROR      = "E00=";
const String END_LINE="\r\n";
const String serverInitString = "Server init...";
const String serverReadyString = "Server Ready";
const String serverNotConnectedString = "Not connected";
 class VirtuinoEsp8266_WebServer {
  public:                                            

  #ifdef ESP8266_USE_SOFTWARE_SERIAL
    VirtuinoEsp8266_WebServer(SoftwareSerial &uart, uint32_t baud = 9600);
#else /* HardwareSerial */
    VirtuinoEsp8266_WebServer(HardwareSerial &uart, uint32_t baud = 9600);
#endif
    
  
  //VirtuinoEsp8266_WebServer();
  boolean connectESP8266_toInternet(String wifiNetworkName,String wifiNetworkPassword, int port);
  boolean createLocalESP8266_wifiServer(String wifiNetworkName,String wifiNetworkPassword, int port, int mode=2);
  bool esp8266_setIP(byte a1, byte a2, byte a3, byte a4);
  
  void  run();
  
  void vDigitalMemoryWrite(int digitalMemoryIndex, int value);
  int  vDigitalMemoryRead(int digitalMemoryIndex);
  void vMemoryWrite(int memoryIndex, float value);
  float vMemoryRead(int memoryIndex);
  int getPinValue(int pin);
  void vDelay(long milliseconds);
  //void vPinMode(int pin, int mode); 
   long lastCommunicationTime;
  
  boolean DEBUG=false;
  String password=""; 
  byte networkState=0;  
  
  private:
  
  boolean wifiInternetConnect(String wifiNetworkName,String wifiNetworkPassword, int port);
  void wifiRun();
  String checkNetworkCommand(String command);
  boolean wifiSendData(int connectionId, String content);
  String sendCommand(String command, const int timeout);
  void closeClientConnection(int connectionID);
  void clearESP_buffer(int waitTime);
  char  getCommandType(String aCommand);
  int  getCommandPin(String aCommand);
  float getCommandValue(String aCommand);
  String getErrorCommand(byte code);
  String executeReceivedCommand(char activeCommandType, int activeCommandPin ,float activeCommandValue, boolean returnInfo);
  boolean responseString(String target1,  int timeout);
  boolean responseString(String target1, String target2, int timeout);
  bool esp8266_softAccessPoint(String ssid, String pw);
  bool esp8266_reset(void);
  bool esp8266_mode(int mode);
  bool esp8266_info();
  bool esp8266_baud(long baud);
  bool esp8266_connect(String ssid, String pwd);
  bool esp8266_printIP();
  bool esp8266_multiple(int mode);  
  bool esp8266_serverPort(int port);
  
  boolean initLocalWifiServer(String wifiNetworkName,String wifiNetworkPassword,int port,int mode);
 // byte arduinoPinsMap[arduinoPinsSize] =   {0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  byte arduinoPinsValue[arduinoPinsSize] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int virtualDigitalMemory[virtualDigitalMemorySize]      {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};                            
  float virtualFloatMemory[virtualAnalogMemorySize]       {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};                               
  byte analogInputPinsMap[arduinoAnalogPinsSize]  = analogInputPinsMap_  ;
 
 
 
#ifdef ESP8266_USE_SOFTWARE_SERIAL
    SoftwareSerial *espSerial; /* The UART to communicate with ESP8266 */
#else
    HardwareSerial *espSerial; /* The UART to communicate with ESP8266 */
#endif                                                                 

 };


#endif

