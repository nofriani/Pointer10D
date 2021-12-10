int main()
   {
       /*nama header program*/
        printf("\POINTER 10 Dimensi Dari Nama: Nofriani Azizaturrohmah\n\n");
        printf("=======================================\n\n");
   int x [10];
   int i, j ;
   for(i = 0; i < 3; ++i)
    for(j = 0; j < 5; ++j)
       {
      printf("&x[%d][%d] = %p\n", i, j, &x[i]);
   }
   printf("Address of array x: %p", x);
   return 0;
}
