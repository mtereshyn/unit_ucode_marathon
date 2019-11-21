int mx_count_words(const char *str, char delimiter){

    int i, words;

    gets(str);

    i = 0;
    delimiter = 1;


    while(str[i] != '\0')
    {
  
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            delimiter++;
        }

        i++;
    }

}

