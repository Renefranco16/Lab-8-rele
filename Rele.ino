#include <time.h>

const int botonPin = 3; // Cambia esto al número de pin donde conectaste el botón
int estadoBoton = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  // Lee el estado del botón
  estadoBoton = digitalRead(botonPin);

  // Si el botón está presionado, enciende el LED
  if (estadoBoton == HIGH)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }

  delay(1000); // Pequeña pausa para evitar rebotes en el botón
}
