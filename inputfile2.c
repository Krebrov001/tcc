
#define EXIT_SUCCESS 0

int main(void)
{
    int number = 0;
    char c_string[] = "CSCI";
    memcpy(&number, c_string, 4);
    printf("%s\n", c_string);
    printf("%d\n", number);
    
    return EXIT_SUCCESS;
}
