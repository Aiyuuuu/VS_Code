public class Main {
    public static void main(String[] args) {
        Employee employee = new employee();
        employee.setName("Ali");
        employee.setId("1234");
        employee.setSalary("50k");

        System.out.println("Name:" +employee.getName());
        System.out.println("Id:" +employee.getId());
        System.out.println("Salary:" +employee.getSalary());

}
}

public class Employee{
    private String name;
    private int id;
    private int salary;

    public String getName(){
        return name;
    }

    public int getId(){
        return id;
    }

    public int getSalary(){
        return salary;
    }
}

 public void setName(String name){
     this.name = name;
 } 
 
 public void setId(Int id){
     this.id = id;
 }
 
 public void setSalary(Int salary){
    if(salary>=0){
    this.salary = salary;
 }
 else{
     System.out.println("Salary cannot be negative");
}
}