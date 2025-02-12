// Step 1: Define the Plugin interface
interface Plugin {
    void execute();
}

// Step 2: Implement different plugins
class LoggingPlugin implements Plugin {
    @Override
    public void execute() {
        System.out.println("Executing Logging Plugin: Logging system events...");
    }
}

class NotificationPlugin implements Plugin {
    @Override
    public void execute() {
        System.out.println("Executing Notification Plugin: Sending notifications...");
    }
}

// Step 3: Plugin Loader to dynamically load plugins
import java.util.ArrayList;
import java.util.List;

class PluginLoader {
    private List<Plugin> plugins = new ArrayList<>();

    public void registerPlugin(Plugin plugin) {
        plugins.add(plugin);
    }

    public void executeAllPlugins() {
        for (Plugin plugin : plugins) {
            plugin.execute();
        }
    }
}

// Step 4: Demonstrate Plugin System
public class PluginSystemDemo {
    public static void main(String[] args) {
        PluginLoader loader = new PluginLoader();

        // Adding plugins dynamically
        loader.registerPlugin(new LoggingPlugin());
        loader.registerPlugin(new NotificationPlugin());

        // Executing all plugins
        loader.executeAllPlugins();
    }
}
