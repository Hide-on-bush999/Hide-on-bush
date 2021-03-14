package assess.Three;

public class three {
    public static void main(String[] args) {
        three t = new three();
        t.myMethod(null);
    }

    public void myMethod(String str) {
        System.out.println("string");
    }

    public void myMethod(Object obj) {
        System.out.println("object");
    }
}
