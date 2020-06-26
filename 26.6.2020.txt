int S_A = 10;  //speed motor a
int S_B = 9;  //speed motor b

int M_A1 = 4; //motor a = +
int M_A2 = 5; //motor a = -
int M_B1 = 6; //motor b = -
int M_B2 = 7; //motor b = +

#define right A0
#define left A1
#define mid A2

 
void setup() 
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
pinMode(S_B, OUTPUT);
pinMode(S_A, OUTPUT);
 
analogWrite(S_A, 60); 
analogWrite(S_B, 60); 
delay(200);
}
void loop()
{  
  
if ((digitalRead(left) == digitalRead(mid) )&&(digitalRead(right) != digitalRead(mid))){turnLeft();}

if ((digitalRead(left) == digitalRead(right))&&(digitalRead(left)!=digitalRead(mid))){forward();}
if ((digitalRead(mid) == digitalRead(right))&&(digitalRead(left)!=digitalRead(mid))){turnRight();}

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