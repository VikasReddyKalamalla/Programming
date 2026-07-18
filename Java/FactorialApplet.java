 
// FactorialApplet.java
 import java.applet.Applet;
 import java.awt.*;
 import java.awt.event.*;
 public class FactorialApplet extends Applet implements ActionListener {
    Label inputLabel, outputLabel;
    TextField inputField, outputField;
    Button computeButton;
    public void init() {
        // Set layout
        setLayout(new FlowLayout());
        // Create UI components
        inputLabel = new Label("Enter an integer:");
        inputField = new TextField(10);
        outputLabel = new Label("Factorial:");
        outputField = new TextField(15);
        outputField.setEditable(false); // Make the output field read-only
        computeButton = new Button("Compute");
        // Register the applet instance as the listener for button clicks
        computeButton.addActionListener(this);
        // Set a larger font for better visibility (as per provided code)
        Font f = new Font("Arial", Font.PLAIN, 28);
        inputField.setFont(f);
        outputField.setFont(f);
        inputLabel.setFont(f);
        outputLabel.setFont(f);
        computeButton.setFont(f);
        // Add components to applet container
        add(inputLabel);
        add(inputField);
        add(computeButton);
        add(outputLabel);
        add(outputField);
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        try {
            String inputText = inputField.getText();
            int num = Integer.parseInt(inputText);
            if (num < 0) {
                outputField.setText("Invalid input! Must be >= 0");
            } else {
                // Use 'long' to handle larger factorial values (up to 20!)
                long factorial = 1;
                // Calculate factorial
                for (int i = 1; i <= num; i++) {
                    factorial *= i;
                }
                outputField.setText(String.valueOf(factorial));
            }
        } catch (NumberFormatException ex) {
            // Handle cases where the input is not a valid integer (e.g., text)
            outputField.setText("Enter a valid integer!");
        }
    }
 }
