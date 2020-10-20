package Lab8;

class person {
    private String name;
    private String mobile_no;
    public person ()
    {
	name=null;
	mobile_no=null;
    }
    public person (String name,String mobile_no)
    {
	this.name=name;
	this.mobile_no=mobile_no;
    }
    public void show ()
    {
	System.out.println("Name: "+ name + "\nMobile No: " + mobile_no);
    }
}

class student extends person {
    private String roll;
    private double cgpa;
    public student ()
    {
	super ();
	roll=null;
	cgpa=0;
    }
    public student (String name,String mobile_no,String roll,double cgpa)
    {
	super (name,mobile_no);
	this.roll=roll;
	this.cgpa=cgpa;
    }
    @Override
    public void show ()
    {
	super.show ();
	System.out.println("Roll: "+ roll + "\nCGPA: " + cgpa);
    }
}

public class Lab8 {

    public static void main (String[] args) {
        int a;
        student ob = new student("JOY","01710158323","1803046",3.33);
        ob.show();
        System.out.println("\nEnd of Program\n\n");
        
    }

}