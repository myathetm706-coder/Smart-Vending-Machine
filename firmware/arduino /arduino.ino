#include <LiquidCrystal.h>

// LCD configuration
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// IR sensor pins
const int irPin1 = 8;
const int irPin2 = 9;
const int irPin3 = 10;

void setup() {

    pinMode(irPin1, INPUT);
    pinMode(irPin2, INPUT);
    pinMode(irPin3, INPUT);

    lcd.begin(20, 4);
    lcd.clear();
}

void loop() {

    int s1 = digitalRead(irPin1);
    int s2 = digitalRead(irPin2);
    int s3 = digitalRead(irPin3);

    // Inferred correction:
    // The original PDF is missing logical operators
    // between the three sensor conditions.
    if (s1 == LOW && s2 == LOW && s3 == LOW) {

        lcd.setCursor(5, 1);
        lcd.print("THANK YOU! ");
    }

    else {

        lcd.setCursor(6, 1);
        lcd.print("Welcome! ");
    }

    delay(100);
}
