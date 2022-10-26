#include<stdio.h>

int main() {

	int i=5;
	
	int *p = &i;
		// " * " iþareti pointerlarý tanýmlarken kullanýlýr
		// " & " iþareti adresi verir
		// pointerlarýn alacaðý deðer hangi tipte ise pointerlarda o tipte olmak zorundadýr
		
	printf("%p",p);
		// Pointerler "%p" ve "%u" olmak üzere iki tipte çýkýþ alabilirler
		

		printf("\n\n"); // birbirne karýþmamasý için pointerlardan alakasýz satýr	
	printf("%d",*p);
		// Pointerlerda " * " iþaretinin böyle kullanýmý adresteki deðeri verir


	return 0;

}
