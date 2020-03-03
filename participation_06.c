//Farhan Shahbaz

//Hamlin



#include <stdio.h>



int main(){

    int my_array[10] = {54,68,3,106,42,33,18,-42,69,1};

    int n = sizeof(my_array)/sizeof(my_array[0]);

    
    printf("Array before: \n");
    
	for(int i = 0; i < n; i++){
  
	      printf("%d ", my_array[i]);

    }
    
    
	printf("\n");
    
	bubble(my_array,n);
    
	printf("Array after: \n");
    
	for(int i = 0; i < n; i++){
        
		printf("%d ", my_array[i]);
    
	}
    
    
	
	return 0;

}



void bubble(int a[] , int size){

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - i -1; j++){

            if(a[j] > a[j+1]){

                //swap elements

                int temp = a[j];

                a[j] = a[j+1];

                a[j+1] = temp;

            }
        
	}
    
	}

}