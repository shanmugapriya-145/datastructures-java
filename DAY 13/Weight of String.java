//Weight of string-mercer mettl
import java.io.*;
import java.util.*;
class UserMainCode{
  public int weightOfString(String input1,int input2){
        String small="abcdefghijklmnopqrstuvwxyz";
        int sum=0,i;
        for(i=0;i<input1.length();i++){
            if(input2==0){
                char c=input1.charAt(i);
                if(Character.isUpperCase(c))c=Character.toLowerCase(c) ;
                if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
                    int index=small.indexOf(c);
                    if(index>=0)
                       sum+=index+1;
                }
                else
                  sum+=0;
                }else{
                     char c=input1.charAt(i);
                     if(Character.isUpperCase(c))c=Character.toLowerCase(c);
                     int index=small.indexOf(c);
                     if(index>=0)
                        sum+=index+1;
                    else
                        sum+=0;
                    }
                }
        return sum;
    }
}
