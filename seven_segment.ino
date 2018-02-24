void setup() {
  // put your setup code here, to run once:
   int i=0;
   for(i=2; i<=9; i++)
   {
    pinMode(i, OUTPUT);
    }
}


void loop() {
  // put your main code here, to run repeatedly:
 
   digitalWrite(2, HIGH);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   delay(2000);
//display 1 numeric

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

   digitalWrite(2, HIGH); //a
   digitalWrite(3, LOW); //b
   digitalWrite(4, LOW); //c
   digitalWrite(5, HIGH); //d
   digitalWrite(6, HIGH); //e
   digitalWrite(7, LOW); //f
   digitalWrite(8, LOW); //g
   digitalWrite(9, LOW); //dot
   delay(2000); 
   // display 4
   
   digitalWrite(2, LOW); //a
   digitalWrite(3, HIGH); //
   digitalWrite(4, LOW); //c
   digitalWrite(5, LOW); //d
   digitalWrite(6, HIGH); //
   digitalWrite(7, LOW); // f
   digitalWrite(8, LOW); //g
   digitalWrite(9, LOW); //dot
   delay(2000); 
   // display 5

   digitalWrite(2, LOW); // a
   digitalWrite(3, HIGH); //b
   digitalWrite(4, LOW); //c
   digitalWrite(5, LOW); //d
   digitalWrite(6, LOW); //e
   digitalWrite(7, LOW); //f
   digitalWrite(8, LOW); //g
   digitalWrite(9, LOW); //dot
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
}
