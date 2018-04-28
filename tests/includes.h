#pragma once

#include "catch.hpp"
#include "utils.h"
#include <chrono>
#include <cstdio>
#include <exception>
#include <fstream>
#include <ostream>
#include <string>

#define SPDLOG_TRACE_ON
#define SPDLOG_DEBUG_ON

#include "spdlog/async.h"
#include "spdlog/sinks/daily_file_sink.h"
#include "spdlog/sinks/null_sink.h"
#include "spdlog/sinks/ostream_sink.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include "spdlog/sinks/simple_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"
