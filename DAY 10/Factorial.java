//Factorial of a number-mercer mettl
import java.io.*;
import java.util.*;
class UserMainCode{
  public int nFactorial(int input1){
       int i=1;
       int x=1;
       while(i<=input1){
         x=x*i;
         i++;
       }
      return x;
  }
}