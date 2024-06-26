//
// Created by Koen Seeuws on 19/05/2024.
//
#include <Arduino.h>
#include "MultiShield.h"

void setupButtons() {
    pinMode(BUTTON_1_PIN, INPUT);
    pinMode(BUTTON_2_PIN, INPUT);
    pinMode(BUTTON_3_PIN, INPUT);
}

void setupLeds() {
    pinMode(LED_1_PIN, OUTPUT);
    pinMode(LED_2_PIN, OUTPUT);
    pinMode(LED_3_PIN, OUTPUT);
    pinMode(LED_4_PIN, OUTPUT);
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, HIGH);
    digitalWrite(LED_4_PIN, HIGH);
}

void setupBuzzer() {
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(BUZZER_PIN, HIGH);
}

void setupDisplay() {
    pinMode(LATCH_PIN,OUTPUT);
    pinMode(CLK_PIN,OUTPUT);
    pinMode(DATA_PIN,OUTPUT);
}