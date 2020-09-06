#pragma once

#include <chrono>
#include <iostream>
#include <iomanip>
#include <string_view>

class Timer
{
public:
	Timer(std::ostream &output, const std::string_view &s = "");
	void span() const;
	~Timer();

private:
	// Static member : store the info that how many Timer currently running
	inline static size_t count_total = 0;

	// private members
	std::ostream &os;
	std::chrono::steady_clock::time_point start;
	std::string_view message;
	size_t count_instance;

	// private member functions
	void indention() const;
};

inline Timer::Timer(std::ostream &output, const std::string_view &s) : os(output), start(std::chrono::steady_clock::now()), message(s), count_instance(count_total++)
{
	indention();
	os << "Timer: " << message << " begins..." << std::endl;
}

inline void Timer::span() const
{
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	indention();
	os << "Timer: " << message << " costs ";
	os << time_span.count() << "ms" << std::endl;
}

inline Timer::~Timer()
{
	--count_total;
}

inline void Timer::indention() const
{
	for (size_t i = 0; i != count_instance; ++i)
	{
		os << "\t";
	}
}
