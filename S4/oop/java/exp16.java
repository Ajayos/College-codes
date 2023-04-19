import javax.swing.*;
import java.awt.event.*;

public class exp16 implements ActionListener {
    JButton button = new JButton("  +  ");
    int count = 0;
    JLabel t = new JLabel(count + " CLICKED");
    exp16(){
        JFrame f = new JFrame("NUMBER OF CLICKS");
        f.setSize(500,500);
        f.setVisible(true);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        button.setBounds(200, 250, 100, 50);
        f.add(button);
        button.addActionListener(this);
        t.setBounds(210, 100, 200, 100);
        f.add(t);

    }
    public void actionPerformed(ActionEvent e){
        count++;
        t.setText(count + " CLICKED");
    }
    public static void main(String[] args) {
        exp16 obj = new exp16();
    }
}