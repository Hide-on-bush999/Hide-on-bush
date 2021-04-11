package Extends.Abstract;

public abstract class dog extends animals{
    @Override
    public void eat() {
        System.out.println("吃骨头!");
    }

    public abstract void jiao();
}
