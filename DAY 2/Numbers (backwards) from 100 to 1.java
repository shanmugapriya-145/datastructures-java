//To print numbers backwards from 100 to 1 by skipping 2 numbers.
class Hundredto0{
    public static void main(String[] args) {
        System.out.println( "Nos from 100 to 0");
        int i=100;
        while(i>=1)
        {
            System.out.println(i);
            i-=3;
        }
    }
}
