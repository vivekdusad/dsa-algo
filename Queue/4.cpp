void twoStacks :: push1(int x)
{

   // check the top index in the array for first stack
   // and accordingly assign element to the
   // particular top index
   if (top1 < top2 - 1)
   {
       top1++;
       arr[top1] = x;
   }
 
}
   
void twoStacks ::push2(int x)
{
   // check the top1 of the array
   if (top1 < top2 - 1)
   {
       top2--;
       arr[top2] = x;
   }
 
}
   
int twoStacks ::pop1()
{
   // check the top for first stack
   if (top1 >= 0 )
   {
      int x = arr[top1];
      top1--;
      return x;
   }
   else
   {
      return -1;
   }
}

// Method to pop an element from second stack
int twoStacks :: pop2()
{
   // if top2 index is having more space
   if (top2 < size)
   {
      int x = arr[top2];
      top2++;
      return x;
   }
   else
   {
      return -1;
   }
}