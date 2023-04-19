import javax.swing.*;
import java.awt.event.*;
import java.awt.FlowLayout;

public class exp15 implements ActionListener {
    JButton button1, button2;
    JLabel label = new JLabel(" ");
    public exp15() {
        JFrame frame = new JFrame("Button Click Example");
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        button1 = new JButton("OK");
        button1.addActionListener(this);
        button2 = new JButton("CANCEl");
        button2.addActionListener(this);

        frame.getContentPane().add(button1);
        frame.getContentPane().add(button2);
        frame.setLayout(new FlowLayout());
        frame.setSize(300, 100);
        frame.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button1) {
            System.out.println("OK clicked");
            label.setText("OK");
        } else if (e.getSource() == button2) {
            System.out.println("CANCEL clicked");
            label.setText("CANCEL");
        }
    }

    public static void main(String[] args) {
        new exp15();
    }
}

