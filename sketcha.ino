int val[5]; //establishing array of 5 analog inputs 

void setup() {
  Serial.begin(9600); //Serial communication set up. Standard = 9600
}

void loop() {
  for(int i = 0; i < 5; i++){ //For loop will read analog inputs one by one
    val[i] = analogRead(i);
    Serial.print(val[i]);
    Serial.print(" "); //seperates analog data from the inputs into 5 distinct data sets
  }
  Serial.println();
  delay(100); //delay by 100 ms for processing power

}
