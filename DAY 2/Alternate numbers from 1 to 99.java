//To print alternate numbers from 1 to 99.
class altno1to99{
    public static void main(String[] args) {
        System.out.println("Alternate nos from 1 to 99");
        for(int i=1;i<=99;i++)
        {
            if(i%2!=0)
            System.out.println(i);
        }
    }
}