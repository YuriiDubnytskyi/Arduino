/*
 * This video shows you how to use MAX7219 module with 8x8 LED matrix to display text or any characters on the LED.
* watch YouTube video: https://youtu.be/AAiDwBKs9uE
 * 
 *Written by Ahmad S. for Robojax.com
 *on Feb 26, 2017 in Ajax, Ontario, Canada
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.

 */

//We always have to include the library
// Based on a project posted https://github.com/wayoda/LedControl
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 // Customized for RoboJax.com on Feb 26, 2017 in Ajax, Ontario, Canada.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to CS
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,11,10,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime=700;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix() {
  /* here is the data for the characters */

  // K
  byte D[8]={ B01111110,B01000010,B01000010,B01000010,B01000010,B11111111,B10000001,B10000001};
  byte Y[8]={ B01100010,B10100010,B00100010,B00100010,B00111110,B00000010,B00100100,B00111000};  
  byte B[8]= { B01111110,B01000000,B01000000,B01111110,B01000010,B01000010,B01000010,B01111110};
  byte R[8]={B01000010,B01000010,B01000010,B01111110,B01000010,B01000010,B01000010,B01000010};
  byte N[8]={ B01000100,B01000100,B01000100,B01000100,B01111100,B01000100,B01000100,B01000100};
  byte U[8]={ B10000001,B10000011,B10000101,B10001001,B10010001,B10100001,B11000001,B10000001};    
  byte T[8]={ B01000100,B01000100,B01000100,B01000100,B01000100,B01111110,B00000010,B00000010};
  byte P[8]={B01000000,B01000000,B01000000,B01000000,B01111110,B01000010,B01000010,B01111110};
  byte K[8]={ B01000110,B01001000,B01010000,B01100000,B01100000,B01010000,B01001000,B01000110};
  
  byte J[8]={B00100100,B10011001,B10000011,B10000101,B10001001,B10010001,B10100001,B11000001};
  byte Q[8]={ B10011001,B01000010,B00100100,B10000001,B00000000,B01111110,B10011001,B10011001};
  byte W[8]={B10100101,B01011010,B10100101,B01011010,B01011010,B10100101,B01011010,B10100101};


  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,D[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////
  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,Y[i]);
  }
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////
  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,B[i]);
  } 
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
   for (int i=0; i<8; i++){
  lc.setRow(0,i,R[i]);
  } 
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  } 
/////////////// END of Letter///////
  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,U[i]);
  } 
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter J///////
  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,T[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////

  /* Letter A  */
   
/////////////// END of Letter///////

  /* Letter X */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,P[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
/////////////// END of Letter///////



  /* love */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,K[i]);

  }
   

  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }
  
  
  
  for (int i=0; i<8; i++){
  lc.setRow(0,i,U[i]);

  }
   

  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
    
    
  for (int i=0; i<8; i++){
  lc.setRow(0,i,J[i]);

  }
   

  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }  
   for (int i=0; i<8; i++){
  lc.setRow(0,i,Q[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }
  for (int i=0; i<8; i++){
  lc.setRow(0,i,W[i]);

  }
   
  delay(delaytime);
  for(int i=0; i<8; i++){
      lc.setRow(0,i,0);// this is for blank
  }      
/////////////// END of Letter///////

}// writeArduinoOnMatrix()  end


void loop() { 
  writeArduinoOnMatrix();

}
 
