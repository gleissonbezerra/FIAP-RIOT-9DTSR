#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL2Ok4yIB45"
#define BLYNK_TEMPLATE_NAME "Dispositivo de Campo"
#define BLYNK_AUTH_TOKEN "2gqAOj7HlyIcXwdD7tpJZe1ifsI8OjZD"

#include <BlynkSimpleEsp32.h>

void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, "GNET 2.4", "F23700623D8D24");
}

void loop()
{
  Blynk.run();
}