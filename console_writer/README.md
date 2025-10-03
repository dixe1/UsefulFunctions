## Function: `write`

Prints text to the console character by character, with options to:

- Set a delay between each character (`y`) and between spaces (`z`)
- Apply a color to the text (`color`)

If `color` is `0`, the text prints without color.

### Parameters

| Parameter | Type          | Description                                                  |
|-----------|---------------|--------------------------------------------------------------|
| `x`       | `std::string` | The text to print                                           |
| `y`       | `int`         | Delay between characters (ms if color is used, µs otherwise) |
| `z`       | `int`         | Additional delay after spaces (ms if color is used, µs otherwise) |
| `color`   | `int`         | ANSI color code to use (0 = no color)                        |

### ANSI Color Codes

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

### Example

```cpp
write("Hello world!", 50, 100, 32); // Prints green text with delays
