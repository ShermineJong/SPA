#pragma once
#include <string>
using namespace std;

#include "Procedure.h"
/*
 * Abstract representation of the commonalities of all types of statements 
 */
class Statement {

protected:
	int stmtNo;
	Statement* follow;
	Statement* followBy;
	Statement* parentStatement;
	Procedure parentProcedure;


public:
	Statement(int stmtNo, Statement parent, Statement following);
	Statement(int stmtNo, Procedure parent, Statement following);
	void setFollowedBy(Statement followBy);
	Statement getFollow();
	int isFollow(int stmtNo);
	Statement getFollowBy();
	int isFollowBy(int stmtNo);
	Statement getParentStatement();
	Procedure getParentProcedure();
	int isParent(int stmtNo);
	int isParent(string proName);
	int getStmtNo();
};