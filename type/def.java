package type;

//接口升级过后，所有的构造方法都必须覆盖重写，但是默认方法不需要，这就可以完美的解决接口的升级问题

public interface def {
    void m1();

    default void m2() {
        System.out.println("接口的默认方法!");
    }
}
