package type;

public class defimpl1 implements def {
    @Override
    public void m1() {
        System.out.println("构造方法2！");
    }

    public void m2() {
        System.out.println("覆盖重写默认方法！");
    }
}
