#include <string.h>
#include<conio.h>
int binarySearch(char string[30], int first, int last, char search){

    if (last >= first) {
        int mid = (first + last) / 2;

        if (string[mid] == search)
            return mid;

        if (string[mid] > search)
            return binarySearch(string, first, mid - 1, search);


        return binarySearch(string, mid + 1, last, search);
    }

    return -1;
}


int main (void) {
   char string[30];
   char temp,search;
   int i, j;
   int n = strlen(string);

   printf("How many character are u going to enter...: ");
   scanf("%d",&n);

   printf("Enter %d character: ",n );

   for (i=0; i<n; i++)
   scanf("%s",&string[i]);

   printf("String before sorting - %s \n", string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }

   printf("String after sorting  - %s \n", string);
    printf("Enter character to find\n");
    scanf("%s", &search);

    int result = binarySearch(string, 0, n - 1, search);

    (result == -1) ? printf(" character is not present in array")
                   : printf(" CHAracter is present at index %d",
                            result);
   return 0;
}
