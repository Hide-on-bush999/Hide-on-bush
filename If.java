package choose;

public class If {
    public static void main(String[] args) {
        int i = 0;
        if (i == 1) {
            i++;
            System.out.println("加了一");
        } else {
            i--;
            System.out.println("减了一");
        }
        System.out.println(i);
    }
}
