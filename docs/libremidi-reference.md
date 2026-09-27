# libremidi Library Reference Guide

## Input and Output Ports

Defined in `include/libremidi/port_information.hpp`

```cpp
struct input_port : port_information
{
  bool operator==(const input_port& other) const noexcept = delete;
  std::strong_ordering operator<=>(const input_port& other) const noexcept = delete;
};
struct output_port : port_information
{
  bool operator==(const output_port& other) const noexcept = delete;
  std::strong_ordering operator<=>(const output_port& other) const noexcept = delete;
};
```
