cmake_minimum_required(VERSION 3.25)
project(sec_15)

set(CMAKE_CXX_STANDARD 17)

add_executable(sec_15 main.cpp Account.cpp Account.h Savings_Account.cpp Savings_Account.h Account_Util.cpp Account_Util.h Checking_Account.cpp Checking_Account.h Trust_Account.cpp Trust_Account.h)
