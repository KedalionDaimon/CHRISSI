

#define INANA A2
#define OUTA 3
#define OUTB 2
#define LIGHTSONTIME 1300
#define LIGHTSOFFTIME 200

#include <EEPROM.h> /* https://github.com/PaulStoffregen/EEPROM */
#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial SRL(0,1);

int16_t anw;
char letr = 0;
int8_t countspaces = 0;
int16_t eepromindex;


char readletter() {

  while (1) {

    if (Serial.available() > 0) {
      letr = Serial.read();
      if (((letr >= 'A') && (letr <= 'Z')) || (letr == ' ')) {
        showletter(letr);
      }
    }
    
    anw = analogRead(INANA);

    if ((anw >= 335) & (anw <= 338)) {
      return(' ');
    } else if ((anw >= 339) & (anw <= 339)) {
      return('A');
    } else if ((anw >= 342) & (anw <= 342)) {
      return('B');
    } else if ((anw >= 344) & (anw <= 344)) {
      return('C');
    } else if ((anw >= 346) & (anw <= 348)) {
      return('D');
    } else if ((anw >= 349) & (anw <= 351)) {
      return('E');
    } else if ((anw >= 354) & (anw <= 355)) {
      return('F');
    } else if ((anw >= 357) & (anw <= 358)) {
      return('G');
    } else if ((anw >= 361) & (anw <= 363)) {
      return('H');
    } else if ((anw >= 365) & (anw <= 368)) {
      return('I');
    } else if ((anw >= 370) & (anw <= 373)) {
      return('J');
    } else if ((anw >= 374) & (anw <= 378)) {
      return('K');
    } else if ((anw >= 379) & (anw <= 384)) {
      return('L');
    } else if ((anw >= 385) & (anw <= 389)) {
      return('M');
    } else if ((anw >= 391) & (anw <= 395)) {
      return('N');
    } else if ((anw >= 396) & (anw <= 403)) {
      return('O');
    } else if ((anw >= 404) & (anw <= 409)) {
      return('P');
    } else if ((anw >= 410) & (anw <= 416)) {
      return('Q');
    } else if ((anw >= 418) & (anw <= 424)) {
      return('R');
    } else if ((anw >= 425) & (anw <= 433)) {
      return('S');
    } else if ((anw >= 436) & (anw <= 445)) {
      return('T');
    } else if ((anw >= 448) & (anw <= 458)) {
      return('U');
    } else if ((anw >= 460) & (anw <= 471)) {
      return('V');
    } else if ((anw >= 474) & (anw <= 486)) {
      return('W');
    } else if ((anw >= 510) & (anw <= 530)) {
      return('X');
    } else if ((anw >= 560) & (anw <= 590)) {
      return('Y');
    } else if ((anw >= 1010) & (anw <= 1023)) {
      return('Z');
    }
  }
}

void showletter(char lettr) {
  if (lettr == 'A') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'B') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'C') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'D') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'E') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'F') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'G') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'H') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'I') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'J') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'K') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'L') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'M') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'N') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'O') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'P') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'Q') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'R') {
    Serial.print(lettr);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'S') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'T') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'U') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'V') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'W') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'X') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'Y') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);

  } else if (lettr == 'Z') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
  } else if (lettr == ' ') {
    Serial.print(lettr);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSOFFTIME);

    digitalWrite(OUTA, HIGH);
    digitalWrite(OUTB, HIGH);
    delay(LIGHTSONTIME);
    digitalWrite(OUTA, LOW);
    digitalWrite(OUTB, LOW);
    delay(LIGHTSONTIME);
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

    showletter(letr);
    eepromindex++;

    if (eepromindex == 512) {
      eepromindex = 0;
    }


  }

  showletter(' ');
}

void setup() {
  pinMode(INANA, INPUT);
  pinMode(OUTA, OUTPUT);
  pinMode(OUTB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  letr = 0;
  letr = readletter();
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
