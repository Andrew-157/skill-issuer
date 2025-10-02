#include <stdio.h>

char *s = "\
 ######\n\
###    ##\n\
 ###\n\
  ######\n\
      ###\n\
##     ###\n\
 ######\n\
";

char *k = "\
##     ##\n\
##    ##\n\
##  ##\n\
####\n\
##  ##\n\
##    ##\n\
##     ##\n\
";

char *i = "\
###\n\
###\n\
###\n\
###\n\
###\n\
###\n\
###\n\
";

char *l = "\
###\n\
###\n\
###\n\
###\n\
###\n\
#########\n\
#########\n\
";

char *e = "\
#########\n\
#########\n\
###\n\
#########\n\
###\n\
#########\n\
#########\n\
";

char *u = "\
###   ###\n\
###   ###\n\
###   ###\n\
###   ###\n\
###   ###\n\
###   ###\n\
 #######\n\
";

int main() {
    printf("%s\n", s);
    printf("%s\n", k);
    printf("%s\n", i);
    printf("%s\n", l);
    printf("%s\n", l);
    printf("\n\n");
    printf("%s\n", i);
    printf("%s\n", s);
    printf("%s\n", s);
    printf("%s\n", u);
    printf("%s", e);
}
