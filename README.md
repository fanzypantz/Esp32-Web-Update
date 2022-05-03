# Esp32 Web Update

Library for updating the firmware of an Esp32 device over the web.

## ☕ Using this library

To use this library, you need to download, install the library and include the following file in your project:

```
#include <web_update.h>
```

After that, you declare the web_update object with the folowing customizations:

HOST - The URL to the firmware file. - Mandatory

Debbuger - If you want to know what's happening on the update via Serial, set this to 1. - Opcional

Buffer Size - The size of the buffer to store the firmware. - Opcional

Time Out - Timeout for the update process. - Opcional

```
web_update webupdate(String HOST, int Debbuger, int BUFFER_SIZE, int TIME_OUT);
```

When you want to start the update process, you call the following method:

```
webUpdate.update();
```

If any error occurs, the method will return the error code:

1 - Wifi not connected.

2 - File or host not found.

3 - Update Timeout.

Future updates will suport ethernet and other network types.

Library created from the archives of [@kurimawxx00/webota-esp32](https://github.com/kurimawxx00/webota-esp32).