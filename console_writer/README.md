# `write` Function

Prints text to the console character by character, with options to:

- Set a delay between each character (`delayCh`) and after spaces (`delayS`)  
- Apply a color to the text (`color`)

If `color` is `0`, the text prints without color.
If delays are not provided, both default to **20 ms**

## Parameters

| Parameter | Type | Description                                  |
|-----------|------|----------------------------------------------|
| `text`    | string | The text to print                            |
| `delayCh` | int  | Delay between characters (milliseconds)      |
| `delayS`  | int  | Additional delay after spaces (milliseconds) |
| `color`   | int  | ANSI color code to use (0 = no color)        |

## ANSI Color Codes

| Color Name     | Code |
|----------------|------|
| Black          | 30   |
| Red            | 31   |
| Green          | 32   |
| Yellow         | 33   |
| Blue           | 34   |
| Magenta        | 35   |
| Cyan           | 36   |
| White          | 37   |
| Bright Black   | 90   |
| Bright Red     | 91   |
| Bright Green   | 92   |
| Bright Yellow  | 93   |
| Bright Blue    | 94   |
| Bright Magenta | 95   |
| Bright Cyan    | 96   |
| Bright White   | 97   |

## Example Usage

```cpp
#include "console_writer.h"

int main() {
    write("Hello world!", 50, 100, 32); // Prints green text with delays
    write("No color text.", 50, 100); // Prints text without color
    write("default"); // Prints text with default settings (20ms delay and standard color)
    return 0;
}
