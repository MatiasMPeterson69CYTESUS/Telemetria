#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_RA8875.h>

// Configuración de pines para la tarjeta RA8875
#define RA8875_CS 10
#define RA8875_RESET 9

// Crear instancia de la tarjeta RA8875
Adafruit_RA8875 tft = Adafruit_RA8875(RA8875_CS, RA8875_RESET);

void setup() {
  Serial.begin(9600);
  
  // Inicializar la pantalla RA8875
  if (!tft.begin(RA8875_800x480)) {
    Serial.println("No se pudo inicializar la pantalla RA8875");
    while (1);
  }
  
  // Configurar la pantalla
  tft.displayOn(true);
  tft.GPIOX(true);
  tft.PWM1config(true, RA8875_PWM_CLK_DIV1024);
  tft.PWM1out(255);
  
  // Dibujar en la pantalla
  tft.fillScreen(RA8875_WHITE);
  tft.fillRect(100, 100, 200, 100, RA8875_RED);
  tft.setCursor(100, 100);
  tft.setTextColor(RA8875_BLACK);
  tft.setTextSize(1);
  tft.print("Hola Formula SAE!");
}

void loop() {
  // Código para manejar la pantalla táctil y otras funciones
}
