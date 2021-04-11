package Extends.Abstract;

/*
抽象类的注意事项：
                1.抽象类不能创建对象，只能创建其非抽象子类的对象
                2.抽象类中，可以有构造方法，是供子类创建对象时，初始化分类成员使用
                3.抽象类中，不一定包含抽象方法，但是有抽象方法的类一定是抽象类
                4.抽象类的子类，必须重写抽象父类中的所有方法，除非该子类也是抽象类
                5.一个抽象类中可以不包含抽象方法，可以包含其他方法，但是抽象方法所在的类一定是抽象类
*/

public abstract class animals {
    public abstract void eat();

    public abstract void jiao();
}
