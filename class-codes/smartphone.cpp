#include <iostream>

using std::cout;
using std::endl;

class device {
protected:
    int battery_level;
    bool is_on;
public:
    device(int battery): battery_level(battery), is_on(false) {
    }

    int get_battery_level() {
        return battery_level;
    }

    void set_battery_level(int battery) {
        battery_level = battery;
    }

    void power_on() {
        if (!is_on) {
            is_on = true;
            cout << "Device is now ON." << endl;
        } else {
            cout << "Device is already ON." << endl;
        }
    }

    void power_off() {
        if (is_on) {
            is_on = false;
            cout << "Device is now OFF." << endl;
        } else {
            cout << "Device is already OFF." << endl;
        }
    }

    bool is_powered_on() {
        return is_on;
    }
};

class smartphone : public device {
public:
    smartphone(int battery): device(battery) {
    }

    void show_battery_level() {
        cout << "Battery level: " << get_battery_level() << "%" << endl;
    }

    void show_status() {
        if (is_powered_on()) {
            cout << "Smartphone is ON." << endl;
        } else {
            cout << "Smartphone is OFF." << endl;
        }
    }
};

int main() {
    smartphone phone(85);

    phone.show_battery_level();
    phone.power_on();
    phone.show_status();

    phone.power_off();
    phone.show_status();

    return 0;
}
