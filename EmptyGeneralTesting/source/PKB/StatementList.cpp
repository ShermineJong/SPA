#include "StatementList.h"

StatementList::StatementList(Statement parent) {
	statementList = *new list<Statement>();
	parentStatement = parent;
}

void StatementList::addStatement(int stmtNo) {
	statementList.insert(new Statement(stmtNo, &parentStatement, &curr));
}

Statement StatementList::getParent() {
	return parentStatement;
}