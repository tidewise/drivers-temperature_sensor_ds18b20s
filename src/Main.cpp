#include <iostream>
#include <temperature_sensor_ds18b20s/Dummy.hpp>

int main(int argc, char** argv)
{
    temperature_sensor_ds18b20s::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
