/*
        Implementation of Thread
 */
package lab.pkg10;

class A extends Thread{
    public void run(){
        for(int i=0;i<100;i++){
            System.out.println("Thread " + 1 +" Value " + (100-i) );
        }
    }
}

class B extends Thread{
    public void run(){
        for(int i=0;i<100;i++){
            System.out.println("Thread " + 2 +" Value " + (101+i) );
        }
    }
}

public class Lab10 {
 
    public static void main(String[] args){
        A ob1=new A();
        B ob2=new B();
        ob1.start();
        try{
            ob1.join();
        }
        catch(Exception e){
            
        }
        ob2.start();
    }
}