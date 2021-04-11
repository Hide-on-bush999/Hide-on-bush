package type;

public class use1 {
    public static void main(String[] args) {
        //不能直接new接口对象，必须创建实现类来使用
        abstimpl impl = new abstimpl();
        impl.m1();
        impl.m2();
        impl.m3();
    }
}
