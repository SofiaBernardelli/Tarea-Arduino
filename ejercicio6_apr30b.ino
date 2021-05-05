int temperatura = 0;  //define al pasador 0

void setup()   // le define la funcion a cada pin
{
  pinMode(A0, INPUT);  //define al pin A0 como entrada
  pinMode(11, OUTPUT);  //define al pin 11 como salida
  pinMode(10, OUTPUT);  //defie al pin 10 como salida
}

void loop()  //las funciones se repetiran infinitamente
{
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);   
  if (temperatura < 35) {    //si la temperatura es menor a 35 se cumplen las siguientes funciones
    digitalWrite(11, HIGH);  //se enciende el pin 11
    digitalWrite(10, LOW);   //se apaga el pin 10
  } else {     //si la temperatura no es menor a 35 se cumplen las siguientes funciones 
    digitalWrite(11, LOW);   //se apaga el pin 11
    digitalWrite(10, HIGH);  //se prende el pin 10
  }
  
  delay(10); //Le da el tiempo de espera
}
