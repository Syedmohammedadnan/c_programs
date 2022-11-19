/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <string.h>
unsigned char base64_charset[65] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
'0','1','2','3','4','5','6','7','8','9',
'+','/',
'='
};
int Encode_Base64(char *data, int len, char *output)
{
    int i,j,rem_bits;
    uint32_t pack;
    
    for( i = 0, j = 0 ; i < len ; i++)
    {
        pack <<= 8;
        pack |= data[i];
        if( (i % 3) == 2)
        {
            // 24 bits now packed. Unpack and Encode
            output[j++] = base64_charset[(pack >> 18) & 0x3F]; 
            output[j++] = base64_charset[(pack >> 12) & 0x3F]; 
            output[j++] = base64_charset[(pack >> 6) & 0x3F]; 
            output[j++] = base64_charset[pack & 0x3F]; 
            pack = 0;
        }
    }
    rem_bits = (len % 3)*8;

    // Find the number of codes required to encode fully
    i = 0;
    while(i < rem_bits ){ 
        i+=6;
    }
    pack <<= ( i - rem_bits);
    
    while( i > 0)
    {
        output[j++] = base64_charset[(pack >> (i-6))&0x3F];
        i -= 6;
    }

  return j;
}

int get_codeBase64(char a)
{
    for(int i = 0 ; i < 64 ; i++)
    {
        if(base64_charset[i] == a)
        {
            return i;
        }
    }
    return 0;
}

int Decode_Base64(char *input, int len, char *de_output)
{
    int i, pack = 0, j = 0, k, rem_bits;
    printf("Decode: Len = %d\n", len);

    for( i = 0 ; i < len ; i++)
    {
        pack <<= 6;
        pack |= get_codeBase64(input[i]);
        if( i % 4 == 3 )
        {
            printf("\n%08x\n", pack);
            de_output[j++] = (pack >> 16) & 0xFF;
            de_output[j++] = (pack >> 8) & 0xFF;
            de_output[j++] = pack & 0xFF;
            pack = 0;
        }
        printf("%x ", get_codeBase64(input[i]));
    }
    rem_bits = (len % 4 ) * 6;
    k = 24;
    while(k > rem_bits){
        k -= 8;
    }
    
    pack >>= (rem_bits - k);
    
    while( k > 0 ){
        de_output[j++] = (pack >> (k - 8)) & 0xFF;
        k -= 8;
    }
    return j;
}



int main()
{
    char data[] = {"MEN are bold"};
    char output[100];
    char de_output[100];
    int out_len;
    printf("enter the input string is = %s\n",data);
    
    
    int len = strlen(data);

     out_len = Encode_Base64( data, len, output);
     output[out_len] = 0; // NULL terminate the string
     printf("the encoded string is %s\n", output);
     
     out_len = Decode_Base64( output, out_len, de_output);
     de_output[out_len] = 0;
     printf("the decoded string is = %s\n", de_output);
    
    
    return 0;
    

}
