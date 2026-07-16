import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code="FactApplet" width=300 height=300></applet> */

public class FactApplet extends Applet implements ActionListener {

    TextField t1, t2;
    Button b;

    public void init() {
        t1 = new TextField(10);
        t2 = new TextField(10);
        b = new Button("Find Factorial");

        add(new Label("Enter Number:"));
        add(t1);
        add(b);
        add(new Label("Factorial:"));
        add(t2);

        b.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        int n = Integer.parseInt(t1.getText());
        int fact = 1;
        for (int i = 1; i <= n; i++)
            fact *= i;

        t2.setText(String.valueOf(fact));
    }
}
