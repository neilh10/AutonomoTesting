
void setup() 
{
  //Wait for SerialUSB or 10 seconds
  pinMode(LED_BUILTIN, OUTPUT);
  while ((!SerialUSB) && (millis() < 50000)) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  };
  delay(500);
  SerialUSB.println("Serial monitor opened...");


}
int led_loop=0;
void loop() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  SerialUSB.print(led_loop++);
  SerialUSB.println(" LED On");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}