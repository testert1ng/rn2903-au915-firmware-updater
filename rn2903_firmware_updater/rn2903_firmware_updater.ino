//Used to forward serial data from PC to RN2903 
//testerting
#define loraSerial Serial1
#define pcSerial Serial

void setup() {
  loraSerial.begin(57600);
  pcSerial.begin(57600);
  while (!loraSerial || !pcSerial) {
    ;
  }
}

void loop() {
  if (pcSerial.available()) {
    loraSerial.write(pcSerial.read());
  }
  if (loraSerial.available()) {
    pcSerial.write(loraSerial.read());
  }
}
