#include <boost/test/unit_test.hpp>
#include <temperature_sensor_ds18b20s/Dummy.hpp>

using namespace temperature_sensor_ds18b20s;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    temperature_sensor_ds18b20s::DummyClass dummy;
    dummy.welcome();
}
