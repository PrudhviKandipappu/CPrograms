// Aceess dictionary database using API by curl

#include <stdio.h>
// #include "userValidation.c"
#include <string.h>
#include <stdlib.h>

void main()
{
	char *word = (char*)malloc(20 * sizeof(char));
	char *audio_url = (char*)malloc(100 * sizeof(char));
	char data[2000];
	int flag = 0;
	char delimiter[3] = "\":";
	char curl_url[1000];
	char *token = (char*)malloc(100 * sizeof(char));
	printf("Ender a word: ");
	scanf("%s", word);
	sprintf(curl_url, "curl \"https://api.dictionaryapi.dev/api/v2/entries/en/%s\" > dictionary_API.dat -s", word);
    system(curl_url);
    FILE *fp_dictionary;
    fp_dictionary = fopen("dictionary_API.dat", "r");
    fgets(data, sizeof(data), fp_dictionary);
    token = strtok(data, delimiter);
    while (token != NULL)
    {
    	char character = token[0];
    	if (strcmp(token, "title"))
    	{
	    	switch (character)
	    	{
	    	case 'd':
	    		token = strtok(NULL, delimiter);
	    		if (strlen(token) >= 4)
	    		{
		    		printf("  Definition: %s\n", token);
	    		}
	    		break;
	    	case 'p':
	    		token = strtok(NULL, delimiter);
	    		if (strlen(token) >= 3)
	    		{
		    		printf("  PartOfSpeech: %s\n", token);
	    		}
	    		break;
	    	case 'e':
	    		token = strtok(NULL, delimiter);
	    		printf("  Example: %s\n", token);
	    		break;
	    	default:
	     		break;
	    	}
    	}
    	else
    	{
    		printf("No definitions found. Please try again.");
    		flag++;
    		break;
    	}
    	token = strtok(NULL, delimiter);
    }
    if (flag == 0)
    {
	    sprintf(audio_url, "vlc -I --no-video --play-and-exit \"https://api.dictionaryapi.dev/media/pronunciations/en/%s-us.mp3\"", word);
	    system(audio_url);
    }
}