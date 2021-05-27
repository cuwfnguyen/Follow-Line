int speedA = 10;  //speed motor a
int speedB = 9;  //speed motor b

int M_A1 = 4; //motor a = +
int M_A2 = 5; //motor a = -
int M_B1 = 6; //motor b = -
int M_B2 = 7; //motor b = +

#define left A0
#define left1 A1
#define mid A2
#define right1 A3
#define right A4
#define ss1 digitalRead(left) 
#define ss2 digitalRead(left1) 
#define ss3 digitalRead(mid) 
#define ss4 digitalRead(right1) 
#define ss5 digitalRead(right) 
void setup() 
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
pinMode(speedA, OUTPUT);
pinMode(speedB, OUTPUT);

Serial.begin(9600);

analogWrite(speedA, 70); 
analogWrite(speedB, 70); 
delay(200);
}
void loop()
{  
//doline();
bluetoothRobot();
}
int s=0;
void bluetoothRobot()
{
  if (Serial.available() > 0) {
    s = Serial.read();
    delay(2);
  }
  switch (s)
  {
    case 'w': 
      forward();
      break;
    case 's':
      backward();
      break;
    case 'd':
      turnLeft();
      break;
    case 'a':
      turnRight();
      break;
    case 'e':
      Stop();
      break;
    case 'f':
      doline();
      break;
  }
}
void doline()
{
  if((ss1 == ss2 == ss4 == ss5) && (ss3 != ss1) ) {forward();}
  if((ss2 != ss1) && (ss2 != ss4) ) {turnRight();}
  if((ss4 != ss5) && (ss4 != ss2) ) {turnLeft();}
  if((ss1 != ss2) && (ss1 != ss4) ) {turnRight();}
  if((ss5 != ss4) && (ss5 != ss2) ) {turnLeft();}
}

void backward(){
digitalWrite(M_A1, HIGH);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, HIGH);  

}
void forward(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);  
}


void turnRight(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);  
}

void turnLeft(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}

void Stop(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}