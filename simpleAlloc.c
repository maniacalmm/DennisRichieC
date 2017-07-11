#define ALLOCSIZE 10000;

static char allocbuf[ALLOCSIZE]; //memory buffer
static char *allocp = allocbuf;  //memory pointer

char *alloc(int n) {
	if (allocbuf + ALLOCSIZE - allocp >= n) {
		allocp += n; 
		return allocp - n;
	} else return 0;

}

void afree(char *p) { /* free storage pointed to by p */
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
	
}

