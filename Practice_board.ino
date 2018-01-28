//Simple VEX Pro Victor 888 Driver

unsigned short pin = 9;

signed int dutyCycle = 0; 
double highus = 1500;
double lowus = 1000;

void setup() {pinMode(A0, INPUT);
 pinMode(pin, OUTPUT); 
 digitalWrite(pin, LOW);
 pinMode(A0, INPUT);
 pinMode(13, OUTPUT);
 digitalWrite(13, HIGH);
 Serial.begin(9600);
}

void loop() {
  double power = analogRead(A0);
  Serial.println(power);
  highus = map(power, 0, 1024, 1000, 2000);
  digitalWrite(pin, HIGH);
  delayMicroseconds(highus);
  digitalWrite(pin, LOW);
  delayMicroseconds(5000-highus);
}
