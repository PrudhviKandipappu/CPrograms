// sample curl program

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *curl_url = malloc(500);
	char *city_name = malloc(500);
	
	printf("Enter a city name to get temperature: ");
	scanf("%s", city_name);
	sprintf(curl_url, "curl \"https://api.openweathermap.org/data/2.5/weather?q=%s&appid=abe3a0f4d0b6cebfbe7393b4b4e3aa28&units=metric\" > weather_data.dat", city_name);
	//int count = strlen(curl_url)
	system(curl_url);
	)
	strtok()
	while (fgets())
}