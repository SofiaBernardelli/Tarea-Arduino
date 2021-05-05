int verde=3; //ayuda a que sepas cual es el pasador 3
int rojo=2;  //ayuda a que sepas cual es el pasador 2
int pulsador=4;  //ayuda a que sepas cual es el pasador 4
void setup()   //se establecen las funciones que se llevaran a cabo
{
pinMode(verde , OUTPUT);  //define verde como salida 
  pinMode(rojo , OUTPUT);  //define rojo como salida 
  pinMode(pulsador , INPUT);  //define pulsador como entrada
}
  
void loop()   //ejecuta las funciones de forma infinita
{
if (digitalRead(pulsador) == HIGH)  //si el pulsador esta prendido, se cumplen las siguientes funciones
{
  digitalWrite (verde , HIGH); //se prende el led verde
  digitalWrite (rojo , LOW);   //el led rojo esta apagado
} 

else {     //si el pulsador no esta prendido, se cumplen las siguientes funciones
digitalWrite (verde , LOW);   //el led verde se apaga
digitalWrite (rojo , HIGH);   //e led rojo se prende
}

 }
