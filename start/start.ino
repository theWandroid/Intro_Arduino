
//acabamos de declarar una nueva variable de tipo entero y no le asignamos valor
int counted_people;

//acabamos de deeclarar una nueva variable que solo tendrá valores positivos, con unisigned solo cojemos valores positivos, por tanto tendrá doble de valores
unsigned int counted_people2;

// declaramos una variable de tipo flotante
float height;

long years;

char first_letter = 't';

String sentence = " Welcome World!!!";

bool active = true;

int count = 0;

void setup() {
  // put your setup code here, to run once:

//vamos a sacar el valor de nuetra variable por el puerto Serial
//declaramos el puerto Serial
 //ponemos la velocidad en que vamos atrabajar en este puerto
 //esto se considera una baja velocidad
Serial.begin(9600);
//después de iniciar el Serial vamos a hacer un pequño delay de 100 milisegundos
//esperar un ratito antes de empezar a imprimir por serial es una buena práctica
delay(100);
//vamos a imprimir un mensaje con salto de linea (ln)
Serial.println("Mi primera prácica con Arduino");
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
count = count +1;
//tenemos que convertir el valor entero en string ya que el método print sólo imprime strings
Serial.println(String(count));
delay(1000);
}
