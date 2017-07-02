/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package coding.cormen;
import java.util.*;
/**
 *
 * @author getsa
 */
public class Mergesort
{
    public Scanner alpha = new Scanner(System.in);
    public static void main(String [] args)
    {
        
    }
    public int[] merge (int[] array, int p,int q, int r)
    {
        int n1 = q-p+1;
        int n2 = r-q;
        int [] L = new int [n1+1];
        int [] R = new int [n2+1];
        for (int i=0;i<n1;i++)
        {
            L[i] = array[p+i];
        }
        for (int i=0;i<n2;i++)
        {
            R[i] = array[p+n1+i];
        }
        L[n1+1] = 222222;
        R[n2+1] = 333333;
        for(int i=p;)
    }
    
    
    
      public int[] arrayinput()
        {
            System.out.println("Enter the size of the array");
            int n = alpha.nextInt();
            int [] array = new int [n];
            System.out.println("Enter the elements of the array");
            for(int i=0;i<n;i++)
            {
               array[i] = alpha.nextInt();
            }
            return array;
            
        }
       void printarray(int[] arr)
    {
        int[] myarray = insertionsort(arr);
        for(int i=0;i<myarray.length;i++)
        {
         System.out.println(myarray[i]);   
        }    
    }
  
}
