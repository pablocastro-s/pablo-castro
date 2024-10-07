char receivedChar;  // Variable para almacenar la data recibida
bool rojoState = false;  // Para trackear el estado del indicador "rojo" (LED or output)
bool verdeState = false;  // Para trackear el estado del indicador "verde" (LED or output)

int verdePin = 18;  // Pin donde está el output de LED verde
int rojoPin = 19;  // Pin donde está el output de LED rojo


void setup() {

  Serial.begin(9600);    //start serial communication @9600 bps
  pinMode(verdePin, OUTPUT);   //setea el pin como output , verde led
  pinMode(rojoPin, OUTPUT);   //setea el pin como output , rojo led
 }


void loop() {

  // Checkea si la data está disponible en el serial buffer
  if (Serial.available() > 0) {
  receivedChar = Serial.read();  // Lee la data que recibe
      
  // Handle "rojo" (red) button signals
  if (receivedChar == 'r') {
    rojoState = true;  // Turn on el indicador "rojo"
    digitalWrite(rojoPin, HIGH);
    Serial.println("Rojo ON");
  }
  else if (receivedChar == 'R') {
    rojoState = false;  // Turn off el indicador "rojo" 
    digitalWrite(rojoPin, LOW);
    Serial.println("Rojo OFF");
  }

  // Handle "verde" (green) button signals
  if (receivedChar == 'v') {
    verdeState = true;  // Turn on el indicador "verde"
    digitalWrite(verdePin, HIGH);
    Serial.println("Verde ON");
  }
  else if (receivedChar == 'V') {
    verdeState = false;  // Turn off el indicador "verde" 
    digitalWrite(verdePin, LOW);
    Serial.println("Verde OFF");
  }
 }
}

