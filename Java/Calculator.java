import java.awt.*;
import java.awt.event.*;

public class Calculator extends Frame implements ActionListener {

    TextField tf;
    Button b1, b2, b3, b4, b5;

    public Calculator() {
        tf = new TextField();
        setLayout(new GridLayout(3, 2));

        b1 = new Button("Add");
        b2 = new Button("Sub");
        b3 = new Button("Mul");
        b4 = new Button("Div");
        b5 = new Button("Clear");

        add(tf); add(b1); add(b2); add(b3); add(b4); add(b5);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);

        setSize(300,300);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        tf.setText("Button Clicked: " + e.getActionCommand());
    }

    public static void main(String[] args) {
        new Calculator();
    }
}
