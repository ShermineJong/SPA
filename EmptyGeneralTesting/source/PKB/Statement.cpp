#include "Statement.h"

Statement::Statement() {
	stmtNo = NULL;
	parentStatement = nullptr;
	//parentProcedure = nullptr;
	follow = nullptr;
}

Statement::Statement(int index, Statement *parent, Statement *following) {
	stmtNo = index;
	parentStatement = parent;
	follow = following;
}
/*Statement::Statement(int index, Procedure parent, Statement *following) {
	stmtNo = index;
	parentProcedure = parent;
	follow = following;
}*/

bool Statement :: operator<(Statement other) {
	return stmtNo > other.stmtNo;
}