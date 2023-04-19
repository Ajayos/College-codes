import javax.swing.*;
import java.awt.event.*;

public class exp17 implements ActionListener {
    JTextField nameTextField, branchTextField;
    JLabel clickedLabel;

    public exp17() {
        JFrame frame = new JFrame("Input Form");
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        nameTextField = new JTextField();
        nameTextField.setBounds(150, 50, 200, 30);
        nameTextField.setActionCommand("name");
        nameTextField.addActionListener(this);
        frame.add(nameTextField);

        branchTextField = new JTextField();
        branchTextField.setBounds(150, 100, 200, 30);
        branchTextField.setActionCommand("branch");
        branchTextField.addActionListener(this);
        frame.add(branchTextField);

        JButton submitButton = new JButton("Submit");
        submitButton.setBounds(150, 150, 100, 30);
        submitButton.addActionListener(this);
        frame.add(submitButton);

        clickedLabel = new JLabel("");
        clickedLabel.setBounds(50, 200, 300, 30);
        frame.add(clickedLabel);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getActionCommand().equals("name")) {
            clickedLabel.setText("Name text box clicked.");
        } else if (e.getActionCommand().equals("branch")) {
            clickedLabel.setText("Branch text box clicked.");
        } else if (e.getActionCommand().equals("Submit")) {
            String name = nameTextField.getText();
            String branch = branchTextField.getText();
            clickedLabel.setText("Name: " + name + ", Branch: " + branch);
        }
    }

    public static void main(String[] args) {
        exp17 obj = new exp17();
    }
}
