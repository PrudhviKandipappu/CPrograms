// Access open weather database using curl

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
	char *curl_url, *city_name;
	char *data_key = (char*)malloc(10 * sizeof(char));
	char *confirm_data_key = (char*)malloc(100 * sizeof(char));
	data_key = "temp";
	curl_url = (char*)malloc(500 * sizeof(char));
	city_name = (char*)malloc(25 * sizeof(char));
	char *data = (char*)malloc(20 * sizeof(char));
	char *token = (char*)malloc(100);	
	char character;	
	int counter = 0, character_counter, index_counter = 0;
	printf("Enter a city name to get temperature: ");
	scanf("%s", city_name);
	sprintf(curl_url, "curl \"https://api.openweathermap.org/data/2.5/weather?q=%s&appid=abe3a0f4d0b6cebfbe7393b4b4e3aa28&units=metric\" > weather_data.dat", city_name);
	int count = strlen(curl_url);
 	system(curl_url);
	FILE *fp_weather_data;
	fp_weather_data = fopen("weather_data.dat", "r");
	rewind(fp_weather_data);
	character = fgetc(fp_weather_data);
	printf("%d", character);
	while (character != EOF)
	{
		counter++;
		//printf("%c\n", character);
		if(character == ',')
		{
			fgets(data, counter, fp_weather_data);
			token = strtok(data, ":");
			character_counter = strlen(token) - strlen(data_key);
			while (token[character_counter] != '\0')
			{
				confirm_data_key[index_counter] = token[character_counter];
				index_counter++;
				character_counter++;
			}
			printf("%s\n", token);
			if (confirm_data_key == data_key)
			{
				token = strtok(NULL, "':");
				printf("%s", token);
			}
			//printf("-\n");
		}
		character = fgetc(fp_weather_data);
	}	
}