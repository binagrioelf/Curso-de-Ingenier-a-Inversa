int funcion1(int a, int b){
	return b;
}

int funcion2(int a, int b, int c){
	return c;
}

int funcion3(int a, int b, int c, int d){
	return d;
}

int
main(){
	int a=3,b=1,c=5,d=7;
	funcion1(a,b);
	funcion2(a,b,c);
	funcion3(a,b,c,d);
}
