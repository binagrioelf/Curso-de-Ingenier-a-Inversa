int funcion3(int a, int b, int c, int d){
	return d;
}

int funcion1(int a, int b){
	return b;
}

int funcion2(int a, int b, int c){
	return c;
}
int funcion4(int a){
	return a;
}


int
main(){
	int a=30,b=12,c=1,d=0;
	funcion3(a,b,c,d);
	funcion1(a,b);
	funcion4(a);
	funcion2(a,b,c);
}
