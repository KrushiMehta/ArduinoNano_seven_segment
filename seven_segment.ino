void setup() {

   int i=0;
   for(i=2; i<=9; i++) // make all 2 to 9 digital pin on high
   {
    pinMode(i, OUTPUT);
    }
}


void loop() {
  // to display a digit from 0 to 9 change it to low
  
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   delay(2000); 
// display 0 
  
   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   delay(2000);
//display 1 

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(2000);
// display 2 

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(2000); 
   // display 3

   digitalWrite(2, HIGH); 
   digitalWrite(3, LOW); 
   digitalWrite(4, LOW); 
   digitalWrite(5, HIGH); 
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW); 
   digitalWrite(8, LOW); 
   digitalWrite(9, LOW); 
   delay(2000); 
   // display 4
   
   digitalWrite(2, LOW); 
   digitalWrite(3, HIGH); 
   digitalWrite(4, LOW); 
   digitalWrite(5, LOW); 
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW); 
   digitalWrite(8, LOW); 
   digitalWrite(9, LOW); 
   delay(2000); 
   // display 5

   digitalWrite(2, LOW); 
   digitalWrite(3, HIGH); 
   digitalWrite(4, LOW); 
   digitalWrite(5, LOW); 
   digitalWrite(6, LOW); 
   digitalWrite(7, LOW); 
   digitalWrite(8, LOW); 
   digitalWrite(9, LOW); 
   delay(2000); 
   //display 6

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   delay(2000); 
   // display 7

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(2000); 
   // display 8

   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(2000); 
   // display 9

}
