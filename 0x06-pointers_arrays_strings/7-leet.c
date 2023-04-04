char *leet(char *str)
{
int i, j;
char *leet_str = str;

char leet_chars[5][2] = {
{'a', '4'},
{'e', '3'},
{'o', '0'},
{'t', '7'},
{'l', '1'}
};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++) 
{

if (str[i] == leet_chars[j][0] || str[i] == leet_chars[j][0] - 32  
{
leet_str[i] = leet_chars[j][1];
}
}
}

return leet_str;
}

