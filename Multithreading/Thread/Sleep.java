package Multithreading.Thread;

/*
    public static void sleep(long mills):使当前正在执行的线程以指定的毫秒数暂停（暂时停止执行）
    毫秒数结束之后，线程继续执行
 */
public class Sleep {
    public static void main(String[] args) {
        //模拟秒表
        for (int i = 1; i <= 60; i++) {
            System.out.println(i);

            //使用Thread类中的sleep方法让程序睡眠1秒
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
