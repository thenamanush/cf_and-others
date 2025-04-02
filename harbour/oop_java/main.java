class person{
    protected String pass = "goribs";
    private String name = "Baten";

    public void display(){
        System.out.println(pass);
        System.out.println(name);
    }
}
class main{
    public static void main(String[] args) {
        person p = new person();
        p.pass = "billioners"; 
        p.display();
    }
}