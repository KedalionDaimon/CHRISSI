

#define INANA A2
#define INANB A1
#define OUTA 3
#define LIGHTSONTIME 1200
#define LIGHTSOFFTIME 300

#include <EEPROM.h> /* https://github.com/PaulStoffregen/EEPROM */
#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial SRL(0,1);

int16_t anw;
int16_t anv;
char letr = 0;
int8_t countspaces = 0;
int16_t eepromindex;
int16_t i;

void blinkletter(int numblink) {

  // Make it blink more:
  numblink = numblink * numblink;
  
  for (i = 0; i < numblink; i++) {
    digitalWrite(OUTA, HIGH);
    delay((LIGHTSONTIME - ((numblink - 1) * 100)) / numblink);
    digitalWrite(OUTA, LOW);
    if (i < numblink - 1) {
      delay(100);
    }
  }
  delay(LIGHTSOFFTIME);
}

void showletter(char lettr) {
  if (lettr == 'A') {

    blinkletter(1);
    blinkletter(1);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'B') {

    blinkletter(1);
    blinkletter(1);
    blinkletter(2);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'C') {

    blinkletter(1);
    blinkletter(1);
    blinkletter(3);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'D') {

    blinkletter(1);
    blinkletter(2);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'E') {

    blinkletter(1);
    blinkletter(2);
    blinkletter(2);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'F') {

    blinkletter(1);
    blinkletter(2);
    blinkletter(3);
    delay(LIGHTSONTIME);
        
  } else if (lettr == 'G') {
    
    blinkletter(1);
    blinkletter(3);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'H') {

    blinkletter(1);
    blinkletter(3);
    blinkletter(2);
    delay(LIGHTSONTIME);

  } else if (lettr == 'I') {

    blinkletter(1);
    blinkletter(3);
    blinkletter(3);
    delay(LIGHTSONTIME);

  } else if (lettr == 'J') {

    blinkletter(2);
    blinkletter(1);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'K') {
    
    blinkletter(2);
    blinkletter(1);
    blinkletter(2);
    delay(LIGHTSONTIME);
        
  } else if (lettr == 'L') {

    blinkletter(2);
    blinkletter(1);
    blinkletter(3);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'M') {

    blinkletter(2);
    blinkletter(2);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'N') {

    blinkletter(2);
    blinkletter(2);
    blinkletter(2);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'O') {
    
    blinkletter(2);
    blinkletter(2);
    blinkletter(3);
    delay(LIGHTSONTIME);
        
  } else if (lettr == 'P') {
    
    blinkletter(2);
    blinkletter(3);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'Q') {

    blinkletter(2);
    blinkletter(3);
    blinkletter(2);
    delay(LIGHTSONTIME);

  } else if (lettr == 'R') {

    blinkletter(2);
    blinkletter(3);
    blinkletter(3);
    delay(LIGHTSONTIME);

  } else if (lettr == 'S') {

    blinkletter(3);
    blinkletter(1);
    blinkletter(1);
    delay(LIGHTSONTIME);

  } else if (lettr == 'T') {

    blinkletter(3);
    blinkletter(1);
    blinkletter(2);
    delay(LIGHTSONTIME);

  } else if (lettr == 'U') {

    blinkletter(3);
    blinkletter(1);
    blinkletter(3);
    delay(LIGHTSONTIME);

  } else if (lettr == 'V') {

    blinkletter(3);
    blinkletter(2);
    blinkletter(1);
    delay(LIGHTSONTIME);

  } else if (lettr == 'W') {

    blinkletter(3);
    blinkletter(2);
    blinkletter(2);
    delay(LIGHTSONTIME);

  } else if (lettr == 'X') {

    blinkletter(3);
    blinkletter(2);
    blinkletter(3);
    delay(LIGHTSONTIME);

  } else if (lettr == 'Y') {

    blinkletter(3);
    blinkletter(3);
    blinkletter(1);
    delay(LIGHTSONTIME);
    
  } else if (lettr == 'Z') {

    blinkletter(3);
    blinkletter(3);
    blinkletter(2);
    delay(LIGHTSONTIME);
    
  } else if (lettr == ' ') {

    blinkletter(3);
    blinkletter(3);
    blinkletter(3);
    delay(LIGHTSONTIME);
  }
}


