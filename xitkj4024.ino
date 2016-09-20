void setup() 
{                
  pinMode(13, OUTPUT); // Mengatur Digital Pin 13 Sebagai Output     
}
void loop() 
{
  digitalWrite(13, HIGH);   // Menyalakan LED pada Pin 13
  delay(5000);               // Tunggu 5 detik
  digitalWrite(13, LOW);    // Mematikan LED pada Pin 13
  delay(5000);               // Tunggu 5 detik
}
