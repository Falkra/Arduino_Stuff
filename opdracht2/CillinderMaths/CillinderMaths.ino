float pi = 3.14;
float diameter;
float height;
String Name;


void setup()
{
  Serial.begin(9600);
}

void loop()

{
  //calculate volume cilindre
  
  Serial.println("Hello user, what is your name");
  while (Serial.available() == 0)
    {  }
    Name = Serial.readString();      
  Serial.println("Well hello " + Name);
  Serial.println("What would you like to be the height of your cillinder");
  delay(500);
  Serial.println("Only numbers are valid");
  while (Serial.available() == 0)
    {  }
    height = Serial.parseFloat();
    
    Serial.print("Alright, your cylinder is ");
 Serial.print( height);
  Serial.println(" cm tall");
    delay(2000);
    Serial.println("What will be the diameter of your cillinder");

    while (Serial.available() == 0)
    {  }
    diameter = Serial.parseFloat();
    delay(2000);
    Serial.println("Okay, you have said that your diameter will be ");
    Serial.print(diameter);
    Serial.print("cm");
    delay(1000);
    
    Serial.println("Okay, let me calculate what the volume of your cylinder will be");
    delay(3000);
    Serial.println("Hmmmm...., this might take me a few seconds, just hang in there!");
    delay(10000);
  
    Serial.println("Okay. I am done!");
    delay(700);
    
    
    float volume = pi * (diameter / 2) * (diameter / 2) * height;
    Serial.println("Your cylinder kubik of: ");
    Serial.print(volume);

    Serial.end();
} 
