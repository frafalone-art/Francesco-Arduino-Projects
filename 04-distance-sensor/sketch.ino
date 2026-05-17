int triggerPort = 7;
int echoPort = 8;
int rosso = 10;
int giallo = 11;
int ovr = 4;

void setup() {

pinMode( triggerPort, OUTPUT );
pinMode( echoPort, INPUT );
pinMode( rosso, OUTPUT );
pinMode( giallo, OUTPUT );
pinMode( ovr, OUTPUT );
Serial.begin( 9600 );
Serial.println( "Sensore ultrasuoni:");

}

void loop() {
 //porta bassa l'uscita del trigger
 digitalWrite( triggerPort, LOW );

 //invia un impulso di 10microsec  su trigger
 digitalWrite( triggerPort, HIGH );
 delayMicroseconds( 10 );
 digitalWrite( triggerPort, LOW );

 long duration = pulseIn( echoPort, HIGH);

 long r = 0.034 * duration / 2;

 Serial.print( "durata:  ");
 Serial.print( duration );
 Serial.print( " , " );
 Serial.print( "distanza: " );

 //dopo 38ms è fuori dalla portata del sensore
 if( duration > 38000 ) Serial.println("fuori portata");
 else { Serial.print( r ); Serial.println( "cm" );}
 
 if(  r > 30) digitalWrite(rosso, HIGH);
 else { digitalWrite(giallo, HIGH);}
 if( r > 50) digitalWrite(rosso, LOW), digitalWrite(ovr, HIGH);
 //aspetta 150 millisecondi
 delay( 150 );
 digitalWrite(rosso, LOW);
 digitalWrite(giallo, LOW);
 digitalWrite(ovr, LOW);
 }
