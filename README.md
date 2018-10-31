# `opt3001`






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
[`public void begin(uint16_t int_pin)`](#classopt3001_1a8a7bc007fe1ed59e573f23c43af8a662) | Initialize the library.
[`public float readLuxF()`](#classopt3001_1a7bc2c9ecab3be3b20b86173917f7f461) | Read LUX (illuminance) in float format.
[`public uint32_t readLux()`](#classopt3001_1a6f838314a274c6e8d9ff0f8eeb14e506) | Read LUX (illuminance) in integer format.
[`public uint32_t readResult()`](#classopt3001_1a4f9c737ea7b45b26bf102e4cca78fa6b) | Read LUX (illuminance) in integer format.
[`public uint16_t readRaw()`](#classopt3001_1a1075c6e018ed966216a20b70259f2e51) | Read the RAW result register.
[`public uint16_t readManufacturerId()`](#classopt3001_1a8630389bfc1db310e6be49de7a5dd26f) | Read the manufacturer ID.
[`public uint16_t readDeviceId()`](#classopt3001_1a60d38cd468fb7a4185c8936e36e7d647) | Read the device ID.
[`public uint16_t readConfigReg()`](#classopt3001_1af180bd23a7ffc5b4b91eb9a1e4289ae4) | Read the configuration register.
[`public uint16_t readLowLimitReg()`](#classopt3001_1a9eaf2bd7bf1bc9b51e2b19dc0b531fc3) | Read the low limit register.
[`public uint16_t readHighLimitReg()`](#classopt3001_1a54a270b99a78d11ca8348b8513319ba8) | Read the high limit register.
[`public uint16_t readRegister(uint8_t registerName)`](#classopt3001_1add688ed8c4fbb532dac6471cc426881e) | Read an arbitrary register.
[`public uint8_t interruptPin()`](#classopt3001_1adba204aa50a04137f8b8a0f2b4b319e4) | Read the state of the interrupt pin.

## Members


### <a name="classopt3001_1a8a7bc007fe1ed59e573f23c43af8a662"></a>`public void begin(uint16_t int_pin)`

Initialize the library.

Initializes the Wire interface and sets the configuration to b0b1100010000010000.


#### Parameters
* `int_pin` Optional pin to which the OPT3001 interrupt pin is connected. The default value is OPT_INTERRUPT_PIN which is defined as 8 to match the [Educational BoosterPack MKII](http://www.ti.com/tool/BOOSTXL-EDUMKII).





#### Returns
none

### <a name="classopt3001_1a7bc2c9ecab3be3b20b86173917f7f461"></a>`public float readLuxF()`

Read LUX (illuminance) in float format.

#### Returns
LUX in float format. Do not use this function on RAM limited microcontrollers. On RAM limited microcontrollers use [readLux()](#classopt3001_1a6f838314a274c6e8d9ff0f8eeb14e506) instead.

### <a name="classopt3001_1a6f838314a274c6e8d9ff0f8eeb14e506"></a>`public uint32_t readLux()`

Read LUX (illuminance) in integer format.

#### Returns
LUX in 32 bit format. Use this function on RAM limited microcontrollers. On microcontrollers with an FPU or not limited in RAM, [readLuxF()](#classopt3001_1a7bc2c9ecab3be3b20b86173917f7f461) can be used instead.

### <a name="classopt3001_1a4f9c737ea7b45b26bf102e4cca78fa6b"></a>`public uint32_t readResult()`

Read LUX (illuminance) in integer format.

This function is the same as [readLux](#readLux).


#### Returns
LUX in 32 bit format. Use this function on RAM limited microcontrollers. On microcontrollers with an FPU or not limited in RAM, [readLuxF()](#classopt3001_1a7bc2c9ecab3be3b20b86173917f7f461) can be used instead.

### <a name="classopt3001_1a1075c6e018ed966216a20b70259f2e51"></a>`public uint16_t readRaw()`

Read the RAW result register.

Please see the OPT3001 [datasheet](http://www.ti.com/lit/ds/symlink/opt3001.pdf) for details on how to interpret the value.


#### Returns
RAW result register.

### <a name="classopt3001_1a8630389bfc1db310e6be49de7a5dd26f"></a>`public uint16_t readManufacturerId()`

Read the manufacturer ID.

The manufacturer ID reads 0x5449. In ASCII code, this register reads TI. This function can be used to test the OPT3001 as it should always return 0x5449.


#### Returns
manufacturer ID.

### <a name="classopt3001_1a60d38cd468fb7a4185c8936e36e7d647"></a>`public uint16_t readDeviceId()`

Read the device ID.

The device ID reads 0x3001. This function can be used to test the OPT3001 as it should always return 0x3001.


#### Returns
device ID.

### <a name="classopt3001_1af180bd23a7ffc5b4b91eb9a1e4289ae4"></a>`public uint16_t readConfigReg()`

Read the configuration register.

Please see the OPT3001 [datasheet](http://www.ti.com/lit/ds/symlink/opt3001.pdf) for details on how to interpret the value.


#### Returns
device ID.

### <a name="classopt3001_1a9eaf2bd7bf1bc9b51e2b19dc0b531fc3"></a>`public uint16_t readLowLimitReg()`

Read the low limit register.

Please see the OPT3001 [datasheet](http://www.ti.com/lit/ds/symlink/opt3001.pdf) for details on how to interpret the value.


#### Returns
low limit register content.

### <a name="classopt3001_1a54a270b99a78d11ca8348b8513319ba8"></a>`public uint16_t readHighLimitReg()`

Read the high limit register.

Please see the OPT3001 [datasheet](http://www.ti.com/lit/ds/symlink/opt3001.pdf) for details on how to interpret the value.


#### Returns
high limit register content.

### <a name="classopt3001_1add688ed8c4fbb532dac6471cc426881e"></a>`public uint16_t readRegister(uint8_t registerName)`

Read an arbitrary register.

Please see the OPT3001 [datasheet](http://www.ti.com/lit/ds/symlink/opt3001.pdf) for available registers.


#### Returns
low limit register content.

### <a name="classopt3001_1adba204aa50a04137f8b8a0f2b4b319e4"></a>`public uint8_t interruptPin()`

Read the state of the interrupt pin.

#### Returns
low limit register content.


