project(EGGPLANTS_SERVER)
INCLUDE_DIRECTORIES(./include)

#test project
add_executable(LibevenTest hello-world.c)
target_link_libraries(LibevenTest /home/code/eggplants_server/libevent_core.a)

#mian project
add_executable(EGGPLANTS_SERVER  ./src/login.cpp ./src/serverController.cpp ./src/main.cpp)
target_link_libraries(EGGPLANTS_SERVER /home/code/eggplants_server/libevent_core.a mysqlclient)