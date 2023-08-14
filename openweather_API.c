	// Access openweather software using API

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char *API_url = (char*)malloc(500 * sizeof(char));
	char *city_name = (char*)malloc(30 * sizeof(char));
	char data[1000];
	int counter = 0, sub_counter = 0;
	char *data_key = "temp";
	char *token = (char*)malloc(50 * sizeof(char));
	//char token[50];
	//char *sub_token = (char*)malloc(50 * sizeof(char));
	printf("Enter the city name: ");
	scanf("%s", city_name);
	sprintf(API_url, "curl \"https://api.openweathermap.org/data/2.5/weather?q=%s&appid=abe3a0f4d0b6cebfbe7393b4b4e3aa28&units=metric\" > Curl_openweather.dat -s", city_name);
	system(API_url);
	FILE *fp_openweather;
	fp_openweather = fopen("Curl_openweather.dat", "r");
	fgets(data, sizeof(data), fp_openweather);
	token = strtok(data, "\":,");
	int celsius_asciivalue = 248;
	while (token != NULL)
	{
		if (counter == 25)
		{
			token = strtok(NULL, "\":,");
			printf("Temperature of %s is: %s%c", city_name, token, celsius_asciivalue);
			break;
		}
		counter++;
		if (strcmp(token, "cod") == 0)
		{
			printf("City not found.Please try again.");
			break;
		}
		token = strtok(NULL, "\":");
	}
}