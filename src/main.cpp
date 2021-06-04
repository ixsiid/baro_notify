#include <M5Stack.h>
#include <WiFi.h>
#include <Wire.h>
#include <Preferences.h>


// Preferences pref;

/*
void sub_task(arg *) {

}
*/

void setup() {
	M5.begin(true, false, false, true);
	// pref.begin("pref namespace", false);

	// pref.getString("configure name", buffer, length);
	// pref.putString("configure name", text);

	// xTaskCreate(sub_task, "sub_task", 1024 * 2, nullptr, 10, nullptr);

	/*
	WiFi.mode(WIFI_STA);
	WiFi.begin(ssid, passphrase);
	M5.Lcd.setCursor(5, 2);
	M5.Lcd.print("WiFi connecting");
	bool dot = true;
	while (WiFi.status() != WL_CONNECTED) {
		delay(300);
		M5.Lcd.setCursor(2 + 5 * 16, 12);
		M5.Lcd.print((dot = !dot) ? "." : " ");
	}
	M5.Lcd.setCursor(5, 2);
	M5.Lcd.print("WiFi connected, ");
	M5.Lcd.print(WiFi.localIP().toString());
	*/
}


void loop() {
	delay(1);

	M5.update();
	if (M5.BtnA.wasPressed()) {
	}
}
