#include "slide_line.h"
/**
 * slide_line - function that slides and merges an array of integers
 * @line: line points to an array of integers containing size elements
 * @size: size of array
 * @direction: direction can be either: SLIDE_LEFT,SLIDE_RIGHT
 * Return: return 1 upon success, or 0 upon failure
*/
int slide_line(int *line, size_t size, int direction){

	int k = size, i = 0, j = 0;
	int x;
	int newline[32];

	if (direction == SLIDE_LEFT){
		x = line[0];
		j = 0;
		for (i = 1; i < k; i++){
			/*printf("i = %ld,j = %ld, x = %d\n", i, j, x);*/
			if (line[i] == x && line[i] != 0){
				newline[j] = x * 2;
				x = 0;
				j++;
			}
			else if (line[i] != 0){
				x = line[i];
				newline[j] = x;
			}
		}
		if (newline[j] == x)
				j++;
		for (i = j; i < k; i++){
			newline[i] = 0;
		}
		for (i = 0; i < k; i++){
		line[i] = newline[i];
	}
	}
	else if (direction == SLIDE_RIGHT){
		x = line[size - 1];
		j = size - 1;
		for (i = size - 2; i >= 0; i--){
			if (line[i] == x && line[i] != 0){
				newline[j] = x * 2;
				x = 0;
				j--;
			}
			else if (line[i] != 0){
				x = line[i];
				newline[j] = x;
			}
		}
		if (newline[j] == x)
				j--;
		for (i = j; i >= 0; i--){
			newline[i] = 0;
		}
		for (i = size - 1; i >= 0; i--){
		line[i] = newline[i];
	}
	}
	else
		return (0);
	return (1);
}