    /*
    Pinagem do LCD
    
    GND => (-)
    VCC => 5V
    SDA => A4
    SCL => A5 
    */
    
   #include <Wire.h> 
   #include <LiquidCrystal_I2C.h>

   LiquidCrystal_I2C lcd(0x3F,16,2);  // 0x27 ou 0x3F

   void setup()
   {
   lcd.init();           // initializa o lcd 
   lcd.backlight();      // acende a luz de fundo no lcd
   }

   void loop()
   {
   lcd.setCursor(5,0);
   lcd.print("Teste");
   lcd.setCursor(4,1);
   lcd.print("Escrita");
   delay(3000);
   lcd.clear();
   lcd.setCursor(5,0);
   lcd.print("Nova");
   lcd.setCursor(4,1);
   lcd.print("Mensagem");
   delay(3000);
   lcd.clear();
   }
