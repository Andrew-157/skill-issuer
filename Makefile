skill-issuer.out: skill_issuer.c
	gcc -Wall skill_issuer.c -o skill-issuer.out

clean:
	rm -rf *.out *.o
