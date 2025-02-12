// Step 1: Define an abstract SmartDevice class
abstract class SmartDevice {
    protected String deviceName;
    private String wifiPassword; // Encapsulation

    public SmartDevice(String deviceName) {
        this.deviceName = deviceName;
    }

    public void powerOn() {
        System.out.println(deviceName + " is now ON.");
    }

    public void powerOff() {
        System.out.println(deviceName + " is now OFF.");
    }

    public void setWifiPassword(String wifiPassword) {
        if (wifiPassword.length() >= 8) {
            this.wifiPassword = wifiPassword;
            System.out.println(deviceName + " WiFi password updated.");
        } else {
            System.out.println("Password must be at least 8 characters long!");
        }
    }

    public abstract void connectToWiFi(); // Abstract method to be implemented by subclasses
}

// Step 2: Implement concrete smart devices
class Smartphone extends SmartDevice {
    public Smartphone(String deviceName) {
        super(deviceName);
    }

    @Override
    public void connectToWiFi() {
        System.out.println(deviceName + " is connecting to WiFi using mobile network settings...");
    }
}

class Smartwatch extends SmartDevice {
    public Smartwatch(String deviceName) {
        super(deviceName);
    }

    @Override
    public void connectToWiFi() {
        System.out.println(deviceName + " is connecting to WiFi with low power mode...");
    }
}

class SmartTV extends SmartDevice {
    public SmartTV(String deviceName) {
        super(deviceName);
    }

    @Override
    public void connectToWiFi() {
        System.out.println(deviceName + " is connecting to WiFi using home network settings...");
    }
}

// Step 3: SmartHome class to manage devices
import java.util.ArrayList;
import java.util.List;

class SmartHome {
    private List<SmartDevice> devices = new ArrayList<>();

    public void addDevice(SmartDevice device) {
        devices.add(device);
    }

    public void powerOnAllDevices() {
        for (SmartDevice device : devices) {
            device.powerOn();
        }
    }

    public void powerOffAllDevices() {
        for (SmartDevice device : devices) {
            device.powerOff();
        }
    }
}

// Step 4: Demonstrate Smart Device System
public class SmartHomeDemo {
    public static void main(String[] args) {
        SmartHome home = new SmartHome();

        Smartphone phone = new Smartphone("iPhone 15");
        Smartwatch watch = new Smartwatch("Samsung Galaxy Watch");
        SmartTV tv = new SmartTV("LG Smart TV");

        home.addDevice(phone);
        home.addDevice(watch);
        home.addDevice(tv);

        home.powerOnAllDevices();
        phone.connectToWiFi();
        watch.connectToWiFi();
        tv.connectToWiFi();
        home.powerOffAllDevices();
    }
}
