import javax.swing.*;
import java.awt.*;

class Calc extends JFrame {
    private static final long serialVersionUID = 1L;

    Calc() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(4, 4));
        GridBagConstraints c = new GridBagConstraints();
        c.gridx = 0;
        c.gridy = 0;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.weighty = 0.5;
        setSize(400, 400);
        JButton b9 = new JButton("9");
        this.add(b9, c);
        JButton b10 = new JButton("10");
        c.gridx = 1;
        c.gridy = 0;
        c.fill = GridBagConstraints.HORIZONTAL;
        c.weighty = 0.5;
        this.add(b10, c);
        JTextField tf1 = new JTextField(10);
        c.gridx = 0;
        c.gridy = 1;
        c.weighty = 0.5;
        c.fill = GridBagConstraints.HORIZONTAL;
        this.add(tf1, c);
        JLabel l = new JLabel("Results");
        c.gridx = 0;
        c.gridy = 1;
        c.weighty = 0.5;
        c.fill = GridBagConstraints.HORIZONTAL;
        this.add(l, c);
        setVisible(true);

    }

    public static void main(String[] args) {
        Calc c = new Calc();
    }
}