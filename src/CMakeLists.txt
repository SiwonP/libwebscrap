add_library(
    webscrap SHARED
    scraper.c
    )

add_executable(
    wcrap
    main.c
    scraper.c
    )

target_link_libraries(wcrap curl)
target_link_libraries(webscrap curl)
