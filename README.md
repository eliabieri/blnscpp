# 🐈 blnscpp
Single header C++ API for the Big List of Naughty Strings https://github.com/minimaxir/big-list-of-naughty-strings

Here's some examples:
```
Powerلُلُصّبُلُلصّبُررً ॣ ॣh ॣ ॣ冗
🏳0🌈️
జ్ఞ‌ా
گچپژ
Ω≈ç√∫˜µ≤≥÷
åß∂ƒ©˙∆˚¬…æ
œ∑´®†¥¨ˆøπ“‘
¡™£¢∞§¶•ªº–≠
¸˛Ç◊ı˜Â¯˘¿
ÅÍÎÏ˝ÓÔÒÚÆ☃
Œ„´‰ˇÁ¨ˆØ∏”
```

# Example Usage
```c++
#include "blns.h"
#include <iostream>

auto blns = blns::Blns{};
for (auto const &ns : blns.getStrings()) {
    std::cout << ns << "\n";
}
```
