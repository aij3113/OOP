/*
        Interface Relaeted Problem
 */
package lab9;

interface add {
    void add();
}

interface multi{
    void multi();
}

interface arithmetic_operation extends add,multi{
    
}

interface greater{
    void determine_greater();
}

interface equal{
    void determine_equal();
}

interface logical_operation extends greater,equal{
    
}

interface operation extends arithmetic_operation,logical_operation{
    
}

class number{
    private float a;
    private float b;
    public number(float a,float b){
        this.a=a;
        this.b=b;
    }
    public float get_a(){
        return a;
    }
    public float get_b(){
        return b;
    }
}

class math extends number  implements operation {
    
    public math(float a,float b){
        super(a,b);
    }
    @Override
    public void add(){
               System.out.println(super.get_a()+ super.get_b());
    }
    @Override
    public void multi(){
        System.out.println(super.get_a()* super.get_b());
    }
    @Override
    public void determine_greater() {
        if( super.get_a()>super.get_b()){
            System.out.println("A is Greater than B");
        }
        else if( super.get_a()<super.get_b()){
            System.out.println("B is Greater than A");
        } 
    }
    @Override
    public void determine_equal() {
        if( super.get_a()==super.get_b()){
            System.out.println("A is Equal to B");
        }
        else
            System.out.println("A is not Equal to B");
    }
}

public class Lab9 {
    public static void main(String[] args) {
        math ob=new math(10,20);
        ob.add();
        ob.multi();
        ob.determine_greater();
        ob.determine_equal();
    }   
}
