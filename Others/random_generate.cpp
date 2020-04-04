// random [0 , M)
int x = 65539;
int a = 65539;

int M = (1ll << 31) - 1 ;

int random (){
	int xx = a * x;
	if (xx <= 0)
		xx+=M;
	x = xx;
	return x;
}