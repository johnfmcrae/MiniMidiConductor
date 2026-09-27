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

## Sending Messages on a Port

Once you have a port ready, you can configure it to receive output messages with,

```cpp
libremidi::midi_out out;
out.open_port(*port);
if (!out.is_port_open())
{
    std::cerr << "Failed to open port\n";
    return;
}
```

The `midi_out` port will be closed once it goes out of scope.
