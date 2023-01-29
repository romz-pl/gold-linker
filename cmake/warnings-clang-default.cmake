set(LLC_WARNINGS "")

list(APPEND LLC_WARNINGS -Wall)
list(APPEND LLC_WARNINGS -Wextra)
list(APPEND LLC_WARNINGS -Wpedantic)
list(APPEND LLC_WARNINGS -pedantic-errors)
list(APPEND LLC_WARNINGS -Werror)

# Ten warning jest w makrach z biblioteki gtest/gmock
list(APPEND LLC_WARNINGS -Wno-gnu-zero-variadic-macro-arguments)
