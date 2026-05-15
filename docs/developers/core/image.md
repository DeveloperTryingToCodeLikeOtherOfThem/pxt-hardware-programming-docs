## Image Core
The core of using images are mainly from the `image.ofBuffer` function, which is the internal way of using images in raw data.
To see the existing image's data, use toBuffer, which is not a feature already avaliable
unless you natively shim to the function. The path for the shim is `image::toBuffer.`
