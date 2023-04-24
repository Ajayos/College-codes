import javax.swing.*;
import java.awt.event.*;

public class exp18 implements ActionListener {
    JTextField nameTextField, branchTextField;
    JLabel nameLabel, branchLabel, resultLabel;
    JButton submitButton;

    public exp18() {
        JFrame frame = new JFrame("Input Form");
        frame.setSize(500, 500);
        frame.setVisible(true);
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        nameLabel = new JLabel("Name:");
        nameLabel.setBounds(50, 50, 100, 30);
        frame.add(nameLabel);

        nameTextField = new JTextField();
        nameTextField.setBounds(150, 50, 200, 30);
        frame.add(nameTextField);

        branchLabel = new JLabel("Branch:");
        branchLabel.setBounds(50, 100, 100, 30);
        frame.add(branchLabel);

        branchTextField = new JTextField();
        branchTextField.setBounds(150, 100, 200, 30);
        frame.add(branchTextField);

        submitButton = new JButton("Submit");
        submitButton.setBounds(150, 150, 100, 30);
        frame.add(submitButton);
        submitButton.addActionListener(this);

        resultLabel = new JLabel("");
        resultLabel.setBounds(50, 200, 300, 30);
        frame.add(resultLabel);
    }

    public void actionPerformed(ActionEvent e) {
        String name = nameTextField.getText();
        String branch = branchTextField.getText();
        resultLabel.setText("Name: " + name + "<br>, Branch: " + branch);
    }

    public static void main(String[] args) {
        new exp18();
    }
}
