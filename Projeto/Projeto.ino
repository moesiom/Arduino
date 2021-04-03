int led = 2;
int botao = 3; //onde está ligado o botão
int pressionado = 0; //estado inicial do botão

void setup() {
		pinMode(led, OUTPUT);
		pinMode(botao, INPUT); //o botaão é dispositivo de entrada
}

void loop() {
		pressionado = digitalRead(botao); // pressionado ler entrada do botão
		if(pressionado == HIGH){
				digitalWrite(led, HIGH);
				delay(2000);
		}else{
				digitalWrite(led, LOW);
		}
}
