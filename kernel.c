/*
  this code is made by jatiN corporations, aLL rights reversed(c) 2026
  by:
     - jatin  official eaX os developer and founder of jatiN corporations
       age of jatin - 10 and he make it alone 
   */

#include <kernel.h>
#include <stdio.h>
#include <string.h>
#include <vector.h>
#include <task.h>
#include <memory.h>
#include <page.h>
#include <elf.h>
#include <fs.h>
#include <stdlib.h>
#include <vfs.h>
#include <debug.h>
#include <syscall.h>

int main() {

    char *string = "eaX0S";
    int apps[4] = {0, 1, 2, 3};
    int cmds;
    int filename;
    int filetxt;
    int exit;
    int username;
    int desktop;
    int txt;
    int num1;
    int num2;
    int code;
    max_array_size = 70
    string = 'name[5];';
    string = 'name[70] = {""};';
    
    printf("welcome to eaXOS \n");
    printf("enter your username: \n");
    scanf("%d", &username);
    printf("choose your applications 0 = terminal, 1 = file manager, 2 = text editor, 3 = explorer\n");
    switch (apps[0]) {
        case 0:
            printf("terminal\n");\
            printf("welcome to eaX0S terminal, type 'help' for a list of commands\n");
            printf("~! ")
            scanf("%d", &cmds);
            if (cmds == 0) {
                printf("help cmds = tree , yes , mkfile , ret , echo turned , info[{logs}, desktop], inpu@JS, loop@echoAS("")\n");
            }
            if (cmds == 1) {
                printf("tree\n");
                printf("├── home\n");
                printf("│   ├── user\n");
                printf("│   │   ├── documents\n");
                printf("│   │   ├── downloads\n");
                printf("│   │   └── pictures\n");
                printf("│   └── %d\n", username);
                printf("├── filemanager\n");
                printf("├── texteditor\n");
                printf("└── bin\n");
            }
                if (cmds == 2) {
                    printf("yes\n");
                    printf("[-----__localhost:8080\n");
                    printf("[-----__localhost:9090\n");
                    printf("[-----__localhost:6060\n");
                    printf("[-----__localhost:5050\n");
                    printf("[-----__localhost:2020\n");
                }
                if (cmds == 3) {
                    printf("mkfile\n");
                    char filename[100];
                    printf("enter filename: \n");
                    scanf("%s", filename);
                    FILE *file = fopen(filename, "w");
                    if (file == NULL) {
                        printf("error creating file\n");
                    } else {
                        printf("file created!\n");
                        fclose(file);
                    }
                    if (cmds == 4) {
                        printf("ret\n");
                        printf("enter filename: ");
                        scanf("%s", filename);
                        FILE *file = fopen(filename, "r");
                        if (file == NULL) {
                            printf("error opening file\n");
                        } else {
                            char buffer[1000];
                            fread(buffer, sizeof(char), 1000, file);
                            printf("%s\n", buffer);
                            fclose(file);
                        }
                        }
                    }
                    if (cmds == 5) {
                        printf("echo turned\n");
                        char input[100];
                        printf("enter text to echo: ");
                        scanf("%s", input);
                        printf("%s\n", input);
                    }
                    if (cmds == 6) {
                        printf("info\n");
                        printf("logs:\n");
                        printf("[-----__nlog//notfound\n");
                        printf("[-----__nlog//notfound\n");
                        printf("[-----__ylog//found[{data}\n");
                        printf("[-----__localhost:5050\n");
                        printf("[-----__localhost:2020\n");
                        printf("desktop:\n");
                        printf("├── filemanager\n");
                        printf("├── texteditor\n");
                        printf("└── explorer\n");
                    }
                    if (cmds == 7) {
                        printf("inpu@JS\n");
                        char js[1000];
                        printf("loadin.");
                        printf(("loadin"))
                        scanf("%s", js);
                        printf("  THISPC/inpu === 11010010101010101010100100010001101011011110101010100\n");
                        printf("%s\n", js);

                        if (cmds == 8) {
                            printf("loop@echoAS(\"\")\n");
                            char input[100];
                            printf("enter text to loop: ");
                            scanf("%s", txt);

                            goto start_Loop;
                            start_loop:

                            printf("%s\n", txt);
                            goto end;
                            end:
                            while (1) {
                                printf("%s\n", input);
                            }
                        }
            }

            break;
        case 1:
            printf("file manager\n");
            printf("###############################################################\n");
            printf("##                                                           ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##    #####D#####              ######C#######                ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##                                                           ##\n");
            printf("##     LATEST files          |  old files                    ##\n");
            printf("##     %d        %d          |                               ##\n", filename);
            printf("##     %d        %d          |     LAP test                  ##\n", filename);
            printf("##     %d        %d          |                               ##\n", filename);
            // sorry it handles 6 filesssssssss uhm idddk,
            break;
        case 2:
            printf("text editor\n");
            printf("file name but add .txt always: ");
            printf("want to exit type: exit")
            scanf("%d", &filename)
            printf("                           \n");
            printf("                                                                                  ")
            scanf("%d", filetxt);
            if (cmds == NULL) {
                printf("exit")
                scanf("%d", exit)
                printf("  [{ TERMINAL}]   [{ TEXT EDITOR}]  [{ FILE MANAGER}]   [{ EXPLORER}] [{DESKTOP}] \n");
                if (TERMINAL == 1) {
                    printf("#####################################\n");
                    printf("#                                   #\n");
                    printf("# ~$                                #\n");
                    scanf("%d", &cmds);
                    printf("#                                   #\n");
                    printf("#####################################\n");
                } if ( explorer) {
                     printf("###############################################################\n");
            printf("##                                                           ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##    #####D#####              ######C#######                ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##                                                           ##\n");
            printf("##   new volume                disk C                        ##\n");
            printf("##                                                           ##\n");
            printf("##                                            [users]        ##\n");
            printf("##                                                           ##\n");
            printf("##                             lightweightOS                 ##\n");
            printf("###############################################################\n");
            printf("###############################################################\n");
                } if (file manager) {
                     printf("###############################################################\n");
            printf("##                                                           ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##    #####D#####              ######C#######                ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##                                                           ##\n");
            printf("##     LATEST files          |  old files                    ##\n");
            printf("##     %d        %d          |                               ##\n", filename);
            printf("##     %d        %d          |     LAP test                  ##\n", filename);
            printf("##     %d        %d          |                               ##\n", filename);
            printf("##                                                           ##\n");
            printf("###############################################################\n");
            printf("###############################################################\n");
                }
                    if (text editor) {
                        printf("file name but add .txt always: \n");
                        scanf("%d", &filename);
                        printf("want to exit type: exit\n");
                        printf("                           \n");
                        printf("                           \n");
            }           char text[1000];
                        printf("                                                                                  \n");
                        scanf("%d", text);
                        if (exit == 1) {
                            printf("  [{ TERMINAL}]   [{ TEXT EDITOR}]  [{ FILE MANAGER}]   [{ EXPLORER}] [{DESKTOP}] \n");
                            if (TERMINAL == 1) {
                                printf("#####################################\n");
                                printf("#                                   #\n");
                                printf("# ~$                                #\n");
                                scanf("%d", &cmds);
                                printf("#                                   #\n");
                                printf("#####################################\n");
                            } if ( explorer == 2) {
                                 printf("###############################################################\n");
                    printf("##                                                           ##\n");
                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                    printf("##    #####D#####              ######C#######                ##\n");
                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                    printf("##                                                           ##\n");
                    printf("##   new volume                disk C                        ##\n");
                    printf("##                                                           ##\n");
                    printf("##                                            [users]        ##\n");
                    printf("##                                                           ##\n");
                    printf("##                             lightweightOS                 ##\n");
                    printf("###############################################################\n");
                    printf("###############################################################\n");
                        } if (file manager == 3) {
                             printf("###############################################################\n");
                             printf("###############################################################\n");
                             printf("##                                                           ##\n");
                             printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                             printf("##    #####D#####              ######C#######                ##\n");
                             printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                             printf("##                                                           ##\n");
                             printf("##     LATEST files          |  old files                    ##\n");
                             printf("##     %d        %d          |                               ##\n", filename);
                             printf("##     %d        %d          |     LAP test                  ##\n", filename);
                             printf("##     %d        %d          |                               ##\n", filename);
                             printf("##                                                           ##\n");
                             printf("###############################################################\n");
                             printf("###############################################################\n");
                        } if (text editor == 4) {
                            printf("file name but add .txt always: \n");
                            scanf("%d", &filename);
                            printf("want to exit type: exit\n");
                            printf("                           \n");
                            printf("                           \n");
                            scanf("%d", text);
                            char text[1000];
                            if (desktop == 5) {
                                printf("#############################################\n");
                                printf("#  user = %d                                  #\n", username);
                                printf("#                                             #\n");
                                printf("#                                             #\n");
                                printf("#  [file manager]  [text editor]  [explorer]  #\n");
                                printf("#   [terminal]    [game]      [compiler]      #\n");
                                printf("#############################################\n");
                                if (file manager == 1) {
                                    printf("###############################################################\n");
                                    printf("##                                                           ##\n");
                                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                                    printf("##    #####D#####              ######C#######                ##\n");
                                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                                    printf("##    #####D#####              ######C#######                ##\n");
                                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                                    printf("##                                                           ##\n");
                                    printf("##     LATEST files          |  old files                    ##\n");
                                    printf("##     %d        %d          |                               ##\n", filename);
                                    printf("##     %d        %d          |     LAP test                  ##\n", filename);
                                    printf("##     %d        %d          |                               ##\n", filename);
                                    printf("##                                                           ##\n");
                                    printf("###############################################################\n");
                                    printf("###############################################################\n");
                                } if (text editor == 2) {
                                     printf("###############################################################\n");
            printf("##                                                           ##\n");
            printf("##                                                           ##\n");        
            scanf("%d", &text);
                            } if (explorer == 3) {
                                 printf("###############################################################\n");
                                 printf("###############################################################\n");
                                  printf("###############################################################\n");
                    printf("##                                                           ##\n");
                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                    printf("##    #####D#####              ######C#######                ##\n");
                    printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
                    printf("##                                                           ##\n");
                    printf("##   new volume                disk C                        ##\n");
                    printf("##                                                           ##\n");
                    printf("##                                            [users] %d     ##\n", filename);
                    printf("##                                                           ##\n");
                    printf("##                             lightweight version           ##\n");
                    printf("###############################################################\n");
                    printf("###############################################################\n");
                        } if (terminal == 5) {
                            printf("#####################################\n");
                            printf("#                                   #\n");
                            printf("# ~$                                #\n");
                            scanf("%d", &cmds);
                            printf("#                                   #\n");
                            printf("#####################################\n");
                        } if (game == 6) {
                             printf("\n");
                             printf("\n");
                             printf("###########\n");
                             printf("###########\n");
                                printf("###########\n");
                                printf("###########\n");
                                printf("###########\n");

                                printf("shoot arrow to box S to shoot, shoot arrow to box D to reload, shoot arrow to box E to exit\n");
                                char input[100];
                                scanf("%s", input); 
                                if (input == "s") {
                                    printf("############\n");
                                    printf("############\n");
                                    printf("##### ######\n");
                                    printf("############\n");
                                    printf("############\n");
                                    printf("you shoot the arrow!\n");
                                } if (input == "d") {
                                    printf("you reload the arrow!\n");
                                    printf(" %%%%%%%%%%%%%%%%%%%%%%%\n");
                                    printf("%%%%%%%%%%%%%%%%%%%%%%%%\n");
                                    printf("u reloaded 1 of 40 arrows\n");
                                } if (input == "e") {
                                    printf("you exit the game!\n");
                                }
                                if (compiler == 7) {
                                    #define max_code_size 10000000000
                                    #define operators 21
                                    #define tokens 500
                                    #define keywords 25
                                    #define data_types 10
                                    #define functiona 10
                                    #define variables 50
                                    #define vectors 4
                                    #define arrays 2
                                    #define pointers 1
                                    #define classes 1
                                    #define namespaces 2
                                    #define if/eLse 2
                                    #define loops 3
                                    #define max_array_size 70
                                    #define max_vectorsize 4
                                    #define parser_buffer_size 10000000000
                                    #define lexer_buffersize 1000

                                    char code[max_code_size];
                                    
                                    operators[51] = {"+", "-", "*", "/", "%", "=", "==", "!=", "<", ">", "<=", ">=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>", 
                                    "++", "--", "+=", "-=", "*=", "/=", "%=", "!!", "&&&", "|||", "^^^", "~~~", "<<=", ">>=", "===", "!==", "<<<", ">>>", "&&=", "||=", "^^=", "!!=", "&&&&", "||||", "^^^^", "~~~~"};

                                    tokens[500] = {"int", "float", "if", "else", "while", "for", "return", "break", "continue", "void", "char", "double", "long", "short", "unsigned", "signed", "const", "static", "struct", "union",
                                    "enum", "typedef", "sizeof", "volatile", "register", "extern", "goto", "auto", "inline", "restrict", "_Bool", "_Complex", "_Imaginary", "alignas", "alignof", "atomic_bool", "atomic_char", "atomic_schar", "atomic_uchar", "atomic_short", "atomic_ushort",
                                    "pointer", "array", "function", "macro", "namespace", "class", "public", "private", "protected", "template", "typename", "this", "new", "delete", "try", "catch", "throw", "using", "virtual", "override", "final",
                                    "import", "export", "module", "package", "interface", "abstract", "extends", "implements", "instanceof", "super", "synchronized", "transient", "volatile", "strictfp", "native", "default", "assert", "yield", "record", "sealed", "non-sealed", "permits", "open", "exports", "provides", "with", "transitive", "var", "yield", "record", "sealed", "non-sealed", "permits", "open", "exports", "provides", "with", "transitive"
                                , "main", "printel", "void", "string", "int", "float", "double", "char", "bool", "true", "false", "null", 
                                "include", "define", "public", "private", "protected", "class", "struct", "union", "enum", "namespace", "template", "typename", "this", "new", "delete", "try", "catch", "throw", "using", "virtual", "override", "final",
                                "import", "export", "module", "package", "interface", "abstract",
                                "extension", "ios++", "goto", "lock", "unlock, "draw", "screen", "gnu", "none", "boot", "syscall", "debug", "vector", "memory", "page", "task", "elf", "fs", "vfs", "kernel"};

                                    keywords[keywords] = {"int", "float", "if", "else", "while", "for", "return", "break", "continue", "void", "char", "double", "long", "short", "unsigned", "signed", "const", "static", "struct", "union",
                                    "enum", "typedef", "sizeof", "volatile", "register", "extern", "goto", "auto", "inline", "restrict", "_Bool", "_Complex", "_Imaginary", "alignas", "alignof", "atomic_bool", "atomic_char", "atomic_schar", "atomic_uchar", "atomic_short", "atomic_ushort",
                                    "pointer", "array", "function", "printel", "namespace", "class", "public", "private", "protected", "template", "typename", "this", "new", "delete", "try", "catch", "throw", "using", "virtual", "override", "final",
                                    "import", "export", "module", "package", "interface", "abstract", };
                                    "extension", "ios++", "goto", "lock", "unlock, "draw", "screen", "gnu", "boot", "syscall", "debug", "vector", "memory", "page", "task", "elf", "fs", "vfs", "kernel"};

                                        data_types[data_types] = {"int", "float", "double", "char", "bool", "string", "void", "auto", "decltype", "size_t", "ptrdiff_t"};
    
                                        functiona[functiona] = {"main", "printel", "void", "string", "int", "float", "double", "char", "bool", "true", "false", "null"};
    
                                        variables[variables] = {"var1", "var2", "var3", "var4", "var5", "var6", "var7", "var8", "var9", "var10", "var11", "var12", "var13", "var14", "var15", "var16", "var17", "var18", "var19", "var20",
                                        "var21", "var22", "var23", "var24", "var25", "var26", "var27", "var28", "var29", "var30", "var31", "var32", "var33", "var34", "var35", "var36", "var37", "var38", "var39", "var40",
                                        "var41", "var42", "var43", "var44", "var45", "var46", "var47", "var48", "var49", "var50"};
    
                                        vectors[vectors] = {"pop_back", "pop_size", "pop_front", "push_back"};
    
                                        arrays[arrays] = {"int %s", "int %s"};
    
                                        pointers[pointers] = {"pointer1"};
    
                                        classes[classes] = {"public", "private", "protected", "none"};
    
                                        namespaces[namespaces] = {"namespace return;", "namespace printel;"};
    
                                        if/else[if/eLse] = {"if statement", "else statement"};
    
                                        loops[loops] = {"for loop", "while loop", "do-while loop"

                                        lexer_buffersize = 1000;
                                        lexer_buffer[lexer_buffersize];
                                        lexer_buffer_index = 0;
                                        char c;
                                        while ((c = getchar()) != EOF) {
                                            if (lexer_buffer_index < lexer_buffersize - 1) {
                                                lexer_buffer[lexer_buffer_index++] = c;
                                                lexer_buffer[lexer_buffer_index] = '\0';
                                                lexerMatch[{operators, tokens, keywords, data_types, functiona, variables, vectors, arrays, pointers, classes, namespaces, if/else, loops}] = lexer_buffer;
                                                lexerConvert[syntax to machine code] = lexer_buffer;
                                                return lexerConvert;
                                                registers[16] = {0};
                                                memory[1000000] = {0};

                                                parser_buffer[parser_buffer_size];
                                                parser_buffer_index = 0;
                                                parserMatch[lexerConvert] = parser_buffer;
                                                parserConvert[parser_buffer to machine code] = parser_buffer;
                                                return parserConvert;

                                                

                                                printf("loaded the compiler!\n");

                                                printf("###############################################################\n");
                                                printf("##                    dpp compiler                           ##\n");
                                                printf("##                                                           ##\n");
                                                scanf("%d", &code);
                                                operators[51] = {"+", "-", "*", "/", "%", "=", "==", "!=", "<", ">", "<=", ">=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>",
                                                "++", "--", "+=", "-=", "*=", "/=", "%=", "!!", "&&&", "|||", "^^^", "~~~", "<<=", ">>=", "===", "!==", "<<<", ">>>", "&&=", "||=", "^^=", "!!=", "&&&&", "||||", "^^^^", "~~~~"};
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("##                                                           ##\n");
                                                printf("###############################################################\n");

                                    
                                
                                }

                    }
            break;
        default:
            printf("###############################################################\n");
            printf("##                                                           ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##    #####D#####              ######C#######                ##\n");
            printf("##    $$$$$$$$$$$              $$$$$$$$$$$$$$                ##\n");
            printf("##                                                           ##\n");
            printf("##     LATEST files          |  old files                    ##\n");
            printf("##     %d        %d          |                               ##\n", filename);
            printf("##     %d        %d          |     LAP test                  ##\n", filename);
            printf("##     %d        %d          |                               ##\n", filename);
            printf("##                                                           ##\n");
            printf("###############################################################\n");
            printf("###############################################################\n");
            break;
                }

    }


            }
        }
        
   } 

}             



