
#include "ws_gencode.h"

#define ws_ret ws_return

main() {
/*
ws_comment( "Whitespace version of 99 bottles of beer (Bottles.ws) 2003-04-01"
"\n"	    "See http://compsoc.dur.ac.uk/whitespace/ for details interpreter"
"\n"	    "Example by Andrew Kemp <ajwk@pell.uklinux.net>"
"\n"	    ""
"\n"	    "(*All* space/tab/linefeed characters are significant!)");
*/

ws_push(99);	/* sssttsssttl */

ws_label(1);	// lssst
ws_call(2);

ws_dup();	/* sls */
ws_jz(3);	/* ltsttl */
ws_jump(1);	/* lsltl */

ws_label(3);	/* lssttl */
ws_exit();	/* lll */

ws_label(2);	/* lsstsl */
ws_call(4);	/* lsttssl */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(102);	/* sssttssttsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(114);	/* ssstttsstsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(110);	/* sssttstttsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(104);	/* sssttstsssl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(119);	/* ssstttstttl */
ws_outc();	/* tlss */
ws_push(97);	/* sssttsssstl */
ws_outc();	/* tlss */
ws_push(108);	/* sssttsttssl */
ws_outc();	/* tlss */
ws_push(108);	/* sssttsttssl */
ws_outc();	/* tlss */
ws_push(44);	/* ssststtssl */
ws_outc();	/* tlss */
ws_push(10);	/* ssststsl */
ws_outc();	/* tlss */
ws_call(4);	/* lsttssl */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(102);	/* sssttssttsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(114);	/* ssstttsstsl */
ws_outc();	/* tlss */
ws_push(44);	/* ssststtssl */
ws_outc();	/* tlss */
ws_push(10);	/* ssststsl */
ws_outc();	/* tlss */
ws_push(84);	/* ssstststssl */
ws_outc();	/* tlss */
ws_push(97);	/* sssttsssstl */
ws_outc();	/* tlss */
ws_push(107);	/* sssttststtl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(110);	/* sssttstttsl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(100);	/* sssttsstssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(119);	/* ssstttstttl */
ws_outc();	/* tlss */
ws_push(110);	/* sssttstttsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(97);	/* sssttsssstl */
ws_outc();	/* tlss */
ws_push(110);	/* sssttstttsl */
ws_outc();	/* tlss */
ws_push(100);	/* sssttsstssl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(112);	/* ssstttssssl */
ws_outc();	/* tlss */
ws_push(97);	/* sssttsssstl */
ws_outc();	/* tlss */
ws_push(115);	/* ssstttssttl */
ws_outc();	/* tlss */
ws_push(115);	/* ssstttssttl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(105);	/* sssttstsstl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(97);	/* sssttsssstl */
ws_outc();	/* tlss */
ws_push(114);	/* ssstttsstsl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(117);	/* ssstttststl */
ws_outc();	/* tlss */
ws_push(110);	/* sssttstttsl */
ws_outc();	/* tlss */
ws_push(100);	/* sssttsstssl */
ws_outc();	/* tlss */
ws_push(44);	/* ssststtssl */
ws_outc();	/* tlss */
ws_push(10);	/* ssststsl */
ws_outc();	/* tlss */
ws_push(1);	/* ssstl */
ws_sub();	/* tsst */
ws_call(4);	/* lsttssl */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(102);	/* sssttssttsl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(114);	/* ssstttsstsl */
ws_outc();	/* tlss */
ws_push(46);	/* ssststttsl */
ws_outc();	/* tlss */
ws_push(10);	/* ssststsl */
ws_outc();	/* tlss */
ws_push(10);	/* ssststsl */
ws_outc();	/* tlss */
ws_ret();	/* ltl */

ws_label(4);	/* lsstssl */
ws_dup();	/* sls */
ws_push(1);	/* ssstl */
ws_sub();	/* tsst */
ws_dup();	/* sls */
ws_jn(5);	/* ltttstl */
ws_jz(6);	/* ltsttsl */
ws_dup();	/* sls */
ws_outn();	/* tlst */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(108);	/* sssttsttssl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(115);	/* ssstttssttl */
ws_outc();	/* tlss */
ws_ret();	/* ltl */

ws_label(6);	/* lssttsl */
ws_push(49);	/* sssttssstl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(108);	/* sssttsttssl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_ret();	/* ltl */

ws_label(5);	/* lsststl */
ws_drop();	/* sll */
ws_push(78);	/* ssstsstttsl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(109);	/* sssttsttstl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(114);	/* ssstttsstsl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(32);	/* ssstsssssl */
ws_outc();	/* tlss */
ws_push(98);	/* sssttssstsl */
ws_outc();	/* tlss */
ws_push(111);	/* sssttsttttl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(116);	/* ssstttstssl */
ws_outc();	/* tlss */
ws_push(108);	/* sssttsttssl */
ws_outc();	/* tlss */
ws_push(101);	/* sssttsststl */
ws_outc();	/* tlss */
ws_push(115);	/* ssstttssttl */
ws_outc();	/* tlss */
ws_ret();	/* ltl */

}
