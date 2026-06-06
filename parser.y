%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int  yylex();

int list_created = 0;
int list_type    = 0;

FILE *out;

const char *ctype() {
    if (list_type == 1) return "double";
    if (list_type == 2) return "string";
    return "int";
}

#define NEED_LIST \
    if (!list_created) { fprintf(out, "// Error: no list created yet\n"); } \
    else
%}

%union {
    int    num;
    double fnum;
    char  *str;
}

%token MAKE LIST NUMBERS STRINGS FLOATS FROM USER FIXED OF A AN
%token SORT ASC DESC BY
%token REMOVE DUPLICATES UNIQUE
%token FILTER KEEP ONLY WHERE EVEN ODD POSITIVE NEGATIVE GREATER LESS THAN EQUAL TO
%token SUM AVERAGE MAX MIN COUNT SIZE
%token REVERSE SHUFFLE CLEAR ADD APPEND INSERT POP DELETE_CMD FIND CONTAINS INDEX_OF
%token AT REPLACE WITH SLICE FROM_IDX COPY MERGE INTO FILL REPEAT TIMES
%token END_KW FRONT_KW
%token PRINT SHOW DISPLAY
%token AND THEN THE IN ITEMS NUMBER_KW

%token <num>  NUMBER
%token <fnum> FLOAT_LIT
%token <str>  STRING_LIT

%%

program
    : command_list
    ;

command_list
    :
    | command_list command
    | command_list AND command
    | command_list THEN command
    | command_list AND THEN command
    ;

command
    : make_cmd
    | sort_cmd
    | dedup_cmd
    | filter_cmd
    | stat_cmd
    | manip_cmd
    | print_cmd
    ;

