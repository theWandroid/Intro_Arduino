//creamos un array de 5 números enteros
int ages [5];
float edades [] = {12, 50, 66};
char mensaje [] = "hola bienvenidos";

void setup(){
//vamos a iniciar el puerto serie
Serial.begin(9600);
delay(100);
Serial.println(String (edades[0] ));

}
void loop(){

}
