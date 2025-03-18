# CMakeList.txt: проект CMake для Game_Racing_Simulator_CM; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Game_Racing_Simulator_CM")

set (SOURCES
RacingLibrary/AirVehicles.cpp
RacingLibrary/BootsAllTerrain.cpp
RacingLibrary/Broom.cpp
RacingLibrary/Camel.cpp
RacingLibrary/CamelFast.cpp
RacingLibrary/Centaur.cpp
RacingLibrary/Eagle.cpp
RacingLibrary/FlyingCarpet.cpp
RacingLibrary/GroundVehicles.cpp
RacingLibrary/RACE.cpp
RacingLibrary/Vehicles.cpp
)

set (HEADERS
RacingLibrary/AirVehicles.h
RacingLibrary/BootsAllTerrain.h
RacingLibrary/Broom.h
RacingLibrary/Camel.h
RacingLibrary/CamelFast.h
RacingLibrary/Centaur.h
RacingLibrary/Eagle.h
RacingLibrary/FlyingCarpet.h
RacingLibrary/GroundVehicles.h
RacingLibrary/RACE.h
RacingLibrary/Vehicles.h
)
add_library (RacingLibrary SHARED ${SOURCES} ${HEADERS})

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Game_Racing_Simulator_CM "Game_Racing_Simulator_CM.cpp" "Game_Racing_Simulator_CM.h")

target_link_libraries (Game_Racing_Simulator_CM RacingLibrary)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Game_Racing_Simulator_CM PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
