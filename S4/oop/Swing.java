import javax.swing.*;

public class Swing {
    public static void main(String[] args) {
        JFrame frame=new JFrame("Click here");
        frame.setSize(400, 400);
        JButton b=new JButton("click");
        b.setBounds(130,100,100, 40);
        JButton send = new JButton("Send");
        send.setBounds(130,100,150, 10);
        JButton reset = new JButton("Reset");
        reset.setBounds(130,100,50, 70);
        frame.add(b);
        frame.add(send);
        frame.add(reset);
        frame.setSize(400,500);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
