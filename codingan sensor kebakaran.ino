// deklarasi variable atau setiap komponen output/input
int buzzer = 8;
int flameSensor = A0;
int MQ2 = A5;

// variable untuk menampung value flame sensor dan MQ2
int valueMQ2 = 0;
int valueFlameSensor = 0;

// led
int ledRed = 6;
int ledGreen = 7;

// set nilai seratus masukkan kedalam variable
int sensorThread = 100;

void setup() {

Serial.begin(9600);

// set pinMode

// komponen input
pinMode(flameSensor, INPUT);
pinMode(MQ2, INPUT);

// komponen output
pinMode(ledGreen, OUTPUT);
pinMode(ledRed, OUTPUT);
pinMode(buzzer, OUTPUT);


}

void loop() {

// baca flame sensor
valueFlameSensor = analogRead(flameSensor);
Serial.print("Value Flame Sensor = ");
Serial.println(valueFlameSensor);

// baca sensor MQ2
valueMQ2 = analogRead(MQ2);
Serial.print("Value MQ2 = ");
Serial.println(valueMQ2);

 // melakukan pengecakan jika value sensor memenuhi nilai 100
 if(valueFlameSensor < sensorThread) {
 
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledRed, HIGH);
    
 } else if(valueMQ2 > sensorThread) {
 
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledRed, HIGH);
    
 } else {
 
    digitalWrite(ledGreen, HIGH);
    digitalWrite(buzzer, LOW);
    digitalWrite(ledRed, LOW);
    
 }



}