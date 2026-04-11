## isMono
an image that **must** contain exactly **one** color.
``` sig
  image.create(null, null).isMono
```
## Returns
a boolean which returns true if the image is exactly **one** color. The boolean expression is false if these 2 colors do **not** exist.

## Example
Create a custom image detecting if the image has black and white, it logs into the console's serial output. Otherwise it throws an error.
``` ts
    const customImage = image.create(160, 120);
    customImage.setPixel(5, 5, 1);
    customImage.setPixel(15, 15, 15);
    if (customImage.isMono) {
       console.log("Your Image Is Valid");
    } else {
       throw "Error: This Image is Invalid";
    }
```
