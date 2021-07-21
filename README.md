# I2S-medidor-consumo-energia

# **MEDIDOR DE CONSUMO DE ENERGIA ENERGIA PARA PROJETO I2S**
<br>
___
<br>


## INSTRUÇÕES DE PREPARAÇÃO DO AMBIENTE
```
Clonar ou fazer download do Zip
1 - $git clone https://github.com/wvianna/i2s-medidor-consumo-energia.git

2 - copiar as pastas das bibliotecas para o diretório de biliotecas do arduino

3 - inicializar a IDE do Arduino

Execute os dois próximos passos com o Nodemcu conectado apenas na USB

4 - compilar e carregar o código EEPROM_VX.ino para o Nodemcu. Este código carregará na faixa de memória EEPROM os parâmetros para o primeiro uso.

5 - compilar e carregar o código medidorEnergiaVXX.ino para o NodeMcu.
```
## INSTRUÇÕES PARA CONFIGURAÇÃO INICIAL

### O wifi no modo ap possui ssid padrão é TroqueSSID a senha é 12345678
### Estes parâmetros devem ser trocados para os parâmetros definitivos.
### Para isto é necessário logar como admin senha padrão 123456

## PINAGEM DO NODEMCU
```
   D0 - Jump para habilitar/desabilitar o sensor de umidade e temperatura DHT11
   D1 - SCL conversor ADS1015
   D2 - SDA conversor ADS1015
   D3
   D4 - Dado do sensor DHT11
   D5 - Jump para habilitar/desabilitar o sensor de presença
   D6 - Entrada para sensor de presença. O ajuste de temporização é feito diretamente no sensor.
   D7 - pino para led verde (nível 0 liga led)
   D8 - pino para reset WatchDog
   D10 - pino para led vermelho (nível 0 liga led)
```
## TESTE DA PLACA E AJUSTE DE TENSÃO
```
Inicialmente será feito o ajuste de tensão com uso do trimpot multivolta.
Esta tensão deve ser medida entre GND e o pin que será usado para VIn da placa.
LAYOUT DA PLACA SHIELD DO MEDIDOR
_______________________________
|                             |
|                             |
|   ADS1115                   |
|   ..........                |
|                             |
|                             |
|     ...............         |
|                             |
|        nodemdu    usb       |
|     ...............         |
|                   pinoVin   |
|                             |
|       _________             |
|       |trimpot|             |
|                             |
|                             |
|      ______________         |
|      |Transformador|        |
|                             |
|_____________________________|

Obs.: os "." são os pinos do ADS1115 e Nodemcu
Ligue o transformador em 110Vca utilizando os terminais do primáro.
Não esqueça de instalar um fusível de 1A
Ligue a alimentação em 110Vca sem o Nodemcu e ADs1115.
Ligue o voltímetro entre os pinos GND e pinoVin. Ajuste com o trimpot para 5,6 Vcc
Depois meça atenção entre todos os pinos do NodeMcu/ADS115 e GND. Todos devem
estar com tensão inferior a 3 Vcc, exceto o Vin.

Instale o Nodemcu e ADS1115 no shield.
Instale o sensor de corrente.
Ligue em 110Vca



```



