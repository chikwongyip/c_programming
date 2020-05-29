#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;
    while ((ch = getopt(argc,argv,"d:t")) != EOF)
    {
        switch(ch)
        {
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr,"Unknown option:'%s'\n",optarg);
                return 1;
            break;
        }
        argc -= optind;
        argv += optind;
        if (thick)
        {
            put("Thick crust.");
        }
        if (delivery[0])
        {
            printf("To be delivered %s.\n",delivery);
        }
        put("Ingredients:");
        for (count = 0; count < argc; count++)
        {
            put(argv[count]);

        }
        return 0;
    }
    
}