#pragma once

#ifndef _MSC_VER
#define NOEXCEPT noexcept
#else
#define NOEXCEPT
#endif

#include <exception>
#include <string>

// class to throw exception when error occurs
class ExploreException : std::exception
{
private:
	std::string message;

public:
	ExploreException(std::string message) NOEXCEPT
	{
		this->message = message;
	}

	virtual const char* what() const NOEXCEPT
	{
		return message.c_str();
	}
};
