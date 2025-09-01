// C++ code
//
int temp=0;
const int dry_threshold=800;
const int wet_threshold=300;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  temp=analogRead(A0);
  Serial.println(temp);
  if(temp>=dry_threshold){
    digitalWrite(13, HIGH);
    Serial.println("Dry");
  }
  else if(temp<=wet_threshold){
    digitalWrite(13, LOW);
    Serial.println("Wet");
  }
  else
    Serial.println("Moist");
  delay(10); // Wait for 1000 millisecond(s)
}