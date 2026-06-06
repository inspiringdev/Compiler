
%option noyywrap nodefault case-insensitive

%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
%}

%%

make            { return MAKE; }
list            { return LIST; }
numbers         { return NUMBERS; }
strings         { return STRINGS; }
floats          { return FLOATS; }
from            { return FROM; }
user            { return USER; }
fixed           { return FIXED; }
of              { return OF; }
a               { return A; }
an              { return AN; }

sort            { return SORT; }
ascending       { return ASC; }
descending      { return DESC; }
asc             { return ASC; }
desc            { return DESC; }

remove          { return REMOVE; }
duplicates      { return DUPLICATES; }
unique          { return UNIQUE; }
distinct        { return UNIQUE; }

filter          { return FILTER; }
keep            { return KEEP; }
only            { return ONLY; }
where           { return WHERE; }
even            { return EVEN; }
odd             { return ODD; }
positive        { return POSITIVE; }
negative        { return NEGATIVE; }
greater         { return GREATER; }
less            { return LESS; }
than            { return THAN; }
equal           { return EQUAL; }
to              { return TO; }
above           { return GREATER; }
below           { return LESS; }

sum             { return SUM; }
total           { return SUM; }
average         { return AVERAGE; }
mean            { return AVERAGE; }
avg             { return AVERAGE; }
max             { return MAX; }
maximum         { return MAX; }
min             { return MIN; }
minimum         { return MIN; }
count           { return COUNT; }
size            { return SIZE; }
length          { return SIZE; }

reverse         { return REVERSE; }
shuffle         { return SHUFFLE; }
randomize       { return SHUFFLE; }
clear           { return CLEAR; }
empty           { return CLEAR; }
reset           { return CLEAR; }
add             { return ADD; }
append          { return APPEND; }
insert          { return INSERT; }
push            { return ADD; }
end             { return END_KW; }
front           { return FRONT_KW; }
back            { return END_KW; }
beginning       { return FRONT_KW; }
pop             { return POP; }
delete          { return DELETE_CMD; }
drop            { return DELETE_CMD; }
find            { return FIND; }
search          { return FIND; }
contains        { return CONTAINS; }
index           { return INDEX_OF; }
at              { return AT; }
get             { return AT; }
replace         { return REPLACE; }
with            { return WITH; }
slice           { return SLICE; }
from_idx        { return FROM_IDX; }
copy            { return COPY; }
merge           { return MERGE; }
into            { return INTO; }
fill            { return FILL; }
repeat          { return REPEAT; }
times           { return TIMES; }

print           { return PRINT; }
show            { return SHOW; }
display         { return DISPLAY; }
output          { return PRINT; }
write           { return PRINT; }
dump            { return PRINT; }

and             { return AND; }
then            { return THEN; }
the             { return THE; }
in              { return IN; }
by              { return BY; }
items           { return ITEMS; }
elements        { return ITEMS; }
values          { return ITEMS; }
number          { return NUMBER_KW; }

[0-9]+\.[0-9]+ { yylval.fnum = atof(yytext); return FLOAT_LIT; }
[0-9]+          { yylval.num  = atoi(yytext); return NUMBER; }
-[0-9]+         { yylval.num  = atoi(yytext); return NUMBER; }

\"[^\"]*\"      { yylval.str = strndup(yytext+1, strlen(yytext)-2); return STRING_LIT; }
\'[^\']*\'      { yylval.str = strndup(yytext+1, strlen(yytext)-2); return STRING_LIT; }

[ \t\n\r]+      ;

.               { fprintf(stderr, "Lex Error: unknown token '%s'\n", yytext); }

%%
