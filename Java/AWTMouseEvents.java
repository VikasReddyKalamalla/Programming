 // AWTMouseEvents.java
 import java.awt.*;
 import java.awt.event.*;
 public class AWTMouseEvents extends Frame implements MouseListener,
 MouseMotionListener {
    String msg = "";
    int mouseX = 0, mouseY = 0;
    public AWTMouseEvents() {
        // Register this frame as the listener for mouse and mouse motion events
        addMouseListener(this);
        addMouseMotionListener(this);
        setSize(500, 400);
        setTitle("AWT Mouse Listener & Mouse Motion Listener Demo");
        setVisible(true);
        // Closing the window using WindowAdapter
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }
    // --- MouseListener Methods (for button clicks, entering/exiting) --
    
    // Called when a mouse button is clicked (pressed and released).
    public void mouseClicked(MouseEvent e) {
        // Update mouseX and mouseY specifically for the click location
        mouseX = e.getX(); 
        mouseY = e.getY();
        msg = "Mouse Clicked";
        repaint();
    }
    // Called when a mouse button is pressed down.
    public void mousePressed(MouseEvent e) {
        msg = "Mouse Pressed";
        repaint();
    }
    // Called when a mouse button is released.
    public void mouseReleased(MouseEvent e) {
        msg = "Mouse Released";
        repaint();
    }
    // Called when the mouse enters the component's area.
    public void mouseEntered(MouseEvent e) {
        msg = "Mouse Entered";
        repaint();
    }
    // Called when the mouse exits the component's area.
    public void mouseExited(MouseEvent e) {
        msg = "Mouse Exited";
        repaint();
    }
    // --- MouseMotionListener Methods (for movement) --
    
    // Called when the mouse is moved while a button is held down.
    public void mouseDragged(MouseEvent e) {
        msg = "Mouse Dragged at (" + e.getX() + ", " + e.getY() + ")";
        repaint();
    }
    // Called when the mouse is moved without any buttons pressed.
    public void mouseMoved(MouseEvent e) {
        msg = "Mouse Moved at (" + e.getX() + ", " + e.getY() + ")";
        repaint();
    }
    // Drawing the message on the AWT Frame
    public void paint(Graphics g) {
        // Display the current event message
        g.drawString(msg, 50, 100);
        // Display the coordinates for the click event
        g.drawString("Last Click X: " + mouseX + "  Y: " + mouseY, 50, 120);
    }
    public static void main(String[] args) {
        new AWTMouseEvents();
    }
 }
