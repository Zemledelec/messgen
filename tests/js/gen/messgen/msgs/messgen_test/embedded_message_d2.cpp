#include "embedded_message_d2.h"

namespace messgen {
namespace msgs {
namespace messgen_test {

static const messgen::Metadata *nested_msgs[] = {&messgen::msgs::messgen_test::embedded_message_d1::METADATA, &messgen::msgs::messgen_test::simple_message::METADATA, &messgen::msgs::messgen_test::embedded_message_d1::METADATA, nullptr};
const messgen::Metadata embedded_message_d2::METADATA =  {
    "embedded_message_d2",
    "double[2] f1;uint8_t f0;uint8_t f4;embedded_message_d1 f2;simple_message f3;embedded_message_d1 f5;",
    nested_msgs
};

} // messgen
} // msgs
} // messgen_test

