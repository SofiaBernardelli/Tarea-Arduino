int pulsador=9;  //define al pulsador 9
int sensor=5;  //define al pulsador 5
int led=6;  //define al pulsador 6
int bocina=7;  //define al pulsador 7

void setup()  //se establecen las funciones
{
 pinMode (pulsador , INPUT);  //define a pulsador como entrada
 pinMode (sensor , INPUT);  //define a sensor como entrada
 pinMode (led , OUTPUT);    //define a led como salida
 pinMode (bocina , OUTPUT);  //define a bocina como salida
}

void loop()  //se repiten las funciones infinitamente
{
  if (digitalRead(pulsador)==HIGH){  //si el pulsador esta prendido se realizan las siguientes funciones
    if(digitalRead(sensor)==HIGH){   //si el sensor esta prendido se realizan las siguientes funciones
  digitalWrite(led,HIGH);  //el led se enciende
  digitalWrite(bocina,HIGH);  //la bocina se enciende
    }
  }
}
