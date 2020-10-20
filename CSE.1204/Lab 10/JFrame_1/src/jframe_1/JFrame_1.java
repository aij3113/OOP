/*
        Implementation of JFrame
 */
package jframe_1;

import java.awt.Button;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class A extends JFrame{
     JFrame jf;
     JTextField tf1;
     JTextField tf2;
     Button bt1;
     Button bt2;
     Button bt3;
     Button bt4;
     Button bt5;
     JLabel lb1;
     JLabel lb2;
     
    public A(){
        jf= new JFrame("LAB 10 ");
        jf.setBounds(1000, 1000, 5000, 2000);
        jf.setVisible(true);
        
        tf1= new JTextField(10);
        tf2= new JTextField(10);
        bt1=new Button("  +  ");
        bt2=new Button("  -  ");
        bt3=new Button("  *  ");
        bt4=new Button("  /  ");
        bt5=new Button("  %  ");
        lb1=new JLabel("      ANSWER = ");
        lb2=new JLabel("  ");
        
        jf.setLayout(new FlowLayout());
        
        bt1.addActionListener(new ActionListener(){
                @Override
                    public void actionPerformed(ActionEvent ae) {
                            String var1 =tf1.getText();
                            String var2 =tf2.getText();
                            int val1= Integer.parseInt(var1);
                            int val2= Integer.parseInt(var2);
                            int val=val1+val2;
                            lb2.setText(String.valueOf(val));
                    }           
        });
           
        bt2.addActionListener(new ActionListener(){
                @Override
                    public void actionPerformed(ActionEvent ae) {
                            String var1 =tf1.getText();
                            String var2 =tf2.getText();
                            int val1= Integer.parseInt(var1);
                            int val2= Integer.parseInt(var2);
                            int val=val1-val2;
                            lb2.setText(String.valueOf(val));
                    }          
        });
        
        bt3.addActionListener(new ActionListener(){
                @Override
                    public void actionPerformed(ActionEvent ae) {
                            String var1 =tf1.getText();
                            String var2 =tf2.getText();
                            int val1= Integer.parseInt(var1);
                            int val2= Integer.parseInt(var2);
                            int val=val1*val2;
                            lb2.setText(String.valueOf(val));
                    }
        });
        
        bt4.addActionListener(new ActionListener(){
                @Override
                    public void actionPerformed(ActionEvent ae) {
                            String var1 =tf1.getText();
                            String var2 =tf2.getText();
                            int val1= Integer.parseInt(var1);
                            int val2= Integer.parseInt(var2);
                            int val=val1/val2;
                            lb2.setText(String.valueOf(val));
                    }
        });
        
        bt5.addActionListener(new ActionListener(){
                @Override
                    public void actionPerformed(ActionEvent ae) {
                            String var1 =tf1.getText();
                            String var2 =tf2.getText();
                            int val1= Integer.parseInt(var1);
                            int val2= Integer.parseInt(var2);
                            int val=val1%val2;
                            lb2.setText(String.valueOf(val));
                    }
        });
        
        
        jf.add(tf1);
        jf.add(tf2);
        jf.add(bt1);
        jf.add(bt2);
        jf.add(bt3);
        jf.add(bt4);
        jf.add(bt5);
        jf.add(lb1);
        jf.add(lb2);
        jf.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        
    }
}
 
public class JFrame_1 {

    public static void main(String[] args) {
       
        A ob1=new A(); 
        
    }
    
}