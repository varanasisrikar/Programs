class Car{
	String name;
	String color;
	double speed;
}
class Engine extends Car{
	public void start(){
		System.out.println("Engine started...");	
	}
	public void stop(){
		System.out.println("Engine stoped...");	
	}
}
class AudiCar extends Engine {

	AudiCar(String nm,String cc,double ms){
		super.name = nm;
		super.color = cc;
		super.speed = ms;
	}	
	void printDetails(){
		start();
		System.out.println("Car Name: "+name+"\nCar Color: "+color+"\nMax Speed: "+speed);
		stop();		
	}
}
class Test{
	public static void main(String[] args){
		AudiCar mycar = new AudiCar("Audi","Red",180.0);
		mycar.printDetails();		
	}
}