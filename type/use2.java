package type;

public class use2 {
    public static void main(String[] args) {
        defimpl a = new defimpl();
        a.m1();
        a.m2();//impl会继承接口中的默认方法

        System.out.println("----------");

        defimpl1 b = new defimpl1();
        b.m1();
        b.m2();
    }
}
