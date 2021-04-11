package Extends;

public class use1 {
    public static void main(String[] args) {
        phone a = new phone();
        a.call();
        a.send();
        a.show();

        System.out.println("---分割线---");
        newPhone b = new newPhone();
        b.call();
        b.send();
        b.show();
    }
}
