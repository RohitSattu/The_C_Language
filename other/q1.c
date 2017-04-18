#include <stdio.h>
#include <string.h>

#define MAXIN 100

int getinput(int a[], int max) {
	int c, i;

	i = 0;
	scanf("%d", &c);
	a[i] = c;
	++i;
	while ((i < (max - 1)) && (c >= 0)) {
		scanf("%d", &c);
		
		a[i] = c;
		++i;
	}
	a[i] = '\0';
	return i;
}

int within_5_percent(int ref, int data) {
	if ((data >= ((ref - 5) % ref)) && (data <= ((ref + 5) % ref))) {
		return 1;
	}
	return 0;
}

int main() {
	int a[MAXIN];
	int subs[5] = {"water", "mercury", "copper", "silver", "gold"};
	int boilp[5] = {100, 357, 1187, 2193, 2660};
	int i, j, found = 0;
	
	length = getinput(a, MAXIN);

	for (i = 0; i < length && a[i] !='\0'; ++i) {
		char subname[10];
		for (j = 0; (j < 5) && (found == 0); ++j) {
			if (within_5_percent(boilp[j], a[i])) {
				found = 1;
				strcpy(subname,subs[j]);
			} else {
				strcpy(subname,"unknown");
			}
		}
		
		printf("The substance is %s", subname);
		
	} 
	return 0;
}