make_cmd
    : MAKE LIST FROM USER
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST NUMBERS FROM USER
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST OF NUMBERS FROM USER
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr;\n");
        fprintf(out,"{ int n,x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST FLOATS FROM USER
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr;\n");
        fprintf(out,"{ int n; double x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST OF FLOATS FROM USER
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr;\n");
        fprintf(out,"{ int n; double x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST STRINGS FROM USER
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr;\n");
        fprintf(out,"{ int n; string x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST OF STRINGS FROM USER
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr;\n");
        fprintf(out,"{ int n; string x; cin>>n; for(int i=0;i<n;i++){cin>>x;arr.push_back(x);} }\n");
    }
    | MAKE LIST NUMBERS
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr = {5,3,2,5,1,4,2,8,6,7,3,9,1};\n");
    }
    | MAKE LIST FLOATS
    {
        list_created=1; list_type=1;
        fprintf(out,"vector<double> arr = {3.14,1.41,2.71,0.57,1.73,2.23,1.61};\n");
    }
    | MAKE LIST STRINGS
    {
        list_created=1; list_type=2;
        fprintf(out,"vector<string> arr = {\"banana\",\"apple\",\"cherry\",\"apple\",\"date\",\"elderberry\",\"fig\"};\n");
    }
    | MAKE LIST FIXED num_seq
    {
        list_created=1; list_type=0;
        fprintf(out,"};\n");
    }
    | FILL LIST WITH NUMBER REPEAT NUMBER TIMES
    {
        list_created=1; list_type=0;
        fprintf(out,"vector<int> arr(%d, %d);\n", $6, $4);
    }
    | COPY LIST
    {
        NEED_LIST fprintf(out,"vector<%s> arr2 = arr;\n", ctype());
    }
    | MERGE LIST WITH LIST
    {
        NEED_LIST fprintf(out,"arr.insert(arr.end(), arr2.begin(), arr2.end());\n");
    }
    ;

num_seq
    : NUMBER
    { fprintf(out,"vector<int> arr = {%d", $1); }
    | num_seq NUMBER
    { fprintf(out,",%d", $2); }
    ;

sort_cmd
    : SORT
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
    | SORT ASC
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
    | SORT DESC
    { NEED_LIST fprintf(out,"sort(arr.rbegin(),arr.rend());\n"); }
    | SORT BY ASC
    { NEED_LIST fprintf(out,"sort(arr.begin(),arr.end());\n"); }
    | SORT BY DESC
    { NEED_LIST fprintf(out,"sort(arr.rbegin(),arr.rend());\n"); }
    ;

dedup_cmd
    : REMOVE DUPLICATES
    {
        NEED_LIST {
            fprintf(out,"sort(arr.begin(),arr.end());\n");
            fprintf(out,"arr.erase(unique(arr.begin(),arr.end()),arr.end());\n");
        }
    }
    | KEEP UNIQUE
    {
        NEED_LIST {
            fprintf(out,"sort(arr.begin(),arr.end());\n");
            fprintf(out,"arr.erase(unique(arr.begin(),arr.end()),arr.end());\n");
        }
    }
    ;

filter_cmd
    : FILTER EVEN
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
    | KEEP ONLY EVEN
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
    | WHERE EVEN
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}),arr.end());\n"); }
    | FILTER ODD
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
    | KEEP ONLY ODD
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
    | WHERE ODD
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}),arr.end());\n"); }
    | FILTER POSITIVE
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x<=0;}),arr.end());\n",ctype()); }
    | KEEP POSITIVE
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x<=0;}),arr.end());\n",ctype()); }
    | FILTER NEGATIVE
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x>=0;}),arr.end());\n",ctype()); }
    | KEEP NEGATIVE
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](%s x){return x>=0;}),arr.end());\n",ctype()); }
    | FILTER GREATER THAN NUMBER
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=%d;}),arr.end());\n",$4); }
    | KEEP GREATER THAN NUMBER
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x<=%d;}),arr.end());\n",$4); }
    | FILTER LESS THAN NUMBER
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x>=%d;}),arr.end());\n",$4); }
    | KEEP LESS THAN NUMBER
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x>=%d;}),arr.end());\n",$4); }
    | FILTER EQUAL TO NUMBER
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](int x){return x!=%d;}),arr.end());\n",$4); }
    | FILTER EQUAL TO STRING_LIT
    { NEED_LIST fprintf(out,"arr.erase(remove_if(arr.begin(),arr.end(),[](string x){return x!=\"%s\";}),arr.end());\n",$4); free($4); }
    | SLICE NUMBER TO NUMBER
    { NEED_LIST fprintf(out,"{ vector<%s> _sl(arr.begin()+%d,arr.begin()+%d); arr=_sl; }\n",ctype(),$2,$4); }
    | SLICE FROM_IDX NUMBER TO NUMBER
    { NEED_LIST fprintf(out,"{ vector<%s> _sl(arr.begin()+%d,arr.begin()+%d); arr=_sl; }\n",ctype(),$3,$5); }
    ;

