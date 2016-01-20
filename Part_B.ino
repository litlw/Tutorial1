

const int FRANK = 13;      // Frank is back. He's still a rebel light
const int TED = 7;         // Ted is here too. He tries to control Frank. 
int MOLLY = 0;           // This is Molly. She talks to Ted. 
int MIKE = 0;            // Mike talks to Molly to find out about Ted
int BILL = 0;           // This is bill. If he's around, Frank is high again. 
void setup() {
  // put your setup code here, to run once:
  pinMode (FRANK, OUTPUT);  // Frank is in town. 
  pinMode (TED, INPUT);     // Ted is here to control Frank. 

}

void loop() {
int MOLLY = digitalRead (TED);   // Ted reports in to Molly. 
 if ((MOLLY == HIGH) && (MIKE == LOW)) { //When Molly hears something before Mike
  BILL = 1 - BILL;            // Bill gets involved, and everything goes to hell
//  delay(1000);                // For a while...
 } 

 MIKE = MOLLY;              // Molly then tells Mike the thing

  
 if (BILL == 1){
 
  digitalWrite (FRANK, HIGH);  //And then Frank finds out about Bill and sparks up
 }else {
  digitalWrite(FRANK, LOW);   // But when Bill goes, Frank  goes back to being depressed. 
 }
 
 // No matter who tries to help, Frank is in trouble. Forever. 

}
