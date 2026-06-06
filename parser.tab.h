/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAKE = 258,                    /* MAKE  */
    LIST = 259,                    /* LIST  */
    NUMBERS = 260,                 /* NUMBERS  */
    STRINGS = 261,                 /* STRINGS  */
    FLOATS = 262,                  /* FLOATS  */
    FROM = 263,                    /* FROM  */
    USER = 264,                    /* USER  */
    FIXED = 265,                   /* FIXED  */
    OF = 266,                      /* OF  */
    A = 267,                       /* A  */
    AN = 268,                      /* AN  */
    SORT = 269,                    /* SORT  */
    ASC = 270,                     /* ASC  */
    DESC = 271,                    /* DESC  */
    BY = 272,                      /* BY  */
    REMOVE = 273,                  /* REMOVE  */
    DUPLICATES = 274,              /* DUPLICATES  */
    UNIQUE = 275,                  /* UNIQUE  */
    FILTER = 276,                  /* FILTER  */
    KEEP = 277,                    /* KEEP  */
    ONLY = 278,                    /* ONLY  */
    WHERE = 279,                   /* WHERE  */
    EVEN = 280,                    /* EVEN  */
    ODD = 281,                     /* ODD  */
    POSITIVE = 282,                /* POSITIVE  */
    NEGATIVE = 283,                /* NEGATIVE  */
    GREATER = 284,                 /* GREATER  */
    LESS = 285,                    /* LESS  */
    THAN = 286,                    /* THAN  */
    EQUAL = 287,                   /* EQUAL  */
    TO = 288,                      /* TO  */
    SUM = 289,                     /* SUM  */
    AVERAGE = 290,                 /* AVERAGE  */
    MAX = 291,                     /* MAX  */
    MIN = 292,                     /* MIN  */
    COUNT = 293,                   /* COUNT  */
    SIZE = 294,                    /* SIZE  */
    REVERSE = 295,                 /* REVERSE  */
    SHUFFLE = 296,                 /* SHUFFLE  */
    CLEAR = 297,                   /* CLEAR  */
    ADD = 298,                     /* ADD  */
    APPEND = 299,                  /* APPEND  */
    INSERT = 300,                  /* INSERT  */
    POP = 301,                     /* POP  */
    DELETE_CMD = 302,              /* DELETE_CMD  */
    FIND = 303,                    /* FIND  */
    CONTAINS = 304,                /* CONTAINS  */
    INDEX_OF = 305,                /* INDEX_OF  */
    AT = 306,                      /* AT  */
    REPLACE = 307,                 /* REPLACE  */
    WITH = 308,                    /* WITH  */
    SLICE = 309,                   /* SLICE  */
    FROM_IDX = 310,                /* FROM_IDX  */
    COPY = 311,                    /* COPY  */
    MERGE = 312,                   /* MERGE  */
    INTO = 313,                    /* INTO  */
    FILL = 314,                    /* FILL  */
    REPEAT = 315,                  /* REPEAT  */
    TIMES = 316,                   /* TIMES  */
    END_KW = 317,                  /* END_KW  */
    FRONT_KW = 318,                /* FRONT_KW  */
    PRINT = 319,                   /* PRINT  */
    SHOW = 320,                    /* SHOW  */
    DISPLAY = 321,                 /* DISPLAY  */
    AND = 322,                     /* AND  */
    THEN = 323,                    /* THEN  */
    THE = 324,                     /* THE  */
    IN = 325,                      /* IN  */
    ITEMS = 326,                   /* ITEMS  */
    NUMBER_KW = 327,               /* NUMBER_KW  */
    NUMBER = 328,                  /* NUMBER  */
    FLOAT_LIT = 329,               /* FLOAT_LIT  */
    STRING_LIT = 330               /* STRING_LIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    int    num;
    double fnum;
    char  *str;

#line 145 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
