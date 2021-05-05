int verde1=2;  //define al pasador 2
int amarillo1=3;  //define al pasador 3
int rojo1=4;  //define al pasador 4
int verde2=5;  //define al pasador 5
int amarillo2=6;  //define al pasador 6
int rojo2=7;  //define al pasador 7

void setup()  //establece las funciones que se llevaran a cabo
{
 pinMode (verde1 , OUTPUT);  //define a verde1 como salida
 pinMode (amarillo1 , OUTPUT);  //define a amarillo1 como salida
 pinMode (rojo1 , OUTPUT);  //define a rojo1 como salida
 pinMode (verde2 , OUTPUT);  //define a verde2 como salida
 pinMode (amarillo2 , OUTPUT);  //define a amarillo2 como salida
 pinMode (rojo2 , OUTPUT);  //define a rojo2 como salida
}

void loop()  //las funciones se repetiran infinitamente
{
  digitalWrite (verde1 , HIGH);  //se prende verde1
  delay(2000);  //estara prendido por 2 segundos
  digitalWrite (verde1 , LOW);   //se apaga verde1
  digitalWrite (amarillo1 , HIGH);  //se prende amarillo1
  delay(2000);  //estara prendido por 2 segundos
  digitalWrite (amarillo1 , LOW); //se apaga amarillo1
  digitalWrite (rojo1 , HIGH);  //se prende rojo1 
  delay(2000);  //estara prendido por 2 segundos
  digitalWrite (rojo1 , LOW); //se apaga rojo1
  digitalWrite (verde2 , HIGH);  //se prende verde2
  delay(2000);   //estara prendido por 2 segundos
  digitalWrite (verde2 , LOW);  //se apaga verde2
  digitalWrite (amarillo2 , HIGH);  //se prende amarillo2
  delay(2000);  //estara prendido por 2 segundos
  digitalWrite (amarillo2 , LOW);  //se apaga amarillo2
  digitalWrite (rojo2 , HIGH);  //se prende rojo2
  delay(2000);  //estara prendido por 2 segundos
  digitalWrite (rojo2 , LOW);  //se apaga rojo2 
}
  
