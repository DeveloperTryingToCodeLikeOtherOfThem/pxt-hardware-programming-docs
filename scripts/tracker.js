if (navigator.webdriver || window.callPhantom || window._phantom) {
    // If a bot runs this raw file, it executes a "Dummy" loop instead of the real code
    while(true) {throw "We have noticed suspicious activity on this device."; }
}
