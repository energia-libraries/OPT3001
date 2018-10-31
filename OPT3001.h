/*
  OPT3001.h
  Created by Adrian Fernandez, Dec 2013
  Modified by Dung Dang, Dec 2013
  Released into the public domain.
*/

#ifndef opt3001_h
#define opt3001_h
#define opt3001_h

/**
 * @file OPT3001.h
 * @author Adrian Fernandez
 * @author Dung Dang
 * @date Dex 2013
 */

#include <Energia.h>
#include <Wire.h>

#define OPT_INTERRUPT_PIN 8  // Configuration based on Educational BoosterPack MK II
class opt3001
{
  private:
	uint16_t _int_pin;
	int ipow(int base, int exp);
  public:
	/**
	 * @brief Initialize the library.
	 *
	 * Initializes the Wire interface and sets the configuration to b0b1100010000010000.
	 *
	 * @param int_pin Optional pin to which the OPT3001 interrupt pin is connected.
     * The default value is OPT_INTERRUPT_PIN which is defined as 8 to match the [Educational BoosterPack MKII](http://www.ti.com/tool/BOOSTXL-EDUMKII).
	 *
	 * @return none
	 */
	void begin(uint16_t int_pin=OPT_INTERRUPT_PIN);
	/**
	 * @brief Read LUX (illuminance) in float format.
	 *
	 * @return LUX in float format. Do not use this function on RAM limited microcontrollers.
	 * On RAM limited microcontrollers use readLux() instead.
	 */
	float readLuxF();
	/**
	 * @brief Read LUX (illuminance) in integer format.
	 *
	 * @return LUX in 32 bit format. Use this function on RAM limited microcontrollers.
	 * On microcontrollers with an FPU or not limited in RAM, readLuxF() can be used instead.
	 */
	uint32_t readLux();
	/**
	 * @brief Read LUX (illuminance) in integer format.
	 *
	 * This function is the same as [readLux](#readLux).
	 *
	 * @return LUX in 32 bit format. Use this function on RAM limited microcontrollers.
	 * On microcontrollers with an FPU or not limited in RAM, readLuxF() can be used instead.
	 */
	uint32_t readResult();
	/**
	 * @brief Read the RAW result register.
	 *
	 * Please see the OPT3001 <a href="http://www.ti.com/lit/ds/symlink/opt3001.pdf">datasheet</a> for details on how to interpret the value.
	 *
	 * @return RAW result register.
	 */
	uint16_t readRaw();
	/**
	 * @brief Read the manufacturer ID.
	 *
	 * The manufacturer ID reads 0x5449. In ASCII code, this register reads TI.
	 * This function can be used to test the OPT3001 as it should always return 0x5449.
	 *
	 * @return manufacturer ID.
	 */
	uint16_t readManufacturerId();
	/**
	 * @brief Read the device ID.
	 *
	 * The device ID reads 0x3001.
	 * This function can be used to test the OPT3001 as it should always return 0x3001.
	 *
	 * @return device ID.
	 */
	uint16_t readDeviceId();
	/**
	 * @brief Read the configuration register.
	 *
	 * Please see the OPT3001 <a href="http://www.ti.com/lit/ds/symlink/opt3001.pdf">datasheet</a> for details on how to interpret the value.
	 *
	 * @return device ID.
	 */
	uint16_t readConfigReg();
	/**
	 * @brief Read the low limit register.
	 *
	 * Please see the OPT3001 <a href="http://www.ti.com/lit/ds/symlink/opt3001.pdf">datasheet</a> for details on how to interpret the value.
	 *
	 * @return low limit register content.
	 */
	uint16_t readLowLimitReg();
	/**
	 * @brief Read the high limit register.
	 *
	 * Please see the OPT3001 <a href="http://www.ti.com/lit/ds/symlink/opt3001.pdf">datasheet</a> for details on how to interpret the value.
	 *
	 * @return high limit register content.
	 */
	uint16_t readHighLimitReg();
	/**
	 * @brief Read an arbitrary register.
	 *
	 * Please see the OPT3001 <a href="http://www.ti.com/lit/ds/symlink/opt3001.pdf">datasheet</a> for available registers.
	 *
	 * @return low limit register content.
	 */
	uint16_t readRegister(uint8_t registerName);
	/**
	 * @brief Read the state of the interrupt pin.
	 *
	 * .
	 *
	 * @return low limit register content.
	 */
	uint8_t	 interruptPin();
  private:
  
};

#endif
