void squeeze(char s[], int c)
{
    int i, j;
    for(i = j = 0;s[i] != '\0'; i++)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

void squeezes( char s[], char t[])
{
    int del_index = 0;
    int next_index = 0;
    for(int i = 0; s[i] != '\0'; i++)         //遍历数组 s[]  source
        for (int j = 0; t[j] != '\0'; j++)    //遍历数组 t[]  target
        {   
            //del_index = 0;
            if (s[i] = t[j])                  //如果source 第N个元素 在 target里面有
            {  
                del_index = i;
                break;
            }
            else
            {
                next_index = i;
                s[del_index] = s[next_index];
            }
            
        }
        
        
}