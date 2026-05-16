#define parserBuffersize 10000
#include <stdio.h>
#include <string.h>
#include <compiler.h>
#define max_code_size 10000000000
#define loops 3
#define max_array_size 70
#define max_vectorsize 4
#define operators 21
#define tokens 500
#define linker.1d 
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
#define colors 8
#define bits 6200
#define registers 60
#define machinecode

/*
 * compiler.h
    * a compiler for the eaXOS operating system
    * based on c and cpp and c# and d and java and objective c
    * created by jatin
    \*
    * the compiler will be able to compile code written in a custom programming language called dpp (d++))
    * dpp will have a syntax similar to c++ and will be able to compile to machine code that can be executed on the eaXOS operating system
    * the compiler will be able to handle basic programming constructs such as variables, functions, loops, and conditionals
    * the compiler will also be able to handle more advanced features such as classes, namespaces, and templates
    * the compiler will be able to optimize code for performance and will have a built-in lexer and parser
    * the compiler will be able to generate assembly code and machine code for the eaXOS operating system
    * the compiler will be open source and will be available for anyone to use and contribute to
    */

    string = '#include <ios++>
              
               int maint() {
                   printel("int");
                   return 0;
               }';
    parser_buffer[parser_buffer_size];

    parser_buffer_index = 0;

    parserMatch[lexerConvert] = parser_buffer;

    parserConvert[parser_buffer to machine code] = parser_buffer;

    return parserConvert;

    keywords[keywords] = {"if", 
        "else", 
        "while",
         "for",
         
         "do",
          "return",
           "break", 
           "continue", 
           "switch", 
           "case", 
           "default", 
           "class", 
           "namespace", 
           "template", 
           "public", 
           "private", 
           "protected", 
           "virtual",
            "override", 
            "final", 
            "const"};

    classes[classes] = {
        "public",
         "private",
         
         "protected",
         "none"};

    namespaces[namespaces] = {"namespace return;", "namespace printel;"};

    if/else[if/eLse] = {
        "if statement", 
        "else statement"};

    loops[loops] = {"for loop",
         "while loop",
          "do-while loop"};

    registers[registers] = {"rax",
         "rbx",
          "rcx",
           "rdx",
            "rsi",
             "rdi", 
             "rsp", 
             "rbp",
             "r8",
              "r9", 
              "r10", 
              "r11", 
        "r12",
         "r13",
          "r14", 
          
          
          "r15", 
          "rip", 
          "rflags", 
          "cs", 
          "ds", 
          "es", 
          "fs", 
          "gs", 
          "ss", 
          "cr0",
           "cr2",
            "cr3",
         "cr4", 
         "cr8",
          "xmm0", 
          "xmm1",
           "xmm2", 
           "xmm3", 
           "xmm4", 
           "xmm5", 
           "xmm6", 
           "xmm7", 
           "ymm0", 
           "ymm1", 
           "ymm2", 
           "ymm3",
          "ymm4", 
          "ymm5", 
          "ymm6", 
          "ymm7", 
          "zmm0", 
          "zmm1", 
          "zmm2", 
          "zmm3", 
           "zmm4",
            "zmm5", 
            "zmm6", 
            "zmm7", 
            "st0", 
            "st1",
             "st2",
              "st3",
               "st4",
                "st5", 
                "st6",
                 "st7"
        "ax",
         "ah",
          "al", 
          "bx",
           "bh",
            "bl", 
            "cx", 
            "ch",
             "cl",
              "dx",
               "dh", 
               "dl"};

    machinecode[machinecode] = {
        "SQT", 
        "RTX",
         "MOV",
          "ADD", 
          "SUB", 
          "MUL",
           "DIV", 
           "MOD", 
           "AND",
            "OR", 
            "XOR", 
        
            "NOT", 
            "SHL", 
            "SHR", 
            "JMP", 
            "JE", 
            "JNE",
             "JG",
              "JL",
               "JGE",
                "JLE", 
                "CALL",
                 "RET",
                  "PUSH", 
                  "POP", 
        "NOP", 
        "HLT", 
        "INT", 
        "IRET", 
        "IN", 
        "OUT",
         "LOOP", 
         "LOOPE", 
         "LOOPNE",
          "JCXZ", 
          "JECXZ", 
          "1",
           "0", 
           "reg", 
           "MZ"};

    vectors[vectors] = {
        
        "vector<int>", 
        "vector<float>", 
        "vector<double>", 
        "vector<string>"};

    arrays[arrays] = {"array<int, size>", 
        "array<float, size>"};

    pointers[pointers] = {
        "pointer<int>",
         "pointer<float>", 
         "pointer<double>", 
         "pointer<string>"};

    data_types[data_types] = {
        "int", 
        "float", 
        "double",
        
        "char",
         "bool",
          "void"};

    functiona[functiona] = {
        "function<int()>", 
        "function<float()>",
         "function<double()>", 
         "function<string()>"};

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
        }

        }

        tokens[tokens] = {
            "int", 
            "float",
             "if", 
            "else",
             "while",
             "for", 
            "return", 
            "break",
             "continue",
             "void", 
             "char", 
             "double",
              "long", 
             "short", 
             "unsigned", 
             "signed", 
             "const",
              "static",
              "struct", 
             "union",
        "enum", 
        "typedef", 
        
        "sizeof", 
        "volatile", 
        "register", 
        
        "extern",
        "goto", 
        "auto", 
        "inline", 
        "restrict", 
        "_Bool",
         "_Complex", 
         "_Imaginary",
          "alignas", 
          "alignof", 
          "atomic_bool", 
          "atomic_char", 
          "atomic_schar", 
          "atomic_uchar", 
          "atomic_short", 
          "atomic_ushort",
        "pointer", 
        "array", 
        "function",
         "printel",
          "namespace", 
          "class",
           "public", 
           "private",
            "protected",
             "template",
              "typename", 
              
              "this", 
              "new", 
              "delete",
               "try",
                "catch",
                 "throw",
                  "using",
                   "virtual",
                    "override", 
                    "final",
        "import",
         "export", 
         
         "module", 
         "package", 
         "interface", 
         "abstract", 
         "extension", 
         "ios++", 
         "goto",
         
         "lock"
        , "unlock,
         "draw",
          "screen", 
          "gnu", 
          "none",
           "boot",
            "syscall",
             "debug", 
             "vector",
              "memory", 
              "page", 
        "task", 
        "elf", 
        "fs", 
        "vfs", 
        "kernel"};

        operators[operators] = {"+",
         "-",
          "*", 
          "/",
           "%",
            "=",
             "==",
              "!=", 
              "<", 
              ">", 
              "<=",
               ">=",
                "&&", 
                "||",
                 "!",
                  "&",
                   "|",
                    "^",
                     "~", 
                     "<<",
                      ">>",
                       "++",
                        "--",
                         "+=",
                          "-=",
                           "*=",
                            "/=",
                             "%=",
                              "!!",
                               "&&&",
                                "|||",
                                 "^^^",
                                  "~~~",
                                   "<<=",
                                    ">>=",
                                     "===",
                                      "!==",
                                       "<<<",
                                        ">>>",
                                         "&&=",
                                          "||=",
                                           "^^=",
                                            "!!=",
                                             "&&&&",
                                              "||||",
                                               "^^^^",
                                                "~~~~"};
        operarors[sizeof(operators) / sizeof(operators[0])];

        colors[colors] = {
        "red",
         "green",
          "blue",
           "yellow",
            "cyan", 
            "magenta",
             "white", 
             "black"};
        bits[6200] = {"0", "1"};

        machine_code[machinecodesize] = {"0", "1"};


        memory[1000000] = {0};

        // memory address

        registers[16] = {0};


        // space to run/execute
        void compile(const char* source_code) {

        // if no typed bluh
        if (source_code == NULL) {
            printf("error: source code is empty\n");

            
            print_syntax("%s\n", string);

            linker.1d[linker.1d_size] = {"0", "1"};
            
            
            return;
        }

            




    }