char readletter() {

  while (1) {

    if (Serial.available() > 0) {
      letr = Serial.read();
      if (((letr >= 'A') && (letr <= 'Z')) || (letr == ' ')) {
        showletter(letr);
      }
    }
    
    anw = analogRead(INANA);

    if ((anw >= 95) & (anw <= 101)) {
      return(' ');
    } else if ((anw >= 103) & (anw <= 105)) {
      return('A');
    } else if ((anw >= 108) & (anw <= 111)) {
      return('B');
    } else if ((anw >= 113) & (anw <= 116)) {
      return('C');
    } else if ((anw >= 120) & (anw <= 125)) {
      return('D');
    } else if ((anw >= 131) & (anw <= 136)) {
      return('E');
    } else if ((anw >= 142) & (anw <= 147)) {
      return('F');
    } else if ((anw >= 155) & (anw <= 160)) {
      return('G');
    } else if ((anw >= 180) & (anw <= 185)) {
      return('H');
    } else if ((anw >= 213) & (anw <= 218)) {
      return('I');
    } else if ((anw >= 260) & (anw <= 265)) {
      return('J');
    } else if ((anw >= 333) & (anw <= 338)) {
      return('K');
    } else if ((anw >= 492) & (anw <= 497)) {
      return('L');
    } else if ((anw >= 960) & (anw <= 1023)) {
      return('M');
    }

    anv = analogRead(INANB);

    if ((anv >= 135) & (anv <= 139)) {
      return('N');
    } else if ((anv >= 141) & (anv <= 145)) {
      return('O');
    } else if ((anv >= 147) & (anv <= 152)) {
      return('P');
    } else if ((anv >= 154) & (anv <= 160)) {
      return('Q');
    } else if ((anv >= 162) & (anv <= 167)) {
      return('R');
    } else if ((anv >= 171) & (anv <= 176)) {
      return('S');
    } else if ((anv >= 187) & (anv <= 192)) {
      return('T');
    } else if ((anv >= 203) & (anv <= 210)) {
      return('U');
    } else if ((anv >= 225) & (anv <= 230)) {
      return('V');
    } else if ((anv >= 250) & (anv <= 255)) {
      return('W');
    } else if ((anv >= 330) & (anv <= 345)) {
      return('X');
    } else if ((anv >= 503) & (anv <= 520)) {
      return('Y');
    } else if ((anv >= 960) & (anv <= 1023)) {
      return('Z');
    }
  }
}

void triggerrecord() {
  countspaces = 0;
  for (eepromindex = 0; eepromindex < 512; eepromindex++) {
    letr = readletter();
    showletter(letr);
    EEPROM.write(eepromindex, letr);

    if (letr == ' ') {
      countspaces++;
      if (countspaces >= 3) {
        while (eepromindex < 512) {
          eepromindex++;
          EEPROM.write(eepromindex, 0);
        }
        countspaces = 0;
        break;
      }
    } else {
      countspaces = 0;
    }
  }

  showletter(' ');

  eepromindex = 0;
  while (1) {

    letr = EEPROM.read(eepromindex);
    if (letr == 0) {
      eepromindex = 0;
      letr = EEPROM.read(0);
    }

    Serial.print(letr);
    showletter(letr);
    eepromindex++;

    if (eepromindex == 512) {
      eepromindex = 0;
    }

    // keep e.g. Z pressed for longer to exit
    delay(10);
    anw = analogRead(INANA);
    anv = analogRead(INANB);
    if ((anw > 90) || (anv > 90)) {
      break;
    }
  }
  showletter(' ');
}

void setup() {
  pinMode(INANA, INPUT);
  pinMode(INANB, INPUT);
  pinMode(OUTA, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  letr = 0;
  letr = readletter();
  Serial.print(letr);
  showletter(letr);

  // Three spaces trigger message recording,
  // but the first character gets ignored:
  if (letr == ' ') {
    countspaces++;
    if (countspaces == 3) {
      triggerrecord();
      countspaces = 0;
    }
  } else {
    countspaces = 0;
  }
}
