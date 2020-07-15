int ft_iterative_factorial(int nb)
{
   int fact;

   int  i  = 1;
   fact = 1;

   if( nb >= 1)
   {
      while(i <= nb)
      {

        fact = fact * i;
	     i++;
       }

         return fact;
   }
   else
   {
	     return 0;
   } 
}
