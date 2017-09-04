#pragma once
#include <list>
using namespace std;

#include "Statement.h"

class StatementList {
private:
	list<Statement> statementList;
	Statement parentStatement;
	//Procedure parentProcedure;
	Statement curr;

public:
	StatementList(Statement parent);
	void addStatement(int stmtNo);
	Statement getParent();
};