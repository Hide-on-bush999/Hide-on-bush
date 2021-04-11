package Extends;

public class newPhone extends phone {
    //继承中方法的覆盖重写
    @Override
    public void show() {
        super.show();//把父类的show方法拿过来直接用
        System.out.println("显示姓名!");
        System.out.println("显示头像!");
    }
}
