#include<stdio.h>

void output(char **);

int main(void)
{
    char *hoshi[10] = { "hiroto", "yuuma", "souta", "minato", "ren", NULL },
         new_mem[10], 
         *new, *p_work;
    int idx_new;

    output(hoshi);

    printf("新規登録名 : ");
    scanf("%s", new_mem);
    printf("入れる位置を入力してください。 : ");
    scanf("%d", &idx_new);
    new = new_mem;
    while (hoshi[idx_new]!=NULL) {
        p_work = hoshi[idx_new];
        hoshi[idx_new] = new;
        new = p_work;
        idx_new++;
    }
    hoshi[idx_new] = p_work;
    hoshi[++idx_new] = NULL;

    output(hoshi);

    return 0;
}

void output(char **kumi)
{
    int i;
    for (i=0; kumi[i]!=NULL; i++) {
        printf("%d:%s\n", i, kumi[i]);
    }

    return;
}