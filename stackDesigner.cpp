/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* _push function to insert elements of array to
   stack
*/




//my code
stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack<int>s;
   for(int i=0;i<n;i++){
       s.push(arr[i]);
   }
   return s;
}
/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int>s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
