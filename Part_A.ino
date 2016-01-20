//this is TUTORIAL 1

int FRANK = 13; // this is frank, he likes to be high

void setup() {
  // put your setup code here, to run once:
  pinMode (FRANK, OUTPUT); // frank doesnt trust the man, he knows he's just an output

}

void loop() {
  digitalWrite (FRANK, HIGH); // first frank is high
   delay (1000);              // for a while
    digitalWrite (FRANK, LOW);// but then he realizes he isnt helping anyone. and gets low and depressed
    delay (1000);             // for a while. 
                              // and then he does it all over again. 
                              // poor frank. 
}
