//Read second word and change to Uppercase-mercer mettl
import java.io.*;
import  java.util.*;
class UserMainCode{
    public String secondWordUpperCase(String input1){
        String s[]=input1.split(" ");
        if(s.length==1)
        {
             return "LESS";
        }
        String s1=s[1];
        s1=s1.toUpperCase();
        return s1;
    }
}
