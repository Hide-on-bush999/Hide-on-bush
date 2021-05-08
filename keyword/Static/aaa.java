package keyword.Static;

public class aaa {
    static int snum;
    int num;

    public static void methodStatic() {
        System.out.println("这是一个静态方法");

        System.out.println(snum);

        //System.out.println(num);静态不能访问非静态
    }

    public void method() {
        System.out.println("这是一个普通的成员方法");
        System.out.println(num);
        System.out.println(snum);
    }
}
