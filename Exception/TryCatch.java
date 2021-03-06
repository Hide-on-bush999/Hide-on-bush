package Exception;

import java.io.IOException;

/*
    自己来处理异常
    格式：
        tyr{
            可能产生异常代码
        }catch(定义一个异常的变量，用来接受try中抛出的异常对象){
            异常的处理逻辑，产生异常对象之后，怎么处理异常对象
            一般在工作中，会把异常信息记录在一个日志中
        }
        ...
        catch(异常类名 变量名){

        }
    注意：
        1.try中可能会抛出多个异常对象，那么就可以使用多个catch来处理这些异常对象
        2.如果try中产生了异常，那么就会执行catch中的异常处理逻辑，执行完毕catch中的处理逻辑，继续执行try...catch之后的代码
          如果try中没有产生异常，那么就不会执行catch中的异常处理逻辑，执行完try中的代码，继续执行try...catch之后的代码
 */

public class TryCatch {
    public static void main(String[] args) {
        try {
            readFile("d:\\a.tx");
        }catch (IOException e){
            //System.out.println("catch - 传递的文件后缀不是.txt");

            /*
                Throwable类中定义了3个异常处理的方法
                String getMessage（）返回throwable的简短描述
                String toString（）返回throwable的详细消息字符串
                void printStackTrace（）JVM打印异常对象，默认此方法，打印的异常信息是最全面的
             */
//            System.out.println(e.getMessage());//文件的后缀名不对
//            System.out.println(e.toString());//重写了Object类中的toString方法     java.io.IOException: 文件的后缀名不对
            e.printStackTrace();
            /*
                java.io.IOException: 文件的后缀名不对
	            at Exception.TryCatch.readFile(TryCatch.java:46)
	            at Exception.TryCatch.main(TryCatch.java:27)
             */
        }
        System.out.println("后续代码");
    }

    public static void readFile(String fileName) throws IOException {
        if (!fileName.endsWith(".txt")) {
            throw new IOException("文件的后缀名不对");
        }
        System.out.println("路径没有问题，读取文件");
    }
}
