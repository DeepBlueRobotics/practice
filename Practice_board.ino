#define pwm = 3;
#define slider = A0;
#define compressor = 5;
#define pressSense = 6


signed int dutyCycle = 0; 
double highus = 1500;
double lowus = 1000;
double power = 512;

void setup() {
  pinMode(slider, INPUT);
  pinMode(pwm, OUTPUT); 
  pinMode(slider, INPUT);
  pinMode(compressor, OUTPUT);
  pinMode(pressSense, INPUT_PULLUP);
  digitalWrite(pin, LOW);
  Serial.begin(9600);
}

void loop() {
  double power = analogRead(slider);
  Serial.println(power);
  highus = map(power, 0, 1024, 1000, 2000);
  digitalWrite(pwm, HIGH);
  delayMicroseconds(highus);
  digitalWrite(pwm, LOW);
  delayMicroseconds(2500-highus);
}
