int number1 = 3;
int number2 = 5;

void setup() {
  // put your setup code here, to run once:
  int a = number1 * 2;
  int b = number2 * 2;

  Serial.begin(9600);
  Serial.println("number1");
  Serial.println(number1);
  Serial.println("number2");
  Serial.println(number2);
  
  Serial.println("doubling number 1");
  Serial.println(a);
  Serial.println("doubling number 2");
  Serial.println(b);

  Serial.println("doubling number 1 using method");
  int c = doubleNumber(number1);
  Serial.println(c);


  //another way to do it
  Serial.println("doubling number 2 using method");
 
  Serial.println(doubleNumber(number2));


}

void loop() {
  // put your main code here, to run repeatedly:

}


//method = function
//return type first with data type returned or void
//name nexr using camel case
//paratheses
//paramaeters insise paraentheses and separated with commas
int doubleNumber(int number){
  int result = number * 2;
  return result;
}
