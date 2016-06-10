cmake_minimum_required(VERSION 3.2)
project(glowing-succotash)

set(APP_SOURCES
  list.h
  list.c
  testList.c
)

add_executable( ${PROJECT_NAME}
  ${APP_SOURCES}
)