stat_cmd
    : SUM
    { NEED_LIST fprintf(out,"{ %s _s=0; for(auto& v:arr)_s+=v; cout<<\"Sum: \"<<_s<<\"\\n\"; }\n",ctype()); }
    | AVERAGE
    { NEED_LIST fprintf(out,"{ double _a=0; for(auto& v:arr)_a+=v; _a/=arr.size(); cout<<\"Average: \"<<_a<<\"\\n\"; }\n"); }
    | MAX
    { NEED_LIST fprintf(out,"cout<<\"Max: \"<<*max_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
    | MIN
    { NEED_LIST fprintf(out,"cout<<\"Min: \"<<*min_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
    | COUNT
    { NEED_LIST fprintf(out,"cout<<\"Count: \"<<arr.size()<<\"\\n\";\n"); }
    | SIZE
    { NEED_LIST fprintf(out,"cout<<\"Size: \"<<arr.size()<<\"\\n\";\n"); }
    | FIND NUMBER
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",$2);
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Found %d at index \"<<distance(arr.begin(),_it)<<\"\\n\";\n",$2);
            fprintf(out,"  else cout<<\"%d not found\\n\"; }\n",$2);
        }
    }
    | FIND STRING_LIT
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),string(\"%s\"));\n",$2);
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Found '%s' at index \"<<distance(arr.begin(),_it)<<\"\\n\";\n",$2);
            fprintf(out,"  else cout<<\"'%s' not found\\n\"; }\n",$2);
        }
        free($2);
    }
    | CONTAINS NUMBER
    { NEED_LIST fprintf(out,"cout<<(find(arr.begin(),arr.end(),%d)!=arr.end()?\"Yes, contains %d\":\"No, does not contain %d\")<<\"\\n\";\n",$2,$2,$2); }
    | CONTAINS STRING_LIT
    {
        NEED_LIST fprintf(out,"cout<<(find(arr.begin(),arr.end(),string(\"%s\"))!=arr.end()?\"Yes, contains '%s'\":\"No, does not contain '%s'\")<<\"\\n\";\n",$2,$2,$2);
        free($2);
    }
    | INDEX_OF NUMBER
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",$2);
            fprintf(out,"  if(_it!=arr.end()) cout<<\"Index of %d: \"<<distance(arr.begin(),_it)<<\"\\n\";\n",$2);
            fprintf(out,"  else cout<<\"%d not in list\\n\"; }\n",$2);
        }
    }
    | AT NUMBER
    { NEED_LIST fprintf(out,"cout<<\"Element at %d: \"<<arr[%d]<<\"\\n\";\n",$2,$2); }
    | COUNT EVEN
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](int x){return x%%2==0;}); cout<<\"Even count: \"<<_c<<\"\\n\"; }\n"); }
    | COUNT ODD
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](int x){return x%%2!=0;}); cout<<\"Odd count: \"<<_c<<\"\\n\"; }\n"); }
    | COUNT POSITIVE
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](%s x){return x>0;}); cout<<\"Positive count: \"<<_c<<\"\\n\"; }\n",ctype()); }
    | COUNT NEGATIVE
    { NEED_LIST fprintf(out,"{ int _c=count_if(arr.begin(),arr.end(),[](%s x){return x<0;}); cout<<\"Negative count: \"<<_c<<\"\\n\"; }\n",ctype()); }
    ;

manip_cmd
    : REVERSE
    { NEED_LIST fprintf(out,"reverse(arr.begin(),arr.end());\n"); }
    | SHUFFLE
    { NEED_LIST fprintf(out,"{ mt19937 _r(random_device{}()); shuffle(arr.begin(),arr.end(),_r); }\n"); }
    | CLEAR
    { NEED_LIST fprintf(out,"arr.clear();\n"); }
    | ADD NUMBER
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",$2); }
    | ADD FLOAT_LIT
    { NEED_LIST fprintf(out,"arr.push_back(%g);\n",$2); }
    | ADD STRING_LIT
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",$2); free($2); }
    | APPEND NUMBER
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",$2); }
    | APPEND NUMBER TO END_KW
    { NEED_LIST fprintf(out,"arr.push_back(%d);\n",$2); }
    | APPEND NUMBER TO FRONT_KW
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),%d);\n",$2); }
    | INSERT NUMBER AT NUMBER
    { NEED_LIST fprintf(out,"arr.insert(arr.begin()+%d,%d);\n",$4,$2); }
    | APPEND STRING_LIT
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",$2); free($2); }
    | APPEND STRING_LIT TO END_KW
    { NEED_LIST fprintf(out,"arr.push_back(\"%s\");\n",$2); free($2); }
    | APPEND STRING_LIT TO FRONT_KW
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),\"%s\");\n",$2); free($2); }
    | APPEND FLOAT_LIT TO END_KW
    { NEED_LIST fprintf(out,"arr.push_back(%g);\n",$2); }
    | APPEND FLOAT_LIT TO FRONT_KW
    { NEED_LIST fprintf(out,"arr.insert(arr.begin(),%g);\n",$2); }
    | POP
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.pop_back();\n"); }
    | POP END_KW
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.pop_back();\n"); }
    | POP FRONT_KW
    { NEED_LIST fprintf(out,"if(!arr.empty()) arr.erase(arr.begin());\n"); }
    | DELETE_CMD AT NUMBER
    { NEED_LIST fprintf(out,"if(%d<(int)arr.size()) arr.erase(arr.begin()+%d);\n",$3,$3); }
    | DELETE_CMD NUMBER
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),%d);\n",$2);
            fprintf(out,"  if(_it!=arr.end()) arr.erase(_it); }\n");
        }
    }
    | DELETE_CMD STRING_LIT
    {
        NEED_LIST {
            fprintf(out,"{ auto _it=find(arr.begin(),arr.end(),string(\"%s\"));\n",$2);
            fprintf(out,"  if(_it!=arr.end()) arr.erase(_it); }\n");
        }
        free($2);
    }
    | REPLACE NUMBER WITH NUMBER
    { NEED_LIST fprintf(out,"replace(arr.begin(),arr.end(),%d,%d);\n",$2,$4); }
    | REPLACE STRING_LIT WITH STRING_LIT
    {
        NEED_LIST fprintf(out,"replace(arr.begin(),arr.end(),string(\"%s\"),string(\"%s\"));\n",$2,$4);
        free($2); free($4);
    }
    ;

