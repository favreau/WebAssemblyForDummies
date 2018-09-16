# Web Assembly for dummies (but not for long!)

## Simple example

### How to build
```em++ dice-roll.cpp -s WASM=1 -O3 -o index.js -s EXPORTED_FUNCTIONS="['_example','_roll_dice','_wtf']"```

### How to run
```python -m SimpleHTTPServer```
