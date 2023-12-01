typedef struct garden{
	char type[40];
	char colour[40];
	int amount;
}gd;

void create(gd **arr, int *n);
void read(gd **arr, int *n);
void write(gd *arr, int n);
void search(gd *arr, int n, int crit);
