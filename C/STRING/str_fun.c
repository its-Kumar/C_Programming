int len(char *s){
	int l=0;
	while(*s!='\0'){
		l++;
		s++;
	}
	return(l);
	
}
int coun_vow(char *s){
	int c=0;
	while(*s!='\0'){
		switch(*s){
			case 'a': case 'e': case 'o': case 'i': case 'u': case 'A': case 'E': case 'U': case 'I': case 'O':
			c++; break;
		}
	s++;
	}
	return c;
}
void copy(char *s,char *t){
	while(*s!='\0'){
		*t=*s;
		t++;
		s++;
	}
	*t='\0';
}

void add(char *t,char *s){
	while(*t!='\0')
		t++;
	while(*s!='\0'){
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}
int comp(char *t,char *s){
	int c;
	while(*t!='\0'){
		c=*s-*t;
		s++;
		t++;
	}
	return c;
}
char* rev(char *s){
	char t;
	int i,l;
	l=len(s);
	for(i=0;i<l/2;i++){
		t=*(s+i);
		*(s+i)=*(s+l-1-i);
		*(s+l-1-i)=t;
		
	}
	return(s);
}
