#include <EEPROM.h>

char endBroker[40] = "10.80.0.80";
char portBroker[40] = "1883";
char userBroker[40] = "picg";
char passBroker[40] = "i2spicgIFF";
char topicoMQTT[40] = "BLOCOA/JT301";
char potenciaDiariaFlash[40] = "";
char potenciaMensalFlash[40] = "";
char potenciaAnualFlash[40] = "";
char potenciaTotalFlash[40] = "";
char ssidwifi[40] = "wIFF_administrativa";
char passwifi[40] = "pOLO@2016";
char staticIP[40] = "10.80.0.110";
char subnetWiFi[40] = "255.255.0.0";
char gatewayWiFi[40] = "10.80.0.1";
char dnsWiFi[40] = "10.80.0.15";
char ssidAp[40] = "TroqueSSID";
char passAp[40] = "12345678";
char userConf[40] = "admin";
char passConf[40] = "123456";
char coeficienteLinearTensao[40] = "0.000";
char coeficienteAngularTensao[40] = "1.00000";
char coeficienteACorrente[40] = "0.01625900808";
char coeficienteBCorrente[40] = "0.04173962888";
char coeficienteCCorrente[40] = "1.095191907";
char shuntCorrente[40] = "160.0";

unsigned int endereco = 0;

void lerEEPROM() {

  endereco = 0;
  EEPROM.get(endereco, endBroker);
  endereco += 40;
  EEPROM.get(endereco, portBroker);
  endereco += 40;
  EEPROM.get(endereco, userBroker);
  endereco += 40;
  EEPROM.get(endereco, passBroker);
  endereco += 40;
  EEPROM.get(endereco, topicoMQTT);
  endereco += 40;
  EEPROM.get(endereco, potenciaDiariaFlash);
  endereco += 40;
  EEPROM.get(endereco, potenciaMensalFlash);
  endereco += 40;
  EEPROM.get(endereco, potenciaAnualFlash);
  endereco += 40;
  EEPROM.get(endereco, potenciaTotalFlash);
  endereco += 40;
  EEPROM.get(endereco, ssidwifi);
  endereco += 40;
  EEPROM.get(endereco, passwifi);
  endereco += 40;
  EEPROM.get(endereco, staticIP);
  endereco += 40;
  EEPROM.get(endereco, subnetWiFi);
  endereco += 40;
  EEPROM.get(endereco, gatewayWiFi);
  endereco += 40;
  EEPROM.get(endereco, dnsWiFi);
  endereco += 40;
  EEPROM.get(endereco, ssidAp);
  endereco += 40;
  EEPROM.get(endereco, passAp);
  endereco += 40;
  EEPROM.get(endereco, userConf);
  endereco += 40;
  EEPROM.get(endereco, passConf);
  endereco += 40;
  EEPROM.get(endereco, coeficienteLinearTensao);
  endereco += 40;
  EEPROM.get(endereco, coeficienteAngularTensao);
  endereco += 40;
  EEPROM.get(endereco, coeficienteACorrente);
  endereco += 40;
  EEPROM.get(endereco, coeficienteBCorrente);
  endereco += 40;
  EEPROM.get(endereco, coeficienteCCorrente);
  endereco += 40;
  EEPROM.get(endereco, shuntCorrente);
  endereco += 40;
  endereco = 0;
  char dado[40];
  for ( byte i = 0; i < 24; i++)
  {
    EEPROM.get(endereco, dado);
    Serial.println(dado);
    endereco += 40;
  }
}

void setup() {
  Serial.begin(115200);
  EEPROM.begin(2048);

  endereco = 0;

  EEPROM.put(endereco, endBroker);
  endereco += 40;
  EEPROM.put(endereco, portBroker);
  endereco += 40;
  EEPROM.put(endereco, userBroker);
  endereco += 40;
  EEPROM.put(endereco, passBroker);
  endereco += 40;
  EEPROM.put(endereco, topicoMQTT);
  endereco += 40;
  EEPROM.put(endereco, potenciaDiariaFlash);
  endereco += 40;
  EEPROM.put(endereco, potenciaMensalFlash);
  endereco += 40;
  EEPROM.put(endereco, potenciaAnualFlash);
  endereco += 40;
  EEPROM.put(endereco, potenciaTotalFlash);
  endereco += 40;
  EEPROM.put(endereco, ssidwifi);
  endereco += 40;
  EEPROM.put(endereco, passwifi);
  endereco += 40;
  EEPROM.put(endereco, staticIP);
  endereco += 40;
  EEPROM.put(endereco, subnetWiFi);
  endereco += 40;
  EEPROM.put(endereco, gatewayWiFi);
  endereco += 40;
  EEPROM.put(endereco, dnsWiFi);
  endereco += 40;
  EEPROM.put(endereco, ssidAp);
  endereco += 40;
  EEPROM.put(endereco, passAp);
  endereco += 40;
  EEPROM.put(endereco, userConf);
  endereco += 40;
  EEPROM.put(endereco, passConf);
  endereco += 40;
  EEPROM.put(endereco, coeficienteLinearTensao);
  endereco += 40;
  EEPROM.put(endereco, coeficienteAngularTensao);
  endereco += 40;
  EEPROM.put(endereco, coeficienteACorrente);
  endereco += 40;
  EEPROM.put(endereco, coeficienteBCorrente);
  endereco += 40;
  EEPROM.put(endereco, coeficienteCCorrente);
  endereco += 40;
  EEPROM.put(endereco, shuntCorrente);
  endereco += 40;
  EEPROM.commit();

  lerEEPROM();

}

void loop() {
}
