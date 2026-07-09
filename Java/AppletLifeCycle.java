import java.applet.Applet;
import java.awt.Graphics;

public class AppletLifeCycle extends Applet {

    // Called once when applet is loaded
    public void init() {
        System.out.println("init() method called");
    }

    // Called when applet starts or restarts
    public void start() {
        System.out.println("start() method called");
    }

    // Used to draw output on the applet window
    public void paint(Graphics g) {
        g.drawString("Applet Life Cycle Demo", 50, 50);
        g.drawString("Check console for method calls", 50, 70);
    }

    // Called when applet is stopped
    public void stop() {
        System.out.println("stop() method called");
    }

    // Called when applet is destroyed
    public void destroy() {
        System.out.println("destroy() method called");
    }
}