print_cmd
    : PRINT
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | SHOW
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | DISPLAY
    { NEED_LIST fprintf(out,"for(auto& x:arr) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | PRINT ONLY EVEN
    { NEED_LIST fprintf(out,"for(int x:arr) if(x%%2==0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | PRINT ONLY ODD
    { NEED_LIST fprintf(out,"for(int x:arr) if(x%%2!=0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | PRINT ONLY POSITIVE
    { NEED_LIST fprintf(out,"for(auto& x:arr) if(x>0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | PRINT ONLY NEGATIVE
    { NEED_LIST fprintf(out,"for(auto& x:arr) if(x<0) cout<<x<<\" \"; cout<<\"\\n\";\n"); }
    | DISPLAY SIZE
    { NEED_LIST fprintf(out,"cout<<\"Size: \"<<arr.size()<<\"\\n\";\n"); }
    | DISPLAY COUNT
    { NEED_LIST fprintf(out,"cout<<\"Count: \"<<arr.size()<<\"\\n\";\n"); }
    | DISPLAY SUM
    { NEED_LIST fprintf(out,"{ %s _s=0; for(auto& v:arr)_s+=v; cout<<\"Sum: \"<<_s<<\"\\n\"; }\n",ctype()); }
    | DISPLAY AVERAGE
    { NEED_LIST fprintf(out,"{ double _a=0; for(auto& v:arr)_a+=v; _a/=arr.size(); cout<<\"Average: \"<<_a<<\"\\n\"; }\n"); }
    | DISPLAY MAX
    { NEED_LIST fprintf(out,"cout<<\"Max: \"<<*max_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
    | DISPLAY MIN
    { NEED_LIST fprintf(out,"cout<<\"Min: \"<<*min_element(arr.begin(),arr.end())<<\"\\n\";\n"); }
    | PRINT ITEMS
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
    | DISPLAY ITEMS
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
    | SHOW ITEMS
    { NEED_LIST fprintf(out,"for(int i=0;i<(int)arr.size();i++) cout<<i<<\": \"<<arr[i]<<\"\\n\";\n"); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parse Error: %s\n", s);
}

int main() {
    out = fopen("output.cpp","w");
    if (!out) { perror("Cannot open output.cpp"); return 1; }
    fprintf(out,"#include <iostream>\n#include <vector>\n#include <algorithm>\n#include <string>\n#include <random>\nusing namespace std;\nint main(){\n");
    yyparse();
    fprintf(out,"\nreturn 0;\n}\n");
    fclose(out);
    printf("output.cpp generated successfully!\n");
    return 0;
}
