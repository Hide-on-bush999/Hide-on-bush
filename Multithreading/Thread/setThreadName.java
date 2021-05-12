package Multithreading.Thread;

public class setThreadName {
    public static void main(String[] args) {
        //开启多线程
        MyThread mt = new MyThread();
        mt.setName("小强");
        mt.start();

        //开启多线程
        new setName("旺财").start();
    }
}
