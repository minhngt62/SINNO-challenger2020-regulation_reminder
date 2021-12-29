#include <PCM.h>
const unsigned char sample[] PROGMEM = {
  
};
int count= 0;

void setup() {
    pinMode(8, INPUT);
    pinMode(A0, INPUT);
    pinMode(11, OUTPUT);
}

void loop () {
    if(digitalRead(8)==HIGH) count= 1;
    if(analogRead(A0)>= 550)
    {
       if(!count){
           startPlayback(sample,sizeof(sample));
           delay(4500);
       }
    }
    else count= 0;
}