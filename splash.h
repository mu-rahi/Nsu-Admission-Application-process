


#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<dos.h>


void recursiveLoading(int progress) {
    //Loading ba
    // Base case: stop recursion when progress reaches 100%

    if (progress > 100) {
        return;
    }

    // Code to be executed in each iteration
    printf("\t\t\t\t\tProject is Loading [%d%%]", progress);
    fflush(stdout);
    usleep(10000);
    printf("\r");

    // Recursive call to the function with an incremented progress value
    recursiveLoading(progress + 1);
}



void splash (void)
{

    system("cls");
    printf("...................Project Loading Complete!..........\n\n\n");
    sleep(1);
    printf("-------------Press any key to continue-------------\n");
    getchar();
    system("cls");


char ris[]=" \n"
"                                    __      __ ___________.____    _________  ________      _____   ___________    ___________________                                                                                                    \n"
"                                  /  \\    /  \\\\_   _____/|    |   \\_   ___ \\ \\_____  \\    /     \\  \\_   _____/    \\__    ___/\\_____  \\                                                                                        \n"
"                                    \\   \\/\\/   / |    __)_ |    |   /    \\  \\/  /   |   \\  /  \\ /  \\  |    __)_       |    |    /   |   \\                                                                                        \n"
"                                     \\        /  |        \\|    |___\\     \\____/    |    \\/    Y    \\ |        \\      |    |   /    |    \\                                                                                        \n"
"                                      \\__/\\  /  /_______  /|_______ \\\\______  /\\_______  /\\____|__  //_______  /      |____|   \\_______  /                                                                                         \n"
"                                           \\/           \\/         \\/       \\/         \\/         \\/         \\/                        \\/                                                                                         \n"
"                                                                                                                                                                                                                                          \n"
" _______   ________  __________ ___________ ___ ___        _________________    ____ ___ ___________ ___ ___       ____ ___ _______   .___ ____   _________________________   _________.___ ________________.___.                         \n"
" \\      \\  \\_____  \\ \\______   \\\\__    ___//   |   \\      /   _____/\\_____  \\  |    |   \\\\__    ___//   |   \\     |    |   \\\\      \\  |   |\\   \\ /   /\\_   _____/\\______   \\ /   _____/|   |\\__    ___/\\__  |   |  \n"
" /   |   \\  /   |   \\ |       _/  |    |  /    ~    \\     \\_____  \\  /   |   \\ |    |   /  |    |  /    ~    \\    |    |   //   |   \\ |   | \\   Y   /  |    __)_  |       _/ \\_____  \\ |   |  |    |    /   |   |              \n"
"/    |    \\/    |    \\|    |   \\  |    |  \\    Y    /     /        \\/    |    \\|    |  /   |    |  \\    Y    /    |    |  //    |    \\|   |  \\     /   |        \\ |    |   \\ /        \\|   |  |    |    \\____   |            \n"
"\\____|__  /\\_______  /|____|_  /  |____|   \\___|_  /     /_______  /\\_______  /|______/    |____|   \\___|_  /     |______/ \\____|__  /|___|   \\___/   /_______  / |____|_  //_______  /|___|  |____|    / ______|                  \n"
"        \\/         \\/        \\/                  \\/              \\/         \\/                            \\/                       \\/                         \\/         \\/         \\/                  \\/                    \n"
"                                                                                                                                                                                                                                          \n" ;


  // Showing Ascii text
    for(int i=0;i<strlen(ris);i++)
    {

    printf("%c",ris[i]);
    if(ris[i]=='\n')
    {
        usleep(353535);
    }

   }
   printf("\n\n\n\n\n");
   sleep(1);

   FILE *sp;
   sp=fopen("image.txt","r");
   char img[1000];

   //reading image from text file

   while(!feof(sp))
   {
       fgets(img,sizeof(sp),sp);
       printf("%s",img);

   }
printf("\n\n\n\n");
   fclose(sp);
   printf("...............Press any key to continue............\n");
   getchar();




}

