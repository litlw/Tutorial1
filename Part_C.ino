const int a = 10;
const int b = 9;
const int c = 8;
const int d = 7;
const int e = 6;
const int f = 5;// Frank is back. He's still a rebel light
const int TED = 12;         // Ted is here too. He tries to control Frank. 
int MOLLY = 0;           // This is Molly. She talks to Ted. 
int MIKE = 0;            // Mike talks to Molly to find out about Ted
int BILL = 0;           // This is bill. If he's around, Frank is high again. 
void setup() {
  // put your setup code here, to run once:
  pinMode (a, OUTPUT); 
   pinMode (b, OUTPUT); 
    pinMode (c, OUTPUT);
     pinMode (d, OUTPUT);
      pinMode (e, OUTPUT);
       pinMode (f, OUTPUT); // Frank is in town. 
  pinMode (TED, INPUT);     // Ted is here to control Frank. 

}

void loop() {

int MOLLY = digitalRead (TED);  
 if ((MOLLY == HIGH) && (MIKE == LOW)) { 
  BILL = 1 - BILL;   

                
 } 

 MIKE = MOLLY;            

  
 if (BILL == 1){
    digitalWrite (a, HIGH); 
delay(100);
digitalWrite (b, HIGH); 
delay(100);
    digitalWrite (c, HIGH);
   delay(100); 
  digitalWrite (d, HIGH);
 delay(100);   
  digitalWrite (e, HIGH);
 delay(100); 
 digitalWrite (f, HIGH); 
 delay (1000);
  digitalWrite(a, LOW); 
  digitalWrite(b, LOW); 
 digitalWrite(c, LOW); 
 digitalWrite(d, LOW); 
 digitalWrite(e, LOW); 
 digitalWrite(f, LOW);
 delay (1000);
 
 }
    else {
  digitalWrite(a, LOW); 
  digitalWrite(b, LOW); 
 digitalWrite(c, LOW); 
 digitalWrite(d, LOW); 
 digitalWrite(e, LOW); 
 digitalWrite(f, LOW); 
 
 }
 
  

}
