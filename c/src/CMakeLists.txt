add_subdirectory(paradigm)

set(TEST_SOURCES check_money.c)
add_executable(check_money ${TEST_SOURCES})

set(CHECK_LIBRARY check)
add_library(money money.c)

target_link_libraries(check_money PRIVATE money "${CHECK_LIBRARY}")

target_compile_options(check_money PUBLIC -D_THREAD_SAFE)

add_test(NAME CheckMoney COMMAND check_money)