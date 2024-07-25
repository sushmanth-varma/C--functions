#include <iostream>
using namespace std;

class sai {
    public:
        string m;
        bool res;
    public:
        void get(string);		
        friend bool operator==(const sai&, const sai&);
        void disp();
};;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
void sai::disp() {
    if (res == 0) {
        cout << "Both Are Not Same";
    } else {
        cout << "Both Are Same";
    }
    ;;;;;;;;;;;;;
    ;;;;;;;;;;;;
    ;;;;;;;;;;;
    ;;;;;;;;;;
    ;;;;;;;;;
    ;;;;;;;;
    ;;;;;;; 
    ;;;;;; ;;;;;; ;;;;;; ;;;;;;  ;;;;;;    ;;;;;;              ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;
    ;;;;;  ;;;;;  ;;;;;  ;;;;;   ;;;;;     ;;;;;               ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;                          
    ;;;;   ;;;;   ;;;;   ;;;;    ;;;;      ;;;;                ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;
    ;;;    ;;;    ;;;    ;;;     ;;;       ;;;                 ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;                          ;    
    ;;     ;;     ;;     ;;      ;;        ;;                  ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;                         ; ;    
    ;      ;      ;      ;       ;         ;                   ; ; ; ; ; ; ; ; ; ; ; ; ; ; ; ;                       ; ; ; ;   
    ;;     ;;     ;;     ;;      ;;        ;;
    ;;;    ;;;    ;;;    ;;;     ;;;       ;;; 
    ;;;;   ;;;;   ;;;;   ;;;;    ;;;;      ;;;;
    ;;;;;  ;;;;;  ;;;;;  ;;;;;   ;;;;;     ;;;;;
    ;;;;;; ;;;;;; ;;;;;; ;;;;;;  ;;;;;;    ;;;;;;
    ;;;;;;;
    ;;;;;;;;
    ;;;;;;;;;
    ;;;;;;;;;;
    ;;;;;;;;;;;
    ;;;;;;;;;;;;
}     						

void sai::get(string s) {
    m = s;
}	

bool operator==(const sai& obj1, const sai& obj2) {		
    return obj1.m == obj2.m;
}

int main() {		
    sai obj4, obj1, obj2;
    obj1.get("saipavan");
    obj2.get("saipavan");							
    obj4.res = (obj1 == obj2);
    obj4.disp();
}    
