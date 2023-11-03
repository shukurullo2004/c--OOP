// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void reverse_array(int* arr, int size) {
    // -- Write your code below this line 
  int start = 0;
      int end = size - 1;
      
  for(; start < end;start++,end --){
      int temp =arr[start];
      arr[start] = arr[end];
      arr[end] =temp;
    }
   }  //-- Write your code above this line


