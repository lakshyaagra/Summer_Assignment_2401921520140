abstract class Compartment{
    public abstract String notice();
}

class FirstClass extends Compartment{
    @Override
    public String notice(){
        return "This is a First Class Compartment.";
    }
}

class Ladies extends Compartment{
    @Override
    public String notice(){
        return "This is a Ladies Compartment.";
    }
}

class General extends Compartment{
    @Override
    public String notice(){
        return "This is a General Compartment.";
    }
}

class Luggage extends Compartment{
    @Override
    public String notice(){
        return "This is a Luggage Class.";
    }
}

public class TestCompartment{
    public static void main (String[] args) {
        Compartment[] compartment=new Compartment[10];
        for(int i=0;i<compartment.length;i++){
            int random=(int)(Math.random()*4)+1;

            if(random==1){
                compartment[i]=new Luggage();
            }
            else if(random==2){
                compartment[i]=new Ladies();
            }
            else if(random==3){
                compartment[i]=new FirstClass();
            }
            else{
                compartment[i]=new General();
            }
        }
        
        //Checking Run-time Polymorphism
        for(Compartment c:compartment){
            System.out.println(c.notice());
        }
    }
}
