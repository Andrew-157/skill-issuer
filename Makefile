skill-issuer.out:
	gcc -Wall skill_issuer.c -o skill-issuer.out

clean:
	rm -rf *.out *.o
