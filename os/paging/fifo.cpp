#include<bits/stdc++.h>

int main()
{
      int reference_string[100], page_faults = 0, m, n, s, pages, frames;
      printf("\nEnter Total Number of Pages:\t");
      scanf("%d", &pages);
      printf("\nEnter values of Reference String:\n");
      for(m = 0; m < pages; m++)
      {
            printf("Value No. [%d]:\t", m + 1);
            scanf("%d", &reference_string[m]);
      }
      printf("\nEnter Total Number of Frames:\t");
      {
            scanf("%d", &frames);
      }
      int temp[frames];
      for(m = 0; m < frames; m++)
      {
            temp[m] = -1;
      }
      s=0;
      for(m = 0; m < pages; m++)
      {
           
            for(n = 0; n < frames; n++)
            {
                  if(reference_string[m] == temp[n])
                  {
                        
                        page_faults--;
                  }
                  else{
                temp[s] = reference_string[m];
            }
            }
            
            s = (s+1) % frames;
            page_faults++;
            printf("\n");
            for(n = 0; n < frames; n++)
            {
                  printf("%d\t", temp[n]);
            }
      }
      printf("\nTotal Page Faults:\t%d\n", page_faults);
      return 0;
}

