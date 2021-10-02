
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char	*ft_strtrim(char const *s1, char const *set)
{
	int s1_len, set_len, s2_count, counter, set_counter, found;


	set_len = strlen(set);
	s1_len = strlen(s1);
	char * s2 = (char *) malloc(s1_len);
	if(set_len == 0){
		strcpy(s2,s1);
		return (s2);
	}
	s2_count = 0;
	counter = 0;
	while(counter < s1_len){
		set_counter	 = 0;
		found = 0;
    	while(set_counter < set_len && found == 0){
      		if(s1[counter] == set[set_counter])
        		found = 1;
      		set_counter++;
    	}
    	if(found == 0){
      		s2[s2_count] = s1[counter]; //ft_strcpy
      		s2_count++;
    	}
    	counter++;
  	}
	s2[s2_count] = '\0';
	return (s2);
}

int main(){
	printf("%s",ft_strtrim("Hello World","o"));
}

