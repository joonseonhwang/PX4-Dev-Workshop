#include <stdio.h>

int main() {
  int fizz,buzz,num;
  int det_i;
  printf("input the Fizz, Buzz and Number(ex:f b n) : "); 
  scanf("%d %d %d",&fizz,&buzz,&num);
  for(int i=0; i<num ; i++){
  det_i=i+1;

  if(det_i%fizz==0){
  printf("Fizz\n");
} 
  else if(det_i%buzz==0){
  printf("Buzz\n");
}
  else if((det_i%buzz==0) && (det_i%fizz==0)){
  printf("FizzBuzz\n");
}
  else{
  printf("%d\n",det_i);
}


}

return 0;
}
