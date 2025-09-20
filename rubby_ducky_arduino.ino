#include <Keyboard.h>

void setup() {
   //inicializa 
   Keyboard.begin();
   delay(3000);

   //aperta as teclas wind + r 
   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('r');
   delay(500);
   Keyboard.releaseAll();

   //escreve cmd
   Keyboard.print("cmd");
   Keyboard.write(KEY_RETURN);

   //tempo para  no terminal
   delay(1000);

   //escrever no terminal
   Keyboard.print("nslookup myip.opendns.com resolver1.opendns.com");
   Keyboard.write(KEY_RETURN);

}

void loop() {

}
