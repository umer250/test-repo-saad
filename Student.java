public class Student {
    private String name;
    private int rollNumber;
    private double marks;
    
    public Student(String name, int rollNumber, double marks) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.marks = marks;
    }
    
    public String getName() {
        return name;
    }
    
    public int getRollNumber() {
        return rollNumber;
    }
    
    public double getMarks() {
        return marks;
    }
    
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Marks: " + marks);
    }
    
    public static void main(String[] args) {
        Student s1 = new Student("John Doe", 101, 85.5);
        Student s2 = new Student("Jane Smith", 102, 92.0);
        
        System.out.println("Student 1 Details:");
        s1.display();
        
        System.out.println("\nStudent 2 Details:");
        s2.display();
    }
}
