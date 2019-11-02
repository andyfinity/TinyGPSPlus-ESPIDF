# TinyGPSPlus for ESP-IDF

A compatability layer to use the popular TinyGPSPlus library on the ESP32 with ESP-IDF. This is not needed if you are using the Arduino framework on the ESP32.

The TinyGPSPlus library is a high-performance, easy-to-use NMEA parser, often used for GPS message parsing.

For documentation on the TinyGPSPlus library, see the [TinyGPSPlus page on Arduiniana](http://arduiniana.org/libraries/tinygpsplus/) or [the TinyGPSPlus examples](https://github.com/mikalhart/TinyGPSPlus/tree/master/examples).

## Usage

Place the component in the `components` folder inside your project.

    cd components
    git clone https://github.com/andyfinity/TinyGPSPlus-ESPIDF

Then, wherever you would like to use the GPS parser:

    #include <TinyGPS++.h>
    TinyGPSPlus gps;

See the TinyGPSPlus docs for integration details.

## License

This component is LGPL licensed to match the associated library.