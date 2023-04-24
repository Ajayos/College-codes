import javax.swing.*;
import java.awt.event.*;

public class exp17 implements ActionListener {
   JTextField one, two;
   JLabel label= new JLabel(" ");

   public exp17() {
    JFrame f = new JFrame("Text Click");
     f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    one = new JTextField("\t NAME ");
     two = new JTextField("\tBRANCH ");
     one.addActionListener(this);
     two.addActionListener(this);

one.setBounds(150,170,230,30);
one.setActionCommand("one");
 f.add(one);

two.setBounds(150,220,230,30);
 two.setActionCommand("two");
 f.add(two);

f.setLayout(null);
     f.setSize(500, 500);
            f.setVisible(true);
         label.setBounds(190, 260, 230, 30);
         f.add(label);
          }

          public void actionPerformed(ActionEvent e) {
         if (e.getActionCommand().equals("one")) {
                  label.setText("NAME BOX Clicked");
                  }
         else {
                  label.setText("BRANCH BOX Clicked");
         }
          }

          public static void main(String[] args) {
         new exp17();
          }
}




