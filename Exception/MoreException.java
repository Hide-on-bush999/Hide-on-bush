package Exception;

import java.util.List;

public class MoreException {
    public static void main(String[] args) {
        /*
            多个异常使用捕获又该如何处理？
                1.多个异常分别处理
                2.多个异常一次捕获，分别处理
                3.多个异常一次捕获，一次处理
         */

        //1.多个异常分别处理

        /*try {
            int[] arr = {1, 2, 3};
            System.out.println(arr[3]);//ArrayIndexOutOfBoundsException
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }

        try {
            List<Integer> list = List.of(1, 2, 3);
            System.out.println(list.get(3));//ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e);
        }*/
        /*
            java.lang.ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
            java.lang.ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
         */


        //2.多个异常一次捕获，分别处理
        /*try {
            int[] arr = {1, 2, 3};
            System.out.println(arr[3]);//ArrayIndexOutOfBoundsException
            List<Integer> list = List.of(1, 2, 3);
            System.out.println(list.get(3));//ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        } catch (IndexOutOfBoundsException e) {
            System.out.println(e);
        }*/
        /*
            数组先越界，所以先处理数组，再处理集合
            一个try多个catch注意事项：
                catch里边定义的异常变量如果有子父类关系，那么子类的异常变量必须写在上边，否则就会报错
                ArrayIndexOutOfBoundsException extends IndexOutOfBoundsException
         */

        //3.多个异常一次捕获，一次处理
        try {
            int[] arr = {1, 2, 3};
            //System.out.println(arr[3]);//ArrayIndexOutOfBoundsException
            List<Integer> list = List.of(1, 2, 3);
            System.out.println(list.get(3));//ArrayIndexOutOfBoundsException: Index 3 out of bounds for length 3
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("后续代码");
    }
}
