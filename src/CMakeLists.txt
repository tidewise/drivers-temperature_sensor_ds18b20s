rock_library(temperature_sensor_ds18b20s
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(temperature_sensor_ds18b20s_bin Main.cpp
    DEPS temperature_sensor_ds18b20s)

