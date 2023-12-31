#pragma once
#include <string>
#include <vector>
#include <map>

class sql_query_builder
{
public:
	sql_query_builder();
	sql_query_builder& AddColumn(const std::string& s);
	sql_query_builder& AddFrom(const std::string& s);
	sql_query_builder& AddWhere(const std::string& collum, const std::string& value);
	std::string BuildQuery();
private:
	std::string select;
	std::vector<std::string> _collum;
	std::string _from;
	std::map<std::string, std::string> _where;

};

