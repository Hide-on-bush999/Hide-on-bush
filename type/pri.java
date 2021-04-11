package type;

public interface pri {
    static void m1() {
        System.out.println("接口的静态方法1！");
        m3();
    }

    static void m2() {
        System.out.println("接口的静态方法2！");
        m3();
    }

    //作为接口的私有方法，它不可以被其他的类调用
    private static void m3() {
        System.out.println("接口的私有方法！");
    }
}
