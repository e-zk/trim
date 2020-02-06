#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void usage(void) {
	printf("usage: trail <number> [trail]\n");
}

int main(int argc, char *argv[]) {

	char ch;
	int cnt = 0;
	char *trail = "";

	if (argc < 2) {
		usage();
		exit(1);
	}

	int limit = atoi(argv[1]);
	
	if (argc > 2) {
		trail = argv[2];
	}

	while(read(0, &ch, 1) > 0) {
		printf("%c", ch);
		cnt++;
		if (cnt == limit) {
			printf("%s\n", trail);
			break;
		}
	}

	return 0;
}
