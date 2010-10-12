/**************************************************************************//**
 * @file
 * @brief CMSIS Cortex-M3 Peripheral Access Layer for EFM EFM32G200F32
 * @author Energy Micro AS
 * @version 1.1.1
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2010 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * This source code is the property of Energy Micro AS. The source and compiled
 * code may only be used on Energy Micro "EFM32" microcontrollers.
 *
 * This copyright notice may not be removed from the source code nor changed.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/

#ifndef __EFM32G200F32_H
#define __EFM32G200F32_H

/**************************************************************************//**
 * @defgroup EFM32G200F32 EFM32G200F32
 * @{
 *****************************************************************************/

/** Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers *******************************************/
  NonMaskableInt_IRQn   = -14,              /*!< 2 Non Maskable Interrupt                 */
  HardFault_IRQn        = -13,              /*!< 3 Cortex-M3 Hard Fault Interrupt         */
  MemoryManagement_IRQn = -12,              /*!< 4 Cortex-M3 Memory Management Interrupt  */
  BusFault_IRQn         = -11,              /*!< 5 Cortex-M3 Bus Fault Interrupt          */
  UsageFault_IRQn       = -10,              /*!< 6 Cortex-M3 Usage Fault Interrupt        */
  SVCall_IRQn           = -5,               /*!< 11 Cortex-M3 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,               /*!< 12 Cortex-M3 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,               /*!< 14 Cortex-M3 Pend SV Interrupt           */
  SysTick_IRQn          = -1,               /*!< 15 Cortex-M3 System Tick Interrupt       */

/******  EFM32G Peripheral Interrupt Numbers **********************************************/
  DMA_IRQn              = 0,  /*!< DMA Interrupt */
  GPIO_EVEN_IRQn        = 1,  /*!< GPIO_EVEN Interrupt */
  TIMER0_IRQn           = 2,  /*!< TIMER0 Interrupt */
  USART0_RX_IRQn        = 3,  /*!< USART0_RX Interrupt */
  USART0_TX_IRQn        = 4,  /*!< USART0_TX Interrupt */
  ACMP0_IRQn            = 5,  /*!< ACMP0 Interrupt */
  ADC0_IRQn             = 6,  /*!< ADC0 Interrupt */
  DAC0_IRQn             = 7,  /*!< DAC0 Interrupt */
  I2C0_IRQn             = 8,  /*!< I2C0 Interrupt */
  GPIO_ODD_IRQn         = 9,  /*!< GPIO_ODD Interrupt */
  TIMER1_IRQn           = 10, /*!< TIMER1 Interrupt */
  USART1_RX_IRQn        = 12, /*!< USART1_RX Interrupt */
  USART1_TX_IRQn        = 13, /*!< USART1_TX Interrupt */
  LEUART0_IRQn          = 18, /*!< LEUART0 Interrupt */
  LETIMER0_IRQn         = 20, /*!< LETIMER0 Interrupt */
  PCNT0_IRQn            = 21, /*!< PCNT0 Interrupt */
  RTC_IRQn              = 24, /*!< RTC Interrupt */
  CMU_IRQn              = 25, /*!< CMU Interrupt */
  VCMP_IRQn             = 26, /*!< VCMP Interrupt */
  MSC_IRQn              = 28, /*!< MSC Interrupt */
} IRQn_Type;

/**************************************************************************//**
 * @defgroup EFM32G200F32_Core EFM32G200F32 Core
 * @{
 *****************************************************************************/

#define __MPU_PRESENT             1 /**< Presence of MPU  */
#define __NVIC_PRIO_BITS          3 /**< NVIC interrupt priority bits */
#define __Vendor_SysTickConfig    0 /**< Is 1 if different SysTick counter is used */

/**
 * @}
 */

/**************************************************************************//**
* @defgroup EFM32G200F32_Part EFM32G200F32 Part
* @{
******************************************************************************/

#if !defined(EFM32G200F32)
#define EFM32G200F32
#endif

/** Configure part number */
#define PART_NUMBER          "EFM32G200F32" /**< Part Number */

/** Memory Base addresses and limits */
#define EBI_MEM_BASE         ((uint32_t) 0x80000000UL)  /**< EBI base address  */
#define EBI_MEM_SIZE         ((uint32_t) 0x10000000UL)  /**< EBI available address space  */
#define EBI_MEM_END          ((uint32_t) 0x8FFFFFFFUL)  /**< EBI end address  */
#define EBI_MEM_BITS         ((uint32_t) 0x28UL)        /**< EBI used bits  */
#define AES_MEM_BASE         ((uint32_t) 0x400E0000UL)  /**< AES base address  */
#define AES_MEM_SIZE         ((uint32_t) 0x400UL)       /**< AES available address space  */
#define AES_MEM_END          ((uint32_t) 0x400E03FFUL)  /**< AES end address  */
#define AES_MEM_BITS         ((uint32_t) 0x10UL)        /**< AES used bits  */
#define PER_MEM_BASE         ((uint32_t) 0x40000000UL)  /**< PER base address  */
#define PER_MEM_SIZE         ((uint32_t) 0xE0000UL)     /**< PER available address space  */
#define PER_MEM_END          ((uint32_t) 0x400DFFFFUL)  /**< PER end address  */
#define PER_MEM_BITS         ((uint32_t) 0x20UL)        /**< PER used bits  */
#define RAM_MEM_BASE         ((uint32_t) 0x20000000UL)  /**< RAM base address  */
#define RAM_MEM_SIZE         ((uint32_t) 0x8000UL)      /**< RAM available address space  */
#define RAM_MEM_END          ((uint32_t) 0x20007FFFUL)  /**< RAM end address  */
#define RAM_MEM_BITS         ((uint32_t) 0x15UL)        /**< RAM used bits  */
#define RAM_CODE_MEM_BASE    ((uint32_t) 0x10000000UL)  /**< RAM_CODE base address  */
#define RAM_CODE_MEM_SIZE    ((uint32_t) 0x4000UL)      /**< RAM_CODE available address space  */
#define RAM_CODE_MEM_END     ((uint32_t) 0x10003FFFUL)  /**< RAM_CODE end address  */
#define RAM_CODE_MEM_BITS    ((uint32_t) 0x14UL)        /**< RAM_CODE used bits  */
#define FLASH_MEM_BASE       ((uint32_t) 0x0UL)         /**< FLASH base address  */
#define FLASH_MEM_SIZE       ((uint32_t) 0x10000000UL)  /**< FLASH available address space  */
#define FLASH_MEM_END        ((uint32_t) 0xFFFFFFFUL)   /**< FLASH end address  */
#define FLASH_MEM_BITS       ((uint32_t) 0x28UL)        /**< FLASH used bits  */

/** Bit banding area */
#define BITBAND_PER_BASE     ((uint32_t) 0x42000000UL) /**< Peripheral Address Space bit-band area */
#define BITBAND_RAM_BASE     ((uint32_t) 0x22000000UL) /**< SRAM Address Space bit-band area */

/** Flash and SRAM limits for EFM32G200F32 */
#define FLASH_SIZE           0x00008000UL /**< Available flash memory */
#define SRAM_SIZE            0x00002000UL /**< Available sram memory */
#define __CM3_REV            0x200        /**< Cortex-M3 Core revision r2p0 */
#define DPI_CHAN_COUNT       8            /**< Number of DPI channels */
#define DMA_CHAN_COUNT       8            /**< Number of DMA channels */
/* Part number capabilities */
#define TIMER_PRESENT
#define TIMER_COUNT          2
#define TIMER_PARAM_DTI(i)                   ((i) == 0 ? 1 : (i) == 1 ? 0 : (i) == 2 ? 0 :  0)
#define TIMER_PARAM_CCNUM(i)                 ((i) == 0 ? 3 : (i) == 1 ? 3 : (i) == 2 ? 3 :  0)
#define USART_PRESENT
#define USART_COUNT    2
#define USART_PARAM_SC_AVAILABLE(i)          ((i) == 0 ? 1 : (i) == 1 ? 1 : (i) == 2 ? 1 :  0)
#define USART_PARAM_IRDA_AVAILABLE(i)        ((i) == 0 ? 1 : (i) == 1 ? 0 : (i) == 2 ? 0 :  0)
#define USART_PARAM_FULL_DATABIT_RANGE(i)    ((i) == 0 ? 1 : (i) == 1 ? 1 : (i) == 2 ? 1 :  0)
#define USART_PARAM_SYNC_AVAILABLE(i)        ((i) == 0 ? 1 : (i) == 1 ? 1 : (i) == 2 ? 1 :  0)
#define LEUART_PRESENT
#define LEUART_COUNT       1
#define LETIMER_PRESENT
#define LETIMER_COUNT      1
#define PCNT_PRESENT
#define PCNT_COUNT         1
#define PCNT_PARAM_PCNT_WIDTH(i)    ((i) == 0 ? 16 : (i) == 1 ? 8 : (i) == 2 ? 8 :  0)
#define I2C_PRESENT
#define I2C_COUNT          1
#define ADC_PRESENT
#define ADC_COUNT          1
#define ADC_PARAM_RES(i)    ((i) == 0 ? 12 :  0)
#define DAC_PRESENT
#define DAC_COUNT          1
#define DAC_PARAM_RES(i)    ((i) == 0 ? 12 :  0)
#define ACMP_PRESENT
#define ACMP_COUNT         2
#define CM3_PRESENT
#define CM3_COUNT          1
#define CM3_FREE_PRESENT
#define CM3_FREE_COUNT     1
#define BUSMATRIX_PRESENT
#define BUSMATRIX_COUNT    1
#define DMEM_PRESENT
#define DMEM_COUNT         1
#define AHB2APB_PRESENT
#define AHB2APB_COUNT      1
#define LE_PRESENT
#define LE_COUNT           1
#define MSC_PRESENT
#define MSC_COUNT          1
#define EMU_PRESENT
#define EMU_COUNT          1
#define RMU_PRESENT
#define RMU_COUNT          1
#define CMU_PRESENT
#define CMU_COUNT          1
#define GPIO_PRESENT
#define GPIO_COUNT         1
#define PRS_PRESENT
#define PRS_COUNT          1
#define DMA_PRESENT
#define DMA_COUNT          1
#define VCMP_PRESENT
#define VCMP_COUNT         1
#define RTC_PRESENT
#define RTC_COUNT          1
#define HFXTAL_PRESENT
#define HFXTAL_COUNT       1
#define LFXTAL_PRESENT
#define LFXTAL_COUNT       1
#define WDOG_PRESENT
#define WDOG_COUNT         1
#define DBG_PRESENT
#define DBG_COUNT          1
#define TMODE_PRESENT
#define TMODE_COUNT        1
#define SCAN_PRESENT
#define SCAN_COUNT         1

/**
 * @}
 */

/* Include CMSIS core functionality */
#include "core_cm3.h"
#include "system_efm32.h"
#include <stdint.h>

/**************************************************************************//**
 * @defgroup EFM32G200F32_Peripheral_TypeDefs EFM32G200F32 Peripheral TypeDefs
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @addtogroup EFM32G200F32_MSC
 * @{
 * @brief MSC_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Memory System Control Register  */
  __IO uint32_t READCTRL;     /**< Read Control Register  */
  __IO uint32_t WRITECTRL;    /**< Write Control Register  */
  __O uint32_t  WRITECMD;     /**< Write Command Register  */
  __IO uint32_t ADDRB;        /**< Page Erase/Write Address Buffer  */

  uint32_t      RESERVED0[1]; /**< Reserved for future use **/
  __IO uint32_t WDATA;        /**< Write Data Register  */
  __I uint32_t  STATUS;       /**< Status Register  */

  uint32_t      RESERVED1[3]; /**< Reserved for future use **/
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */
} MSC_TypeDef;                /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_EMU
 * @{
 * @brief EMU_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __IO uint32_t MEMCTRL;      /**< Memory Control Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */

  uint32_t      RESERVED0[6]; /**< Reserved for future use **/
  __IO uint32_t AUXCTRL;      /**< Auxiliary Control Register  */
} EMU_TypeDef;                /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_RMU
 * @{
 * @brief RMU_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  RSTCAUSE; /**< Reset Cause Register  */
  __O uint32_t  CMD;      /**< Command Register  */
} RMU_TypeDef;            /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_CMU
 * @{
 * @brief CMU_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< CMU Control Register  */
  __IO uint32_t HFCORECLKDIV; /**< High Frequency Core Clock Division Register  */
  __IO uint32_t HFPERCLKDIV;  /**< High Frequency Peripheral Clock Division Register  */
  __IO uint32_t HFRCOCTRL;    /**< HFRCO Control Register  */
  __IO uint32_t LFRCOCTRL;    /**< LFRCO Control Register  */
  __IO uint32_t AUXHFRCOCTRL; /**< AUXHFRCO Control Register  */
  __IO uint32_t CALCTRL;      /**< Calibration Control Register  */
  __IO uint32_t CALCNT;       /**< Calibration Counter Register  */
  __O uint32_t  OSCENCMD;     /**< Oscillator Enable/Disable Command Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __IO uint32_t LFCLKSEL;     /**< Low Frequency Clock Select Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t HFCORECLKEN0; /**< High Frequency Core Clock Enable Register 0  */
  __IO uint32_t HFPERCLKEN0;  /**< High Frequency Peripheral Clock Enable Register 0  */
  uint32_t      RESERVED0[2]; /**< Reserved for future use **/
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */
  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __IO uint32_t LFACLKEN0;    /**< Low Frequency A Clock Enable Register 0  */
  uint32_t      RESERVED1[1]; /**< Reserved for future use **/
  __IO uint32_t LFBCLKEN0;    /**< Low Frequency B Clock Enable Register 0  */
  uint32_t      RESERVED2[1]; /**< Reserved for future use **/
  __IO uint32_t LFAPRESC0;    /**< Low Frequency A Prescaler Register 0  */
  uint32_t      RESERVED3[1]; /**< Reserved for future use **/
  __IO uint32_t LFBPRESC0;    /**< Low Frequency B Prescaler Register 0  */
  uint32_t      RESERVED4[1]; /**< Reserved for future use **/
  __IO uint32_t PCNTCTRL;     /**< PCNT Control Register  */

  uint32_t      RESERVED5[1]; /**< Reserved for future use **/
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
  __IO uint32_t LOCK;         /**< Configuration Lock Register  */
} CMU_TypeDef;                /** @} */

/**************************************************************************//**
 * @brief GPIO_P
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Port Control Register  */
  __IO uint32_t MODEL;    /**< Port Pin Mode Low Register  */
  __IO uint32_t MODEH;    /**< Port Pin Mode High Register  */
  __IO uint32_t DOUT;     /**< Port Data Out Register  */
  __O uint32_t  DOUTSET;  /**< Port Data Out Set Register  */
  __O uint32_t  DOUTCLR;  /**< Port Data Out Clear Register  */
  __O uint32_t  DOUTTGL;  /**< Port Data Out Toggle Register  */
  __I uint32_t  DIN;      /**< Port Data In Register  */
  __IO uint32_t PINLOCKN; /**< Port Unlocked Pins Register  */
} GPIO_P_TypeDef;

/**************************************************************************//**
 * @addtogroup EFM32G200F32_GPIO
 * @{
 * @brief GPIO_TypeDef
 *****************************************************************************/
typedef struct
{
  GPIO_P_TypeDef P[6];          /**< Port configuration bits */

  uint32_t       RESERVED0[10]; /**< Reserved for future use **/
  __IO uint32_t  EXTIPSELL;     /**< External Interrupt Port Select Low Register  */
  __IO uint32_t  EXTIPSELH;     /**< External Interrupt Port Select High Register  */
  __IO uint32_t  EXTIRISE;      /**< External Interrupt Rising Edge Trigger Register  */
  __IO uint32_t  EXTIFALL;      /**< External Interrupt Falling Edge Trigger Register  */
  __IO uint32_t  IEN;           /**< Interrupt Enable Register  */
  __I uint32_t   IF;            /**< Interrupt Flag Register  */
  __O uint32_t   IFS;           /**< Interrupt Flag Set Register  */
  __O uint32_t   IFC;           /**< Interrupt Flag Clear Register  */

  __IO uint32_t  ROUTE;         /**< I/O Routing Register  */
  __IO uint32_t  INSENSE;       /**< Input Sense Register  */
  __IO uint32_t  LOCK;          /**< Configuration Lock Register  */
} GPIO_TypeDef;                 /** @} */

/**************************************************************************//**
 * @brief PRS_CH
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< Channel Control Register  */
} PRS_CH_TypeDef;

/**************************************************************************//**
 * @addtogroup EFM32G200F32_PRS
 * @{
 * @brief PRS_TypeDef
 *****************************************************************************/
typedef struct
{
  __O uint32_t   SWPULSE;      /**< Software Pulse Register  */
  __IO uint32_t  SWLEVEL;      /**< Software Level Register  */

  uint32_t       RESERVED0[2]; /**< Reserved registers */

  PRS_CH_TypeDef CH[8];        /**< Channel registers */
} PRS_TypeDef;                 /** @} */

/**************************************************************************//**
 * @brief DMA_CH
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< Channel Control Register  */
} DMA_CH_TypeDef;

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DMA
 * @{
 * @brief DMA_TypeDef
 *****************************************************************************/
typedef struct
{
  __I uint32_t   STATUS;          /**< DMA Status Registers  */
  __IO uint32_t  CONFIG;          /**< DMA Configuration Register  */
  __IO uint32_t  CTRLBASE;        /**< Channel Control Data Base Pointer Register  */
  __I uint32_t   ALTCTRLBASE;     /**< Channel Alternate Control Data Base Pointer Register  */
  __I uint32_t   WAITSTATUS;      /**< Channel Wait on Request Status Register  */
  __O uint32_t   CHSWREQ;         /**< Channel Software Request Register  */
  __O uint32_t   CHUSEBURSTS;     /**< Channel Useburst Set Register  */
  __O uint32_t   CHUSEBURSTC;     /**< Channel Useburst Clear Register  */
  __O uint32_t   CHREQMASKS;      /**< Channel Request Mask Set Register  */
  __O uint32_t   CHREQMASKC;      /**< Channel Request Mask Clear Register  */
  __O uint32_t   CHENS;           /**< Channel Enable Set Register  */
  __O uint32_t   CHENC;           /**< Channel Enable Clear Register  */
  __O uint32_t   CHALTS;          /**< Channel Alternate Set Register  */
  __O uint32_t   CHALTC;          /**< Channel Alternate Clear Register  */
  __O uint32_t   CHPRIS;          /**< Channel Priority Set Register  */
  __O uint32_t   CHPRIC;          /**< Channel Priority Clear Register  */
  uint32_t       RESERVED0[3];    /**< Reserved for future use **/
  __IO uint32_t  ERRORC;          /**< Bus Error Clear Register  */

  uint32_t       RESERVED1[1004]; /**< Reserved for future use **/
  __I uint32_t   IF;              /**< Interrupt Flag Register  */
  __O uint32_t   IFS;             /**< Interrupt Flag Set Register  */
  __O uint32_t   IFC;             /**< Interrupt Flag Clear Register  */
  __IO uint32_t  IEN;             /**< Interrupt Enable register  */

  uint32_t       RESERVED2[60];   /**< Reserved registers */

  DMA_CH_TypeDef CH[8];           /**< Channel registers */
} DMA_TypeDef;                    /** @} */

/**************************************************************************//**
 * @brief TIMER_CC
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL; /**< CC Channel Control Register  */
  __IO uint32_t CCV;  /**< CC Channel Value Register  */
  __I uint32_t  CCVP; /**< CC Channel Value Peek Register  */
  __IO uint32_t CCVB; /**< CC Channel Buffer Register  */
} TIMER_CC_TypeDef;

/**************************************************************************//**
 * @addtogroup EFM32G200F32_TIMER
 * @{
 * @brief TIMER_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t    CTRL;         /**< Control Register  */
  __O uint32_t     CMD;          /**< Command Register  */
  __I uint32_t     STATUS;       /**< Status Register  */
  __IO uint32_t    IEN;          /**< Interrupt Enable Register  */
  __I uint32_t     IF;           /**< Interrupt Flag Register  */
  __O uint32_t     IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t     IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t    TOP;          /**< Counter Top Value Register  */
  __IO uint32_t    TOPB;         /**< Counter Top Value Buffer Register  */
  __IO uint32_t    CNT;          /**< Counter Value Register  */
  __IO uint32_t    ROUTE;        /**< I/O Routing Register  */

  uint32_t         RESERVED0[1]; /**< Reserved registers */

  TIMER_CC_TypeDef CC[3];        /**< Compare/Capture Channel */

  uint32_t         RESERVED1[4]; /**< Reserved for future use **/
  __IO uint32_t    DTCTRL;       /**< DTI Control Register  */
  __IO uint32_t    DTTIME;       /**< DTI Time Control Register  */
  __IO uint32_t    DTFC;         /**< DTI Fault Configuration Register  */
  __IO uint32_t    DTOGEN;       /**< DTI Output Generation Enable Register  */
  __IO uint32_t    DTFAULT;      /**< DTI Fault Register  */
  __O uint32_t     DTFAULTC;     /**< DTI Fault Clear Register  */
  __IO uint32_t    DTLOCK;       /**< DTI Configuration Lock Register  */
} TIMER_TypeDef;                 /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_USART
 * @{
 * @brief USART_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;       /**< Control Register  */
  __IO uint32_t FRAME;      /**< USART Frame Format Register  */
  __IO uint32_t TRIGCTRL;   /**< USART Trigger Control register  */
  __O uint32_t  CMD;        /**< Command Register  */
  __I uint32_t  STATUS;     /**< USART Status Register  */
  __IO uint32_t CLKDIV;     /**< Clock Control Register  */
  __I uint32_t  RXDATAX;    /**< RX Buffer Data Extended Register  */
  __I uint32_t  RXDATA;     /**< RX Buffer Data Register  */
  __I uint32_t  RXDOUBLEX;  /**< RX Buffer Double Data Extended Register  */
  __I uint32_t  RXDOUBLE;   /**< RX FIFO Double Data Register  */
  __I uint32_t  RXDATAXP;   /**< RX Buffer Data Extended Peek Register  */
  __I uint32_t  RXDOUBLEXP; /**< RX Buffer Double Data Extended Peek Register  */
  __O uint32_t  TXDATAX;    /**< TX Buffer Data Extended Register  */
  __O uint32_t  TXDATA;     /**< TX Buffer Data Register  */
  __O uint32_t  TXDOUBLEX;  /**< TX Buffer Double Data Extended Register  */
  __O uint32_t  TXDOUBLE;   /**< TX Buffer Double Data Register  */
  __I uint32_t  IF;         /**< Interrupt Flag Register  */
  __O uint32_t  IFS;        /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;        /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;        /**< Interrupt Enable Register  */
  __IO uint32_t IRCTRL;     /**< IrDA Control Register  */
  __IO uint32_t ROUTE;      /**< I/O Routing Register  */
} USART_TypeDef;            /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_LEUART
 * @{
 * @brief LEUART_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __IO uint32_t CLKDIV;       /**< Clock Control Register  */
  __IO uint32_t STARTFRAME;   /**< Start Frame Register  */
  __IO uint32_t SIGFRAME;     /**< Signal Frame Register  */
  __I uint32_t  RXDATAX;      /**< Receive Buffer Data Extended Register  */
  __I uint32_t  RXDATA;       /**< Receive Buffer Data Register  */
  __I uint32_t  RXDATAXP;     /**< Receive Buffer Data Extended Peek Register  */
  __O uint32_t  TXDATAX;      /**< Transmit Buffer Data Extended Register  */
  __O uint32_t  TXDATA;       /**< Transmit Buffer Data Register  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */
  __IO uint32_t PULSECTRL;    /**< Pulse Control Register  */

  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */

  uint32_t      RESERVED0[3]; /**< Reserved for future use **/
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
} LEUART_TypeDef;             /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_LETIMER
 * @{
 * @brief LETIMER_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;         /**< Control Register  */
  __O uint32_t  CMD;          /**< Command Register  */
  __I uint32_t  STATUS;       /**< Status Register  */
  __I uint32_t  CNT;          /**< Counter Value Register  */
  __IO uint32_t COMP0;        /**< Compare Value Register 0  */
  __IO uint32_t COMP1;        /**< Compare Value Register 1  */
  __IO uint32_t REP0;         /**< Repeat Counter Register 0  */
  __IO uint32_t REP1;         /**< Repeat Counter Register 1  */
  __I uint32_t  IF;           /**< Interrupt Flag Register  */
  __O uint32_t  IFS;          /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;          /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;          /**< Interrupt Enable Register  */

  __IO uint32_t FREEZE;       /**< Freeze Register  */
  __I uint32_t  SYNCBUSY;     /**< Synchronization Busy Register  */

  uint32_t      RESERVED0[2]; /**< Reserved for future use **/
  __IO uint32_t ROUTE;        /**< I/O Routing Register  */
} LETIMER_TypeDef;            /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_PCNT
 * @{
 * @brief PCNT_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __O uint32_t  CMD;      /**< Command Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __I uint32_t  CNT;      /**< Counter Value Register  */
  __I uint32_t  TOP;      /**< Top Value Register  */
  __IO uint32_t TOPB;     /**< Top Value Buffer Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __IO uint32_t ROUTE;    /**< I/O Routing Register  */

  __IO uint32_t FREEZE;   /**< Freeze Register  */
  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} PCNT_TypeDef;           /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_I2C
 * @{
 * @brief I2C_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;      /**< Control Register  */
  __O uint32_t  CMD;       /**< Command Register  */
  __I uint32_t  STATE;     /**< State Register  */
  __I uint32_t  STATUS;    /**< Status Register  */
  __IO uint32_t CLKDIV;    /**< Clock Division Register  */
  __IO uint32_t SADDR;     /**< Slave Address Register  */
  __IO uint32_t SADDRMASK; /**< Slave Address Mask Register  */
  __I uint32_t  RXDATA;    /**< Receive Buffer Data Register  */
  __I uint32_t  RXDATAP;   /**< Receive Buffer Data Peek Register  */
  __O uint32_t  TXDATA;    /**< Transmit Buffer Data Register  */
  __I uint32_t  IF;        /**< Interrupt Flag Register  */
  __O uint32_t  IFS;       /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;       /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;       /**< Interrupt Enable Register  */
  __IO uint32_t ROUTE;     /**< I/O Routing Register  */
} I2C_TypeDef;             /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ADC
 * @{
 * @brief ADC_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;        /**< Control Register  */
  __O uint32_t  CMD;         /**< Command Register  */
  __I uint32_t  STATUS;      /**< Status Register  */
  __IO uint32_t SINGLECTRL;  /**< Single Sample Control Register  */
  __IO uint32_t SCANCTRL;    /**< Scan Control Register  */
  __IO uint32_t IEN;         /**< Interrupt Enable Register  */
  __I uint32_t  IF;          /**< Interrupt Flag Register  */
  __O uint32_t  IFS;         /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;         /**< Interrupt Flag Clear Register  */
  __I uint32_t  SINGLEDATA;  /**< Single Conversion Result Data  */
  __I uint32_t  SCANDATA;    /**< Scan Conversion Result Data  */
  __I uint32_t  SINGLEDATAP; /**< Single Conversion Result Data Peek Register  */
  __I uint32_t  SCANDATAP;   /**< Scan Sequence Result Data Peek Register  */
  __IO uint32_t CAL;         /**< Calibration Register  */
  __IO uint32_t ROUTE;       /**< I/O Routing Register  */
  __IO uint32_t BIASPROG;    /**< Bias Programming Register  */
} ADC_TypeDef;               /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DAC
 * @{
 * @brief DAC_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t CH0CTRL;  /**< Channel 0 Control Register  */
  __IO uint32_t CH1CTRL;  /**< Channel 1 Control Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t CH0DATA;  /**< Channel 0 Data Register  */
  __IO uint32_t CH1DATA;  /**< Channel 1 Data Register  */
  __O uint32_t  COMBDATA; /**< Combined Data Register  */
  __IO uint32_t CAL;      /**< Calibration Register  */
  __IO uint32_t BIASPROG; /**< Bias Programming Register  */
} DAC_TypeDef;            /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ACMP
 * @{
 * @brief ACMP_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __IO uint32_t INPUTSEL; /**< Input Selection Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t ROUTE;    /**< I/O Routing Register  */
} ACMP_TypeDef;           /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_VCMP
 * @{
 * @brief VCMP_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __IO uint32_t INPUTSEL; /**< Input Selection Register  */
  __I uint32_t  STATUS;   /**< Status Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
} VCMP_TypeDef;           /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_RTC
 * @{
 * @brief RTC_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __I uint32_t  CNT;      /**< Counter Value Register  */
  __IO uint32_t COMP0;    /**< Compare Value Register 0  */
  __IO uint32_t COMP1;    /**< Compare Value Register 1  */
  __I uint32_t  IF;       /**< Interrupt Flag Register  */
  __O uint32_t  IFS;      /**< Interrupt Flag Set Register  */
  __O uint32_t  IFC;      /**< Interrupt Flag Clear Register  */
  __IO uint32_t IEN;      /**< Interrupt Enable Register  */

  __IO uint32_t FREEZE;   /**< Freeze Register  */
  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} RTC_TypeDef;            /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_WDOG
 * @{
 * @brief WDOG_TypeDef
 *****************************************************************************/
typedef struct
{
  __IO uint32_t CTRL;     /**< Control Register  */
  __O uint32_t  CMD;      /**< Command Register  */

  __I uint32_t  SYNCBUSY; /**< Synchronization Busy Register  */
} WDOG_TypeDef;           /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DEVINFO
 * @{
 * @brief Device Information Page - Part description and tuning
 *****************************************************************************/
typedef struct
{
  __I uint32_t CAL;          /**< Calibration temperature and checksum */
  __I uint32_t ADC0CAL0;     /**< ADC0 Calibration register 0 */
  __I uint32_t ADC0CAL1;     /**< ADC0 Calibration register 1 */
  __I uint32_t ADC0CAL2;     /**< ADC0 Calibration register 2 */
  uint32_t     RESERVED0[2]; /**< Reserved */
  __I uint32_t DACCAL0;      /**< DAC calibrartion register 0 */
  __I uint32_t DACCAL1;      /**< DAC calibrartion register 1 */
  __I uint32_t DACCAL2;      /**< DAC calibrartion register 2 */
  uint32_t     RESERVED1[2]; /**< Reserved */
  __I uint32_t HFRCOCAL0;    /**< HFRCO calibration register 0 */
  __I uint32_t HFRCOCAL1;    /**< HFRCO calibration register 1 */
  uint32_t     RESERVED2[3]; /**< Reserved */
  __I uint32_t UNIQUEL;      /**< Low 32 bits of device unique number */
  __I uint32_t UNIQUEH;      /**< High 32 bits of device unique number */
  __I uint32_t MSIZE;        /**< Flash and SRAM Memory size in KiloBytes */
  __I uint32_t PART;         /**< Part description */
} DEVINFO_TypeDef;           /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ROMTABLE
 * @{
 * @brief Chip revision
 *****************************************************************************/
typedef struct
{
  __I uint32_t PID4; /**< JEP_106_BANK */
  __I uint32_t PID5; /**< Unused */
  __I uint32_t PID6; /**< Unused */
  __I uint32_t PID7; /**< Unused */
  __I uint32_t PID0; /**< Chip family LSB, chip major revision */
  __I uint32_t PID1; /**< JEP_106_NO, Chip family MSB */
  __I uint32_t PID2; /**< Chip minor rev MSB, JEP_106_PRESENT, JEP_106_NO */
  __I uint32_t PID3; /**< Chip minor rev LSB */
  __I uint32_t CID0; /**< Unused */
} ROMTABLE_TypeDef;  /** @} */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_CALIBRATE
 * @{
 * @brief Calibration setup
 *****************************************************************************/
#define CALIBRATE_MAX_REGISTERS    50 /**< Max number of address/value pairs for calibration */

typedef struct
{
  __I uint32_t ADDRESS; /**< Address of calibration register */
  __I uint32_t VALUE;   /**< Default value for calibration register */
} CALIBRATE_TypeDef;    /** @} */

/**************************************************************************//**
 * @defgroup EFM32G200F32_Peripheral_Base EFM32G200F32 Peripheral Base Addresses
 * @{
 *****************************************************************************/

#define MSC_BASE          (0x400C0000)   /**< MSC base address  */
#define EMU_BASE          (0x400C6000)   /**< EMU base address  */
#define RMU_BASE          (0x400CA000)   /**< RMU base address  */
#define CMU_BASE          (0x400C8000)   /**< CMU base address  */
#define GPIO_BASE         (0x40006000)   /**< GPIO base address  */
#define PRS_BASE          (0x400CC000)   /**< PRS base address  */
#define DMA_BASE          (0x400C2000)   /**< DMA base address  */
#define TIMER0_BASE       (0x40010000)   /**< TIMER0 base address  */
#define TIMER1_BASE       (0x40010400)   /**< TIMER1 base address  */
#define USART0_BASE       (0x4000C000)   /**< USART0 base address  */
#define USART1_BASE       (0x4000C400)   /**< USART1 base address  */
#define LEUART0_BASE      (0x40084000)   /**< LEUART0 base address  */
#define LETIMER0_BASE     (0x40082000)   /**< LETIMER0 base address  */
#define PCNT0_BASE        (0x40086000)   /**< PCNT0 base address  */
#define I2C0_BASE         (0x4000A000)   /**< I2C0 base address  */
#define ADC0_BASE         (0x40002000)   /**< ADC0 base address  */
#define DAC0_BASE         (0x40004000)   /**< DAC0 base address  */
#define ACMP0_BASE        (0x40001000)   /**< ACMP0 base address  */
#define ACMP1_BASE        (0x40001400)   /**< ACMP1 base address  */
#define VCMP_BASE         (0x40000000)   /**< VCMP base address  */
#define RTC_BASE          (0x40080000)   /**< RTC base address  */
#define WDOG_BASE         (0x40088000)   /**< WDOG base address  */
#define CALIBRATE_BASE    (0x0FE08000UL) /**< CALIBRATE base address */
#define DEVINFO_BASE      (0x0FE081B0UL) /**< DEVINFO base address */
#define ROMTABLE_BASE     (0xE00FFFD0)   /**< ROMTABLE base address */
/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G200F32_Peripheral_Declaration  EFM32G200F32 Peripheral Declaration
 * @{
 * @brief Peripheral base addresses
 *****************************************************************************/

#define MSC          ((MSC_TypeDef *) MSC_BASE)             /**< MSC base pointer */
#define EMU          ((EMU_TypeDef *) EMU_BASE)             /**< EMU base pointer */
#define RMU          ((RMU_TypeDef *) RMU_BASE)             /**< RMU base pointer */
#define CMU          ((CMU_TypeDef *) CMU_BASE)             /**< CMU base pointer */
#define GPIO         ((GPIO_TypeDef *) GPIO_BASE)           /**< GPIO base pointer */
#define PRS          ((PRS_TypeDef *) PRS_BASE)             /**< PRS base pointer */
#define DMA          ((DMA_TypeDef *) DMA_BASE)             /**< DMA base pointer */
#define TIMER0       ((TIMER_TypeDef *) TIMER0_BASE)        /**< TIMER0 base pointer */
#define TIMER1       ((TIMER_TypeDef *) TIMER1_BASE)        /**< TIMER1 base pointer */
#define USART0       ((USART_TypeDef *) USART0_BASE)        /**< USART0 base pointer */
#define USART1       ((USART_TypeDef *) USART1_BASE)        /**< USART1 base pointer */
#define LEUART0      ((LEUART_TypeDef *) LEUART0_BASE)      /**< LEUART0 base pointer */
#define LETIMER0     ((LETIMER_TypeDef *) LETIMER0_BASE)    /**< LETIMER0 base pointer */
#define PCNT0        ((PCNT_TypeDef *) PCNT0_BASE)          /**< PCNT0 base pointer */
#define I2C0         ((I2C_TypeDef *) I2C0_BASE)            /**< I2C0 base pointer */
#define ADC0         ((ADC_TypeDef *) ADC0_BASE)            /**< ADC0 base pointer */
#define DAC0         ((DAC_TypeDef *) DAC0_BASE)            /**< DAC0 base pointer */
#define ACMP0        ((ACMP_TypeDef *) ACMP0_BASE)          /**< ACMP0 base pointer */
#define ACMP1        ((ACMP_TypeDef *) ACMP1_BASE)          /**< ACMP1 base pointer */
#define VCMP         ((VCMP_TypeDef *) VCMP_BASE)           /**< VCMP base pointer */
#define RTC          ((RTC_TypeDef *) RTC_BASE)             /**< RTC base pointer */
#define WDOG         ((WDOG_TypeDef *) WDOG_BASE)           /**< WDOG base pointer */
#define CALIBRATE    ((CALIBRATE_TypeDef *) CALIBRATE_BASE) /**< CALIBRATE base pointer */
#define DEVINFO      ((DEVINFO_TypeDef *) DEVINFO_BASE)     /**< DEVINFO base pointer */
#define ROMTABLE     ((ROMTABLE_TypeDef *) ROMTABLE_BASE)   /**< ROMTABLE base pointer */

/**
 * @}
 */

/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G200F32_BitFields EFM32G200F32 Bit Fields
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @addtogroup EFM32G200F32_PRS
 * @{
 * @brief PRS Signal names
 *****************************************************************************/

#define PRS_VCMP_OUT          ((1 << 16) + 0)  /**< PRS Voltage comparator output */
#define PRS_ACMP0_OUT         ((2 << 16) + 0)  /**< PRS Analog comparator output */
#define PRS_ACMP1_OUT         ((3 << 16) + 0)  /**< PRS Analog comparator output */
#define PRS_DAC0_CH0          ((6 << 16) + 0)  /**< PRS DAC ch0 conversion done */
#define PRS_DAC0_CH1          ((6 << 16) + 1)  /**< PRS DAC ch1 conversion done */
#define PRS_ADC0_SINGLE       ((8 << 16) + 0)  /**< PRS ADC single conversion done */
#define PRS_ADC0_SCAN         ((8 << 16) + 1)  /**< PRS ADC scan conversion done */
#define PRS_USART0_IRTX       ((16 << 16) + 0) /**< PRS USART 0 IRDA out */
#define PRS_USART0_TXC        ((16 << 16) + 1) /**< PRS USART 0 TX complete */
#define PRS_USART0_RXDATAV    ((16 << 16) + 2) /**< PRS USART 0 RX Data Valid */
#define PRS_USART1_IRTX       ((17 << 16) + 0) /**< PRS USART 1 IRDA out */
#define PRS_USART1_TXC        ((17 << 16) + 1) /**< PRS USART 1 TX complete */
#define PRS_USART1_RXDATAV    ((17 << 16) + 2) /**< PRS USART 1 RX Data Valid */
#define PRS_TIMER0_UF         ((28 << 16) + 0) /**< PRS Timer 0 Underflow */
#define PRS_TIMER0_OF         ((28 << 16) + 1) /**< PRS Timer 0 Overflow */
#define PRS_TIMER0_CC0        ((28 << 16) + 2) /**< PRS Timer 0 Compare/Capture 0 */
#define PRS_TIMER0_CC1        ((28 << 16) + 3) /**< PRS Timer 0 Compare/Capture 1 */
#define PRS_TIMER0_CC2        ((28 << 16) + 4) /**< PRS Timer 0 Compare/Capture 2 */
#define PRS_TIMER1_UF         ((29 << 16) + 0) /**< PRS Timer 1 Underflow */
#define PRS_TIMER1_OF         ((29 << 16) + 1) /**< PRS Timer 1 Overflow */
#define PRS_TIMER1_CC0        ((29 << 16) + 2) /**< PRS Timer 1 Compare/Capture 0 */
#define PRS_TIMER1_CC1        ((29 << 16) + 3) /**< PRS Timer 1 Compare/Capture 1 */
#define PRS_TIMER1_CC2        ((29 << 16) + 4) /**< PRS Timer 1 Compare/Capture 2 */
#define PRS_RTC_OF            ((40 << 16) + 0) /**< PRS RTC Overflow */
#define PRS_RTC_COMP0         ((40 << 16) + 1) /**< PRS RTC Compare 0 */
#define PRS_RTC_COMP1         ((40 << 16) + 2) /**< PRS RTC Compare 1 */
#define PRS_GPIO_PIN0         ((48 << 16) + 0) /**< PRS GPIO pin 0 */
#define PRS_GPIO_PIN1         ((48 << 16) + 1) /**< PRS GPIO pin 1 */
#define PRS_GPIO_PIN2         ((48 << 16) + 2) /**< PRS GPIO pin 2 */
#define PRS_GPIO_PIN3         ((48 << 16) + 3) /**< PRS GPIO pin 3 */
#define PRS_GPIO_PIN4         ((48 << 16) + 4) /**< PRS GPIO pin 4 */
#define PRS_GPIO_PIN5         ((48 << 16) + 5) /**< PRS GPIO pin 5 */
#define PRS_GPIO_PIN6         ((48 << 16) + 6) /**< PRS GPIO pin 6 */
#define PRS_GPIO_PIN7         ((48 << 16) + 7) /**< PRS GPIO pin 7 */
#define PRS_GPIO_PIN8         ((49 << 16) + 0) /**< PRS GPIO pin 8 */
#define PRS_GPIO_PIN9         ((49 << 16) + 1) /**< PRS GPIO pin 9 */
#define PRS_GPIO_PIN10        ((49 << 16) + 2) /**< PRS GPIO pin 10 */
#define PRS_GPIO_PIN11        ((49 << 16) + 3) /**< PRS GPIO pin 11 */
#define PRS_GPIO_PIN12        ((49 << 16) + 4) /**< PRS GPIO pin 12 */
#define PRS_GPIO_PIN13        ((49 << 16) + 5) /**< PRS GPIO pin 13 */
#define PRS_GPIO_PIN14        ((49 << 16) + 6) /**< PRS GPIO pin 14 */
#define PRS_GPIO_PIN15        ((49 << 16) + 7) /**< PRS GPIO pin 15 */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DMA EFM32G200F32 DMA
 * @{
 *****************************************************************************/
#define DMAREQ_ADC0_SINGLE        ((8 << 16) + 0)  /**< DMA channel select for ADC0_SINGLE */
#define DMAREQ_ADC0_SCAN          ((8 << 16) + 1)  /**< DMA channel select for ADC0_SCAN */
#define DMAREQ_DAC0_CH0           ((10 << 16) + 0) /**< DMA channel select for DAC0_CH0 */
#define DMAREQ_DAC0_CH1           ((10 << 16) + 1) /**< DMA channel select for DAC0_CH1 */
#define DMAREQ_USART0_RXDATAV     ((12 << 16) + 0) /**< DMA channel select for USART0_RXDATAV */
#define DMAREQ_USART0_TXBL        ((12 << 16) + 1) /**< DMA channel select for USART0_TXBL */
#define DMAREQ_USART0_TXEMPTY     ((12 << 16) + 2) /**< DMA channel select for USART0_TXEMPTY */
#define DMAREQ_USART1_RXDATAV     ((13 << 16) + 0) /**< DMA channel select for USART1_RXDATAV */
#define DMAREQ_USART1_TXBL        ((13 << 16) + 1) /**< DMA channel select for USART1_TXBL */
#define DMAREQ_USART1_TXEMPTY     ((13 << 16) + 2) /**< DMA channel select for USART1_TXEMPTY */
#define DMAREQ_USART2_RXDATAV     ((14 << 16) + 0) /**< DMA channel select for USART2_RXDATAV */
#define DMAREQ_USART2_TXBL        ((14 << 16) + 1) /**< DMA channel select for USART2_TXBL */
#define DMAREQ_USART2_TXEMPTY     ((14 << 16) + 2) /**< DMA channel select for USART2_TXEMPTY */
#define DMAREQ_LEUART0_RXDATAV    ((16 << 16) + 0) /**< DMA channel select for LEUART0_RXDATAV */
#define DMAREQ_LEUART0_TXBL       ((16 << 16) + 1) /**< DMA channel select for LEUART0_TXBL */
#define DMAREQ_LEUART0_TXEMPTY    ((16 << 16) + 2) /**< DMA channel select for LEUART0_TXEMPTY */
#define DMAREQ_LEUART1_RXDATAV    ((17 << 16) + 0) /**< DMA channel select for LEUART1_RXDATAV */
#define DMAREQ_LEUART1_TXBL       ((17 << 16) + 1) /**< DMA channel select for LEUART1_TXBL */
#define DMAREQ_LEUART1_TXEMPTY    ((17 << 16) + 2) /**< DMA channel select for LEUART1_TXEMPTY */
#define DMAREQ_I2C0_RXDATAV       ((20 << 16) + 0) /**< DMA channel select for I2C0_RXDATAV */
#define DMAREQ_I2C0_TXBL          ((20 << 16) + 1) /**< DMA channel select for I2C0_TXBL */
#define DMAREQ_TIMER0_UFOF        ((24 << 16) + 0) /**< DMA channel select for TIMER0_UFOF */
#define DMAREQ_TIMER0_CC0         ((24 << 16) + 1) /**< DMA channel select for TIMER0_CC0 */
#define DMAREQ_TIMER0_CC1         ((24 << 16) + 2) /**< DMA channel select for TIMER0_CC1 */
#define DMAREQ_TIMER0_CC2         ((24 << 16) + 3) /**< DMA channel select for TIMER0_CC2 */
#define DMAREQ_TIMER1_UFOF        ((25 << 16) + 0) /**< DMA channel select for TIMER1_UFOF */
#define DMAREQ_TIMER1_CC0         ((25 << 16) + 1) /**< DMA channel select for TIMER1_CC0 */
#define DMAREQ_TIMER1_CC1         ((25 << 16) + 2) /**< DMA channel select for TIMER1_CC1 */
#define DMAREQ_TIMER1_CC2         ((25 << 16) + 3) /**< DMA channel select for TIMER1_CC2 */
#define DMAREQ_TIMER2_UFOF        ((26 << 16) + 0) /**< DMA channel select for TIMER2_UFOF */
#define DMAREQ_TIMER2_CC0         ((26 << 16) + 1) /**< DMA channel select for TIMER2_CC0 */
#define DMAREQ_TIMER2_CC1         ((26 << 16) + 2) /**< DMA channel select for TIMER2_CC1 */
#define DMAREQ_TIMER2_CC2         ((26 << 16) + 3) /**< DMA channel select for TIMER2_CC2 */
#define DMAREQ_UART0_RXDATAV      ((44 << 16) + 0) /**< DMA channel select for UART0_RXDATAV */
#define DMAREQ_UART0_TXBL         ((44 << 16) + 1) /**< DMA channel select for UART0_TXBL */
#define DMAREQ_UART0_TXEMPTY      ((44 << 16) + 2) /**< DMA channel select for UART0_TXEMPTY */
#define DMAREQ_MSC_WDATA          ((48 << 16) + 0) /**< DMA channel select for MSC_WDATA */
#define DMAREQ_AES_DATAWR         ((49 << 16) + 0) /**< DMA channel select for AES_DATAWR */
#define DMAREQ_AES_XORDATAWR      ((49 << 16) + 1) /**< DMA channel select for AES_XORDATAWR */
#define DMAREQ_AES_DATARD         ((49 << 16) + 2) /**< DMA channel select for AES_DATARD */
#define DMAREQ_AES_KEYWR          ((49 << 16) + 3) /**< DMA channel select for AES_KEYWR */

/**************************************************************************//**
 * @brief DMA Control Block for PL230 controller
 * @note This block has strict alignment requirements,
 *       see PrimeCell PL230 Technical Reference Manual for details
 *****************************************************************************/
typedef struct
{
  __IO void     *SRCEND; /**< DMA Source Address End */
  __IO void     *DSTEND; /**< DMA Destination Address End */
  __IO uint32_t CTRL;    /**< DMA Control Register */
  __IO uint32_t USER;    /**< DMA Unused padding register */
} DMA_CONTROL_TypeDef;

/**************************************************************************//**
 * DMA Control CTRL Register defines
 *****************************************************************************/
#define _DMA_CTRL_DST_INC_MASK                         0xC0000000UL  /**< Data increment for destination, bit mask */
#define _DMA_CTRL_DST_INC_SHIFT                        30            /**< Data increment for destination, shift value */
#define _DMA_CTRL_DST_INC_BYTE                         0x00          /**< Byte/8-bit increment */
#define _DMA_CTRL_DST_INC_HALFWORD                     0x01          /**< Half word/16-bit increment */
#define _DMA_CTRL_DST_INC_WORD                         0x02          /**< Word/32-bit increment */
#define _DMA_CTRL_DST_INC_NONE                         0x03          /**< No increment */
#define DMA_CTRL_DST_INC_BYTE                          0x00000000UL  /**< Byte/8-bit increment */
#define DMA_CTRL_DST_INC_HALFWORD                      0x40000000UL  /**< Half word/16-bit increment */
#define DMA_CTRL_DST_INC_WORD                          0x80000000UL  /**< Word/32-bit increment */
#define DMA_CTRL_DST_INC_NONE                          0xC0000000UL  /**< No increment */
#define _DMA_CTRL_DST_SIZE_MASK                        0x30000000UL  /**< Data size for destination - MUST be the same as source, bit mask */
#define _DMA_CTRL_DST_SIZE_SHIFT                       28            /**< Data size for destination - MUST be the same as source, shift value */
#define _DMA_CTRL_DST_SIZE_BYTE                        0x00          /**< Byte/8-bit data size */
#define _DMA_CTRL_DST_SIZE_HALFWORD                    0x01          /**< Half word/16-bit data size */
#define _DMA_CTRL_DST_SIZE_WORD                        0x02          /**< Word/32-bit data size */
#define _DMA_CTRL_DST_SIZE_RSVD                        0x03          /**< Reserved */
#define DMA_CTRL_DST_SIZE_BYTE                         0x00000000UL  /**< Byte/8-bit data size */
#define DMA_CTRL_DST_SIZE_HALFWORD                     0x10000000UL  /**< Half word/16-bit data size */
#define DMA_CTRL_DST_SIZE_WORD                         0x20000000UL  /**< Word/32-bit data size */
#define DMA_CTRL_DST_SIZE_RSVD                         0x30000000UL  /**< Reserved - do not use */
#define _DMA_CTRL_SRC_INC_MASK                         0x0C000000UL  /**< Data increment for source, bit mask */
#define _DMA_CTRL_SRC_INC_SHIFT                        26            /**< Data increment for source, shift value */
#define _DMA_CTRL_SRC_INC_BYTE                         0x00          /**< Byte/8-bit increment */
#define _DMA_CTRL_SRC_INC_HALFWORD                     0x01          /**< Half word/16-bit increment */
#define _DMA_CTRL_SRC_INC_WORD                         0x02          /**< Word/32-bit increment */
#define _DMA_CTRL_SRC_INC_NONE                         0x03          /**< No increment */
#define DMA_CTRL_SRC_INC_BYTE                          0x00000000UL  /**< Byte/8-bit increment */
#define DMA_CTRL_SRC_INC_HALFWORD                      0x04000000UL  /**< Half word/16-bit increment */
#define DMA_CTRL_SRC_INC_WORD                          0x08000000UL  /**< Word/32-bit increment */
#define DMA_CTRL_SRC_INC_NONE                          0x0C000000UL  /**< No increment */
#define _DMA_CTRL_SRC_SIZE_MASK                        0x03000000UL  /**< Data size for source - MUST be the same as destination, bit mask */
#define _DMA_CTRL_SRC_SIZE_SHIFT                       24            /**< Data size for source - MUST be the same as destination, shift value */
#define _DMA_CTRL_SRC_SIZE_BYTE                        0x00          /**< Byte/8-bit data size */
#define _DMA_CTRL_SRC_SIZE_HALFWORD                    0x01          /**< Half word/16-bit data size */
#define _DMA_CTRL_SRC_SIZE_WORD                        0x02          /**< Word/32-bit data size */
#define _DMA_CTRL_SRC_SIZE_RSVD                        0x03          /**< Reserved */
#define DMA_CTRL_SRC_SIZE_BYTE                         0x00000000UL  /**< Byte/8-bit data size */
#define DMA_CTRL_SRC_SIZE_HALFWORD                     0x01000000UL  /**< Half word/16-bit data size */
#define DMA_CTRL_SRC_SIZE_WORD                         0x02000000UL  /**< Word/32-bit data size */
#define DMA_CTRL_SRC_SIZE_RSVD                         0x03000000UL  /**< Reserved - do not use */
#define _DMA_CTRL_DST_PROT_CTRL_MASK                   0x00E00000UL  /**< Protection flag for destination, bit mask */
#define _DMA_CTRL_DST_PROT_CTRL_SHIFT                  21            /**< Protection flag for destination, shift value */
#define _DMA_CTRL_SRC_PROT_CTRL_MASK                   0x001C0000UL  /**< Protection flag for source, bit mask */
#define _DMA_CTRL_SRC_PROT_CTRL_SHIFT                  18            /**< Protection flag for source, shift value */
#define _DMA_CTRL_PROT_NON_CACHEABLE                   0x00          /**< Protection bits to indicate non-cacheable */
#define _DMA_CTRL_PROT_CACHEABLE                       0x04          /**< Protection bits to indicate cacheable */
#define _DMA_CTRL_PROT_NON_BUFFERABLE                  0x00          /**< Protection bits to indicate non-bufferable */
#define _DMA_CTRL_PROT_BUFFERABLE                      0x02          /**< Protection bits to indicate bufferable */
#define _DMA_CTRL_PROT_NON_PRIVILEDGED                 0x00          /**< Protection bits to indicate non-priviledged access */
#define _DMA_CTRL_PROT_PRIVILEDGED                     0x01          /**< Protection bits to indicate priviledged access */
#define _DMA_CTRL_R_POWER_MASK                         0x0003C000UL  /**< DMA arbitration mask */
#define _DMA_CTRL_R_POWER_SHIFT                        14            /**< Number of DMA cycles before controller does new arbitration in 2^R */
#define _DMA_CTRL_R_POWER_1                            0x00          /**< Arbitrate after each transfer */
#define _DMA_CTRL_R_POWER_2                            0x01          /**< Arbitrate after every 2 transfers */
#define _DMA_CTRL_R_POWER_4                            0x02          /**< Arbitrate after every 4 transfers */
#define _DMA_CTRL_R_POWER_8                            0x03          /**< Arbitrate after every 8 transfers */
#define _DMA_CTRL_R_POWER_16                           0x04          /**< Arbitrate after every 16 transfers */
#define _DMA_CTRL_R_POWER_32                           0x05          /**< Arbitrate after every 32 transfers */
#define _DMA_CTRL_R_POWER_64                           0x06          /**< Arbitrate after every 64 transfers */
#define _DMA_CTRL_R_POWER_128                          0x07          /**< Arbitrate after every 128 transfers */
#define _DMA_CTRL_R_POWER_256                          0x08          /**< Arbitrate after every 256 transfers */
#define _DMA_CTRL_R_POWER_512                          0x09          /**< Arbitrate after every 512 transfers */
#define _DMA_CTRL_R_POWER_1024                         0x0a          /**< Arbitrate after every 1024 transfers */
#define DMA_CTRL_R_POWER_1                             0x00000000UL  /**< Arbitrate after each transfer */
#define DMA_CTRL_R_POWER_2                             0x00004000UL  /**< Arbitrate after every 2 transfers */
#define DMA_CTRL_R_POWER_4                             0x00008000UL  /**< Arbitrate after every 4 transfers */
#define DMA_CTRL_R_POWER_8                             0x0000c000UL  /**< Arbitrate after every 8 transfers */
#define DMA_CTRL_R_POWER_16                            0x00010000UL  /**< Arbitrate after every 16 transfers */
#define DMA_CTRL_R_POWER_32                            0x00014000UL  /**< Arbitrate after every 32 transfers */
#define DMA_CTRL_R_POWER_64                            0x00018000UL  /**< Arbitrate after every 64 transfers */
#define DMA_CTRL_R_POWER_128                           0x0001c000UL  /**< Arbitrate after every 128 transfers */
#define DMA_CTRL_R_POWER_256                           0x00020000UL  /**< Arbitrate after every 256 transfers */
#define DMA_CTRL_R_POWER_512                           0x00024000UL  /**< Arbitrate after every 512 transfers */
#define DMA_CTRL_R_POWER_1024                          0x00028000UL  /**< Arbitrate after every 1024 transfers */
#define _DMA_CTRL_N_MINUS_1_MASK                       0x00003FF0UL  /**< Number of DMA transfers minus 1, bit mask. See PL230 documentation */
#define _DMA_CTRL_N_MINUS_1_SHIFT                      4             /**< Number of DMA transfers minus 1, shift mask. See PL230 documentation */
#define _DMA_CTRL_NEXT_USEBURST_MASK                   0x00000008UL  /**< DMA useburst_set[C] is 1 when using scatter-gather DMA and using alternate data */
#define _DMA_CTRL_NEXT_USEBURST_SHIFT                  3             /**< DMA useburst shift */
#define _DMA_CTRL_CYCLE_CTRL_MASK                      0x00000007UL  /**< DMA Cycle control bit mask - basic/auto/ping-poing/scath-gath */
#define _DMA_CTRL_CYCLE_CTRL_SHIFT                     0             /**< DMA Cycle control bit shift */
#define _DMA_CTRL_CYCLE_CTRL_STOP                      0x00          /**< Stop */
#define _DMA_CTRL_CYCLE_CTRL_BASIC                     0x01          /**< Basic cycle type */
#define _DMA_CTRL_CYCLE_CTRL_AUTO                      0x02          /**< Auto cycle type */
#define _DMA_CTRL_CYCLE_CTRL_PINGPONG                  0x03          /**< PingPong cycle type */
#define _DMA_CTRL_CYCLE_CTRL_MEM_SCATTER_GATHER        0x04          /**< Memory scatter gather cycle type */
#define _DMA_CTRL_CYCLE_CTRL_MEM_SCATTER_GATHER_ALT    0x05          /**< Memory scatter gather using alternate structure  */
#define _DMA_CTRL_CYCLE_CTRL_PER_SCATTER_GATHER        0x06          /**< Peripheral scatter gather cycle type */
#define _DMA_CTRL_CYCLE_CTRL_PER_SCATTER_GATHER_ALT    0x07          /**< Peripheral scatter gather cycle type using alternate structure */
#define DMA_CTRL_CYCLE_CTRL_STOP                       0x00000000UL  /**< Stop */
#define DMA_CTRL_CYCLE_CTRL_BASIC                      0x00000001UL  /**< Basic cycle type */
#define DMA_CTRL_CYCLE_CTRL_AUTO                       0x00000002UL  /**< Auto cycle type */
#define DMA_CTRL_CYCLE_CTRL_PINGPONG                   0x00000003UL  /**< PingPong cycle type */
#define DMA_CTRL_CYCLE_CTRL_MEM_SCATTER_GATHER         0x000000004UL /**< Memory scatter gather cycle type */
#define DMA_CTRL_CYCLE_CTRL_MEM_SCATTER_GATHER_ALT     0x000000005UL /**< Memory scatter gather using alternate structure  */
#define DMA_CTRL_CYCLE_CTRL_PER_SCATTER_GATHER         0x000000006UL /**< Peripheral scatter gather cycle type */
#define DMA_CTRL_CYCLE_CTRL_PER_SCATTER_GATHER_ALT     0x000000007UL /**< Peripheral scatter gather cycle type using alternate structure */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_TIMER
 * @{
 *****************************************************************************/

/* Bit fields for TIMER CTRL */
#define _TIMER_CTRL_RESETVALUE                     0x00000000UL         /**< Default value for TIMER_CTRL */
#define _TIMER_CTRL_MASK                           0x0F030FFBUL         /**< Mask for TIMER_CTRL */
#define _TIMER_CTRL_MODE_SHIFT                     0                    /**< Shift value for TIMER_MODE */
#define _TIMER_CTRL_MODE_MASK                      0x3UL                /**< Bit mask for TIMER_MODE */
#define TIMER_CTRL_MODE_DEFAULT                    (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_MODE_UP                         (0x00000000UL << 0)  /**< Shifted mode UP for TIMER_CTRL */
#define TIMER_CTRL_MODE_DOWN                       (0x00000001UL << 0)  /**< Shifted mode DOWN for TIMER_CTRL */
#define TIMER_CTRL_MODE_UPDOWN                     (0x00000002UL << 0)  /**< Shifted mode UPDOWN for TIMER_CTRL */
#define TIMER_CTRL_MODE_QDEC                       (0x00000003UL << 0)  /**< Shifted mode QDEC for TIMER_CTRL */
#define _TIMER_CTRL_MODE_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_MODE_UP                        0x00000000UL         /**< Mode UP for TIMER_CTRL */
#define _TIMER_CTRL_MODE_DOWN                      0x00000001UL         /**< Mode DOWN for TIMER_CTRL */
#define _TIMER_CTRL_MODE_UPDOWN                    0x00000002UL         /**< Mode UPDOWN for TIMER_CTRL */
#define _TIMER_CTRL_MODE_QDEC                      0x00000003UL         /**< Mode QDEC for TIMER_CTRL */
#define TIMER_CTRL_SYNC                            (0x1UL << 3)         /**< Timer Start/Stop/Reload Synchronization */
#define _TIMER_CTRL_SYNC_SHIFT                     3                    /**< Shift value for TIMER_SYNC */
#define _TIMER_CTRL_SYNC_MASK                      0x8UL                /**< Bit mask for TIMER_SYNC */
#define TIMER_CTRL_SYNC_DEFAULT                    (0x00000000UL << 3)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_SYNC_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_OSMEN                           (0x1UL << 4)         /**< One-shot Mode Enable */
#define _TIMER_CTRL_OSMEN_SHIFT                    4                    /**< Shift value for TIMER_OSMEN */
#define _TIMER_CTRL_OSMEN_MASK                     0x10UL               /**< Bit mask for TIMER_OSMEN */
#define TIMER_CTRL_OSMEN_DEFAULT                   (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_OSMEN_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_QEM                             (0x1UL << 5)         /**< Quadrature Decoder Mode Selection */
#define _TIMER_CTRL_QEM_SHIFT                      5                    /**< Shift value for TIMER_QEM */
#define _TIMER_CTRL_QEM_MASK                       0x20UL               /**< Bit mask for TIMER_QEM */
#define TIMER_CTRL_QEM_DEFAULT                     (0x00000000UL << 5)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_QEM_X2                          (0x00000000UL << 5)  /**< Shifted mode X2 for TIMER_CTRL */
#define TIMER_CTRL_QEM_X4                          (0x00000001UL << 5)  /**< Shifted mode X4 for TIMER_CTRL */
#define _TIMER_CTRL_QEM_DEFAULT                    0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_QEM_X2                         0x00000000UL         /**< Mode X2 for TIMER_CTRL */
#define _TIMER_CTRL_QEM_X4                         0x00000001UL         /**< Mode X4 for TIMER_CTRL */
#define TIMER_CTRL_DEBUGRUN                        (0x1UL << 6)         /**< Debug Mode Run Enable */
#define _TIMER_CTRL_DEBUGRUN_SHIFT                 6                    /**< Shift value for TIMER_DEBUGRUN */
#define _TIMER_CTRL_DEBUGRUN_MASK                  0x40UL               /**< Bit mask for TIMER_DEBUGRUN */
#define TIMER_CTRL_DEBUGRUN_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_DEBUGRUN_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_DMACLRACT                       (0x1UL << 7)         /**< DMA Request Clear on Active */
#define _TIMER_CTRL_DMACLRACT_SHIFT                7                    /**< Shift value for TIMER_DMACLRACT */
#define _TIMER_CTRL_DMACLRACT_MASK                 0x80UL               /**< Bit mask for TIMER_DMACLRACT */
#define TIMER_CTRL_DMACLRACT_DEFAULT               (0x00000000UL << 7)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_DMACLRACT_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_SHIFT                    8                    /**< Shift value for TIMER_RISEA */
#define _TIMER_CTRL_RISEA_MASK                     0x300UL              /**< Bit mask for TIMER_RISEA */
#define TIMER_CTRL_RISEA_DEFAULT                   (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_RISEA_NONE                      (0x00000000UL << 8)  /**< Shifted mode NONE for TIMER_CTRL */
#define TIMER_CTRL_RISEA_START                     (0x00000001UL << 8)  /**< Shifted mode START for TIMER_CTRL */
#define TIMER_CTRL_RISEA_STOP                      (0x00000002UL << 8)  /**< Shifted mode STOP for TIMER_CTRL */
#define TIMER_CTRL_RISEA_RELOADSTART               (0x00000003UL << 8)  /**< Shifted mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_NONE                     0x00000000UL         /**< Mode NONE for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_START                    0x00000001UL         /**< Mode START for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_STOP                     0x00000002UL         /**< Mode STOP for TIMER_CTRL */
#define _TIMER_CTRL_RISEA_RELOADSTART              0x00000003UL         /**< Mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_SHIFT                    10                   /**< Shift value for TIMER_FALLA */
#define _TIMER_CTRL_FALLA_MASK                     0xC00UL              /**< Bit mask for TIMER_FALLA */
#define TIMER_CTRL_FALLA_DEFAULT                   (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_FALLA_NONE                      (0x00000000UL << 10) /**< Shifted mode NONE for TIMER_CTRL */
#define TIMER_CTRL_FALLA_START                     (0x00000001UL << 10) /**< Shifted mode START for TIMER_CTRL */
#define TIMER_CTRL_FALLA_STOP                      (0x00000002UL << 10) /**< Shifted mode STOP for TIMER_CTRL */
#define TIMER_CTRL_FALLA_RELOADSTART               (0x00000003UL << 10) /**< Shifted mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_NONE                     0x00000000UL         /**< Mode NONE for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_START                    0x00000001UL         /**< Mode START for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_STOP                     0x00000002UL         /**< Mode STOP for TIMER_CTRL */
#define _TIMER_CTRL_FALLA_RELOADSTART              0x00000003UL         /**< Mode RELOADSTART for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_SHIFT                   16                   /**< Shift value for TIMER_CLKSEL */
#define _TIMER_CTRL_CLKSEL_MASK                    0x30000UL            /**< Bit mask for TIMER_CLKSEL */
#define TIMER_CTRL_CLKSEL_DEFAULT                  (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_PRESCHFPERCLK            (0x00000000UL << 16) /**< Shifted mode PRESCHFPERCLK for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_CC1                      (0x00000001UL << 16) /**< Shifted mode CC1 for TIMER_CTRL */
#define TIMER_CTRL_CLKSEL_TIMEROUF                 (0x00000002UL << 16) /**< Shifted mode TIMEROUF for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_PRESCHFPERCLK           0x00000000UL         /**< Mode PRESCHFPERCLK for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_CC1                     0x00000001UL         /**< Mode CC1 for TIMER_CTRL */
#define _TIMER_CTRL_CLKSEL_TIMEROUF                0x00000002UL         /**< Mode TIMEROUF for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_SHIFT                    24                   /**< Shift value for TIMER_PRESC */
#define _TIMER_CTRL_PRESC_MASK                     0xF000000UL          /**< Bit mask for TIMER_PRESC */
#define TIMER_CTRL_PRESC_DEFAULT                   (0x00000000UL << 24) /**< Shifted mode DEFAULT for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV1                      (0x00000000UL << 24) /**< Shifted mode DIV1 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV2                      (0x00000001UL << 24) /**< Shifted mode DIV2 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV4                      (0x00000002UL << 24) /**< Shifted mode DIV4 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV8                      (0x00000003UL << 24) /**< Shifted mode DIV8 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV16                     (0x00000004UL << 24) /**< Shifted mode DIV16 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV32                     (0x00000005UL << 24) /**< Shifted mode DIV32 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV64                     (0x00000006UL << 24) /**< Shifted mode DIV64 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV128                    (0x00000007UL << 24) /**< Shifted mode DIV128 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV256                    (0x00000008UL << 24) /**< Shifted mode DIV256 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV512                    (0x00000009UL << 24) /**< Shifted mode DIV512 for TIMER_CTRL */
#define TIMER_CTRL_PRESC_DIV1024                   (0x0000000AUL << 24) /**< Shifted mode DIV1024 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV1                     0x00000000UL         /**< Mode DIV1 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV2                     0x00000001UL         /**< Mode DIV2 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV4                     0x00000002UL         /**< Mode DIV4 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV8                     0x00000003UL         /**< Mode DIV8 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV16                    0x00000004UL         /**< Mode DIV16 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV32                    0x00000005UL         /**< Mode DIV32 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV64                    0x00000006UL         /**< Mode DIV64 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV128                   0x00000007UL         /**< Mode DIV128 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV256                   0x00000008UL         /**< Mode DIV256 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV512                   0x00000009UL         /**< Mode DIV512 for TIMER_CTRL */
#define _TIMER_CTRL_PRESC_DIV1024                  0x0000000AUL         /**< Mode DIV1024 for TIMER_CTRL */

/* Bit fields for TIMER CMD */
#define _TIMER_CMD_RESETVALUE                      0x00000000UL        /**< Default value for TIMER_CMD */
#define _TIMER_CMD_MASK                            0x00000003UL        /**< Mask for TIMER_CMD */
#define TIMER_CMD_START                            (0x1UL << 0)        /**< Start Timer */
#define _TIMER_CMD_START_SHIFT                     0                   /**< Shift value for TIMER_START */
#define _TIMER_CMD_START_MASK                      0x1UL               /**< Bit mask for TIMER_START */
#define TIMER_CMD_START_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_CMD */
#define _TIMER_CMD_START_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for TIMER_CMD */
#define TIMER_CMD_STOP                             (0x1UL << 1)        /**< Stop Timer */
#define _TIMER_CMD_STOP_SHIFT                      1                   /**< Shift value for TIMER_STOP */
#define _TIMER_CMD_STOP_MASK                       0x2UL               /**< Bit mask for TIMER_STOP */
#define TIMER_CMD_STOP_DEFAULT                     (0x00000000UL << 1) /**< Shifted mode DEFAULT for TIMER_CMD */
#define _TIMER_CMD_STOP_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for TIMER_CMD */

/* Bit fields for TIMER STATUS */
#define _TIMER_STATUS_RESETVALUE                   0x00000000UL         /**< Default value for TIMER_STATUS */
#define _TIMER_STATUS_MASK                         0x07070707UL         /**< Mask for TIMER_STATUS */
#define TIMER_STATUS_RUNNING                       (0x1UL << 0)         /**< Running */
#define _TIMER_STATUS_RUNNING_SHIFT                0                    /**< Shift value for TIMER_RUNNING */
#define _TIMER_STATUS_RUNNING_MASK                 0x1UL                /**< Bit mask for TIMER_RUNNING */
#define TIMER_STATUS_RUNNING_DEFAULT               (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_RUNNING_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_DIR                           (0x1UL << 1)         /**< Direction */
#define _TIMER_STATUS_DIR_SHIFT                    1                    /**< Shift value for TIMER_DIR */
#define _TIMER_STATUS_DIR_MASK                     0x2UL                /**< Bit mask for TIMER_DIR */
#define TIMER_STATUS_DIR_DEFAULT                   (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_DIR_UP                        (0x00000000UL << 1)  /**< Shifted mode UP for TIMER_STATUS */
#define TIMER_STATUS_DIR_DOWN                      (0x00000001UL << 1)  /**< Shifted mode DOWN for TIMER_STATUS */
#define _TIMER_STATUS_DIR_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_DIR_UP                       0x00000000UL         /**< Mode UP for TIMER_STATUS */
#define _TIMER_STATUS_DIR_DOWN                     0x00000001UL         /**< Mode DOWN for TIMER_STATUS */
#define TIMER_STATUS_TOPBV                         (0x1UL << 2)         /**< TOPB Valid */
#define _TIMER_STATUS_TOPBV_SHIFT                  2                    /**< Shift value for TIMER_TOPBV */
#define _TIMER_STATUS_TOPBV_MASK                   0x4UL                /**< Bit mask for TIMER_TOPBV */
#define TIMER_STATUS_TOPBV_DEFAULT                 (0x00000000UL << 2)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_TOPBV_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV0                        (0x1UL << 8)         /**< CC0 CCVB Valid */
#define _TIMER_STATUS_CCVBV0_SHIFT                 8                    /**< Shift value for TIMER_CCVBV0 */
#define _TIMER_STATUS_CCVBV0_MASK                  0x100UL              /**< Bit mask for TIMER_CCVBV0 */
#define TIMER_STATUS_CCVBV0_DEFAULT                (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV0_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV1                        (0x1UL << 9)         /**< CC1 CCVB Valid */
#define _TIMER_STATUS_CCVBV1_SHIFT                 9                    /**< Shift value for TIMER_CCVBV1 */
#define _TIMER_STATUS_CCVBV1_MASK                  0x200UL              /**< Bit mask for TIMER_CCVBV1 */
#define TIMER_STATUS_CCVBV1_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV1_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCVBV2                        (0x1UL << 10)        /**< CC2 CCVB Valid */
#define _TIMER_STATUS_CCVBV2_SHIFT                 10                   /**< Shift value for TIMER_CCVBV2 */
#define _TIMER_STATUS_CCVBV2_MASK                  0x400UL              /**< Bit mask for TIMER_CCVBV2 */
#define TIMER_STATUS_CCVBV2_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCVBV2_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV0                          (0x1UL << 16)        /**< CC0 Input Capture Valid */
#define _TIMER_STATUS_ICV0_SHIFT                   16                   /**< Shift value for TIMER_ICV0 */
#define _TIMER_STATUS_ICV0_MASK                    0x10000UL            /**< Bit mask for TIMER_ICV0 */
#define TIMER_STATUS_ICV0_DEFAULT                  (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV0_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV1                          (0x1UL << 17)        /**< CC1 Input Capture Valid */
#define _TIMER_STATUS_ICV1_SHIFT                   17                   /**< Shift value for TIMER_ICV1 */
#define _TIMER_STATUS_ICV1_MASK                    0x20000UL            /**< Bit mask for TIMER_ICV1 */
#define TIMER_STATUS_ICV1_DEFAULT                  (0x00000000UL << 17) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV1_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_ICV2                          (0x1UL << 18)        /**< CC2 Input Capture Valid */
#define _TIMER_STATUS_ICV2_SHIFT                   18                   /**< Shift value for TIMER_ICV2 */
#define _TIMER_STATUS_ICV2_MASK                    0x40000UL            /**< Bit mask for TIMER_ICV2 */
#define TIMER_STATUS_ICV2_DEFAULT                  (0x00000000UL << 18) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_ICV2_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0                        (0x1UL << 24)        /**< CC0 Polarity */
#define _TIMER_STATUS_CCPOL0_SHIFT                 24                   /**< Shift value for TIMER_CCPOL0 */
#define _TIMER_STATUS_CCPOL0_MASK                  0x1000000UL          /**< Bit mask for TIMER_CCPOL0 */
#define TIMER_STATUS_CCPOL0_DEFAULT                (0x00000000UL << 24) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0_LOWRISE                (0x00000000UL << 24) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL0_HIGHFALL               (0x00000001UL << 24) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_LOWRISE               0x00000000UL         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL0_HIGHFALL              0x00000001UL         /**< Mode HIGHFALL for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1                        (0x1UL << 25)        /**< CC1 Polarity */
#define _TIMER_STATUS_CCPOL1_SHIFT                 25                   /**< Shift value for TIMER_CCPOL1 */
#define _TIMER_STATUS_CCPOL1_MASK                  0x2000000UL          /**< Bit mask for TIMER_CCPOL1 */
#define TIMER_STATUS_CCPOL1_DEFAULT                (0x00000000UL << 25) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1_LOWRISE                (0x00000000UL << 25) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL1_HIGHFALL               (0x00000001UL << 25) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_LOWRISE               0x00000000UL         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL1_HIGHFALL              0x00000001UL         /**< Mode HIGHFALL for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2                        (0x1UL << 26)        /**< CC2 Polarity */
#define _TIMER_STATUS_CCPOL2_SHIFT                 26                   /**< Shift value for TIMER_CCPOL2 */
#define _TIMER_STATUS_CCPOL2_MASK                  0x4000000UL          /**< Bit mask for TIMER_CCPOL2 */
#define TIMER_STATUS_CCPOL2_DEFAULT                (0x00000000UL << 26) /**< Shifted mode DEFAULT for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2_LOWRISE                (0x00000000UL << 26) /**< Shifted mode LOWRISE for TIMER_STATUS */
#define TIMER_STATUS_CCPOL2_HIGHFALL               (0x00000001UL << 26) /**< Shifted mode HIGHFALL for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_LOWRISE               0x00000000UL         /**< Mode LOWRISE for TIMER_STATUS */
#define _TIMER_STATUS_CCPOL2_HIGHFALL              0x00000001UL         /**< Mode HIGHFALL for TIMER_STATUS */

/* Bit fields for TIMER IEN */
#define _TIMER_IEN_RESETVALUE                      0x00000000UL         /**< Default value for TIMER_IEN */
#define _TIMER_IEN_MASK                            0x00000773UL         /**< Mask for TIMER_IEN */
#define TIMER_IEN_OF                               (0x1UL << 0)         /**< Overflow Interrupt Enable */
#define _TIMER_IEN_OF_SHIFT                        0                    /**< Shift value for TIMER_OF */
#define _TIMER_IEN_OF_MASK                         0x1UL                /**< Bit mask for TIMER_OF */
#define TIMER_IEN_OF_DEFAULT                       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_OF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_UF                               (0x1UL << 1)         /**< Underflow Interrupt Enable */
#define _TIMER_IEN_UF_SHIFT                        1                    /**< Shift value for TIMER_UF */
#define _TIMER_IEN_UF_MASK                         0x2UL                /**< Bit mask for TIMER_UF */
#define TIMER_IEN_UF_DEFAULT                       (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_UF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC0                              (0x1UL << 4)         /**< CC Channel 0 Interrupt Enable */
#define _TIMER_IEN_CC0_SHIFT                       4                    /**< Shift value for TIMER_CC0 */
#define _TIMER_IEN_CC0_MASK                        0x10UL               /**< Bit mask for TIMER_CC0 */
#define TIMER_IEN_CC0_DEFAULT                      (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC0_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC1                              (0x1UL << 5)         /**< CC Channel 1 Interrupt Enable */
#define _TIMER_IEN_CC1_SHIFT                       5                    /**< Shift value for TIMER_CC1 */
#define _TIMER_IEN_CC1_MASK                        0x20UL               /**< Bit mask for TIMER_CC1 */
#define TIMER_IEN_CC1_DEFAULT                      (0x00000000UL << 5)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC1_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_CC2                              (0x1UL << 6)         /**< CC Channel 2 Interrupt Enable */
#define _TIMER_IEN_CC2_SHIFT                       6                    /**< Shift value for TIMER_CC2 */
#define _TIMER_IEN_CC2_MASK                        0x40UL               /**< Bit mask for TIMER_CC2 */
#define TIMER_IEN_CC2_DEFAULT                      (0x00000000UL << 6)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_CC2_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF0                           (0x1UL << 8)         /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF0_SHIFT                    8                    /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IEN_ICBOF0_MASK                     0x100UL              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IEN_ICBOF0_DEFAULT                   (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF0_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF1                           (0x1UL << 9)         /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF1_SHIFT                    9                    /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IEN_ICBOF1_MASK                     0x200UL              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IEN_ICBOF1_DEFAULT                   (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF1_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */
#define TIMER_IEN_ICBOF2                           (0x1UL << 10)        /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Enable */
#define _TIMER_IEN_ICBOF2_SHIFT                    10                   /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IEN_ICBOF2_MASK                     0x400UL              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IEN_ICBOF2_DEFAULT                   (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_IEN */
#define _TIMER_IEN_ICBOF2_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IEN */

/* Bit fields for TIMER IF */
#define _TIMER_IF_RESETVALUE                       0x00000000UL         /**< Default value for TIMER_IF */
#define _TIMER_IF_MASK                             0x00000773UL         /**< Mask for TIMER_IF */
#define TIMER_IF_OF                                (0x1UL << 0)         /**< Overflow Interrupt Flag */
#define _TIMER_IF_OF_SHIFT                         0                    /**< Shift value for TIMER_OF */
#define _TIMER_IF_OF_MASK                          0x1UL                /**< Bit mask for TIMER_OF */
#define TIMER_IF_OF_DEFAULT                        (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_OF_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_UF                                (0x1UL << 1)         /**< Underflow Interrupt Flag */
#define _TIMER_IF_UF_SHIFT                         1                    /**< Shift value for TIMER_UF */
#define _TIMER_IF_UF_MASK                          0x2UL                /**< Bit mask for TIMER_UF */
#define TIMER_IF_UF_DEFAULT                        (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_UF_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC0                               (0x1UL << 4)         /**< CC Channel 0 Interrupt Flag */
#define _TIMER_IF_CC0_SHIFT                        4                    /**< Shift value for TIMER_CC0 */
#define _TIMER_IF_CC0_MASK                         0x10UL               /**< Bit mask for TIMER_CC0 */
#define TIMER_IF_CC0_DEFAULT                       (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC0_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC1                               (0x1UL << 5)         /**< CC Channel 1 Interrupt Flag */
#define _TIMER_IF_CC1_SHIFT                        5                    /**< Shift value for TIMER_CC1 */
#define _TIMER_IF_CC1_MASK                         0x20UL               /**< Bit mask for TIMER_CC1 */
#define TIMER_IF_CC1_DEFAULT                       (0x00000000UL << 5)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC1_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_CC2                               (0x1UL << 6)         /**< CC Channel 2 Interrupt Flag */
#define _TIMER_IF_CC2_SHIFT                        6                    /**< Shift value for TIMER_CC2 */
#define _TIMER_IF_CC2_MASK                         0x40UL               /**< Bit mask for TIMER_CC2 */
#define TIMER_IF_CC2_DEFAULT                       (0x00000000UL << 6)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_CC2_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF0                            (0x1UL << 8)         /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF0_SHIFT                     8                    /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IF_ICBOF0_MASK                      0x100UL              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IF_ICBOF0_DEFAULT                    (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF0_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF1                            (0x1UL << 9)         /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF1_SHIFT                     9                    /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IF_ICBOF1_MASK                      0x200UL              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IF_ICBOF1_DEFAULT                    (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF1_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_IF */
#define TIMER_IF_ICBOF2                            (0x1UL << 10)        /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag */
#define _TIMER_IF_ICBOF2_SHIFT                     10                   /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IF_ICBOF2_MASK                      0x400UL              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IF_ICBOF2_DEFAULT                    (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_IF */
#define _TIMER_IF_ICBOF2_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_IF */

/* Bit fields for TIMER IFS */
#define _TIMER_IFS_RESETVALUE                      0x00000000UL         /**< Default value for TIMER_IFS */
#define _TIMER_IFS_MASK                            0x00000773UL         /**< Mask for TIMER_IFS */
#define TIMER_IFS_OF                               (0x1UL << 0)         /**< Overflow Interrupt Flag Set */
#define _TIMER_IFS_OF_SHIFT                        0                    /**< Shift value for TIMER_OF */
#define _TIMER_IFS_OF_MASK                         0x1UL                /**< Bit mask for TIMER_OF */
#define TIMER_IFS_OF_DEFAULT                       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_OF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_UF                               (0x1UL << 1)         /**< Underflow Interrupt Flag Set */
#define _TIMER_IFS_UF_SHIFT                        1                    /**< Shift value for TIMER_UF */
#define _TIMER_IFS_UF_MASK                         0x2UL                /**< Bit mask for TIMER_UF */
#define TIMER_IFS_UF_DEFAULT                       (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_UF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC0                              (0x1UL << 4)         /**< CC Channel 0 Interrupt Flag Set */
#define _TIMER_IFS_CC0_SHIFT                       4                    /**< Shift value for TIMER_CC0 */
#define _TIMER_IFS_CC0_MASK                        0x10UL               /**< Bit mask for TIMER_CC0 */
#define TIMER_IFS_CC0_DEFAULT                      (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC0_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC1                              (0x1UL << 5)         /**< CC Channel 1 Interrupt Flag Set */
#define _TIMER_IFS_CC1_SHIFT                       5                    /**< Shift value for TIMER_CC1 */
#define _TIMER_IFS_CC1_MASK                        0x20UL               /**< Bit mask for TIMER_CC1 */
#define TIMER_IFS_CC1_DEFAULT                      (0x00000000UL << 5)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC1_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_CC2                              (0x1UL << 6)         /**< CC Channel 2 Interrupt Flag Set */
#define _TIMER_IFS_CC2_SHIFT                       6                    /**< Shift value for TIMER_CC2 */
#define _TIMER_IFS_CC2_MASK                        0x40UL               /**< Bit mask for TIMER_CC2 */
#define TIMER_IFS_CC2_DEFAULT                      (0x00000000UL << 6)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_CC2_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF0                           (0x1UL << 8)         /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF0_SHIFT                    8                    /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IFS_ICBOF0_MASK                     0x100UL              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IFS_ICBOF0_DEFAULT                   (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF0_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF1                           (0x1UL << 9)         /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF1_SHIFT                    9                    /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IFS_ICBOF1_MASK                     0x200UL              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IFS_ICBOF1_DEFAULT                   (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF1_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */
#define TIMER_IFS_ICBOF2                           (0x1UL << 10)        /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag Set */
#define _TIMER_IFS_ICBOF2_SHIFT                    10                   /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IFS_ICBOF2_MASK                     0x400UL              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IFS_ICBOF2_DEFAULT                   (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_IFS */
#define _TIMER_IFS_ICBOF2_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFS */

/* Bit fields for TIMER IFC */
#define _TIMER_IFC_RESETVALUE                      0x00000000UL         /**< Default value for TIMER_IFC */
#define _TIMER_IFC_MASK                            0x00000773UL         /**< Mask for TIMER_IFC */
#define TIMER_IFC_OF                               (0x1UL << 0)         /**< Overflow Interrupt Flag Clear */
#define _TIMER_IFC_OF_SHIFT                        0                    /**< Shift value for TIMER_OF */
#define _TIMER_IFC_OF_MASK                         0x1UL                /**< Bit mask for TIMER_OF */
#define TIMER_IFC_OF_DEFAULT                       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_OF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_UF                               (0x1UL << 1)         /**< Underflow Interrupt Flag Clear */
#define _TIMER_IFC_UF_SHIFT                        1                    /**< Shift value for TIMER_UF */
#define _TIMER_IFC_UF_MASK                         0x2UL                /**< Bit mask for TIMER_UF */
#define TIMER_IFC_UF_DEFAULT                       (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_UF_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC0                              (0x1UL << 4)         /**< CC Channel 0 Interrupt Flag Clear */
#define _TIMER_IFC_CC0_SHIFT                       4                    /**< Shift value for TIMER_CC0 */
#define _TIMER_IFC_CC0_MASK                        0x10UL               /**< Bit mask for TIMER_CC0 */
#define TIMER_IFC_CC0_DEFAULT                      (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC0_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC1                              (0x1UL << 5)         /**< CC Channel 1 Interrupt Flag Clear */
#define _TIMER_IFC_CC1_SHIFT                       5                    /**< Shift value for TIMER_CC1 */
#define _TIMER_IFC_CC1_MASK                        0x20UL               /**< Bit mask for TIMER_CC1 */
#define TIMER_IFC_CC1_DEFAULT                      (0x00000000UL << 5)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC1_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_CC2                              (0x1UL << 6)         /**< CC Channel 2 Interrupt Flag Clear */
#define _TIMER_IFC_CC2_SHIFT                       6                    /**< Shift value for TIMER_CC2 */
#define _TIMER_IFC_CC2_MASK                        0x40UL               /**< Bit mask for TIMER_CC2 */
#define TIMER_IFC_CC2_DEFAULT                      (0x00000000UL << 6)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_CC2_DEFAULT                     0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF0                           (0x1UL << 8)         /**< CC Channel 0 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF0_SHIFT                    8                    /**< Shift value for TIMER_ICBOF0 */
#define _TIMER_IFC_ICBOF0_MASK                     0x100UL              /**< Bit mask for TIMER_ICBOF0 */
#define TIMER_IFC_ICBOF0_DEFAULT                   (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF0_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF1                           (0x1UL << 9)         /**< CC Channel 1 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF1_SHIFT                    9                    /**< Shift value for TIMER_ICBOF1 */
#define _TIMER_IFC_ICBOF1_MASK                     0x200UL              /**< Bit mask for TIMER_ICBOF1 */
#define TIMER_IFC_ICBOF1_DEFAULT                   (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF1_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */
#define TIMER_IFC_ICBOF2                           (0x1UL << 10)        /**< CC Channel 2 Input Capture Buffer Overflow Interrupt Flag Clear */
#define _TIMER_IFC_ICBOF2_SHIFT                    10                   /**< Shift value for TIMER_ICBOF2 */
#define _TIMER_IFC_ICBOF2_MASK                     0x400UL              /**< Bit mask for TIMER_ICBOF2 */
#define TIMER_IFC_ICBOF2_DEFAULT                   (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_IFC */
#define _TIMER_IFC_ICBOF2_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for TIMER_IFC */

/* Bit fields for TIMER TOP */
#define _TIMER_TOP_RESETVALUE                      0x0000FFFFUL        /**< Default value for TIMER_TOP */
#define _TIMER_TOP_MASK                            0x0000FFFFUL        /**< Mask for TIMER_TOP */
#define _TIMER_TOP_TOP_SHIFT                       0                   /**< Shift value for TIMER_TOP */
#define _TIMER_TOP_TOP_MASK                        0xFFFFUL            /**< Bit mask for TIMER_TOP */
#define TIMER_TOP_TOP_DEFAULT                      (0x0000FFFFUL << 0) /**< Shifted mode DEFAULT for TIMER_TOP */
#define _TIMER_TOP_TOP_DEFAULT                     0x0000FFFFUL        /**< Mode DEFAULT for TIMER_TOP */

/* Bit fields for TIMER TOPB */
#define _TIMER_TOPB_RESETVALUE                     0x00000000UL        /**< Default value for TIMER_TOPB */
#define _TIMER_TOPB_MASK                           0x0000FFFFUL        /**< Mask for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_SHIFT                     0                   /**< Shift value for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_MASK                      0xFFFFUL            /**< Bit mask for TIMER_TOPB */
#define TIMER_TOPB_TOPB_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_TOPB */
#define _TIMER_TOPB_TOPB_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for TIMER_TOPB */

/* Bit fields for TIMER CNT */
#define _TIMER_CNT_RESETVALUE                      0x00000000UL        /**< Default value for TIMER_CNT */
#define _TIMER_CNT_MASK                            0x0000FFFFUL        /**< Mask for TIMER_CNT */
#define _TIMER_CNT_CNT_SHIFT                       0                   /**< Shift value for TIMER_CNT */
#define _TIMER_CNT_CNT_MASK                        0xFFFFUL            /**< Bit mask for TIMER_CNT */
#define TIMER_CNT_CNT_DEFAULT                      (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_CNT */
#define _TIMER_CNT_CNT_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for TIMER_CNT */

/* Bit fields for TIMER ROUTE */
#define _TIMER_ROUTE_RESETVALUE                    0x00000000UL         /**< Default value for TIMER_ROUTE */
#define _TIMER_ROUTE_MASK                          0x00030707UL         /**< Mask for TIMER_ROUTE */
#define TIMER_ROUTE_CC0PEN                         (0x1UL << 0)         /**< CC Channel 0 Pin Enable */
#define _TIMER_ROUTE_CC0PEN_SHIFT                  0                    /**< Shift value for TIMER_CC0PEN */
#define _TIMER_ROUTE_CC0PEN_MASK                   0x1UL                /**< Bit mask for TIMER_CC0PEN */
#define TIMER_ROUTE_CC0PEN_DEFAULT                 (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CC0PEN_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_CC1PEN                         (0x1UL << 1)         /**< CC Channel 1 Pin Enable */
#define _TIMER_ROUTE_CC1PEN_SHIFT                  1                    /**< Shift value for TIMER_CC1PEN */
#define _TIMER_ROUTE_CC1PEN_MASK                   0x2UL                /**< Bit mask for TIMER_CC1PEN */
#define TIMER_ROUTE_CC1PEN_DEFAULT                 (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CC1PEN_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_CC2PEN                         (0x1UL << 2)         /**< CC Channel 2 Pin Enable */
#define _TIMER_ROUTE_CC2PEN_SHIFT                  2                    /**< Shift value for TIMER_CC2PEN */
#define _TIMER_ROUTE_CC2PEN_MASK                   0x4UL                /**< Bit mask for TIMER_CC2PEN */
#define TIMER_ROUTE_CC2PEN_DEFAULT                 (0x00000000UL << 2)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CC2PEN_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_CDTI0PEN                       (0x1UL << 8)         /**< CC Channel 0 Complementary Dead-Time Insertion Pin Enable */
#define _TIMER_ROUTE_CDTI0PEN_SHIFT                8                    /**< Shift value for TIMER_CDTI0PEN */
#define _TIMER_ROUTE_CDTI0PEN_MASK                 0x100UL              /**< Bit mask for TIMER_CDTI0PEN */
#define TIMER_ROUTE_CDTI0PEN_DEFAULT               (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CDTI0PEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_CDTI1PEN                       (0x1UL << 9)         /**< CC Channel 1 Complementary Dead-Time Insertion Pin Enable */
#define _TIMER_ROUTE_CDTI1PEN_SHIFT                9                    /**< Shift value for TIMER_CDTI1PEN */
#define _TIMER_ROUTE_CDTI1PEN_MASK                 0x200UL              /**< Bit mask for TIMER_CDTI1PEN */
#define TIMER_ROUTE_CDTI1PEN_DEFAULT               (0x00000000UL << 9)  /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CDTI1PEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_CDTI2PEN                       (0x1UL << 10)        /**< CC Channel 2 Complementary Dead-Time Insertion Pin Enable */
#define _TIMER_ROUTE_CDTI2PEN_SHIFT                10                   /**< Shift value for TIMER_CDTI2PEN */
#define _TIMER_ROUTE_CDTI2PEN_MASK                 0x400UL              /**< Bit mask for TIMER_CDTI2PEN */
#define TIMER_ROUTE_CDTI2PEN_DEFAULT               (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_CDTI2PEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_SHIFT                16                   /**< Shift value for TIMER_LOCATION */
#define _TIMER_ROUTE_LOCATION_MASK                 0x30000UL            /**< Bit mask for TIMER_LOCATION */
#define TIMER_ROUTE_LOCATION_DEFAULT               (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC0                  (0x00000000UL << 16) /**< Shifted mode LOC0 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC1                  (0x00000001UL << 16) /**< Shifted mode LOC1 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC2                  (0x00000002UL << 16) /**< Shifted mode LOC2 for TIMER_ROUTE */
#define TIMER_ROUTE_LOCATION_LOC3                  (0x00000003UL << 16) /**< Shifted mode LOC3 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC0                 0x00000000UL         /**< Mode LOC0 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC1                 0x00000001UL         /**< Mode LOC1 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC2                 0x00000002UL         /**< Mode LOC2 for TIMER_ROUTE */
#define _TIMER_ROUTE_LOCATION_LOC3                 0x00000003UL         /**< Mode LOC3 for TIMER_ROUTE */

/* Bit fields for TIMER CC_CTRL */
#define _TIMER_CC_CTRL_RESETVALUE                  0x00000000UL         /**< Default value for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MASK                        0x0F373F17UL         /**< Mask for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_SHIFT                  0                    /**< Shift value for TIMER_MODE */
#define _TIMER_CC_CTRL_MODE_MASK                   0x3UL                /**< Bit mask for TIMER_MODE */
#define TIMER_CC_CTRL_MODE_DEFAULT                 (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_OFF                     (0x00000000UL << 0)  /**< Shifted mode OFF for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_INPUTCAPTURE            (0x00000001UL << 0)  /**< Shifted mode INPUTCAPTURE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_OUTPUTCOMPARE           (0x00000002UL << 0)  /**< Shifted mode OUTPUTCOMPARE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_MODE_PWM                     (0x00000003UL << 0)  /**< Shifted mode PWM for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_OFF                    0x00000000UL         /**< Mode OFF for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_INPUTCAPTURE           0x00000001UL         /**< Mode INPUTCAPTURE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_OUTPUTCOMPARE          0x00000002UL         /**< Mode OUTPUTCOMPARE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_MODE_PWM                    0x00000003UL         /**< Mode PWM for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_OUTINV                       (0x1UL << 2)         /**< Output Invert */
#define _TIMER_CC_CTRL_OUTINV_SHIFT                2                    /**< Shift value for TIMER_OUTINV */
#define _TIMER_CC_CTRL_OUTINV_MASK                 0x4UL                /**< Bit mask for TIMER_OUTINV */
#define TIMER_CC_CTRL_OUTINV_DEFAULT               (0x00000000UL << 2)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_OUTINV_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COIST                        (0x1UL << 4)         /**< Compare Output Initial State */
#define _TIMER_CC_CTRL_COIST_SHIFT                 4                    /**< Shift value for TIMER_COIST */
#define _TIMER_CC_CTRL_COIST_MASK                  0x10UL               /**< Bit mask for TIMER_COIST */
#define TIMER_CC_CTRL_COIST_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COIST_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_SHIFT                  8                    /**< Shift value for TIMER_CMOA */
#define _TIMER_CC_CTRL_CMOA_MASK                   0x300UL              /**< Bit mask for TIMER_CMOA */
#define TIMER_CC_CTRL_CMOA_DEFAULT                 (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_NONE                    (0x00000000UL << 8)  /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_TOGGLE                  (0x00000001UL << 8)  /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_CLEAR                   (0x00000002UL << 8)  /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CMOA_SET                     (0x00000003UL << 8)  /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_NONE                   0x00000000UL         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_TOGGLE                 0x00000001UL         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_CLEAR                  0x00000002UL         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CMOA_SET                    0x00000003UL         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_SHIFT                 10                   /**< Shift value for TIMER_COFOA */
#define _TIMER_CC_CTRL_COFOA_MASK                  0xC00UL              /**< Bit mask for TIMER_COFOA */
#define TIMER_CC_CTRL_COFOA_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_NONE                   (0x00000000UL << 10) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_TOGGLE                 (0x00000001UL << 10) /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_CLEAR                  (0x00000002UL << 10) /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_COFOA_SET                    (0x00000003UL << 10) /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_NONE                  0x00000000UL         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_TOGGLE                0x00000001UL         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_CLEAR                 0x00000002UL         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_COFOA_SET                   0x00000003UL         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_SHIFT                 12                   /**< Shift value for TIMER_CUFOA */
#define _TIMER_CC_CTRL_CUFOA_MASK                  0x3000UL             /**< Bit mask for TIMER_CUFOA */
#define TIMER_CC_CTRL_CUFOA_DEFAULT                (0x00000000UL << 12) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_NONE                   (0x00000000UL << 12) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_TOGGLE                 (0x00000001UL << 12) /**< Shifted mode TOGGLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_CLEAR                  (0x00000002UL << 12) /**< Shifted mode CLEAR for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_CUFOA_SET                    (0x00000003UL << 12) /**< Shifted mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_NONE                  0x00000000UL         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_TOGGLE                0x00000001UL         /**< Mode TOGGLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_CLEAR                 0x00000002UL         /**< Mode CLEAR for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_CUFOA_SET                   0x00000003UL         /**< Mode SET for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_SHIFT                16                   /**< Shift value for TIMER_PRSSEL */
#define _TIMER_CC_CTRL_PRSSEL_MASK                 0x70000UL            /**< Bit mask for TIMER_PRSSEL */
#define TIMER_CC_CTRL_PRSSEL_DEFAULT               (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH0                (0x00000000UL << 16) /**< Shifted mode PRSCH0 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH1                (0x00000001UL << 16) /**< Shifted mode PRSCH1 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH2                (0x00000002UL << 16) /**< Shifted mode PRSCH2 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH3                (0x00000003UL << 16) /**< Shifted mode PRSCH3 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH4                (0x00000004UL << 16) /**< Shifted mode PRSCH4 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH5                (0x00000005UL << 16) /**< Shifted mode PRSCH5 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH6                (0x00000006UL << 16) /**< Shifted mode PRSCH6 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_PRSSEL_PRSCH7                (0x00000007UL << 16) /**< Shifted mode PRSCH7 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH0               0x00000000UL         /**< Mode PRSCH0 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH1               0x00000001UL         /**< Mode PRSCH1 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH2               0x00000002UL         /**< Mode PRSCH2 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH3               0x00000003UL         /**< Mode PRSCH3 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH4               0x00000004UL         /**< Mode PRSCH4 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH5               0x00000005UL         /**< Mode PRSCH5 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH6               0x00000006UL         /**< Mode PRSCH6 for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_PRSSEL_PRSCH7               0x00000007UL         /**< Mode PRSCH7 for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL                        (0x1UL << 20)        /**< Input Selection */
#define _TIMER_CC_CTRL_INSEL_SHIFT                 20                   /**< Shift value for TIMER_INSEL */
#define _TIMER_CC_CTRL_INSEL_MASK                  0x100000UL           /**< Bit mask for TIMER_INSEL */
#define TIMER_CC_CTRL_INSEL_DEFAULT                (0x00000000UL << 20) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL_PIN                    (0x00000000UL << 20) /**< Shifted mode PIN for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_INSEL_PRS                    (0x00000001UL << 20) /**< Shifted mode PRS for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_PIN                   0x00000000UL         /**< Mode PIN for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_INSEL_PRS                   0x00000001UL         /**< Mode PRS for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT                         (0x1UL << 21)        /**< Digital Filter */
#define _TIMER_CC_CTRL_FILT_SHIFT                  21                   /**< Shift value for TIMER_FILT */
#define _TIMER_CC_CTRL_FILT_MASK                   0x200000UL           /**< Bit mask for TIMER_FILT */
#define TIMER_CC_CTRL_FILT_DEFAULT                 (0x00000000UL << 21) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT_DISABLE                 (0x00000000UL << 21) /**< Shifted mode DISABLE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_FILT_ENABLE                  (0x00000001UL << 21) /**< Shifted mode ENABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_DISABLE                0x00000000UL         /**< Mode DISABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_FILT_ENABLE                 0x00000001UL         /**< Mode ENABLE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_SHIFT                24                   /**< Shift value for TIMER_ICEDGE */
#define _TIMER_CC_CTRL_ICEDGE_MASK                 0x3000000UL          /**< Bit mask for TIMER_ICEDGE */
#define TIMER_CC_CTRL_ICEDGE_DEFAULT               (0x00000000UL << 24) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_RISING                (0x00000000UL << 24) /**< Shifted mode RISING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_FALLING               (0x00000001UL << 24) /**< Shifted mode FALLING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_BOTH                  (0x00000002UL << 24) /**< Shifted mode BOTH for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEDGE_NONE                  (0x00000003UL << 24) /**< Shifted mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_RISING               0x00000000UL         /**< Mode RISING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_FALLING              0x00000001UL         /**< Mode FALLING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_BOTH                 0x00000002UL         /**< Mode BOTH for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEDGE_NONE                 0x00000003UL         /**< Mode NONE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_SHIFT              26                   /**< Shift value for TIMER_ICEVCTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_MASK               0xC000000UL          /**< Bit mask for TIMER_ICEVCTRL */
#define TIMER_CC_CTRL_ICEVCTRL_DEFAULT             (0x00000000UL << 26) /**< Shifted mode DEFAULT for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_EVERYEDGE           (0x00000000UL << 26) /**< Shifted mode EVERYEDGE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE     (0x00000001UL << 26) /**< Shifted mode EVERYSECONDEDGE for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_RISING              (0x00000002UL << 26) /**< Shifted mode RISING for TIMER_CC_CTRL */
#define TIMER_CC_CTRL_ICEVCTRL_FALLING             (0x00000003UL << 26) /**< Shifted mode FALLING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_DEFAULT            0x00000000UL         /**< Mode DEFAULT for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_EVERYEDGE          0x00000000UL         /**< Mode EVERYEDGE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_EVERYSECONDEDGE    0x00000001UL         /**< Mode EVERYSECONDEDGE for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_RISING             0x00000002UL         /**< Mode RISING for TIMER_CC_CTRL */
#define _TIMER_CC_CTRL_ICEVCTRL_FALLING            0x00000003UL         /**< Mode FALLING for TIMER_CC_CTRL */

/* Bit fields for TIMER CC_CCV */
#define _TIMER_CC_CCV_RESETVALUE                   0x00000000UL        /**< Default value for TIMER_CC_CCV */
#define _TIMER_CC_CCV_MASK                         0x0000FFFFUL        /**< Mask for TIMER_CC_CCV */
#define _TIMER_CC_CCV_CCV_SHIFT                    0                   /**< Shift value for TIMER_CCV */
#define _TIMER_CC_CCV_CCV_MASK                     0xFFFFUL            /**< Bit mask for TIMER_CCV */
#define TIMER_CC_CCV_CCV_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCV */
#define _TIMER_CC_CCV_CCV_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for TIMER_CC_CCV */

/* Bit fields for TIMER CC_CCVP */
#define _TIMER_CC_CCVP_RESETVALUE                  0x00000000UL        /**< Default value for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_MASK                        0x0000FFFFUL        /**< Mask for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_CCVP_SHIFT                  0                   /**< Shift value for TIMER_CCVP */
#define _TIMER_CC_CCVP_CCVP_MASK                   0xFFFFUL            /**< Bit mask for TIMER_CCVP */
#define TIMER_CC_CCVP_CCVP_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCVP */
#define _TIMER_CC_CCVP_CCVP_DEFAULT                0x00000000UL        /**< Mode DEFAULT for TIMER_CC_CCVP */

/* Bit fields for TIMER CC_CCVB */
#define _TIMER_CC_CCVB_RESETVALUE                  0x00000000UL        /**< Default value for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_MASK                        0x0000FFFFUL        /**< Mask for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_CCVB_SHIFT                  0                   /**< Shift value for TIMER_CCVB */
#define _TIMER_CC_CCVB_CCVB_MASK                   0xFFFFUL            /**< Bit mask for TIMER_CCVB */
#define TIMER_CC_CCVB_CCVB_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_CC_CCVB */
#define _TIMER_CC_CCVB_CCVB_DEFAULT                0x00000000UL        /**< Mode DEFAULT for TIMER_CC_CCVB */

/* Bit fields for TIMER DTCTRL */
#define _TIMER_DTCTRL_RESETVALUE                   0x00000000UL         /**< Default value for TIMER_DTCTRL */
#define _TIMER_DTCTRL_MASK                         0x0100007FUL         /**< Mask for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTEN                          (0x1UL << 0)         /**< DTI Enable */
#define _TIMER_DTCTRL_DTEN_SHIFT                   0                    /**< Shift value for TIMER_DTEN */
#define _TIMER_DTCTRL_DTEN_MASK                    0x1UL                /**< Bit mask for TIMER_DTEN */
#define TIMER_DTCTRL_DTEN_DEFAULT                  (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTEN_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS                         (0x1UL << 1)         /**< DTI Automatic Start-up Functionality */
#define _TIMER_DTCTRL_DTDAS_SHIFT                  1                    /**< Shift value for TIMER_DTDAS */
#define _TIMER_DTCTRL_DTDAS_MASK                   0x2UL                /**< Bit mask for TIMER_DTDAS */
#define TIMER_DTCTRL_DTDAS_DEFAULT                 (0x00000000UL << 1)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS_NORESTART               (0x00000000UL << 1)  /**< Shifted mode NORESTART for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTDAS_RESTART                 (0x00000001UL << 1)  /**< Shifted mode RESTART for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_DEFAULT                0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_NORESTART              0x00000000UL         /**< Mode NORESTART for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTDAS_RESTART                0x00000001UL         /**< Mode RESTART for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTIPOL                        (0x1UL << 2)         /**< DTI Inactive Polarity */
#define _TIMER_DTCTRL_DTIPOL_SHIFT                 2                    /**< Shift value for TIMER_DTIPOL */
#define _TIMER_DTCTRL_DTIPOL_MASK                  0x4UL                /**< Bit mask for TIMER_DTIPOL */
#define TIMER_DTCTRL_DTIPOL_DEFAULT                (0x00000000UL << 2)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTIPOL_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTCINV                        (0x1UL << 3)         /**< DTI Complementary Output Invert. */
#define _TIMER_DTCTRL_DTCINV_SHIFT                 3                    /**< Shift value for TIMER_DTCINV */
#define _TIMER_DTCTRL_DTCINV_MASK                  0x8UL                /**< Bit mask for TIMER_DTCINV */
#define TIMER_DTCTRL_DTCINV_DEFAULT                (0x00000000UL << 3)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTCINV_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_SHIFT               4                    /**< Shift value for TIMER_DTPRSSEL */
#define _TIMER_DTCTRL_DTPRSSEL_MASK                0x70UL               /**< Bit mask for TIMER_DTPRSSEL */
#define TIMER_DTCTRL_DTPRSSEL_DEFAULT              (0x00000000UL << 4)  /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH0               (0x00000000UL << 4)  /**< Shifted mode PRSCH0 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH1               (0x00000001UL << 4)  /**< Shifted mode PRSCH1 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH2               (0x00000002UL << 4)  /**< Shifted mode PRSCH2 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH3               (0x00000003UL << 4)  /**< Shifted mode PRSCH3 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH4               (0x00000004UL << 4)  /**< Shifted mode PRSCH4 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH5               (0x00000005UL << 4)  /**< Shifted mode PRSCH5 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH6               (0x00000006UL << 4)  /**< Shifted mode PRSCH6 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSSEL_PRSCH7               (0x00000007UL << 4)  /**< Shifted mode PRSCH7 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH0              0x00000000UL         /**< Mode PRSCH0 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH1              0x00000001UL         /**< Mode PRSCH1 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH2              0x00000002UL         /**< Mode PRSCH2 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH3              0x00000003UL         /**< Mode PRSCH3 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH4              0x00000004UL         /**< Mode PRSCH4 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH5              0x00000005UL         /**< Mode PRSCH5 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH6              0x00000006UL         /**< Mode PRSCH6 for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSSEL_PRSCH7              0x00000007UL         /**< Mode PRSCH7 for TIMER_DTCTRL */
#define TIMER_DTCTRL_DTPRSEN                       (0x1UL << 24)        /**< DTI PRS Source Enable */
#define _TIMER_DTCTRL_DTPRSEN_SHIFT                24                   /**< Shift value for TIMER_DTPRSEN */
#define _TIMER_DTCTRL_DTPRSEN_MASK                 0x1000000UL          /**< Bit mask for TIMER_DTPRSEN */
#define TIMER_DTCTRL_DTPRSEN_DEFAULT               (0x00000000UL << 24) /**< Shifted mode DEFAULT for TIMER_DTCTRL */
#define _TIMER_DTCTRL_DTPRSEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTCTRL */

/* Bit fields for TIMER DTTIME */
#define _TIMER_DTTIME_RESETVALUE                   0x00000000UL         /**< Default value for TIMER_DTTIME */
#define _TIMER_DTTIME_MASK                         0x003F3F0FUL         /**< Mask for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_SHIFT                0                    /**< Shift value for TIMER_DTPRESC */
#define _TIMER_DTTIME_DTPRESC_MASK                 0xFUL                /**< Bit mask for TIMER_DTPRESC */
#define TIMER_DTTIME_DTPRESC_DEFAULT               (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV1                  (0x00000000UL << 0)  /**< Shifted mode DIV1 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV2                  (0x00000001UL << 0)  /**< Shifted mode DIV2 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV4                  (0x00000002UL << 0)  /**< Shifted mode DIV4 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV8                  (0x00000003UL << 0)  /**< Shifted mode DIV8 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV16                 (0x00000004UL << 0)  /**< Shifted mode DIV16 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV32                 (0x00000005UL << 0)  /**< Shifted mode DIV32 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV64                 (0x00000006UL << 0)  /**< Shifted mode DIV64 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV128                (0x00000007UL << 0)  /**< Shifted mode DIV128 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV256                (0x00000008UL << 0)  /**< Shifted mode DIV256 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV512                (0x00000009UL << 0)  /**< Shifted mode DIV512 for TIMER_DTTIME */
#define TIMER_DTTIME_DTPRESC_DIV1024               (0x0000000AUL << 0)  /**< Shifted mode DIV1024 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV1                 0x00000000UL         /**< Mode DIV1 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV2                 0x00000001UL         /**< Mode DIV2 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV4                 0x00000002UL         /**< Mode DIV4 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV8                 0x00000003UL         /**< Mode DIV8 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV16                0x00000004UL         /**< Mode DIV16 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV32                0x00000005UL         /**< Mode DIV32 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV64                0x00000006UL         /**< Mode DIV64 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV128               0x00000007UL         /**< Mode DIV128 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV256               0x00000008UL         /**< Mode DIV256 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV512               0x00000009UL         /**< Mode DIV512 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTPRESC_DIV1024              0x0000000AUL         /**< Mode DIV1024 for TIMER_DTTIME */
#define _TIMER_DTTIME_DTRISET_SHIFT                8                    /**< Shift value for TIMER_DTRISET */
#define _TIMER_DTTIME_DTRISET_MASK                 0x3F00UL             /**< Bit mask for TIMER_DTRISET */
#define TIMER_DTTIME_DTRISET_DEFAULT               (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTRISET_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTFALLT_SHIFT                16                   /**< Shift value for TIMER_DTFALLT */
#define _TIMER_DTTIME_DTFALLT_MASK                 0x3F0000UL           /**< Bit mask for TIMER_DTFALLT */
#define TIMER_DTTIME_DTFALLT_DEFAULT               (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_DTTIME */
#define _TIMER_DTTIME_DTFALLT_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTTIME */

/* Bit fields for TIMER DTFC */
#define _TIMER_DTFC_RESETVALUE                     0x00000000UL         /**< Default value for TIMER_DTFC */
#define _TIMER_DTFC_MASK                           0x0F030707UL         /**< Mask for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_SHIFT               0                    /**< Shift value for TIMER_DTPRS0FSEL */
#define _TIMER_DTFC_DTPRS0FSEL_MASK                0x7UL                /**< Bit mask for TIMER_DTPRS0FSEL */
#define TIMER_DTFC_DTPRS0FSEL_DEFAULT              (0x00000000UL << 0)  /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH0               (0x00000000UL << 0)  /**< Shifted mode PRSCH0 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH1               (0x00000001UL << 0)  /**< Shifted mode PRSCH1 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH2               (0x00000002UL << 0)  /**< Shifted mode PRSCH2 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH3               (0x00000003UL << 0)  /**< Shifted mode PRSCH3 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH4               (0x00000004UL << 0)  /**< Shifted mode PRSCH4 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH5               (0x00000005UL << 0)  /**< Shifted mode PRSCH5 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH6               (0x00000006UL << 0)  /**< Shifted mode PRSCH6 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FSEL_PRSCH7               (0x00000007UL << 0)  /**< Shifted mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH0              0x00000000UL         /**< Mode PRSCH0 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH1              0x00000001UL         /**< Mode PRSCH1 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH2              0x00000002UL         /**< Mode PRSCH2 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH3              0x00000003UL         /**< Mode PRSCH3 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH4              0x00000004UL         /**< Mode PRSCH4 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH5              0x00000005UL         /**< Mode PRSCH5 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH6              0x00000006UL         /**< Mode PRSCH6 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FSEL_PRSCH7              0x00000007UL         /**< Mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_SHIFT               8                    /**< Shift value for TIMER_DTPRS1FSEL */
#define _TIMER_DTFC_DTPRS1FSEL_MASK                0x700UL              /**< Bit mask for TIMER_DTPRS1FSEL */
#define TIMER_DTFC_DTPRS1FSEL_DEFAULT              (0x00000000UL << 8)  /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH0               (0x00000000UL << 8)  /**< Shifted mode PRSCH0 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH1               (0x00000001UL << 8)  /**< Shifted mode PRSCH1 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH2               (0x00000002UL << 8)  /**< Shifted mode PRSCH2 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH3               (0x00000003UL << 8)  /**< Shifted mode PRSCH3 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH4               (0x00000004UL << 8)  /**< Shifted mode PRSCH4 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH5               (0x00000005UL << 8)  /**< Shifted mode PRSCH5 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH6               (0x00000006UL << 8)  /**< Shifted mode PRSCH6 for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FSEL_PRSCH7               (0x00000007UL << 8)  /**< Shifted mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH0              0x00000000UL         /**< Mode PRSCH0 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH1              0x00000001UL         /**< Mode PRSCH1 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH2              0x00000002UL         /**< Mode PRSCH2 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH3              0x00000003UL         /**< Mode PRSCH3 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH4              0x00000004UL         /**< Mode PRSCH4 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH5              0x00000005UL         /**< Mode PRSCH5 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH6              0x00000006UL         /**< Mode PRSCH6 for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FSEL_PRSCH7              0x00000007UL         /**< Mode PRSCH7 for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_SHIFT                     16                   /**< Shift value for TIMER_DTFA */
#define _TIMER_DTFC_DTFA_MASK                      0x30000UL            /**< Bit mask for TIMER_DTFA */
#define TIMER_DTFC_DTFA_DEFAULT                    (0x00000000UL << 16) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTFA_NONE                       (0x00000000UL << 16) /**< Shifted mode NONE for TIMER_DTFC */
#define TIMER_DTFC_DTFA_INACTIVE                   (0x00000001UL << 16) /**< Shifted mode INACTIVE for TIMER_DTFC */
#define TIMER_DTFC_DTFA_CLEAR                      (0x00000002UL << 16) /**< Shifted mode CLEAR for TIMER_DTFC */
#define TIMER_DTFC_DTFA_TRISTATE                   (0x00000003UL << 16) /**< Shifted mode TRISTATE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_NONE                      0x00000000UL         /**< Mode NONE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_INACTIVE                  0x00000001UL         /**< Mode INACTIVE for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_CLEAR                     0x00000002UL         /**< Mode CLEAR for TIMER_DTFC */
#define _TIMER_DTFC_DTFA_TRISTATE                  0x00000003UL         /**< Mode TRISTATE for TIMER_DTFC */
#define TIMER_DTFC_DTPRS0FEN                       (0x1UL << 24)        /**< DTI PRS 0 Fault Enable */
#define _TIMER_DTFC_DTPRS0FEN_SHIFT                24                   /**< Shift value for TIMER_DTPRS0FEN */
#define _TIMER_DTFC_DTPRS0FEN_MASK                 0x1000000UL          /**< Bit mask for TIMER_DTPRS0FEN */
#define TIMER_DTFC_DTPRS0FEN_DEFAULT               (0x00000000UL << 24) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS0FEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTPRS1FEN                       (0x1UL << 25)        /**< DTI PRS 1 Fault Enable */
#define _TIMER_DTFC_DTPRS1FEN_SHIFT                25                   /**< Shift value for TIMER_DTPRS1FEN */
#define _TIMER_DTFC_DTPRS1FEN_MASK                 0x2000000UL          /**< Bit mask for TIMER_DTPRS1FEN */
#define TIMER_DTFC_DTPRS1FEN_DEFAULT               (0x00000000UL << 25) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTPRS1FEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTDBGFEN                        (0x1UL << 26)        /**< DTI Debugger Fault Enable */
#define _TIMER_DTFC_DTDBGFEN_SHIFT                 26                   /**< Shift value for TIMER_DTDBGFEN */
#define _TIMER_DTFC_DTDBGFEN_MASK                  0x4000000UL          /**< Bit mask for TIMER_DTDBGFEN */
#define TIMER_DTFC_DTDBGFEN_DEFAULT                (0x00000000UL << 26) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTDBGFEN_DEFAULT               0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */
#define TIMER_DTFC_DTLOCKUPFEN                     (0x1UL << 27)        /**< DTI Lockup Fault Enable */
#define _TIMER_DTFC_DTLOCKUPFEN_SHIFT              27                   /**< Shift value for TIMER_DTLOCKUPFEN */
#define _TIMER_DTFC_DTLOCKUPFEN_MASK               0x8000000UL          /**< Bit mask for TIMER_DTLOCKUPFEN */
#define TIMER_DTFC_DTLOCKUPFEN_DEFAULT             (0x00000000UL << 27) /**< Shifted mode DEFAULT for TIMER_DTFC */
#define _TIMER_DTFC_DTLOCKUPFEN_DEFAULT            0x00000000UL         /**< Mode DEFAULT for TIMER_DTFC */

/* Bit fields for TIMER DTOGEN */
#define _TIMER_DTOGEN_RESETVALUE                   0x00000000UL        /**< Default value for TIMER_DTOGEN */
#define _TIMER_DTOGEN_MASK                         0x0000003FUL        /**< Mask for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCC0EN                     (0x1UL << 0)        /**< DTI CC0 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCC0EN_SHIFT              0                   /**< Shift value for TIMER_DTOGCC0EN */
#define _TIMER_DTOGEN_DTOGCC0EN_MASK               0x1UL               /**< Bit mask for TIMER_DTOGCC0EN */
#define TIMER_DTOGEN_DTOGCC0EN_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCC0EN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCC1EN                     (0x1UL << 1)        /**< DTI CC1 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCC1EN_SHIFT              1                   /**< Shift value for TIMER_DTOGCC1EN */
#define _TIMER_DTOGEN_DTOGCC1EN_MASK               0x2UL               /**< Bit mask for TIMER_DTOGCC1EN */
#define TIMER_DTOGEN_DTOGCC1EN_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCC1EN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCC2EN                     (0x1UL << 2)        /**< DTI CC2 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCC2EN_SHIFT              2                   /**< Shift value for TIMER_DTOGCC2EN */
#define _TIMER_DTOGEN_DTOGCC2EN_MASK               0x4UL               /**< Bit mask for TIMER_DTOGCC2EN */
#define TIMER_DTOGEN_DTOGCC2EN_DEFAULT             (0x00000000UL << 2) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCC2EN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCDTI0EN                   (0x1UL << 3)        /**< DTI CDTI0 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCDTI0EN_SHIFT            3                   /**< Shift value for TIMER_DTOGCDTI0EN */
#define _TIMER_DTOGEN_DTOGCDTI0EN_MASK             0x8UL               /**< Bit mask for TIMER_DTOGCDTI0EN */
#define TIMER_DTOGEN_DTOGCDTI0EN_DEFAULT           (0x00000000UL << 3) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCDTI0EN_DEFAULT          0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCDTI1EN                   (0x1UL << 4)        /**< DTI CDTI1 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCDTI1EN_SHIFT            4                   /**< Shift value for TIMER_DTOGCDTI1EN */
#define _TIMER_DTOGEN_DTOGCDTI1EN_MASK             0x10UL              /**< Bit mask for TIMER_DTOGCDTI1EN */
#define TIMER_DTOGEN_DTOGCDTI1EN_DEFAULT           (0x00000000UL << 4) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCDTI1EN_DEFAULT          0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */
#define TIMER_DTOGEN_DTOGCDTI2EN                   (0x1UL << 5)        /**< DTI CDTI2 Output Generation Enable */
#define _TIMER_DTOGEN_DTOGCDTI2EN_SHIFT            5                   /**< Shift value for TIMER_DTOGCDTI2EN */
#define _TIMER_DTOGEN_DTOGCDTI2EN_MASK             0x20UL              /**< Bit mask for TIMER_DTOGCDTI2EN */
#define TIMER_DTOGEN_DTOGCDTI2EN_DEFAULT           (0x00000000UL << 5) /**< Shifted mode DEFAULT for TIMER_DTOGEN */
#define _TIMER_DTOGEN_DTOGCDTI2EN_DEFAULT          0x00000000UL        /**< Mode DEFAULT for TIMER_DTOGEN */

/* Bit fields for TIMER DTFAULT */
#define _TIMER_DTFAULT_RESETVALUE                  0x00000000UL        /**< Default value for TIMER_DTFAULT */
#define _TIMER_DTFAULT_MASK                        0x0000000FUL        /**< Mask for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTPRS0F                      (0x1UL << 0)        /**< DTI PRS 0 Fault */
#define _TIMER_DTFAULT_DTPRS0F_SHIFT               0                   /**< Shift value for TIMER_DTPRS0F */
#define _TIMER_DTFAULT_DTPRS0F_MASK                0x1UL               /**< Bit mask for TIMER_DTPRS0F */
#define TIMER_DTFAULT_DTPRS0F_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTPRS0F_DEFAULT             0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTPRS1F                      (0x1UL << 1)        /**< DTI PRS 1 Fault */
#define _TIMER_DTFAULT_DTPRS1F_SHIFT               1                   /**< Shift value for TIMER_DTPRS1F */
#define _TIMER_DTFAULT_DTPRS1F_MASK                0x2UL               /**< Bit mask for TIMER_DTPRS1F */
#define TIMER_DTFAULT_DTPRS1F_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTPRS1F_DEFAULT             0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTDBGF                       (0x1UL << 2)        /**< DTI Debugger Fault */
#define _TIMER_DTFAULT_DTDBGF_SHIFT                2                   /**< Shift value for TIMER_DTDBGF */
#define _TIMER_DTFAULT_DTDBGF_MASK                 0x4UL               /**< Bit mask for TIMER_DTDBGF */
#define TIMER_DTFAULT_DTDBGF_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTDBGF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULT */
#define TIMER_DTFAULT_DTLOCKUPF                    (0x1UL << 3)        /**< DTI Lockup Fault */
#define _TIMER_DTFAULT_DTLOCKUPF_SHIFT             3                   /**< Shift value for TIMER_DTLOCKUPF */
#define _TIMER_DTFAULT_DTLOCKUPF_MASK              0x8UL               /**< Bit mask for TIMER_DTLOCKUPF */
#define TIMER_DTFAULT_DTLOCKUPF_DEFAULT            (0x00000000UL << 3) /**< Shifted mode DEFAULT for TIMER_DTFAULT */
#define _TIMER_DTFAULT_DTLOCKUPF_DEFAULT           0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULT */

/* Bit fields for TIMER DTFAULTC */
#define _TIMER_DTFAULTC_RESETVALUE                 0x00000000UL        /**< Default value for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_MASK                       0x0000000FUL        /**< Mask for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTPRS0FC                    (0x1UL << 0)        /**< DTI PRS0 Fault Clear */
#define _TIMER_DTFAULTC_DTPRS0FC_SHIFT             0                   /**< Shift value for TIMER_DTPRS0FC */
#define _TIMER_DTFAULTC_DTPRS0FC_MASK              0x1UL               /**< Bit mask for TIMER_DTPRS0FC */
#define TIMER_DTFAULTC_DTPRS0FC_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTPRS0FC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTPRS1FC                    (0x1UL << 1)        /**< DTI PRS1 Fault Clear */
#define _TIMER_DTFAULTC_DTPRS1FC_SHIFT             1                   /**< Shift value for TIMER_DTPRS1FC */
#define _TIMER_DTFAULTC_DTPRS1FC_MASK              0x2UL               /**< Bit mask for TIMER_DTPRS1FC */
#define TIMER_DTFAULTC_DTPRS1FC_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTPRS1FC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_DTDBGFC                     (0x1UL << 2)        /**< DTI Debugger Fault Clear */
#define _TIMER_DTFAULTC_DTDBGFC_SHIFT              2                   /**< Shift value for TIMER_DTDBGFC */
#define _TIMER_DTFAULTC_DTDBGFC_MASK               0x4UL               /**< Bit mask for TIMER_DTDBGFC */
#define TIMER_DTFAULTC_DTDBGFC_DEFAULT             (0x00000000UL << 2) /**< Shifted mode DEFAULT for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_DTDBGFC_DEFAULT            0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULTC */
#define TIMER_DTFAULTC_TLOCKUPFC                   (0x1UL << 3)        /**< DTI Lockup Fault Clear */
#define _TIMER_DTFAULTC_TLOCKUPFC_SHIFT            3                   /**< Shift value for TIMER_TLOCKUPFC */
#define _TIMER_DTFAULTC_TLOCKUPFC_MASK             0x8UL               /**< Bit mask for TIMER_TLOCKUPFC */
#define TIMER_DTFAULTC_TLOCKUPFC_DEFAULT           (0x00000000UL << 3) /**< Shifted mode DEFAULT for TIMER_DTFAULTC */
#define _TIMER_DTFAULTC_TLOCKUPFC_DEFAULT          0x00000000UL        /**< Mode DEFAULT for TIMER_DTFAULTC */

/* Bit fields for TIMER DTLOCK */
#define _TIMER_DTLOCK_RESETVALUE                   0x00000000UL        /**< Default value for TIMER_DTLOCK */
#define _TIMER_DTLOCK_MASK                         0x0000FFFFUL        /**< Mask for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_SHIFT                0                   /**< Shift value for TIMER_LOCKKEY */
#define _TIMER_DTLOCK_LOCKKEY_MASK                 0xFFFFUL            /**< Bit mask for TIMER_LOCKKEY */
#define TIMER_DTLOCK_LOCKKEY_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_LOCK                  (0x00000000UL << 0) /**< Shifted mode LOCK for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_UNLOCKED              (0x00000000UL << 0) /**< Shifted mode UNLOCKED for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_LOCKED                (0x00000001UL << 0) /**< Shifted mode LOCKED for TIMER_DTLOCK */
#define TIMER_DTLOCK_LOCKKEY_UNLOCK                (0x0000CE80UL << 0) /**< Shifted mode UNLOCK for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_DEFAULT              0x00000000UL        /**< Mode DEFAULT for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_LOCK                 0x00000000UL        /**< Mode LOCK for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_UNLOCKED             0x00000000UL        /**< Mode UNLOCKED for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_LOCKED               0x00000001UL        /**< Mode LOCKED for TIMER_DTLOCK */
#define _TIMER_DTLOCK_LOCKKEY_UNLOCK               0x0000CE80UL        /**< Mode UNLOCK for TIMER_DTLOCK */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_USART
 * @{
 *****************************************************************************/

/* Bit fields for USART CTRL */
#define _USART_CTRL_RESETVALUE                0x00000000UL         /**< Default value for USART_CTRL */
#define _USART_CTRL_MASK                      0x1DFFFF7FUL         /**< Mask for USART_CTRL */
#define USART_CTRL_SYNC                       (0x1UL << 0)         /**< USART Synchronous Mode */
#define _USART_CTRL_SYNC_SHIFT                0                    /**< Shift value for USART_SYNC */
#define _USART_CTRL_SYNC_MASK                 0x1UL                /**< Bit mask for USART_SYNC */
#define USART_CTRL_SYNC_DEFAULT               (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SYNC_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_LOOPBK                     (0x1UL << 1)         /**< Loopback Enable */
#define _USART_CTRL_LOOPBK_SHIFT              1                    /**< Shift value for USART_LOOPBK */
#define _USART_CTRL_LOOPBK_MASK               0x2UL                /**< Bit mask for USART_LOOPBK */
#define USART_CTRL_LOOPBK_DEFAULT             (0x00000000UL << 1)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_LOOPBK_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CCEN                       (0x1UL << 2)         /**< Collision Check Enable */
#define _USART_CTRL_CCEN_SHIFT                2                    /**< Shift value for USART_CCEN */
#define _USART_CTRL_CCEN_MASK                 0x4UL                /**< Bit mask for USART_CCEN */
#define USART_CTRL_CCEN_DEFAULT               (0x00000000UL << 2)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CCEN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_MPM                        (0x1UL << 3)         /**< Multi-Processor Mode */
#define _USART_CTRL_MPM_SHIFT                 3                    /**< Shift value for USART_MPM */
#define _USART_CTRL_MPM_MASK                  0x8UL                /**< Bit mask for USART_MPM */
#define USART_CTRL_MPM_DEFAULT                (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MPM_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_MPAB                       (0x1UL << 4)         /**< Multi-Processor Address-Bit */
#define _USART_CTRL_MPAB_SHIFT                4                    /**< Shift value for USART_MPAB */
#define _USART_CTRL_MPAB_MASK                 0x10UL               /**< Bit mask for USART_MPAB */
#define USART_CTRL_MPAB_DEFAULT               (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MPAB_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_OVS_SHIFT                 5                    /**< Shift value for USART_OVS */
#define _USART_CTRL_OVS_MASK                  0x60UL               /**< Bit mask for USART_OVS */
#define USART_CTRL_OVS_DEFAULT                (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_OVS_X16                    (0x00000000UL << 5)  /**< Shifted mode X16 for USART_CTRL */
#define USART_CTRL_OVS_X8                     (0x00000001UL << 5)  /**< Shifted mode X8 for USART_CTRL */
#define USART_CTRL_OVS_X6                     (0x00000002UL << 5)  /**< Shifted mode X6 for USART_CTRL */
#define USART_CTRL_OVS_X4                     (0x00000003UL << 5)  /**< Shifted mode X4 for USART_CTRL */
#define _USART_CTRL_OVS_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_OVS_X16                   0x00000000UL         /**< Mode X16 for USART_CTRL */
#define _USART_CTRL_OVS_X8                    0x00000001UL         /**< Mode X8 for USART_CTRL */
#define _USART_CTRL_OVS_X6                    0x00000002UL         /**< Mode X6 for USART_CTRL */
#define _USART_CTRL_OVS_X4                    0x00000003UL         /**< Mode X4 for USART_CTRL */
#define USART_CTRL_CLKPOL                     (0x1UL << 8)         /**< Clock Polarity */
#define _USART_CTRL_CLKPOL_SHIFT              8                    /**< Shift value for USART_CLKPOL */
#define _USART_CTRL_CLKPOL_MASK               0x100UL              /**< Bit mask for USART_CLKPOL */
#define USART_CTRL_CLKPOL_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CLKPOL_IDLELOW             (0x00000000UL << 8)  /**< Shifted mode IDLELOW for USART_CTRL */
#define USART_CTRL_CLKPOL_IDLEHIGH            (0x00000001UL << 8)  /**< Shifted mode IDLEHIGH for USART_CTRL */
#define _USART_CTRL_CLKPOL_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CLKPOL_IDLELOW            0x00000000UL         /**< Mode IDLELOW for USART_CTRL */
#define _USART_CTRL_CLKPOL_IDLEHIGH           0x00000001UL         /**< Mode IDLEHIGH for USART_CTRL */
#define USART_CTRL_CLKPHA                     (0x1UL << 9)         /**< Clock Edge For Setup/Sample */
#define _USART_CTRL_CLKPHA_SHIFT              9                    /**< Shift value for USART_CLKPHA */
#define _USART_CTRL_CLKPHA_MASK               0x200UL              /**< Bit mask for USART_CLKPHA */
#define USART_CTRL_CLKPHA_DEFAULT             (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CLKPHA_SAMPLELEADING       (0x00000000UL << 9)  /**< Shifted mode SAMPLELEADING for USART_CTRL */
#define USART_CTRL_CLKPHA_SAMPLETRAILING      (0x00000001UL << 9)  /**< Shifted mode SAMPLETRAILING for USART_CTRL */
#define _USART_CTRL_CLKPHA_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CLKPHA_SAMPLELEADING      0x00000000UL         /**< Mode SAMPLELEADING for USART_CTRL */
#define _USART_CTRL_CLKPHA_SAMPLETRAILING     0x00000001UL         /**< Mode SAMPLETRAILING for USART_CTRL */
#define USART_CTRL_MSBF                       (0x1UL << 10)        /**< Most Significant Bit First */
#define _USART_CTRL_MSBF_SHIFT                10                   /**< Shift value for USART_MSBF */
#define _USART_CTRL_MSBF_MASK                 0x400UL              /**< Bit mask for USART_MSBF */
#define USART_CTRL_MSBF_DEFAULT               (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_MSBF_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSMA                       (0x1UL << 11)        /**< Action On Slave-Select In Master Mode */
#define _USART_CTRL_CSMA_SHIFT                11                   /**< Shift value for USART_CSMA */
#define _USART_CTRL_CSMA_MASK                 0x800UL              /**< Bit mask for USART_CSMA */
#define USART_CTRL_CSMA_DEFAULT               (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSMA_NOACTION              (0x00000000UL << 11) /**< Shifted mode NOACTION for USART_CTRL */
#define USART_CTRL_CSMA_GOTOSLAVEMODE         (0x00000001UL << 11) /**< Shifted mode GOTOSLAVEMODE for USART_CTRL */
#define _USART_CTRL_CSMA_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CSMA_NOACTION             0x00000000UL         /**< Mode NOACTION for USART_CTRL */
#define _USART_CTRL_CSMA_GOTOSLAVEMODE        0x00000001UL         /**< Mode GOTOSLAVEMODE for USART_CTRL */
#define USART_CTRL_TXBIL                      (0x1UL << 12)        /**< TX Buffer Interrupt Level */
#define _USART_CTRL_TXBIL_SHIFT               12                   /**< Shift value for USART_TXBIL */
#define _USART_CTRL_TXBIL_MASK                0x1000UL             /**< Bit mask for USART_TXBIL */
#define USART_CTRL_TXBIL_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXBIL_EMPTY                (0x00000000UL << 12) /**< Shifted mode EMPTY for USART_CTRL */
#define USART_CTRL_TXBIL_HALFFULL             (0x00000001UL << 12) /**< Shifted mode HALFFULL for USART_CTRL */
#define _USART_CTRL_TXBIL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXBIL_EMPTY               0x00000000UL         /**< Mode EMPTY for USART_CTRL */
#define _USART_CTRL_TXBIL_HALFFULL            0x00000001UL         /**< Mode HALFFULL for USART_CTRL */
#define USART_CTRL_RXINV                      (0x1UL << 13)        /**< Receiver Input Invert */
#define _USART_CTRL_RXINV_SHIFT               13                   /**< Shift value for USART_RXINV */
#define _USART_CTRL_RXINV_MASK                0x2000UL             /**< Bit mask for USART_RXINV */
#define USART_CTRL_RXINV_DEFAULT              (0x00000000UL << 13) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_RXINV_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXINV                      (0x1UL << 14)        /**< Transmitter output Invert */
#define _USART_CTRL_TXINV_SHIFT               14                   /**< Shift value for USART_TXINV */
#define _USART_CTRL_TXINV_MASK                0x4000UL             /**< Bit mask for USART_TXINV */
#define USART_CTRL_TXINV_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXINV_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_CSINV                      (0x1UL << 15)        /**< Chip Select Invert */
#define _USART_CTRL_CSINV_SHIFT               15                   /**< Shift value for USART_CSINV */
#define _USART_CTRL_CSINV_MASK                0x8000UL             /**< Bit mask for USART_CSINV */
#define USART_CTRL_CSINV_DEFAULT              (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_CSINV_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_AUTOCS                     (0x1UL << 16)        /**< Automatic Chip Select */
#define _USART_CTRL_AUTOCS_SHIFT              16                   /**< Shift value for USART_AUTOCS */
#define _USART_CTRL_AUTOCS_MASK               0x10000UL            /**< Bit mask for USART_AUTOCS */
#define USART_CTRL_AUTOCS_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_AUTOCS_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_AUTOTRI                    (0x1UL << 17)        /**< Automatic TX Tristate */
#define _USART_CTRL_AUTOTRI_SHIFT             17                   /**< Shift value for USART_AUTOTRI */
#define _USART_CTRL_AUTOTRI_MASK              0x20000UL            /**< Bit mask for USART_AUTOTRI */
#define USART_CTRL_AUTOTRI_DEFAULT            (0x00000000UL << 17) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_AUTOTRI_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SCMODE                     (0x1UL << 18)        /**< SmartCard Mode */
#define _USART_CTRL_SCMODE_SHIFT              18                   /**< Shift value for USART_SCMODE */
#define _USART_CTRL_SCMODE_MASK               0x40000UL            /**< Bit mask for USART_SCMODE */
#define USART_CTRL_SCMODE_DEFAULT             (0x00000000UL << 18) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SCMODE_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SCRETRANS                  (0x1UL << 19)        /**< SmartCard Retransmit */
#define _USART_CTRL_SCRETRANS_SHIFT           19                   /**< Shift value for USART_SCRETRANS */
#define _USART_CTRL_SCRETRANS_MASK            0x80000UL            /**< Bit mask for USART_SCRETRANS */
#define USART_CTRL_SCRETRANS_DEFAULT          (0x00000000UL << 19) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SCRETRANS_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_SKIPPERRF                  (0x1UL << 20)        /**< Skip Parity Error Frames */
#define _USART_CTRL_SKIPPERRF_SHIFT           20                   /**< Shift value for USART_SKIPPERRF */
#define _USART_CTRL_SKIPPERRF_MASK            0x100000UL           /**< Bit mask for USART_SKIPPERRF */
#define USART_CTRL_SKIPPERRF_DEFAULT          (0x00000000UL << 20) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_SKIPPERRF_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_BIT8DV                     (0x1UL << 21)        /**< Bit 8 Default Value */
#define _USART_CTRL_BIT8DV_SHIFT              21                   /**< Shift value for USART_BIT8DV */
#define _USART_CTRL_BIT8DV_MASK               0x200000UL           /**< Bit mask for USART_BIT8DV */
#define USART_CTRL_BIT8DV_DEFAULT             (0x00000000UL << 21) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_BIT8DV_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSDMA                    (0x1UL << 22)        /**< Halt DMA On Error */
#define _USART_CTRL_ERRSDMA_SHIFT             22                   /**< Shift value for USART_ERRSDMA */
#define _USART_CTRL_ERRSDMA_MASK              0x400000UL           /**< Bit mask for USART_ERRSDMA */
#define USART_CTRL_ERRSDMA_DEFAULT            (0x00000000UL << 22) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSDMA_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSRX                     (0x1UL << 23)        /**< Disable RX On Error */
#define _USART_CTRL_ERRSRX_SHIFT              23                   /**< Shift value for USART_ERRSRX */
#define _USART_CTRL_ERRSRX_MASK               0x800000UL           /**< Bit mask for USART_ERRSRX */
#define USART_CTRL_ERRSRX_DEFAULT             (0x00000000UL << 23) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSRX_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define USART_CTRL_ERRSTX                     (0x1UL << 24)        /**< Disable TX On Error */
#define _USART_CTRL_ERRSTX_SHIFT              24                   /**< Shift value for USART_ERRSTX */
#define _USART_CTRL_ERRSTX_MASK               0x1000000UL          /**< Bit mask for USART_ERRSTX */
#define USART_CTRL_ERRSTX_DEFAULT             (0x00000000UL << 24) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_ERRSTX_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXDELAY_SHIFT             26                   /**< Shift value for USART_TXDELAY */
#define _USART_CTRL_TXDELAY_MASK              0xC000000UL          /**< Bit mask for USART_TXDELAY */
#define USART_CTRL_TXDELAY_DEFAULT            (0x00000000UL << 26) /**< Shifted mode DEFAULT for USART_CTRL */
#define USART_CTRL_TXDELAY_NONE               (0x00000000UL << 26) /**< Shifted mode NONE for USART_CTRL */
#define USART_CTRL_TXDELAY_SINGLE             (0x00000001UL << 26) /**< Shifted mode SINGLE for USART_CTRL */
#define USART_CTRL_TXDELAY_DOUBLE             (0x00000002UL << 26) /**< Shifted mode DOUBLE for USART_CTRL */
#define USART_CTRL_TXDELAY_TRIPLE             (0x00000003UL << 26) /**< Shifted mode TRIPLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_CTRL */
#define _USART_CTRL_TXDELAY_NONE              0x00000000UL         /**< Mode NONE for USART_CTRL */
#define _USART_CTRL_TXDELAY_SINGLE            0x00000001UL         /**< Mode SINGLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_DOUBLE            0x00000002UL         /**< Mode DOUBLE for USART_CTRL */
#define _USART_CTRL_TXDELAY_TRIPLE            0x00000003UL         /**< Mode TRIPLE for USART_CTRL */
#define USART_CTRL_BYTESWAP                   (0x1UL << 28)        /**< Byteswap In Double Accesses */
#define _USART_CTRL_BYTESWAP_SHIFT            28                   /**< Shift value for USART_BYTESWAP */
#define _USART_CTRL_BYTESWAP_MASK             0x10000000UL         /**< Bit mask for USART_BYTESWAP */
#define USART_CTRL_BYTESWAP_DEFAULT           (0x00000000UL << 28) /**< Shifted mode DEFAULT for USART_CTRL */
#define _USART_CTRL_BYTESWAP_DEFAULT          0x00000000UL         /**< Mode DEFAULT for USART_CTRL */

/* Bit fields for USART FRAME */
#define _USART_FRAME_RESETVALUE               0x00001005UL         /**< Default value for USART_FRAME */
#define _USART_FRAME_MASK                     0x0000330FUL         /**< Mask for USART_FRAME */
#define _USART_FRAME_DATABITS_SHIFT           0                    /**< Shift value for USART_DATABITS */
#define _USART_FRAME_DATABITS_MASK            0xFUL                /**< Bit mask for USART_DATABITS */
#define USART_FRAME_DATABITS_FOUR             (0x00000001UL << 0)  /**< Shifted mode FOUR for USART_FRAME */
#define USART_FRAME_DATABITS_FIVE             (0x00000002UL << 0)  /**< Shifted mode FIVE for USART_FRAME */
#define USART_FRAME_DATABITS_SIX              (0x00000003UL << 0)  /**< Shifted mode SIX for USART_FRAME */
#define USART_FRAME_DATABITS_SEVEN            (0x00000004UL << 0)  /**< Shifted mode SEVEN for USART_FRAME */
#define USART_FRAME_DATABITS_DEFAULT          (0x00000005UL << 0)  /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_DATABITS_EIGHT            (0x00000005UL << 0)  /**< Shifted mode EIGHT for USART_FRAME */
#define USART_FRAME_DATABITS_NINE             (0x00000006UL << 0)  /**< Shifted mode NINE for USART_FRAME */
#define USART_FRAME_DATABITS_TEN              (0x00000007UL << 0)  /**< Shifted mode TEN for USART_FRAME */
#define USART_FRAME_DATABITS_ELEVEN           (0x00000008UL << 0)  /**< Shifted mode ELEVEN for USART_FRAME */
#define USART_FRAME_DATABITS_TWELVE           (0x00000009UL << 0)  /**< Shifted mode TWELVE for USART_FRAME */
#define USART_FRAME_DATABITS_THIRTEEN         (0x0000000AUL << 0)  /**< Shifted mode THIRTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_FOURTEEN         (0x0000000BUL << 0)  /**< Shifted mode FOURTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_FIFTEEN          (0x0000000CUL << 0)  /**< Shifted mode FIFTEEN for USART_FRAME */
#define USART_FRAME_DATABITS_SIXTEEN          (0x0000000DUL << 0)  /**< Shifted mode SIXTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FOUR            0x00000001UL         /**< Mode FOUR for USART_FRAME */
#define _USART_FRAME_DATABITS_FIVE            0x00000002UL         /**< Mode FIVE for USART_FRAME */
#define _USART_FRAME_DATABITS_SIX             0x00000003UL         /**< Mode SIX for USART_FRAME */
#define _USART_FRAME_DATABITS_SEVEN           0x00000004UL         /**< Mode SEVEN for USART_FRAME */
#define _USART_FRAME_DATABITS_DEFAULT         0x00000005UL         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_DATABITS_EIGHT           0x00000005UL         /**< Mode EIGHT for USART_FRAME */
#define _USART_FRAME_DATABITS_NINE            0x00000006UL         /**< Mode NINE for USART_FRAME */
#define _USART_FRAME_DATABITS_TEN             0x00000007UL         /**< Mode TEN for USART_FRAME */
#define _USART_FRAME_DATABITS_ELEVEN          0x00000008UL         /**< Mode ELEVEN for USART_FRAME */
#define _USART_FRAME_DATABITS_TWELVE          0x00000009UL         /**< Mode TWELVE for USART_FRAME */
#define _USART_FRAME_DATABITS_THIRTEEN        0x0000000AUL         /**< Mode THIRTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FOURTEEN        0x0000000BUL         /**< Mode FOURTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_FIFTEEN         0x0000000CUL         /**< Mode FIFTEEN for USART_FRAME */
#define _USART_FRAME_DATABITS_SIXTEEN         0x0000000DUL         /**< Mode SIXTEEN for USART_FRAME */
#define _USART_FRAME_PARITY_SHIFT             8                    /**< Shift value for USART_PARITY */
#define _USART_FRAME_PARITY_MASK              0x300UL              /**< Bit mask for USART_PARITY */
#define USART_FRAME_PARITY_DEFAULT            (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_PARITY_NONE               (0x00000000UL << 8)  /**< Shifted mode NONE for USART_FRAME */
#define USART_FRAME_PARITY_EVEN               (0x00000002UL << 8)  /**< Shifted mode EVEN for USART_FRAME */
#define USART_FRAME_PARITY_ODD                (0x00000003UL << 8)  /**< Shifted mode ODD for USART_FRAME */
#define _USART_FRAME_PARITY_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_PARITY_NONE              0x00000000UL         /**< Mode NONE for USART_FRAME */
#define _USART_FRAME_PARITY_EVEN              0x00000002UL         /**< Mode EVEN for USART_FRAME */
#define _USART_FRAME_PARITY_ODD               0x00000003UL         /**< Mode ODD for USART_FRAME */
#define _USART_FRAME_STOPBITS_SHIFT           12                   /**< Shift value for USART_STOPBITS */
#define _USART_FRAME_STOPBITS_MASK            0x3000UL             /**< Bit mask for USART_STOPBITS */
#define USART_FRAME_STOPBITS_HALF             (0x00000000UL << 12) /**< Shifted mode HALF for USART_FRAME */
#define USART_FRAME_STOPBITS_DEFAULT          (0x00000001UL << 12) /**< Shifted mode DEFAULT for USART_FRAME */
#define USART_FRAME_STOPBITS_ONE              (0x00000001UL << 12) /**< Shifted mode ONE for USART_FRAME */
#define USART_FRAME_STOPBITS_ONEANDAHALF      (0x00000002UL << 12) /**< Shifted mode ONEANDAHALF for USART_FRAME */
#define USART_FRAME_STOPBITS_TWO              (0x00000003UL << 12) /**< Shifted mode TWO for USART_FRAME */
#define _USART_FRAME_STOPBITS_HALF            0x00000000UL         /**< Mode HALF for USART_FRAME */
#define _USART_FRAME_STOPBITS_DEFAULT         0x00000001UL         /**< Mode DEFAULT for USART_FRAME */
#define _USART_FRAME_STOPBITS_ONE             0x00000001UL         /**< Mode ONE for USART_FRAME */
#define _USART_FRAME_STOPBITS_ONEANDAHALF     0x00000002UL         /**< Mode ONEANDAHALF for USART_FRAME */
#define _USART_FRAME_STOPBITS_TWO             0x00000003UL         /**< Mode TWO for USART_FRAME */

/* Bit fields for USART TRIGCTRL */
#define _USART_TRIGCTRL_RESETVALUE            0x00000000UL        /**< Default value for USART_TRIGCTRL */
#define _USART_TRIGCTRL_MASK                  0x00000037UL        /**< Mask for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_SHIFT            0                   /**< Shift value for USART_TSEL */
#define _USART_TRIGCTRL_TSEL_MASK             0x7UL               /**< Bit mask for USART_TSEL */
#define USART_TRIGCTRL_TSEL_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH0            (0x00000000UL << 0) /**< Shifted mode PRSCH0 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH1            (0x00000001UL << 0) /**< Shifted mode PRSCH1 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH2            (0x00000002UL << 0) /**< Shifted mode PRSCH2 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH3            (0x00000003UL << 0) /**< Shifted mode PRSCH3 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH4            (0x00000004UL << 0) /**< Shifted mode PRSCH4 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH5            (0x00000005UL << 0) /**< Shifted mode PRSCH5 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH6            (0x00000006UL << 0) /**< Shifted mode PRSCH6 for USART_TRIGCTRL */
#define USART_TRIGCTRL_TSEL_PRSCH7            (0x00000007UL << 0) /**< Shifted mode PRSCH7 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH0           0x00000000UL        /**< Mode PRSCH0 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH1           0x00000001UL        /**< Mode PRSCH1 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH2           0x00000002UL        /**< Mode PRSCH2 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH3           0x00000003UL        /**< Mode PRSCH3 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH4           0x00000004UL        /**< Mode PRSCH4 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH5           0x00000005UL        /**< Mode PRSCH5 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH6           0x00000006UL        /**< Mode PRSCH6 for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TSEL_PRSCH7           0x00000007UL        /**< Mode PRSCH7 for USART_TRIGCTRL */
#define USART_TRIGCTRL_RXTEN                  (0x1UL << 4)        /**< Receive Trigger Enable */
#define _USART_TRIGCTRL_RXTEN_SHIFT           4                   /**< Shift value for USART_RXTEN */
#define _USART_TRIGCTRL_RXTEN_MASK            0x10UL              /**< Bit mask for USART_RXTEN */
#define USART_TRIGCTRL_RXTEN_DEFAULT          (0x00000000UL << 4) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_RXTEN_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_TRIGCTRL */
#define USART_TRIGCTRL_TXTEN                  (0x1UL << 5)        /**< Transmit Trigger Enable */
#define _USART_TRIGCTRL_TXTEN_SHIFT           5                   /**< Shift value for USART_TXTEN */
#define _USART_TRIGCTRL_TXTEN_MASK            0x20UL              /**< Bit mask for USART_TXTEN */
#define USART_TRIGCTRL_TXTEN_DEFAULT          (0x00000000UL << 5) /**< Shifted mode DEFAULT for USART_TRIGCTRL */
#define _USART_TRIGCTRL_TXTEN_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_TRIGCTRL */

/* Bit fields for USART CMD */
#define _USART_CMD_RESETVALUE                 0x00000000UL         /**< Default value for USART_CMD */
#define _USART_CMD_MASK                       0x00000FFFUL         /**< Mask for USART_CMD */
#define USART_CMD_RXEN                        (0x1UL << 0)         /**< Receiver Enable */
#define _USART_CMD_RXEN_SHIFT                 0                    /**< Shift value for USART_RXEN */
#define _USART_CMD_RXEN_MASK                  0x1UL                /**< Bit mask for USART_RXEN */
#define USART_CMD_RXEN_DEFAULT                (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXEN_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXDIS                       (0x1UL << 1)         /**< Receiver Disable */
#define _USART_CMD_RXDIS_SHIFT                1                    /**< Shift value for USART_RXDIS */
#define _USART_CMD_RXDIS_MASK                 0x2UL                /**< Bit mask for USART_RXDIS */
#define USART_CMD_RXDIS_DEFAULT               (0x00000000UL << 1)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXDIS_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXEN                        (0x1UL << 2)         /**< Transmitter Enable */
#define _USART_CMD_TXEN_SHIFT                 2                    /**< Shift value for USART_TXEN */
#define _USART_CMD_TXEN_MASK                  0x4UL                /**< Bit mask for USART_TXEN */
#define USART_CMD_TXEN_DEFAULT                (0x00000000UL << 2)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXEN_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXDIS                       (0x1UL << 3)         /**< Transmitter Disable */
#define _USART_CMD_TXDIS_SHIFT                3                    /**< Shift value for USART_TXDIS */
#define _USART_CMD_TXDIS_MASK                 0x8UL                /**< Bit mask for USART_TXDIS */
#define USART_CMD_TXDIS_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXDIS_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_MASTEREN                    (0x1UL << 4)         /**< Master Enable */
#define _USART_CMD_MASTEREN_SHIFT             4                    /**< Shift value for USART_MASTEREN */
#define _USART_CMD_MASTEREN_MASK              0x10UL               /**< Bit mask for USART_MASTEREN */
#define USART_CMD_MASTEREN_DEFAULT            (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_MASTEREN_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_MASTERDIS                   (0x1UL << 5)         /**< Master Disable */
#define _USART_CMD_MASTERDIS_SHIFT            5                    /**< Shift value for USART_MASTERDIS */
#define _USART_CMD_MASTERDIS_MASK             0x20UL               /**< Bit mask for USART_MASTERDIS */
#define USART_CMD_MASTERDIS_DEFAULT           (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_MASTERDIS_DEFAULT          0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXBLOCKEN                   (0x1UL << 6)         /**< Receiver Block Enable */
#define _USART_CMD_RXBLOCKEN_SHIFT            6                    /**< Shift value for USART_RXBLOCKEN */
#define _USART_CMD_RXBLOCKEN_MASK             0x40UL               /**< Bit mask for USART_RXBLOCKEN */
#define USART_CMD_RXBLOCKEN_DEFAULT           (0x00000000UL << 6)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXBLOCKEN_DEFAULT          0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_RXBLOCKDIS                  (0x1UL << 7)         /**< Receiver Block Disable */
#define _USART_CMD_RXBLOCKDIS_SHIFT           7                    /**< Shift value for USART_RXBLOCKDIS */
#define _USART_CMD_RXBLOCKDIS_MASK            0x80UL               /**< Bit mask for USART_RXBLOCKDIS */
#define USART_CMD_RXBLOCKDIS_DEFAULT          (0x00000000UL << 7)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_RXBLOCKDIS_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXTRIEN                     (0x1UL << 8)         /**< Transmitter Tristate Enable */
#define _USART_CMD_TXTRIEN_SHIFT              8                    /**< Shift value for USART_TXTRIEN */
#define _USART_CMD_TXTRIEN_MASK               0x100UL              /**< Bit mask for USART_TXTRIEN */
#define USART_CMD_TXTRIEN_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXTRIEN_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_TXTRIDIS                    (0x1UL << 9)         /**< Transmitter Tristate Disable */
#define _USART_CMD_TXTRIDIS_SHIFT             9                    /**< Shift value for USART_TXTRIDIS */
#define _USART_CMD_TXTRIDIS_MASK              0x200UL              /**< Bit mask for USART_TXTRIDIS */
#define USART_CMD_TXTRIDIS_DEFAULT            (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_TXTRIDIS_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_CLEARTX                     (0x1UL << 10)        /**< Clear TX */
#define _USART_CMD_CLEARTX_SHIFT              10                   /**< Shift value for USART_CLEARTX */
#define _USART_CMD_CLEARTX_MASK               0x400UL              /**< Bit mask for USART_CLEARTX */
#define USART_CMD_CLEARTX_DEFAULT             (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_CLEARTX_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CMD */
#define USART_CMD_CLEARRX                     (0x1UL << 11)        /**< Clear RX */
#define _USART_CMD_CLEARRX_SHIFT              11                   /**< Shift value for USART_CLEARRX */
#define _USART_CMD_CLEARRX_MASK               0x800UL              /**< Bit mask for USART_CLEARRX */
#define USART_CMD_CLEARRX_DEFAULT             (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_CMD */
#define _USART_CMD_CLEARRX_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_CMD */

/* Bit fields for USART STATUS */
#define _USART_STATUS_RESETVALUE              0x00000040UL        /**< Default value for USART_STATUS */
#define _USART_STATUS_MASK                    0x000001FFUL        /**< Mask for USART_STATUS */
#define USART_STATUS_RXENS                    (0x1UL << 0)        /**< Receiver Enable Status */
#define _USART_STATUS_RXENS_SHIFT             0                   /**< Shift value for USART_RXENS */
#define _USART_STATUS_RXENS_MASK              0x1UL               /**< Bit mask for USART_RXENS */
#define USART_STATUS_RXENS_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXENS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXENS                    (0x1UL << 1)        /**< Transmitter Enable Status */
#define _USART_STATUS_TXENS_SHIFT             1                   /**< Shift value for USART_TXENS */
#define _USART_STATUS_TXENS_MASK              0x2UL               /**< Bit mask for USART_TXENS */
#define USART_STATUS_TXENS_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXENS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_MASTER                   (0x1UL << 2)        /**< SPI Master Mode */
#define _USART_STATUS_MASTER_SHIFT            2                   /**< Shift value for USART_MASTER */
#define _USART_STATUS_MASTER_MASK             0x4UL               /**< Bit mask for USART_MASTER */
#define USART_STATUS_MASTER_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_MASTER_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXBLOCK                  (0x1UL << 3)        /**< Block Incoming Data */
#define _USART_STATUS_RXBLOCK_SHIFT           3                   /**< Shift value for USART_RXBLOCK */
#define _USART_STATUS_RXBLOCK_MASK            0x8UL               /**< Bit mask for USART_RXBLOCK */
#define USART_STATUS_RXBLOCK_DEFAULT          (0x00000000UL << 3) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXBLOCK_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXTRI                    (0x1UL << 4)        /**< Transmitter Tristated */
#define _USART_STATUS_TXTRI_SHIFT             4                   /**< Shift value for USART_TXTRI */
#define _USART_STATUS_TXTRI_MASK              0x10UL              /**< Bit mask for USART_TXTRI */
#define USART_STATUS_TXTRI_DEFAULT            (0x00000000UL << 4) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXTRI_DEFAULT           0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXC                      (0x1UL << 5)        /**< TX Complete */
#define _USART_STATUS_TXC_SHIFT               5                   /**< Shift value for USART_TXC */
#define _USART_STATUS_TXC_MASK                0x20UL              /**< Bit mask for USART_TXC */
#define USART_STATUS_TXC_DEFAULT              (0x00000000UL << 5) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_TXBL                     (0x1UL << 6)        /**< TX Buffer Level */
#define _USART_STATUS_TXBL_SHIFT              6                   /**< Shift value for USART_TXBL */
#define _USART_STATUS_TXBL_MASK               0x40UL              /**< Bit mask for USART_TXBL */
#define USART_STATUS_TXBL_DEFAULT             (0x00000001UL << 6) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_TXBL_DEFAULT            0x00000001UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXDATAV                  (0x1UL << 7)        /**< RX Data Valid */
#define _USART_STATUS_RXDATAV_SHIFT           7                   /**< Shift value for USART_RXDATAV */
#define _USART_STATUS_RXDATAV_MASK            0x80UL              /**< Bit mask for USART_RXDATAV */
#define USART_STATUS_RXDATAV_DEFAULT          (0x00000000UL << 7) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXDATAV_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_STATUS */
#define USART_STATUS_RXFULL                   (0x1UL << 8)        /**< RX FIFO Full */
#define _USART_STATUS_RXFULL_SHIFT            8                   /**< Shift value for USART_RXFULL */
#define _USART_STATUS_RXFULL_MASK             0x100UL             /**< Bit mask for USART_RXFULL */
#define USART_STATUS_RXFULL_DEFAULT           (0x00000000UL << 8) /**< Shifted mode DEFAULT for USART_STATUS */
#define _USART_STATUS_RXFULL_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_STATUS */

/* Bit fields for USART CLKDIV */
#define _USART_CLKDIV_RESETVALUE              0x00000000UL        /**< Default value for USART_CLKDIV */
#define _USART_CLKDIV_MASK                    0x001FFFC0UL        /**< Mask for USART_CLKDIV */
#define _USART_CLKDIV_DIV_SHIFT               6                   /**< Shift value for USART_DIV */
#define _USART_CLKDIV_DIV_MASK                0x1FFFC0UL          /**< Bit mask for USART_DIV */
#define USART_CLKDIV_DIV_DEFAULT              (0x00000000UL << 6) /**< Shifted mode DEFAULT for USART_CLKDIV */
#define _USART_CLKDIV_DIV_DEFAULT             0x00000000UL        /**< Mode DEFAULT for USART_CLKDIV */

/* Bit fields for USART RXDATAX */
#define _USART_RXDATAX_RESETVALUE             0x00000000UL         /**< Default value for USART_RXDATAX */
#define _USART_RXDATAX_MASK                   0x0000C1FFUL         /**< Mask for USART_RXDATAX */
#define _USART_RXDATAX_RXDATA_SHIFT           0                    /**< Shift value for USART_RXDATA */
#define _USART_RXDATAX_RXDATA_MASK            0x1FFUL              /**< Bit mask for USART_RXDATA */
#define USART_RXDATAX_RXDATA_DEFAULT          (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_RXDATA_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_RXDATAX */
#define USART_RXDATAX_PERR                    (0x1UL << 14)        /**< Data Parity Error */
#define _USART_RXDATAX_PERR_SHIFT             14                   /**< Shift value for USART_PERR */
#define _USART_RXDATAX_PERR_MASK              0x4000UL             /**< Bit mask for USART_PERR */
#define USART_RXDATAX_PERR_DEFAULT            (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_PERR_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_RXDATAX */
#define USART_RXDATAX_FERR                    (0x1UL << 15)        /**< Data Framing Error */
#define _USART_RXDATAX_FERR_SHIFT             15                   /**< Shift value for USART_FERR */
#define _USART_RXDATAX_FERR_MASK              0x8000UL             /**< Bit mask for USART_FERR */
#define USART_RXDATAX_FERR_DEFAULT            (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_RXDATAX */
#define _USART_RXDATAX_FERR_DEFAULT           0x00000000UL         /**< Mode DEFAULT for USART_RXDATAX */

/* Bit fields for USART RXDATA */
#define _USART_RXDATA_RESETVALUE              0x00000000UL        /**< Default value for USART_RXDATA */
#define _USART_RXDATA_MASK                    0x000000FFUL        /**< Mask for USART_RXDATA */
#define _USART_RXDATA_RXDATA_SHIFT            0                   /**< Shift value for USART_RXDATA */
#define _USART_RXDATA_RXDATA_MASK             0xFFUL              /**< Bit mask for USART_RXDATA */
#define USART_RXDATA_RXDATA_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_RXDATA */
#define _USART_RXDATA_RXDATA_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_RXDATA */

/* Bit fields for USART RXDOUBLEX */
#define _USART_RXDOUBLEX_RESETVALUE           0x00000000UL         /**< Default value for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_MASK                 0xC1FFC1FFUL         /**< Mask for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA0_SHIFT        0                    /**< Shift value for USART_RXDATA0 */
#define _USART_RXDOUBLEX_RXDATA0_MASK         0x1FFUL              /**< Bit mask for USART_RXDATA0 */
#define USART_RXDOUBLEX_RXDATA0_DEFAULT       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_PERR0                 (0x1UL << 14)        /**< Data Parity Error 0 */
#define _USART_RXDOUBLEX_PERR0_SHIFT          14                   /**< Shift value for USART_PERR0 */
#define _USART_RXDOUBLEX_PERR0_MASK           0x4000UL             /**< Bit mask for USART_PERR0 */
#define USART_RXDOUBLEX_PERR0_DEFAULT         (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_PERR0_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_FERR0                 (0x1UL << 15)        /**< Data Framing Error 0 */
#define _USART_RXDOUBLEX_FERR0_SHIFT          15                   /**< Shift value for USART_FERR0 */
#define _USART_RXDOUBLEX_FERR0_MASK           0x8000UL             /**< Bit mask for USART_FERR0 */
#define USART_RXDOUBLEX_FERR0_DEFAULT         (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_FERR0_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA1_SHIFT        16                   /**< Shift value for USART_RXDATA1 */
#define _USART_RXDOUBLEX_RXDATA1_MASK         0x1FF0000UL          /**< Bit mask for USART_RXDATA1 */
#define USART_RXDOUBLEX_RXDATA1_DEFAULT       (0x00000000UL << 16) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_RXDATA1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_PERR1                 (0x1UL << 30)        /**< Data Parity Error 1 */
#define _USART_RXDOUBLEX_PERR1_SHIFT          30                   /**< Shift value for USART_PERR1 */
#define _USART_RXDOUBLEX_PERR1_MASK           0x40000000UL         /**< Bit mask for USART_PERR1 */
#define USART_RXDOUBLEX_PERR1_DEFAULT         (0x00000000UL << 30) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_PERR1_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */
#define USART_RXDOUBLEX_FERR1                 (0x1UL << 31)        /**< Data Framing Error 1 */
#define _USART_RXDOUBLEX_FERR1_SHIFT          31                   /**< Shift value for USART_FERR1 */
#define _USART_RXDOUBLEX_FERR1_MASK           0x80000000UL         /**< Bit mask for USART_FERR1 */
#define USART_RXDOUBLEX_FERR1_DEFAULT         (0x00000000UL << 31) /**< Shifted mode DEFAULT for USART_RXDOUBLEX */
#define _USART_RXDOUBLEX_FERR1_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEX */

/* Bit fields for USART RXDOUBLE */
#define _USART_RXDOUBLE_RESETVALUE            0x00000000UL        /**< Default value for USART_RXDOUBLE */
#define _USART_RXDOUBLE_MASK                  0x0000FFFFUL        /**< Mask for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA0_SHIFT         0                   /**< Shift value for USART_RXDATA0 */
#define _USART_RXDOUBLE_RXDATA0_MASK          0xFFUL              /**< Bit mask for USART_RXDATA0 */
#define USART_RXDOUBLE_RXDATA0_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA0_DEFAULT       0x00000000UL        /**< Mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA1_SHIFT         8                   /**< Shift value for USART_RXDATA1 */
#define _USART_RXDOUBLE_RXDATA1_MASK          0xFF00UL            /**< Bit mask for USART_RXDATA1 */
#define USART_RXDOUBLE_RXDATA1_DEFAULT        (0x00000000UL << 8) /**< Shifted mode DEFAULT for USART_RXDOUBLE */
#define _USART_RXDOUBLE_RXDATA1_DEFAULT       0x00000000UL        /**< Mode DEFAULT for USART_RXDOUBLE */

/* Bit fields for USART RXDATAXP */
#define _USART_RXDATAXP_RESETVALUE            0x00000000UL         /**< Default value for USART_RXDATAXP */
#define _USART_RXDATAXP_MASK                  0x0000C1FFUL         /**< Mask for USART_RXDATAXP */
#define _USART_RXDATAXP_RXDATAP_SHIFT         0                    /**< Shift value for USART_RXDATAP */
#define _USART_RXDATAXP_RXDATAP_MASK          0x1FFUL              /**< Bit mask for USART_RXDATAP */
#define USART_RXDATAXP_RXDATAP_DEFAULT        (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_RXDATAP_DEFAULT       0x00000000UL         /**< Mode DEFAULT for USART_RXDATAXP */
#define USART_RXDATAXP_PERRP                  (0x1UL << 14)        /**< Data Parity Error Peek */
#define _USART_RXDATAXP_PERRP_SHIFT           14                   /**< Shift value for USART_PERRP */
#define _USART_RXDATAXP_PERRP_MASK            0x4000UL             /**< Bit mask for USART_PERRP */
#define USART_RXDATAXP_PERRP_DEFAULT          (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_PERRP_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_RXDATAXP */
#define USART_RXDATAXP_FERRP                  (0x1UL << 15)        /**< Data Framing Error Peek */
#define _USART_RXDATAXP_FERRP_SHIFT           15                   /**< Shift value for USART_FERRP */
#define _USART_RXDATAXP_FERRP_MASK            0x8000UL             /**< Bit mask for USART_FERRP */
#define USART_RXDATAXP_FERRP_DEFAULT          (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_RXDATAXP */
#define _USART_RXDATAXP_FERRP_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_RXDATAXP */

/* Bit fields for USART RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RESETVALUE          0x00000000UL         /**< Default value for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_MASK                0xC1FFC1FFUL         /**< Mask for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP0_SHIFT      0                    /**< Shift value for USART_RXDATAP0 */
#define _USART_RXDOUBLEXP_RXDATAP0_MASK       0x1FFUL              /**< Bit mask for USART_RXDATAP0 */
#define USART_RXDOUBLEXP_RXDATAP0_DEFAULT     (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP0_DEFAULT    0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_PERRP0               (0x1UL << 14)        /**< Data Parity Error 0 Peek */
#define _USART_RXDOUBLEXP_PERRP0_SHIFT        14                   /**< Shift value for USART_PERRP0 */
#define _USART_RXDOUBLEXP_PERRP0_MASK         0x4000UL             /**< Bit mask for USART_PERRP0 */
#define USART_RXDOUBLEXP_PERRP0_DEFAULT       (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_PERRP0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_FERRP0               (0x1UL << 15)        /**< Data Framing Error 0 Peek */
#define _USART_RXDOUBLEXP_FERRP0_SHIFT        15                   /**< Shift value for USART_FERRP0 */
#define _USART_RXDOUBLEXP_FERRP0_MASK         0x8000UL             /**< Bit mask for USART_FERRP0 */
#define USART_RXDOUBLEXP_FERRP0_DEFAULT       (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_FERRP0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP1_SHIFT      16                   /**< Shift value for USART_RXDATAP1 */
#define _USART_RXDOUBLEXP_RXDATAP1_MASK       0x1FF0000UL          /**< Bit mask for USART_RXDATAP1 */
#define USART_RXDOUBLEXP_RXDATAP1_DEFAULT     (0x00000000UL << 16) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_RXDATAP1_DEFAULT    0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_PERRP1               (0x1UL << 30)        /**< Data Parity Error 1 Peek */
#define _USART_RXDOUBLEXP_PERRP1_SHIFT        30                   /**< Shift value for USART_PERRP1 */
#define _USART_RXDOUBLEXP_PERRP1_MASK         0x40000000UL         /**< Bit mask for USART_PERRP1 */
#define USART_RXDOUBLEXP_PERRP1_DEFAULT       (0x00000000UL << 30) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_PERRP1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */
#define USART_RXDOUBLEXP_FERRP1               (0x1UL << 31)        /**< Data Framing Error 1 Peek */
#define _USART_RXDOUBLEXP_FERRP1_SHIFT        31                   /**< Shift value for USART_FERRP1 */
#define _USART_RXDOUBLEXP_FERRP1_MASK         0x80000000UL         /**< Bit mask for USART_FERRP1 */
#define USART_RXDOUBLEXP_FERRP1_DEFAULT       (0x00000000UL << 31) /**< Shifted mode DEFAULT for USART_RXDOUBLEXP */
#define _USART_RXDOUBLEXP_FERRP1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_RXDOUBLEXP */

/* Bit fields for USART TXDATAX */
#define _USART_TXDATAX_RESETVALUE             0x00000000UL         /**< Default value for USART_TXDATAX */
#define _USART_TXDATAX_MASK                   0x0000F9FFUL         /**< Mask for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_SHIFT          0                    /**< Shift value for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_MASK           0x1FFUL              /**< Bit mask for USART_TXDATAX */
#define USART_TXDATAX_TXDATAX_DEFAULT         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXDATAX_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_UBRXAT                  (0x1UL << 11)        /**< Unblock RX After Transmission */
#define _USART_TXDATAX_UBRXAT_SHIFT           11                   /**< Shift value for USART_UBRXAT */
#define _USART_TXDATAX_UBRXAT_MASK            0x800UL              /**< Bit mask for USART_UBRXAT */
#define USART_TXDATAX_UBRXAT_DEFAULT          (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_UBRXAT_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXTRIAT                 (0x1UL << 12)        /**< Set TXTRI After Transmission */
#define _USART_TXDATAX_TXTRIAT_SHIFT          12                   /**< Shift value for USART_TXTRIAT */
#define _USART_TXDATAX_TXTRIAT_MASK           0x1000UL             /**< Bit mask for USART_TXTRIAT */
#define USART_TXDATAX_TXTRIAT_DEFAULT         (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXTRIAT_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXBREAK                 (0x1UL << 13)        /**< Transmit Data As Break */
#define _USART_TXDATAX_TXBREAK_SHIFT          13                   /**< Shift value for USART_TXBREAK */
#define _USART_TXDATAX_TXBREAK_MASK           0x2000UL             /**< Bit mask for USART_TXBREAK */
#define USART_TXDATAX_TXBREAK_DEFAULT         (0x00000000UL << 13) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXBREAK_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_TXDISAT                 (0x1UL << 14)        /**< Clear TXEN After Transmission */
#define _USART_TXDATAX_TXDISAT_SHIFT          14                   /**< Shift value for USART_TXDISAT */
#define _USART_TXDATAX_TXDISAT_MASK           0x4000UL             /**< Bit mask for USART_TXDISAT */
#define USART_TXDATAX_TXDISAT_DEFAULT         (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_TXDISAT_DEFAULT        0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */
#define USART_TXDATAX_RXENAT                  (0x1UL << 15)        /**< Enable RX After Transmission */
#define _USART_TXDATAX_RXENAT_SHIFT           15                   /**< Shift value for USART_RXENAT */
#define _USART_TXDATAX_RXENAT_MASK            0x8000UL             /**< Bit mask for USART_RXENAT */
#define USART_TXDATAX_RXENAT_DEFAULT          (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_TXDATAX */
#define _USART_TXDATAX_RXENAT_DEFAULT         0x00000000UL         /**< Mode DEFAULT for USART_TXDATAX */

/* Bit fields for USART TXDATA */
#define _USART_TXDATA_RESETVALUE              0x00000000UL        /**< Default value for USART_TXDATA */
#define _USART_TXDATA_MASK                    0x000000FFUL        /**< Mask for USART_TXDATA */
#define _USART_TXDATA_TXDATA_SHIFT            0                   /**< Shift value for USART_TXDATA */
#define _USART_TXDATA_TXDATA_MASK             0xFFUL              /**< Bit mask for USART_TXDATA */
#define USART_TXDATA_TXDATA_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_TXDATA */
#define _USART_TXDATA_TXDATA_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_TXDATA */

/* Bit fields for USART TXDOUBLEX */
#define _USART_TXDOUBLEX_RESETVALUE           0x00000000UL         /**< Default value for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_MASK                 0xF9FFF9FFUL         /**< Mask for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA0_SHIFT        0                    /**< Shift value for USART_TXDATA0 */
#define _USART_TXDOUBLEX_TXDATA0_MASK         0x1FFUL              /**< Bit mask for USART_TXDATA0 */
#define USART_TXDOUBLEX_TXDATA0_DEFAULT       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_UBRXAT0               (0x1UL << 11)        /**< Unblock RX After Transmission */
#define _USART_TXDOUBLEX_UBRXAT0_SHIFT        11                   /**< Shift value for USART_UBRXAT0 */
#define _USART_TXDOUBLEX_UBRXAT0_MASK         0x800UL              /**< Bit mask for USART_UBRXAT0 */
#define USART_TXDOUBLEX_UBRXAT0_DEFAULT       (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_UBRXAT0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXTRIAT0              (0x1UL << 12)        /**< Set TXTRI After Transmission */
#define _USART_TXDOUBLEX_TXTRIAT0_SHIFT       12                   /**< Shift value for USART_TXTRIAT0 */
#define _USART_TXDOUBLEX_TXTRIAT0_MASK        0x1000UL             /**< Bit mask for USART_TXTRIAT0 */
#define USART_TXDOUBLEX_TXTRIAT0_DEFAULT      (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXTRIAT0_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXBREAK0              (0x1UL << 13)        /**< Transmit Data As Break */
#define _USART_TXDOUBLEX_TXBREAK0_SHIFT       13                   /**< Shift value for USART_TXBREAK0 */
#define _USART_TXDOUBLEX_TXBREAK0_MASK        0x2000UL             /**< Bit mask for USART_TXBREAK0 */
#define USART_TXDOUBLEX_TXBREAK0_DEFAULT      (0x00000000UL << 13) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXBREAK0_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXDISAT0              (0x1UL << 14)        /**< Clear TXEN After Transmission */
#define _USART_TXDOUBLEX_TXDISAT0_SHIFT       14                   /**< Shift value for USART_TXDISAT0 */
#define _USART_TXDOUBLEX_TXDISAT0_MASK        0x4000UL             /**< Bit mask for USART_TXDISAT0 */
#define USART_TXDOUBLEX_TXDISAT0_DEFAULT      (0x00000000UL << 14) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDISAT0_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_RXENAT0               (0x1UL << 15)        /**< Enable RX After Transmission */
#define _USART_TXDOUBLEX_RXENAT0_SHIFT        15                   /**< Shift value for USART_RXENAT0 */
#define _USART_TXDOUBLEX_RXENAT0_MASK         0x8000UL             /**< Bit mask for USART_RXENAT0 */
#define USART_TXDOUBLEX_RXENAT0_DEFAULT       (0x00000000UL << 15) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_RXENAT0_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA1_SHIFT        16                   /**< Shift value for USART_TXDATA1 */
#define _USART_TXDOUBLEX_TXDATA1_MASK         0x1FF0000UL          /**< Bit mask for USART_TXDATA1 */
#define USART_TXDOUBLEX_TXDATA1_DEFAULT       (0x00000000UL << 16) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDATA1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_UBRXAT1               (0x1UL << 27)        /**< Unblock RX After Transmission */
#define _USART_TXDOUBLEX_UBRXAT1_SHIFT        27                   /**< Shift value for USART_UBRXAT1 */
#define _USART_TXDOUBLEX_UBRXAT1_MASK         0x8000000UL          /**< Bit mask for USART_UBRXAT1 */
#define USART_TXDOUBLEX_UBRXAT1_DEFAULT       (0x00000000UL << 27) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_UBRXAT1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXTRIAT1              (0x1UL << 28)        /**< Set TXTRI After Transmission */
#define _USART_TXDOUBLEX_TXTRIAT1_SHIFT       28                   /**< Shift value for USART_TXTRIAT1 */
#define _USART_TXDOUBLEX_TXTRIAT1_MASK        0x10000000UL         /**< Bit mask for USART_TXTRIAT1 */
#define USART_TXDOUBLEX_TXTRIAT1_DEFAULT      (0x00000000UL << 28) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXTRIAT1_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXBREAK1              (0x1UL << 29)        /**< Transmit Data As Break */
#define _USART_TXDOUBLEX_TXBREAK1_SHIFT       29                   /**< Shift value for USART_TXBREAK1 */
#define _USART_TXDOUBLEX_TXBREAK1_MASK        0x20000000UL         /**< Bit mask for USART_TXBREAK1 */
#define USART_TXDOUBLEX_TXBREAK1_DEFAULT      (0x00000000UL << 29) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXBREAK1_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_TXDISAT1              (0x1UL << 30)        /**< Clear TXEN After Transmission */
#define _USART_TXDOUBLEX_TXDISAT1_SHIFT       30                   /**< Shift value for USART_TXDISAT1 */
#define _USART_TXDOUBLEX_TXDISAT1_MASK        0x40000000UL         /**< Bit mask for USART_TXDISAT1 */
#define USART_TXDOUBLEX_TXDISAT1_DEFAULT      (0x00000000UL << 30) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_TXDISAT1_DEFAULT     0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */
#define USART_TXDOUBLEX_RXENAT1               (0x1UL << 31)        /**< Enable RX After Transmission */
#define _USART_TXDOUBLEX_RXENAT1_SHIFT        31                   /**< Shift value for USART_RXENAT1 */
#define _USART_TXDOUBLEX_RXENAT1_MASK         0x80000000UL         /**< Bit mask for USART_RXENAT1 */
#define USART_TXDOUBLEX_RXENAT1_DEFAULT       (0x00000000UL << 31) /**< Shifted mode DEFAULT for USART_TXDOUBLEX */
#define _USART_TXDOUBLEX_RXENAT1_DEFAULT      0x00000000UL         /**< Mode DEFAULT for USART_TXDOUBLEX */

/* Bit fields for USART TXDOUBLE */
#define _USART_TXDOUBLE_RESETVALUE            0x00000000UL        /**< Default value for USART_TXDOUBLE */
#define _USART_TXDOUBLE_MASK                  0x0000FFFFUL        /**< Mask for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA0_SHIFT         0                   /**< Shift value for USART_TXDATA0 */
#define _USART_TXDOUBLE_TXDATA0_MASK          0xFFUL              /**< Bit mask for USART_TXDATA0 */
#define USART_TXDOUBLE_TXDATA0_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA0_DEFAULT       0x00000000UL        /**< Mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA1_SHIFT         8                   /**< Shift value for USART_TXDATA1 */
#define _USART_TXDOUBLE_TXDATA1_MASK          0xFF00UL            /**< Bit mask for USART_TXDATA1 */
#define USART_TXDOUBLE_TXDATA1_DEFAULT        (0x00000000UL << 8) /**< Shifted mode DEFAULT for USART_TXDOUBLE */
#define _USART_TXDOUBLE_TXDATA1_DEFAULT       0x00000000UL        /**< Mode DEFAULT for USART_TXDOUBLE */

/* Bit fields for USART IF */
#define _USART_IF_RESETVALUE                  0x00000002UL         /**< Default value for USART_IF */
#define _USART_IF_MASK                        0x00001FFFUL         /**< Mask for USART_IF */
#define USART_IF_TXC                          (0x1UL << 0)         /**< TX Complete Interrupt Flag */
#define _USART_IF_TXC_SHIFT                   0                    /**< Shift value for USART_TXC */
#define _USART_IF_TXC_MASK                    0x1UL                /**< Bit mask for USART_TXC */
#define USART_IF_TXC_DEFAULT                  (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXC_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXBL                         (0x1UL << 1)         /**< TX Buffer Level Interrupt Flag */
#define _USART_IF_TXBL_SHIFT                  1                    /**< Shift value for USART_TXBL */
#define _USART_IF_TXBL_MASK                   0x2UL                /**< Bit mask for USART_TXBL */
#define USART_IF_TXBL_DEFAULT                 (0x00000001UL << 1)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXBL_DEFAULT                0x00000001UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXDATAV                      (0x1UL << 2)         /**< RX Data Valid Interrupt Flag */
#define _USART_IF_RXDATAV_SHIFT               2                    /**< Shift value for USART_RXDATAV */
#define _USART_IF_RXDATAV_MASK                0x4UL                /**< Bit mask for USART_RXDATAV */
#define USART_IF_RXDATAV_DEFAULT              (0x00000000UL << 2)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXDATAV_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXFULL                       (0x1UL << 3)         /**< RX Buffer Full Interrupt Flag */
#define _USART_IF_RXFULL_SHIFT                3                    /**< Shift value for USART_RXFULL */
#define _USART_IF_RXFULL_MASK                 0x8UL                /**< Bit mask for USART_RXFULL */
#define USART_IF_RXFULL_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXFULL_DEFAULT              0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXOF                         (0x1UL << 4)         /**< RX Overflow Interrupt Flag */
#define _USART_IF_RXOF_SHIFT                  4                    /**< Shift value for USART_RXOF */
#define _USART_IF_RXOF_MASK                   0x10UL               /**< Bit mask for USART_RXOF */
#define USART_IF_RXOF_DEFAULT                 (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXOF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_RXUF                         (0x1UL << 5)         /**< RX Underflow Interrupt Flag */
#define _USART_IF_RXUF_SHIFT                  5                    /**< Shift value for USART_RXUF */
#define _USART_IF_RXUF_MASK                   0x20UL               /**< Bit mask for USART_RXUF */
#define USART_IF_RXUF_DEFAULT                 (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_RXUF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXOF                         (0x1UL << 6)         /**< TX Overflow Interrupt Flag */
#define _USART_IF_TXOF_SHIFT                  6                    /**< Shift value for USART_TXOF */
#define _USART_IF_TXOF_MASK                   0x40UL               /**< Bit mask for USART_TXOF */
#define USART_IF_TXOF_DEFAULT                 (0x00000000UL << 6)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXOF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_TXUF                         (0x1UL << 7)         /**< TX Underflow Interrupt Flag */
#define _USART_IF_TXUF_SHIFT                  7                    /**< Shift value for USART_TXUF */
#define _USART_IF_TXUF_MASK                   0x80UL               /**< Bit mask for USART_TXUF */
#define USART_IF_TXUF_DEFAULT                 (0x00000000UL << 7)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_TXUF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_PERR                         (0x1UL << 8)         /**< Parity Error Interrupt Flag */
#define _USART_IF_PERR_SHIFT                  8                    /**< Shift value for USART_PERR */
#define _USART_IF_PERR_MASK                   0x100UL              /**< Bit mask for USART_PERR */
#define USART_IF_PERR_DEFAULT                 (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_PERR_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_FERR                         (0x1UL << 9)         /**< Framing Error Interrupt Flag */
#define _USART_IF_FERR_SHIFT                  9                    /**< Shift value for USART_FERR */
#define _USART_IF_FERR_MASK                   0x200UL              /**< Bit mask for USART_FERR */
#define USART_IF_FERR_DEFAULT                 (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_FERR_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_MPAF                         (0x1UL << 10)        /**< Multi-Processor Address Frame Interrupt Flag */
#define _USART_IF_MPAF_SHIFT                  10                   /**< Shift value for USART_MPAF */
#define _USART_IF_MPAF_MASK                   0x400UL              /**< Bit mask for USART_MPAF */
#define USART_IF_MPAF_DEFAULT                 (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_MPAF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_SSM                          (0x1UL << 11)        /**< Slave-Select In Master Mode Interrupt Flag */
#define _USART_IF_SSM_SHIFT                   11                   /**< Shift value for USART_SSM */
#define _USART_IF_SSM_MASK                    0x800UL              /**< Bit mask for USART_SSM */
#define USART_IF_SSM_DEFAULT                  (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_SSM_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for USART_IF */
#define USART_IF_CCF                          (0x1UL << 12)        /**< Collision Check Fail Interrupt Flag */
#define _USART_IF_CCF_SHIFT                   12                   /**< Shift value for USART_CCF */
#define _USART_IF_CCF_MASK                    0x1000UL             /**< Bit mask for USART_CCF */
#define USART_IF_CCF_DEFAULT                  (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_IF */
#define _USART_IF_CCF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for USART_IF */

/* Bit fields for USART IFS */
#define _USART_IFS_RESETVALUE                 0x00000000UL         /**< Default value for USART_IFS */
#define _USART_IFS_MASK                       0x00001FF9UL         /**< Mask for USART_IFS */
#define USART_IFS_TXC                         (0x1UL << 0)         /**< Set TX Complete Interrupt Flag */
#define _USART_IFS_TXC_SHIFT                  0                    /**< Shift value for USART_TXC */
#define _USART_IFS_TXC_MASK                   0x1UL                /**< Bit mask for USART_TXC */
#define USART_IFS_TXC_DEFAULT                 (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXC_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXFULL                      (0x1UL << 3)         /**< Set RX Buffer Full Interrupt Flag */
#define _USART_IFS_RXFULL_SHIFT               3                    /**< Shift value for USART_RXFULL */
#define _USART_IFS_RXFULL_MASK                0x8UL                /**< Bit mask for USART_RXFULL */
#define USART_IFS_RXFULL_DEFAULT              (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXFULL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXOF                        (0x1UL << 4)         /**< Set RX Overflow Interrupt Flag */
#define _USART_IFS_RXOF_SHIFT                 4                    /**< Shift value for USART_RXOF */
#define _USART_IFS_RXOF_MASK                  0x10UL               /**< Bit mask for USART_RXOF */
#define USART_IFS_RXOF_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_RXUF                        (0x1UL << 5)         /**< Set RX Underflow Interrupt Flag */
#define _USART_IFS_RXUF_SHIFT                 5                    /**< Shift value for USART_RXUF */
#define _USART_IFS_RXUF_MASK                  0x20UL               /**< Bit mask for USART_RXUF */
#define USART_IFS_RXUF_DEFAULT                (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_RXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_TXOF                        (0x1UL << 6)         /**< Set TX Overflow Interrupt Flag */
#define _USART_IFS_TXOF_SHIFT                 6                    /**< Shift value for USART_TXOF */
#define _USART_IFS_TXOF_MASK                  0x40UL               /**< Bit mask for USART_TXOF */
#define USART_IFS_TXOF_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_TXUF                        (0x1UL << 7)         /**< Set TX Underflow Interrupt Flag */
#define _USART_IFS_TXUF_SHIFT                 7                    /**< Shift value for USART_TXUF */
#define _USART_IFS_TXUF_MASK                  0x80UL               /**< Bit mask for USART_TXUF */
#define USART_IFS_TXUF_DEFAULT                (0x00000000UL << 7)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_TXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_PERR                        (0x1UL << 8)         /**< Set Parity Error Interrupt Flag */
#define _USART_IFS_PERR_SHIFT                 8                    /**< Shift value for USART_PERR */
#define _USART_IFS_PERR_MASK                  0x100UL              /**< Bit mask for USART_PERR */
#define USART_IFS_PERR_DEFAULT                (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_PERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_FERR                        (0x1UL << 9)         /**< Set Framing Error Interrupt Flag */
#define _USART_IFS_FERR_SHIFT                 9                    /**< Shift value for USART_FERR */
#define _USART_IFS_FERR_MASK                  0x200UL              /**< Bit mask for USART_FERR */
#define USART_IFS_FERR_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_FERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_MPAF                        (0x1UL << 10)        /**< Set Multi-Processor Address Frame Interrupt Flag */
#define _USART_IFS_MPAF_SHIFT                 10                   /**< Shift value for USART_MPAF */
#define _USART_IFS_MPAF_MASK                  0x400UL              /**< Bit mask for USART_MPAF */
#define USART_IFS_MPAF_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_MPAF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_SSM                         (0x1UL << 11)        /**< Set Slave-Select in Master mode Interrupt Flag */
#define _USART_IFS_SSM_SHIFT                  11                   /**< Shift value for USART_SSM */
#define _USART_IFS_SSM_MASK                   0x800UL              /**< Bit mask for USART_SSM */
#define USART_IFS_SSM_DEFAULT                 (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_SSM_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFS */
#define USART_IFS_CCF                         (0x1UL << 12)        /**< Set Collision Check Fail Interrupt Flag */
#define _USART_IFS_CCF_SHIFT                  12                   /**< Shift value for USART_CCF */
#define _USART_IFS_CCF_MASK                   0x1000UL             /**< Bit mask for USART_CCF */
#define USART_IFS_CCF_DEFAULT                 (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_IFS */
#define _USART_IFS_CCF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFS */

/* Bit fields for USART IFC */
#define _USART_IFC_RESETVALUE                 0x00000000UL         /**< Default value for USART_IFC */
#define _USART_IFC_MASK                       0x00001FF9UL         /**< Mask for USART_IFC */
#define USART_IFC_TXC                         (0x1UL << 0)         /**< Clear TX Complete Interrupt Flag */
#define _USART_IFC_TXC_SHIFT                  0                    /**< Shift value for USART_TXC */
#define _USART_IFC_TXC_MASK                   0x1UL                /**< Bit mask for USART_TXC */
#define USART_IFC_TXC_DEFAULT                 (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXC_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXFULL                      (0x1UL << 3)         /**< Clear RX Buffer Full Interrupt Flag */
#define _USART_IFC_RXFULL_SHIFT               3                    /**< Shift value for USART_RXFULL */
#define _USART_IFC_RXFULL_MASK                0x8UL                /**< Bit mask for USART_RXFULL */
#define USART_IFC_RXFULL_DEFAULT              (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXFULL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXOF                        (0x1UL << 4)         /**< Clear RX Overflow Interrupt Flag */
#define _USART_IFC_RXOF_SHIFT                 4                    /**< Shift value for USART_RXOF */
#define _USART_IFC_RXOF_MASK                  0x10UL               /**< Bit mask for USART_RXOF */
#define USART_IFC_RXOF_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_RXUF                        (0x1UL << 5)         /**< Clear RX Underflow Interrupt Flag */
#define _USART_IFC_RXUF_SHIFT                 5                    /**< Shift value for USART_RXUF */
#define _USART_IFC_RXUF_MASK                  0x20UL               /**< Bit mask for USART_RXUF */
#define USART_IFC_RXUF_DEFAULT                (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_RXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_TXOF                        (0x1UL << 6)         /**< Clear TX Overflow Interrupt Flag */
#define _USART_IFC_TXOF_SHIFT                 6                    /**< Shift value for USART_TXOF */
#define _USART_IFC_TXOF_MASK                  0x40UL               /**< Bit mask for USART_TXOF */
#define USART_IFC_TXOF_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_TXUF                        (0x1UL << 7)         /**< Clear TX Underflow Interrupt Flag */
#define _USART_IFC_TXUF_SHIFT                 7                    /**< Shift value for USART_TXUF */
#define _USART_IFC_TXUF_MASK                  0x80UL               /**< Bit mask for USART_TXUF */
#define USART_IFC_TXUF_DEFAULT                (0x00000000UL << 7)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_TXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_PERR                        (0x1UL << 8)         /**< Clear Parity Error Interrupt Flag */
#define _USART_IFC_PERR_SHIFT                 8                    /**< Shift value for USART_PERR */
#define _USART_IFC_PERR_MASK                  0x100UL              /**< Bit mask for USART_PERR */
#define USART_IFC_PERR_DEFAULT                (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_PERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_FERR                        (0x1UL << 9)         /**< Clear Framing Error Interrupt Flag */
#define _USART_IFC_FERR_SHIFT                 9                    /**< Shift value for USART_FERR */
#define _USART_IFC_FERR_MASK                  0x200UL              /**< Bit mask for USART_FERR */
#define USART_IFC_FERR_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_FERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_MPAF                        (0x1UL << 10)        /**< Clear Multi-Processor Address Frame Interrupt Flag */
#define _USART_IFC_MPAF_SHIFT                 10                   /**< Shift value for USART_MPAF */
#define _USART_IFC_MPAF_MASK                  0x400UL              /**< Bit mask for USART_MPAF */
#define USART_IFC_MPAF_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_MPAF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_SSM                         (0x1UL << 11)        /**< Clear Slave-Select In Master Mode Interrupt Flag */
#define _USART_IFC_SSM_SHIFT                  11                   /**< Shift value for USART_SSM */
#define _USART_IFC_SSM_MASK                   0x800UL              /**< Bit mask for USART_SSM */
#define USART_IFC_SSM_DEFAULT                 (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_SSM_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFC */
#define USART_IFC_CCF                         (0x1UL << 12)        /**< Clear Collision Check Fail Interrupt Flag */
#define _USART_IFC_CCF_SHIFT                  12                   /**< Shift value for USART_CCF */
#define _USART_IFC_CCF_MASK                   0x1000UL             /**< Bit mask for USART_CCF */
#define USART_IFC_CCF_DEFAULT                 (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_IFC */
#define _USART_IFC_CCF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IFC */

/* Bit fields for USART IEN */
#define _USART_IEN_RESETVALUE                 0x00000000UL         /**< Default value for USART_IEN */
#define _USART_IEN_MASK                       0x00001FFFUL         /**< Mask for USART_IEN */
#define USART_IEN_TXC                         (0x1UL << 0)         /**< TX Complete Interrupt Enable */
#define _USART_IEN_TXC_SHIFT                  0                    /**< Shift value for USART_TXC */
#define _USART_IEN_TXC_MASK                   0x1UL                /**< Bit mask for USART_TXC */
#define USART_IEN_TXC_DEFAULT                 (0x00000000UL << 0)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXC_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXBL                        (0x1UL << 1)         /**< TX Buffer Level Interrupt Enable */
#define _USART_IEN_TXBL_SHIFT                 1                    /**< Shift value for USART_TXBL */
#define _USART_IEN_TXBL_MASK                  0x2UL                /**< Bit mask for USART_TXBL */
#define USART_IEN_TXBL_DEFAULT                (0x00000000UL << 1)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXBL_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXDATAV                     (0x1UL << 2)         /**< RX Data Valid Interrupt Enable */
#define _USART_IEN_RXDATAV_SHIFT              2                    /**< Shift value for USART_RXDATAV */
#define _USART_IEN_RXDATAV_MASK               0x4UL                /**< Bit mask for USART_RXDATAV */
#define USART_IEN_RXDATAV_DEFAULT             (0x00000000UL << 2)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXDATAV_DEFAULT            0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXFULL                      (0x1UL << 3)         /**< RX Buffer Full Interrupt Enable */
#define _USART_IEN_RXFULL_SHIFT               3                    /**< Shift value for USART_RXFULL */
#define _USART_IEN_RXFULL_MASK                0x8UL                /**< Bit mask for USART_RXFULL */
#define USART_IEN_RXFULL_DEFAULT              (0x00000000UL << 3)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXFULL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXOF                        (0x1UL << 4)         /**< RX Overflow Interrupt Enable */
#define _USART_IEN_RXOF_SHIFT                 4                    /**< Shift value for USART_RXOF */
#define _USART_IEN_RXOF_MASK                  0x10UL               /**< Bit mask for USART_RXOF */
#define USART_IEN_RXOF_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_RXUF                        (0x1UL << 5)         /**< RX Underflow Interrupt Enable */
#define _USART_IEN_RXUF_SHIFT                 5                    /**< Shift value for USART_RXUF */
#define _USART_IEN_RXUF_MASK                  0x20UL               /**< Bit mask for USART_RXUF */
#define USART_IEN_RXUF_DEFAULT                (0x00000000UL << 5)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_RXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXOF                        (0x1UL << 6)         /**< TX Overflow Interrupt Enable */
#define _USART_IEN_TXOF_SHIFT                 6                    /**< Shift value for USART_TXOF */
#define _USART_IEN_TXOF_MASK                  0x40UL               /**< Bit mask for USART_TXOF */
#define USART_IEN_TXOF_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXOF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_TXUF                        (0x1UL << 7)         /**< TX Underflow Interrupt Enable */
#define _USART_IEN_TXUF_SHIFT                 7                    /**< Shift value for USART_TXUF */
#define _USART_IEN_TXUF_MASK                  0x80UL               /**< Bit mask for USART_TXUF */
#define USART_IEN_TXUF_DEFAULT                (0x00000000UL << 7)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_TXUF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_PERR                        (0x1UL << 8)         /**< Parity Error Interrupt Enable */
#define _USART_IEN_PERR_SHIFT                 8                    /**< Shift value for USART_PERR */
#define _USART_IEN_PERR_MASK                  0x100UL              /**< Bit mask for USART_PERR */
#define USART_IEN_PERR_DEFAULT                (0x00000000UL << 8)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_PERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_FERR                        (0x1UL << 9)         /**< Framing Error Interrupt Enable */
#define _USART_IEN_FERR_SHIFT                 9                    /**< Shift value for USART_FERR */
#define _USART_IEN_FERR_MASK                  0x200UL              /**< Bit mask for USART_FERR */
#define USART_IEN_FERR_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_FERR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_MPAF                        (0x1UL << 10)        /**< Multi-Processor Address Frame Interrupt Enable */
#define _USART_IEN_MPAF_SHIFT                 10                   /**< Shift value for USART_MPAF */
#define _USART_IEN_MPAF_MASK                  0x400UL              /**< Bit mask for USART_MPAF */
#define USART_IEN_MPAF_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_MPAF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_SSM                         (0x1UL << 11)        /**< Slave-Select In Master Mode Interrupt Enable */
#define _USART_IEN_SSM_SHIFT                  11                   /**< Shift value for USART_SSM */
#define _USART_IEN_SSM_MASK                   0x800UL              /**< Bit mask for USART_SSM */
#define USART_IEN_SSM_DEFAULT                 (0x00000000UL << 11) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_SSM_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IEN */
#define USART_IEN_CCF                         (0x1UL << 12)        /**< Collision Check Fail Interrupt Enable */
#define _USART_IEN_CCF_SHIFT                  12                   /**< Shift value for USART_CCF */
#define _USART_IEN_CCF_MASK                   0x1000UL             /**< Bit mask for USART_CCF */
#define USART_IEN_CCF_DEFAULT                 (0x00000000UL << 12) /**< Shifted mode DEFAULT for USART_IEN */
#define _USART_IEN_CCF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for USART_IEN */

/* Bit fields for USART IRCTRL */
#define _USART_IRCTRL_RESETVALUE              0x00000000UL        /**< Default value for USART_IRCTRL */
#define _USART_IRCTRL_MASK                    0x000000FFUL        /**< Mask for USART_IRCTRL */
#define USART_IRCTRL_IREN                     (0x1UL << 0)        /**< Enable IrDA Module */
#define _USART_IRCTRL_IREN_SHIFT              0                   /**< Shift value for USART_IREN */
#define _USART_IRCTRL_IREN_MASK               0x1UL               /**< Bit mask for USART_IREN */
#define USART_IRCTRL_IREN_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IREN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_SHIFT              1                   /**< Shift value for USART_IRPW */
#define _USART_IRCTRL_IRPW_MASK               0x6UL               /**< Bit mask for USART_IRPW */
#define USART_IRCTRL_IRPW_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define USART_IRCTRL_IRPW_ONE                 (0x00000000UL << 1) /**< Shifted mode ONE for USART_IRCTRL */
#define USART_IRCTRL_IRPW_TWO                 (0x00000001UL << 1) /**< Shifted mode TWO for USART_IRCTRL */
#define USART_IRCTRL_IRPW_THREE               (0x00000002UL << 1) /**< Shifted mode THREE for USART_IRCTRL */
#define USART_IRCTRL_IRPW_FOUR                (0x00000003UL << 1) /**< Shifted mode FOUR for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_DEFAULT            0x00000000UL        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_ONE                0x00000000UL        /**< Mode ONE for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_TWO                0x00000001UL        /**< Mode TWO for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_THREE              0x00000002UL        /**< Mode THREE for USART_IRCTRL */
#define _USART_IRCTRL_IRPW_FOUR               0x00000003UL        /**< Mode FOUR for USART_IRCTRL */
#define USART_IRCTRL_IRFILT                   (0x1UL << 3)        /**< IrDA RX Filter */
#define _USART_IRCTRL_IRFILT_SHIFT            3                   /**< Shift value for USART_IRFILT */
#define _USART_IRCTRL_IRFILT_MASK             0x8UL               /**< Bit mask for USART_IRFILT */
#define USART_IRCTRL_IRFILT_DEFAULT           (0x00000000UL << 3) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRFILT_DEFAULT          0x00000000UL        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_SHIFT          4                   /**< Shift value for USART_IRPRSSEL */
#define _USART_IRCTRL_IRPRSSEL_MASK           0x70UL              /**< Bit mask for USART_IRPRSSEL */
#define USART_IRCTRL_IRPRSSEL_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH0          (0x00000000UL << 4) /**< Shifted mode PRSCH0 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH1          (0x00000001UL << 4) /**< Shifted mode PRSCH1 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH2          (0x00000002UL << 4) /**< Shifted mode PRSCH2 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH3          (0x00000003UL << 4) /**< Shifted mode PRSCH3 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH4          (0x00000004UL << 4) /**< Shifted mode PRSCH4 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH5          (0x00000005UL << 4) /**< Shifted mode PRSCH5 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH6          (0x00000006UL << 4) /**< Shifted mode PRSCH6 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSSEL_PRSCH7          (0x00000007UL << 4) /**< Shifted mode PRSCH7 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH0         0x00000000UL        /**< Mode PRSCH0 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH1         0x00000001UL        /**< Mode PRSCH1 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH2         0x00000002UL        /**< Mode PRSCH2 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH3         0x00000003UL        /**< Mode PRSCH3 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH4         0x00000004UL        /**< Mode PRSCH4 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH5         0x00000005UL        /**< Mode PRSCH5 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH6         0x00000006UL        /**< Mode PRSCH6 for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSSEL_PRSCH7         0x00000007UL        /**< Mode PRSCH7 for USART_IRCTRL */
#define USART_IRCTRL_IRPRSEN                  (0x1UL << 7)        /**< IrDA PRS Channel Enable */
#define _USART_IRCTRL_IRPRSEN_SHIFT           7                   /**< Shift value for USART_IRPRSEN */
#define _USART_IRCTRL_IRPRSEN_MASK            0x80UL              /**< Bit mask for USART_IRPRSEN */
#define USART_IRCTRL_IRPRSEN_DEFAULT          (0x00000000UL << 7) /**< Shifted mode DEFAULT for USART_IRCTRL */
#define _USART_IRCTRL_IRPRSEN_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_IRCTRL */

/* Bit fields for USART ROUTE */
#define _USART_ROUTE_RESETVALUE               0x00000000UL        /**< Default value for USART_ROUTE */
#define _USART_ROUTE_MASK                     0x0000030FUL        /**< Mask for USART_ROUTE */
#define USART_ROUTE_RXPEN                     (0x1UL << 0)        /**< RX Pin Enable */
#define _USART_ROUTE_RXPEN_SHIFT              0                   /**< Shift value for USART_RXPEN */
#define _USART_ROUTE_RXPEN_MASK               0x1UL               /**< Bit mask for USART_RXPEN */
#define USART_ROUTE_RXPEN_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_RXPEN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_TXPEN                     (0x1UL << 1)        /**< TX Pin Enable */
#define _USART_ROUTE_TXPEN_SHIFT              1                   /**< Shift value for USART_TXPEN */
#define _USART_ROUTE_TXPEN_MASK               0x2UL               /**< Bit mask for USART_TXPEN */
#define USART_ROUTE_TXPEN_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_TXPEN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_CSPEN                     (0x1UL << 2)        /**< CS Pin Enable */
#define _USART_ROUTE_CSPEN_SHIFT              2                   /**< Shift value for USART_CSPEN */
#define _USART_ROUTE_CSPEN_MASK               0x4UL               /**< Bit mask for USART_CSPEN */
#define USART_ROUTE_CSPEN_DEFAULT             (0x00000000UL << 2) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_CSPEN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_CLKPEN                    (0x1UL << 3)        /**< CLK Pin Enable */
#define _USART_ROUTE_CLKPEN_SHIFT             3                   /**< Shift value for USART_CLKPEN */
#define _USART_ROUTE_CLKPEN_MASK              0x8UL               /**< Bit mask for USART_CLKPEN */
#define USART_ROUTE_CLKPEN_DEFAULT            (0x00000000UL << 3) /**< Shifted mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_CLKPEN_DEFAULT           0x00000000UL        /**< Mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_LOCATION_SHIFT           8                   /**< Shift value for USART_LOCATION */
#define _USART_ROUTE_LOCATION_MASK            0x300UL             /**< Bit mask for USART_LOCATION */
#define USART_ROUTE_LOCATION_DEFAULT          (0x00000000UL << 8) /**< Shifted mode DEFAULT for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC0             (0x00000000UL << 8) /**< Shifted mode LOC0 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC1             (0x00000001UL << 8) /**< Shifted mode LOC1 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC2             (0x00000002UL << 8) /**< Shifted mode LOC2 for USART_ROUTE */
#define USART_ROUTE_LOCATION_LOC3             (0x00000003UL << 8) /**< Shifted mode LOC3 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_DEFAULT         0x00000000UL        /**< Mode DEFAULT for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC0            0x00000000UL        /**< Mode LOC0 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC1            0x00000001UL        /**< Mode LOC1 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC2            0x00000002UL        /**< Mode LOC2 for USART_ROUTE */
#define _USART_ROUTE_LOCATION_LOC3            0x00000003UL        /**< Mode LOC3 for USART_ROUTE */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_LEUART
 * @{
 *****************************************************************************/

/* Bit fields for LEUART CTRL */
#define _LEUART_CTRL_RESETVALUE                  0x00000000UL         /**< Default value for LEUART_CTRL */
#define _LEUART_CTRL_MASK                        0x0000FFFFUL         /**< Mask for LEUART_CTRL */
#define LEUART_CTRL_AUTOTRI                      (0x1UL << 0)         /**< Automatic Transmitter Tristate */
#define _LEUART_CTRL_AUTOTRI_SHIFT               0                    /**< Shift value for LEUART_AUTOTRI */
#define _LEUART_CTRL_AUTOTRI_MASK                0x1UL                /**< Bit mask for LEUART_AUTOTRI */
#define LEUART_CTRL_AUTOTRI_DEFAULT              (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_AUTOTRI_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS                     (0x1UL << 1)         /**< Data-Bit Mode */
#define _LEUART_CTRL_DATABITS_SHIFT              1                    /**< Shift value for LEUART_DATABITS */
#define _LEUART_CTRL_DATABITS_MASK               0x2UL                /**< Bit mask for LEUART_DATABITS */
#define LEUART_CTRL_DATABITS_DEFAULT             (0x00000000UL << 1)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS_EIGHT               (0x00000000UL << 1)  /**< Shifted mode EIGHT for LEUART_CTRL */
#define LEUART_CTRL_DATABITS_NINE                (0x00000001UL << 1)  /**< Shifted mode NINE for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_DEFAULT            0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_EIGHT              0x00000000UL         /**< Mode EIGHT for LEUART_CTRL */
#define _LEUART_CTRL_DATABITS_NINE               0x00000001UL         /**< Mode NINE for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_SHIFT                2                    /**< Shift value for LEUART_PARITY */
#define _LEUART_CTRL_PARITY_MASK                 0xCUL                /**< Bit mask for LEUART_PARITY */
#define LEUART_CTRL_PARITY_DEFAULT               (0x00000000UL << 2)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_PARITY_NONE                  (0x00000000UL << 2)  /**< Shifted mode NONE for LEUART_CTRL */
#define LEUART_CTRL_PARITY_EVEN                  (0x00000002UL << 2)  /**< Shifted mode EVEN for LEUART_CTRL */
#define LEUART_CTRL_PARITY_ODD                   (0x00000003UL << 2)  /**< Shifted mode ODD for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_DEFAULT              0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_NONE                 0x00000000UL         /**< Mode NONE for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_EVEN                 0x00000002UL         /**< Mode EVEN for LEUART_CTRL */
#define _LEUART_CTRL_PARITY_ODD                  0x00000003UL         /**< Mode ODD for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS                     (0x1UL << 4)         /**< Stop-Bit Mode */
#define _LEUART_CTRL_STOPBITS_SHIFT              4                    /**< Shift value for LEUART_STOPBITS */
#define _LEUART_CTRL_STOPBITS_MASK               0x10UL               /**< Bit mask for LEUART_STOPBITS */
#define LEUART_CTRL_STOPBITS_DEFAULT             (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS_ONE                 (0x00000000UL << 4)  /**< Shifted mode ONE for LEUART_CTRL */
#define LEUART_CTRL_STOPBITS_TWO                 (0x00000001UL << 4)  /**< Shifted mode TWO for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_DEFAULT            0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_ONE                0x00000000UL         /**< Mode ONE for LEUART_CTRL */
#define _LEUART_CTRL_STOPBITS_TWO                0x00000001UL         /**< Mode TWO for LEUART_CTRL */
#define LEUART_CTRL_INV                          (0x1UL << 5)         /**< Invert Input And Output */
#define _LEUART_CTRL_INV_SHIFT                   5                    /**< Shift value for LEUART_INV */
#define _LEUART_CTRL_INV_MASK                    0x20UL               /**< Bit mask for LEUART_INV */
#define LEUART_CTRL_INV_DEFAULT                  (0x00000000UL << 5)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_INV_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_ERRSDMA                      (0x1UL << 6)         /**< Clear RX DMA On Error */
#define _LEUART_CTRL_ERRSDMA_SHIFT               6                    /**< Shift value for LEUART_ERRSDMA */
#define _LEUART_CTRL_ERRSDMA_MASK                0x40UL               /**< Bit mask for LEUART_ERRSDMA */
#define LEUART_CTRL_ERRSDMA_DEFAULT              (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_ERRSDMA_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_LOOPBK                       (0x1UL << 7)         /**< Loopback Enable */
#define _LEUART_CTRL_LOOPBK_SHIFT                7                    /**< Shift value for LEUART_LOOPBK */
#define _LEUART_CTRL_LOOPBK_MASK                 0x80UL               /**< Bit mask for LEUART_LOOPBK */
#define LEUART_CTRL_LOOPBK_DEFAULT               (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_LOOPBK_DEFAULT              0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_SFUBRX                       (0x1UL << 8)         /**< Start-Frame UnBlock RX */
#define _LEUART_CTRL_SFUBRX_SHIFT                8                    /**< Shift value for LEUART_SFUBRX */
#define _LEUART_CTRL_SFUBRX_MASK                 0x100UL              /**< Bit mask for LEUART_SFUBRX */
#define LEUART_CTRL_SFUBRX_DEFAULT               (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_SFUBRX_DEFAULT              0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_MPM                          (0x1UL << 9)         /**< Multi-Processor Mode */
#define _LEUART_CTRL_MPM_SHIFT                   9                    /**< Shift value for LEUART_MPM */
#define _LEUART_CTRL_MPM_MASK                    0x200UL              /**< Bit mask for LEUART_MPM */
#define LEUART_CTRL_MPM_DEFAULT                  (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_MPM_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_MPAB                         (0x1UL << 10)        /**< Multi-Processor Address-Bit */
#define _LEUART_CTRL_MPAB_SHIFT                  10                   /**< Shift value for LEUART_MPAB */
#define _LEUART_CTRL_MPAB_MASK                   0x400UL              /**< Bit mask for LEUART_MPAB */
#define LEUART_CTRL_MPAB_DEFAULT                 (0x00000000UL << 10) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_MPAB_DEFAULT                0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_BIT8DV                       (0x1UL << 11)        /**< Bit 8 Default Value */
#define _LEUART_CTRL_BIT8DV_SHIFT                11                   /**< Shift value for LEUART_BIT8DV */
#define _LEUART_CTRL_BIT8DV_MASK                 0x800UL              /**< Bit mask for LEUART_BIT8DV */
#define LEUART_CTRL_BIT8DV_DEFAULT               (0x00000000UL << 11) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_BIT8DV_DEFAULT              0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_RXDMAWU                      (0x1UL << 12)        /**< RX DMA Wakeup */
#define _LEUART_CTRL_RXDMAWU_SHIFT               12                   /**< Shift value for LEUART_RXDMAWU */
#define _LEUART_CTRL_RXDMAWU_MASK                0x1000UL             /**< Bit mask for LEUART_RXDMAWU */
#define LEUART_CTRL_RXDMAWU_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_RXDMAWU_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_TXDMAWU                      (0x1UL << 13)        /**< TX DMA Wakeup */
#define _LEUART_CTRL_TXDMAWU_SHIFT               13                   /**< Shift value for LEUART_TXDMAWU */
#define _LEUART_CTRL_TXDMAWU_MASK                0x2000UL             /**< Bit mask for LEUART_TXDMAWU */
#define LEUART_CTRL_TXDMAWU_DEFAULT              (0x00000000UL << 13) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDMAWU_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_SHIFT               14                   /**< Shift value for LEUART_TXDELAY */
#define _LEUART_CTRL_TXDELAY_MASK                0xC000UL             /**< Bit mask for LEUART_TXDELAY */
#define LEUART_CTRL_TXDELAY_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_NONE                 (0x00000000UL << 14) /**< Shifted mode NONE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_SINGLE               (0x00000001UL << 14) /**< Shifted mode SINGLE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_DOUBLE               (0x00000002UL << 14) /**< Shifted mode DOUBLE for LEUART_CTRL */
#define LEUART_CTRL_TXDELAY_TRIPLE               (0x00000003UL << 14) /**< Shifted mode TRIPLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_NONE                0x00000000UL         /**< Mode NONE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_SINGLE              0x00000001UL         /**< Mode SINGLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_DOUBLE              0x00000002UL         /**< Mode DOUBLE for LEUART_CTRL */
#define _LEUART_CTRL_TXDELAY_TRIPLE              0x00000003UL         /**< Mode TRIPLE for LEUART_CTRL */

/* Bit fields for LEUART CMD */
#define _LEUART_CMD_RESETVALUE                   0x00000000UL        /**< Default value for LEUART_CMD */
#define _LEUART_CMD_MASK                         0x000000FFUL        /**< Mask for LEUART_CMD */
#define LEUART_CMD_RXEN                          (0x1UL << 0)        /**< Receiver Enable */
#define _LEUART_CMD_RXEN_SHIFT                   0                   /**< Shift value for LEUART_RXEN */
#define _LEUART_CMD_RXEN_MASK                    0x1UL               /**< Bit mask for LEUART_RXEN */
#define LEUART_CMD_RXEN_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXEN_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXDIS                         (0x1UL << 1)        /**< Receiver Disable */
#define _LEUART_CMD_RXDIS_SHIFT                  1                   /**< Shift value for LEUART_RXDIS */
#define _LEUART_CMD_RXDIS_MASK                   0x2UL               /**< Bit mask for LEUART_RXDIS */
#define LEUART_CMD_RXDIS_DEFAULT                 (0x00000000UL << 1) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXDIS_DEFAULT                0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_TXEN                          (0x1UL << 2)        /**< Transmitter Enable */
#define _LEUART_CMD_TXEN_SHIFT                   2                   /**< Shift value for LEUART_TXEN */
#define _LEUART_CMD_TXEN_MASK                    0x4UL               /**< Bit mask for LEUART_TXEN */
#define LEUART_CMD_TXEN_DEFAULT                  (0x00000000UL << 2) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_TXEN_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_TXDIS                         (0x1UL << 3)        /**< Transmitter Disable */
#define _LEUART_CMD_TXDIS_SHIFT                  3                   /**< Shift value for LEUART_TXDIS */
#define _LEUART_CMD_TXDIS_MASK                   0x8UL               /**< Bit mask for LEUART_TXDIS */
#define LEUART_CMD_TXDIS_DEFAULT                 (0x00000000UL << 3) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_TXDIS_DEFAULT                0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXBLOCKEN                     (0x1UL << 4)        /**< Receiver Block Enable */
#define _LEUART_CMD_RXBLOCKEN_SHIFT              4                   /**< Shift value for LEUART_RXBLOCKEN */
#define _LEUART_CMD_RXBLOCKEN_MASK               0x10UL              /**< Bit mask for LEUART_RXBLOCKEN */
#define LEUART_CMD_RXBLOCKEN_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXBLOCKEN_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_RXBLOCKDIS                    (0x1UL << 5)        /**< Receiver Block Disable */
#define _LEUART_CMD_RXBLOCKDIS_SHIFT             5                   /**< Shift value for LEUART_RXBLOCKDIS */
#define _LEUART_CMD_RXBLOCKDIS_MASK              0x20UL              /**< Bit mask for LEUART_RXBLOCKDIS */
#define LEUART_CMD_RXBLOCKDIS_DEFAULT            (0x00000000UL << 5) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_RXBLOCKDIS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_CLEARTX                       (0x1UL << 6)        /**< Clear TX */
#define _LEUART_CMD_CLEARTX_SHIFT                6                   /**< Shift value for LEUART_CLEARTX */
#define _LEUART_CMD_CLEARTX_MASK                 0x40UL              /**< Bit mask for LEUART_CLEARTX */
#define LEUART_CMD_CLEARTX_DEFAULT               (0x00000000UL << 6) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_CLEARTX_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */
#define LEUART_CMD_CLEARRX                       (0x1UL << 7)        /**< Clear RX */
#define _LEUART_CMD_CLEARRX_SHIFT                7                   /**< Shift value for LEUART_CLEARRX */
#define _LEUART_CMD_CLEARRX_MASK                 0x80UL              /**< Bit mask for LEUART_CLEARRX */
#define LEUART_CMD_CLEARRX_DEFAULT               (0x00000000UL << 7) /**< Shifted mode DEFAULT for LEUART_CMD */
#define _LEUART_CMD_CLEARRX_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LEUART_CMD */

/* Bit fields for LEUART STATUS */
#define _LEUART_STATUS_RESETVALUE                0x00000010UL        /**< Default value for LEUART_STATUS */
#define _LEUART_STATUS_MASK                      0x0000003FUL        /**< Mask for LEUART_STATUS */
#define LEUART_STATUS_RXENS                      (0x1UL << 0)        /**< Receiver Enable Status */
#define _LEUART_STATUS_RXENS_SHIFT               0                   /**< Shift value for LEUART_RXENS */
#define _LEUART_STATUS_RXENS_MASK                0x1UL               /**< Bit mask for LEUART_RXENS */
#define LEUART_STATUS_RXENS_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXENS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXENS                      (0x1UL << 1)        /**< Transmitter Enable Status */
#define _LEUART_STATUS_TXENS_SHIFT               1                   /**< Shift value for LEUART_TXENS */
#define _LEUART_STATUS_TXENS_MASK                0x2UL               /**< Bit mask for LEUART_TXENS */
#define LEUART_STATUS_TXENS_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXENS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_RXBLOCK                    (0x1UL << 2)        /**< Block Incoming Data */
#define _LEUART_STATUS_RXBLOCK_SHIFT             2                   /**< Shift value for LEUART_RXBLOCK */
#define _LEUART_STATUS_RXBLOCK_MASK              0x4UL               /**< Bit mask for LEUART_RXBLOCK */
#define LEUART_STATUS_RXBLOCK_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXBLOCK_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXC                        (0x1UL << 3)        /**< TX Complete */
#define _LEUART_STATUS_TXC_SHIFT                 3                   /**< Shift value for LEUART_TXC */
#define _LEUART_STATUS_TXC_MASK                  0x8UL               /**< Bit mask for LEUART_TXC */
#define LEUART_STATUS_TXC_DEFAULT                (0x00000000UL << 3) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXC_DEFAULT               0x00000000UL        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_TXBL                       (0x1UL << 4)        /**< TX Buffer Level */
#define _LEUART_STATUS_TXBL_SHIFT                4                   /**< Shift value for LEUART_TXBL */
#define _LEUART_STATUS_TXBL_MASK                 0x10UL              /**< Bit mask for LEUART_TXBL */
#define LEUART_STATUS_TXBL_DEFAULT               (0x00000001UL << 4) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_TXBL_DEFAULT              0x00000001UL        /**< Mode DEFAULT for LEUART_STATUS */
#define LEUART_STATUS_RXDATAV                    (0x1UL << 5)        /**< RX Data Valid */
#define _LEUART_STATUS_RXDATAV_SHIFT             5                   /**< Shift value for LEUART_RXDATAV */
#define _LEUART_STATUS_RXDATAV_MASK              0x20UL              /**< Bit mask for LEUART_RXDATAV */
#define LEUART_STATUS_RXDATAV_DEFAULT            (0x00000000UL << 5) /**< Shifted mode DEFAULT for LEUART_STATUS */
#define _LEUART_STATUS_RXDATAV_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LEUART_STATUS */

/* Bit fields for LEUART CLKDIV */
#define _LEUART_CLKDIV_RESETVALUE                0x00000000UL        /**< Default value for LEUART_CLKDIV */
#define _LEUART_CLKDIV_MASK                      0x00007FF8UL        /**< Mask for LEUART_CLKDIV */
#define _LEUART_CLKDIV_DIV_SHIFT                 3                   /**< Shift value for LEUART_DIV */
#define _LEUART_CLKDIV_DIV_MASK                  0x7FF8UL            /**< Bit mask for LEUART_DIV */
#define LEUART_CLKDIV_DIV_DEFAULT                (0x00000000UL << 3) /**< Shifted mode DEFAULT for LEUART_CLKDIV */
#define _LEUART_CLKDIV_DIV_DEFAULT               0x00000000UL        /**< Mode DEFAULT for LEUART_CLKDIV */

/* Bit fields for LEUART STARTFRAME */
#define _LEUART_STARTFRAME_RESETVALUE            0x00000000UL        /**< Default value for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_MASK                  0x000001FFUL        /**< Mask for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_SHIFT      0                   /**< Shift value for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_MASK       0x1FFUL             /**< Bit mask for LEUART_STARTFRAME */
#define LEUART_STARTFRAME_STARTFRAME_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_STARTFRAME */
#define _LEUART_STARTFRAME_STARTFRAME_DEFAULT    0x00000000UL        /**< Mode DEFAULT for LEUART_STARTFRAME */

/* Bit fields for LEUART SIGFRAME */
#define _LEUART_SIGFRAME_RESETVALUE              0x00000000UL        /**< Default value for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_MASK                    0x000001FFUL        /**< Mask for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_SHIFT          0                   /**< Shift value for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_MASK           0x1FFUL             /**< Bit mask for LEUART_SIGFRAME */
#define LEUART_SIGFRAME_SIGFRAME_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_SIGFRAME */
#define _LEUART_SIGFRAME_SIGFRAME_DEFAULT        0x00000000UL        /**< Mode DEFAULT for LEUART_SIGFRAME */

/* Bit fields for LEUART RXDATAX */
#define _LEUART_RXDATAX_RESETVALUE               0x00000000UL         /**< Default value for LEUART_RXDATAX */
#define _LEUART_RXDATAX_MASK                     0x0000C1FFUL         /**< Mask for LEUART_RXDATAX */
#define _LEUART_RXDATAX_RXDATA_SHIFT             0                    /**< Shift value for LEUART_RXDATA */
#define _LEUART_RXDATAX_RXDATA_MASK              0x1FFUL              /**< Bit mask for LEUART_RXDATA */
#define LEUART_RXDATAX_RXDATA_DEFAULT            (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_RXDATA_DEFAULT           0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAX */
#define LEUART_RXDATAX_PERR                      (0x1UL << 14)        /**< Receive Data Parity Error */
#define _LEUART_RXDATAX_PERR_SHIFT               14                   /**< Shift value for LEUART_PERR */
#define _LEUART_RXDATAX_PERR_MASK                0x4000UL             /**< Bit mask for LEUART_PERR */
#define LEUART_RXDATAX_PERR_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_PERR_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAX */
#define LEUART_RXDATAX_FERR                      (0x1UL << 15)        /**< Receive Data Framing Error */
#define _LEUART_RXDATAX_FERR_SHIFT               15                   /**< Shift value for LEUART_FERR */
#define _LEUART_RXDATAX_FERR_MASK                0x8000UL             /**< Bit mask for LEUART_FERR */
#define LEUART_RXDATAX_FERR_DEFAULT              (0x00000000UL << 15) /**< Shifted mode DEFAULT for LEUART_RXDATAX */
#define _LEUART_RXDATAX_FERR_DEFAULT             0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAX */

/* Bit fields for LEUART RXDATA */
#define _LEUART_RXDATA_RESETVALUE                0x00000000UL        /**< Default value for LEUART_RXDATA */
#define _LEUART_RXDATA_MASK                      0x000000FFUL        /**< Mask for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_SHIFT              0                   /**< Shift value for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_MASK               0xFFUL              /**< Bit mask for LEUART_RXDATA */
#define LEUART_RXDATA_RXDATA_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_RXDATA */
#define _LEUART_RXDATA_RXDATA_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LEUART_RXDATA */

/* Bit fields for LEUART RXDATAXP */
#define _LEUART_RXDATAXP_RESETVALUE              0x00000000UL         /**< Default value for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_MASK                    0x0000C1FFUL         /**< Mask for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_RXDATAP_SHIFT           0                    /**< Shift value for LEUART_RXDATAP */
#define _LEUART_RXDATAXP_RXDATAP_MASK            0x1FFUL              /**< Bit mask for LEUART_RXDATAP */
#define LEUART_RXDATAXP_RXDATAP_DEFAULT          (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_RXDATAP_DEFAULT         0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAXP */
#define LEUART_RXDATAXP_PERRP                    (0x1UL << 14)        /**< Receive Data Parity Error Peek */
#define _LEUART_RXDATAXP_PERRP_SHIFT             14                   /**< Shift value for LEUART_PERRP */
#define _LEUART_RXDATAXP_PERRP_MASK              0x4000UL             /**< Bit mask for LEUART_PERRP */
#define LEUART_RXDATAXP_PERRP_DEFAULT            (0x00000000UL << 14) /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_PERRP_DEFAULT           0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAXP */
#define LEUART_RXDATAXP_FERRP                    (0x1UL << 15)        /**< Receive Data Framing Error Peek */
#define _LEUART_RXDATAXP_FERRP_SHIFT             15                   /**< Shift value for LEUART_FERRP */
#define _LEUART_RXDATAXP_FERRP_MASK              0x8000UL             /**< Bit mask for LEUART_FERRP */
#define LEUART_RXDATAXP_FERRP_DEFAULT            (0x00000000UL << 15) /**< Shifted mode DEFAULT for LEUART_RXDATAXP */
#define _LEUART_RXDATAXP_FERRP_DEFAULT           0x00000000UL         /**< Mode DEFAULT for LEUART_RXDATAXP */

/* Bit fields for LEUART TXDATAX */
#define _LEUART_TXDATAX_RESETVALUE               0x00000000UL         /**< Default value for LEUART_TXDATAX */
#define _LEUART_TXDATAX_MASK                     0x0000E1FFUL         /**< Mask for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDATA_SHIFT             0                    /**< Shift value for LEUART_TXDATA */
#define _LEUART_TXDATAX_TXDATA_MASK              0x1FFUL              /**< Bit mask for LEUART_TXDATA */
#define LEUART_TXDATAX_TXDATA_DEFAULT            (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDATA_DEFAULT           0x00000000UL         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_TXBREAK                   (0x1UL << 13)        /**< Transmit Data As Break */
#define _LEUART_TXDATAX_TXBREAK_SHIFT            13                   /**< Shift value for LEUART_TXBREAK */
#define _LEUART_TXDATAX_TXBREAK_MASK             0x2000UL             /**< Bit mask for LEUART_TXBREAK */
#define LEUART_TXDATAX_TXBREAK_DEFAULT           (0x00000000UL << 13) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXBREAK_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_TXDISAT                   (0x1UL << 14)        /**< Disable TX After Transmission */
#define _LEUART_TXDATAX_TXDISAT_SHIFT            14                   /**< Shift value for LEUART_TXDISAT */
#define _LEUART_TXDATAX_TXDISAT_MASK             0x4000UL             /**< Bit mask for LEUART_TXDISAT */
#define LEUART_TXDATAX_TXDISAT_DEFAULT           (0x00000000UL << 14) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_TXDISAT_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LEUART_TXDATAX */
#define LEUART_TXDATAX_RXENAT                    (0x1UL << 15)        /**< Enable RX After Transmission */
#define _LEUART_TXDATAX_RXENAT_SHIFT             15                   /**< Shift value for LEUART_RXENAT */
#define _LEUART_TXDATAX_RXENAT_MASK              0x8000UL             /**< Bit mask for LEUART_RXENAT */
#define LEUART_TXDATAX_RXENAT_DEFAULT            (0x00000000UL << 15) /**< Shifted mode DEFAULT for LEUART_TXDATAX */
#define _LEUART_TXDATAX_RXENAT_DEFAULT           0x00000000UL         /**< Mode DEFAULT for LEUART_TXDATAX */

/* Bit fields for LEUART TXDATA */
#define _LEUART_TXDATA_RESETVALUE                0x00000000UL        /**< Default value for LEUART_TXDATA */
#define _LEUART_TXDATA_MASK                      0x000000FFUL        /**< Mask for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_SHIFT              0                   /**< Shift value for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_MASK               0xFFUL              /**< Bit mask for LEUART_TXDATA */
#define LEUART_TXDATA_TXDATA_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_TXDATA */
#define _LEUART_TXDATA_TXDATA_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LEUART_TXDATA */

/* Bit fields for LEUART IF */
#define _LEUART_IF_RESETVALUE                    0x00000002UL         /**< Default value for LEUART_IF */
#define _LEUART_IF_MASK                          0x000007FFUL         /**< Mask for LEUART_IF */
#define LEUART_IF_TXC                            (0x1UL << 0)         /**< TX Complete Interrupt Flag */
#define _LEUART_IF_TXC_SHIFT                     0                    /**< Shift value for LEUART_TXC */
#define _LEUART_IF_TXC_MASK                      0x1UL                /**< Bit mask for LEUART_TXC */
#define LEUART_IF_TXC_DEFAULT                    (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXC_DEFAULT                   0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_TXBL                           (0x1UL << 1)         /**< TX Buffer Level Interrupt Flag */
#define _LEUART_IF_TXBL_SHIFT                    1                    /**< Shift value for LEUART_TXBL */
#define _LEUART_IF_TXBL_MASK                     0x2UL                /**< Bit mask for LEUART_TXBL */
#define LEUART_IF_TXBL_DEFAULT                   (0x00000001UL << 1)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXBL_DEFAULT                  0x00000001UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXDATAV                        (0x1UL << 2)         /**< RX Data Valid Interrupt Flag */
#define _LEUART_IF_RXDATAV_SHIFT                 2                    /**< Shift value for LEUART_RXDATAV */
#define _LEUART_IF_RXDATAV_MASK                  0x4UL                /**< Bit mask for LEUART_RXDATAV */
#define LEUART_IF_RXDATAV_DEFAULT                (0x00000000UL << 2)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXDATAV_DEFAULT               0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXOF                           (0x1UL << 3)         /**< RX Overflow Interrupt Flag */
#define _LEUART_IF_RXOF_SHIFT                    3                    /**< Shift value for LEUART_RXOF */
#define _LEUART_IF_RXOF_MASK                     0x8UL                /**< Bit mask for LEUART_RXOF */
#define LEUART_IF_RXOF_DEFAULT                   (0x00000000UL << 3)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXOF_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_RXUF                           (0x1UL << 4)         /**< RX Underflow Interrupt Flag */
#define _LEUART_IF_RXUF_SHIFT                    4                    /**< Shift value for LEUART_RXUF */
#define _LEUART_IF_RXUF_MASK                     0x10UL               /**< Bit mask for LEUART_RXUF */
#define LEUART_IF_RXUF_DEFAULT                   (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_RXUF_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_TXOF                           (0x1UL << 5)         /**< TX Overflow Interrupt Flag */
#define _LEUART_IF_TXOF_SHIFT                    5                    /**< Shift value for LEUART_TXOF */
#define _LEUART_IF_TXOF_MASK                     0x20UL               /**< Bit mask for LEUART_TXOF */
#define LEUART_IF_TXOF_DEFAULT                   (0x00000000UL << 5)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_TXOF_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_PERR                           (0x1UL << 6)         /**< Parity Error Interrupt Flag */
#define _LEUART_IF_PERR_SHIFT                    6                    /**< Shift value for LEUART_PERR */
#define _LEUART_IF_PERR_MASK                     0x40UL               /**< Bit mask for LEUART_PERR */
#define LEUART_IF_PERR_DEFAULT                   (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_PERR_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_FERR                           (0x1UL << 7)         /**< Framing Error Interrupt Flag */
#define _LEUART_IF_FERR_SHIFT                    7                    /**< Shift value for LEUART_FERR */
#define _LEUART_IF_FERR_MASK                     0x80UL               /**< Bit mask for LEUART_FERR */
#define LEUART_IF_FERR_DEFAULT                   (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_FERR_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_MPAF                           (0x1UL << 8)         /**< Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IF_MPAF_SHIFT                    8                    /**< Shift value for LEUART_MPAF */
#define _LEUART_IF_MPAF_MASK                     0x100UL              /**< Bit mask for LEUART_MPAF */
#define LEUART_IF_MPAF_DEFAULT                   (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_MPAF_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_STARTF                         (0x1UL << 9)         /**< Start Frame Interrupt Flag */
#define _LEUART_IF_STARTF_SHIFT                  9                    /**< Shift value for LEUART_STARTF */
#define _LEUART_IF_STARTF_MASK                   0x200UL              /**< Bit mask for LEUART_STARTF */
#define LEUART_IF_STARTF_DEFAULT                 (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_STARTF_DEFAULT                0x00000000UL         /**< Mode DEFAULT for LEUART_IF */
#define LEUART_IF_SIGF                           (0x1UL << 10)        /**< Signal Frame Interrupt Flag */
#define _LEUART_IF_SIGF_SHIFT                    10                   /**< Shift value for LEUART_SIGF */
#define _LEUART_IF_SIGF_MASK                     0x400UL              /**< Bit mask for LEUART_SIGF */
#define LEUART_IF_SIGF_DEFAULT                   (0x00000000UL << 10) /**< Shifted mode DEFAULT for LEUART_IF */
#define _LEUART_IF_SIGF_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IF */

/* Bit fields for LEUART IFS */
#define _LEUART_IFS_RESETVALUE                   0x00000000UL         /**< Default value for LEUART_IFS */
#define _LEUART_IFS_MASK                         0x000007F9UL         /**< Mask for LEUART_IFS */
#define LEUART_IFS_TXC                           (0x1UL << 0)         /**< Set TX Complete Interrupt Flag */
#define _LEUART_IFS_TXC_SHIFT                    0                    /**< Shift value for LEUART_TXC */
#define _LEUART_IFS_TXC_MASK                     0x1UL                /**< Bit mask for LEUART_TXC */
#define LEUART_IFS_TXC_DEFAULT                   (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_TXC_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_RXOF                          (0x1UL << 3)         /**< Set RX Overflow Interrupt Flag */
#define _LEUART_IFS_RXOF_SHIFT                   3                    /**< Shift value for LEUART_RXOF */
#define _LEUART_IFS_RXOF_MASK                    0x8UL                /**< Bit mask for LEUART_RXOF */
#define LEUART_IFS_RXOF_DEFAULT                  (0x00000000UL << 3)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_RXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_RXUF                          (0x1UL << 4)         /**< Set RX Underflow Interrupt Flag */
#define _LEUART_IFS_RXUF_SHIFT                   4                    /**< Shift value for LEUART_RXUF */
#define _LEUART_IFS_RXUF_MASK                    0x10UL               /**< Bit mask for LEUART_RXUF */
#define LEUART_IFS_RXUF_DEFAULT                  (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_RXUF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_TXOF                          (0x1UL << 5)         /**< Set TX Overflow Interrupt Flag */
#define _LEUART_IFS_TXOF_SHIFT                   5                    /**< Shift value for LEUART_TXOF */
#define _LEUART_IFS_TXOF_MASK                    0x20UL               /**< Bit mask for LEUART_TXOF */
#define LEUART_IFS_TXOF_DEFAULT                  (0x00000000UL << 5)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_TXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_PERR                          (0x1UL << 6)         /**< Set Parity Error Interrupt Flag */
#define _LEUART_IFS_PERR_SHIFT                   6                    /**< Shift value for LEUART_PERR */
#define _LEUART_IFS_PERR_MASK                    0x40UL               /**< Bit mask for LEUART_PERR */
#define LEUART_IFS_PERR_DEFAULT                  (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_PERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_FERR                          (0x1UL << 7)         /**< Set Framing Error Interrupt Flag */
#define _LEUART_IFS_FERR_SHIFT                   7                    /**< Shift value for LEUART_FERR */
#define _LEUART_IFS_FERR_MASK                    0x80UL               /**< Bit mask for LEUART_FERR */
#define LEUART_IFS_FERR_DEFAULT                  (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_FERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_MPAF                          (0x1UL << 8)         /**< Set Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IFS_MPAF_SHIFT                   8                    /**< Shift value for LEUART_MPAF */
#define _LEUART_IFS_MPAF_MASK                    0x100UL              /**< Bit mask for LEUART_MPAF */
#define LEUART_IFS_MPAF_DEFAULT                  (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_MPAF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_STARTF                        (0x1UL << 9)         /**< Set Start Frame Interrupt Flag */
#define _LEUART_IFS_STARTF_SHIFT                 9                    /**< Shift value for LEUART_STARTF */
#define _LEUART_IFS_STARTF_MASK                  0x200UL              /**< Bit mask for LEUART_STARTF */
#define LEUART_IFS_STARTF_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_STARTF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */
#define LEUART_IFS_SIGF                          (0x1UL << 10)        /**< Set Signal Frame Interrupt Flag */
#define _LEUART_IFS_SIGF_SHIFT                   10                   /**< Shift value for LEUART_SIGF */
#define _LEUART_IFS_SIGF_MASK                    0x400UL              /**< Bit mask for LEUART_SIGF */
#define LEUART_IFS_SIGF_DEFAULT                  (0x00000000UL << 10) /**< Shifted mode DEFAULT for LEUART_IFS */
#define _LEUART_IFS_SIGF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFS */

/* Bit fields for LEUART IFC */
#define _LEUART_IFC_RESETVALUE                   0x00000000UL         /**< Default value for LEUART_IFC */
#define _LEUART_IFC_MASK                         0x000007F9UL         /**< Mask for LEUART_IFC */
#define LEUART_IFC_TXC                           (0x1UL << 0)         /**< Clear TX Complete Interrupt Flag */
#define _LEUART_IFC_TXC_SHIFT                    0                    /**< Shift value for LEUART_TXC */
#define _LEUART_IFC_TXC_MASK                     0x1UL                /**< Bit mask for LEUART_TXC */
#define LEUART_IFC_TXC_DEFAULT                   (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_TXC_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_RXOF                          (0x1UL << 3)         /**< Clear RX Overflow Interrupt Flag */
#define _LEUART_IFC_RXOF_SHIFT                   3                    /**< Shift value for LEUART_RXOF */
#define _LEUART_IFC_RXOF_MASK                    0x8UL                /**< Bit mask for LEUART_RXOF */
#define LEUART_IFC_RXOF_DEFAULT                  (0x00000000UL << 3)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_RXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_RXUF                          (0x1UL << 4)         /**< Clear RX Underflow Interrupt Flag */
#define _LEUART_IFC_RXUF_SHIFT                   4                    /**< Shift value for LEUART_RXUF */
#define _LEUART_IFC_RXUF_MASK                    0x10UL               /**< Bit mask for LEUART_RXUF */
#define LEUART_IFC_RXUF_DEFAULT                  (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_RXUF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_TXOF                          (0x1UL << 5)         /**< Clear TX Overflow Interrupt Flag */
#define _LEUART_IFC_TXOF_SHIFT                   5                    /**< Shift value for LEUART_TXOF */
#define _LEUART_IFC_TXOF_MASK                    0x20UL               /**< Bit mask for LEUART_TXOF */
#define LEUART_IFC_TXOF_DEFAULT                  (0x00000000UL << 5)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_TXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_PERR                          (0x1UL << 6)         /**< Clear Parity Error Interrupt Flag */
#define _LEUART_IFC_PERR_SHIFT                   6                    /**< Shift value for LEUART_PERR */
#define _LEUART_IFC_PERR_MASK                    0x40UL               /**< Bit mask for LEUART_PERR */
#define LEUART_IFC_PERR_DEFAULT                  (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_PERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_FERR                          (0x1UL << 7)         /**< Clear Framing Error Interrupt Flag */
#define _LEUART_IFC_FERR_SHIFT                   7                    /**< Shift value for LEUART_FERR */
#define _LEUART_IFC_FERR_MASK                    0x80UL               /**< Bit mask for LEUART_FERR */
#define LEUART_IFC_FERR_DEFAULT                  (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_FERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_MPAF                          (0x1UL << 8)         /**< Clear Multi-Processor Address Frame Interrupt Flag */
#define _LEUART_IFC_MPAF_SHIFT                   8                    /**< Shift value for LEUART_MPAF */
#define _LEUART_IFC_MPAF_MASK                    0x100UL              /**< Bit mask for LEUART_MPAF */
#define LEUART_IFC_MPAF_DEFAULT                  (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_MPAF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_STARTF                        (0x1UL << 9)         /**< Clear Start-Frame Interrupt Flag */
#define _LEUART_IFC_STARTF_SHIFT                 9                    /**< Shift value for LEUART_STARTF */
#define _LEUART_IFC_STARTF_MASK                  0x200UL              /**< Bit mask for LEUART_STARTF */
#define LEUART_IFC_STARTF_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_STARTF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */
#define LEUART_IFC_SIGF                          (0x1UL << 10)        /**< Clear Signal-Frame Interrupt Flag */
#define _LEUART_IFC_SIGF_SHIFT                   10                   /**< Shift value for LEUART_SIGF */
#define _LEUART_IFC_SIGF_MASK                    0x400UL              /**< Bit mask for LEUART_SIGF */
#define LEUART_IFC_SIGF_DEFAULT                  (0x00000000UL << 10) /**< Shifted mode DEFAULT for LEUART_IFC */
#define _LEUART_IFC_SIGF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IFC */

/* Bit fields for LEUART IEN */
#define _LEUART_IEN_RESETVALUE                   0x00000000UL         /**< Default value for LEUART_IEN */
#define _LEUART_IEN_MASK                         0x000007FFUL         /**< Mask for LEUART_IEN */
#define LEUART_IEN_TXC                           (0x1UL << 0)         /**< TX Complete Interrupt Enable */
#define _LEUART_IEN_TXC_SHIFT                    0                    /**< Shift value for LEUART_TXC */
#define _LEUART_IEN_TXC_MASK                     0x1UL                /**< Bit mask for LEUART_TXC */
#define LEUART_IEN_TXC_DEFAULT                   (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXC_DEFAULT                  0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_TXBL                          (0x1UL << 1)         /**< TX Buffer Level Interrupt Enable */
#define _LEUART_IEN_TXBL_SHIFT                   1                    /**< Shift value for LEUART_TXBL */
#define _LEUART_IEN_TXBL_MASK                    0x2UL                /**< Bit mask for LEUART_TXBL */
#define LEUART_IEN_TXBL_DEFAULT                  (0x00000000UL << 1)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXBL_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXDATAV                       (0x1UL << 2)         /**< RX Data Valid Interrupt Enable */
#define _LEUART_IEN_RXDATAV_SHIFT                2                    /**< Shift value for LEUART_RXDATAV */
#define _LEUART_IEN_RXDATAV_MASK                 0x4UL                /**< Bit mask for LEUART_RXDATAV */
#define LEUART_IEN_RXDATAV_DEFAULT               (0x00000000UL << 2)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXDATAV_DEFAULT              0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXOF                          (0x1UL << 3)         /**< RX Overflow Interrupt Enable */
#define _LEUART_IEN_RXOF_SHIFT                   3                    /**< Shift value for LEUART_RXOF */
#define _LEUART_IEN_RXOF_MASK                    0x8UL                /**< Bit mask for LEUART_RXOF */
#define LEUART_IEN_RXOF_DEFAULT                  (0x00000000UL << 3)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_RXUF                          (0x1UL << 4)         /**< RX Underflow Interrupt Enable */
#define _LEUART_IEN_RXUF_SHIFT                   4                    /**< Shift value for LEUART_RXUF */
#define _LEUART_IEN_RXUF_MASK                    0x10UL               /**< Bit mask for LEUART_RXUF */
#define LEUART_IEN_RXUF_DEFAULT                  (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_RXUF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_TXOF                          (0x1UL << 5)         /**< TX Overflow Interrupt Enable */
#define _LEUART_IEN_TXOF_SHIFT                   5                    /**< Shift value for LEUART_TXOF */
#define _LEUART_IEN_TXOF_MASK                    0x20UL               /**< Bit mask for LEUART_TXOF */
#define LEUART_IEN_TXOF_DEFAULT                  (0x00000000UL << 5)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_TXOF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_PERR                          (0x1UL << 6)         /**< Parity Error Interrupt Enable */
#define _LEUART_IEN_PERR_SHIFT                   6                    /**< Shift value for LEUART_PERR */
#define _LEUART_IEN_PERR_MASK                    0x40UL               /**< Bit mask for LEUART_PERR */
#define LEUART_IEN_PERR_DEFAULT                  (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_PERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_FERR                          (0x1UL << 7)         /**< Framing Error Interrupt Enable */
#define _LEUART_IEN_FERR_SHIFT                   7                    /**< Shift value for LEUART_FERR */
#define _LEUART_IEN_FERR_MASK                    0x80UL               /**< Bit mask for LEUART_FERR */
#define LEUART_IEN_FERR_DEFAULT                  (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_FERR_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_MPAF                          (0x1UL << 8)         /**< Multi-Processor Address Frame Interrupt Enable */
#define _LEUART_IEN_MPAF_SHIFT                   8                    /**< Shift value for LEUART_MPAF */
#define _LEUART_IEN_MPAF_MASK                    0x100UL              /**< Bit mask for LEUART_MPAF */
#define LEUART_IEN_MPAF_DEFAULT                  (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_MPAF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_STARTF                        (0x1UL << 9)         /**< Start Frame Interrupt Enable */
#define _LEUART_IEN_STARTF_SHIFT                 9                    /**< Shift value for LEUART_STARTF */
#define _LEUART_IEN_STARTF_MASK                  0x200UL              /**< Bit mask for LEUART_STARTF */
#define LEUART_IEN_STARTF_DEFAULT                (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_STARTF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */
#define LEUART_IEN_SIGF                          (0x1UL << 10)        /**< Signal Frame Interrupt Enable */
#define _LEUART_IEN_SIGF_SHIFT                   10                   /**< Shift value for LEUART_SIGF */
#define _LEUART_IEN_SIGF_MASK                    0x400UL              /**< Bit mask for LEUART_SIGF */
#define LEUART_IEN_SIGF_DEFAULT                  (0x00000000UL << 10) /**< Shifted mode DEFAULT for LEUART_IEN */
#define _LEUART_IEN_SIGF_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for LEUART_IEN */

/* Bit fields for LEUART PULSECTRL */
#define _LEUART_PULSECTRL_RESETVALUE             0x00000000UL        /**< Default value for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_MASK                   0x0000003FUL        /**< Mask for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEW_SHIFT           0                   /**< Shift value for LEUART_PULSEW */
#define _LEUART_PULSECTRL_PULSEW_MASK            0xFUL               /**< Bit mask for LEUART_PULSEW */
#define LEUART_PULSECTRL_PULSEW_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEW_DEFAULT         0x00000000UL        /**< Mode DEFAULT for LEUART_PULSECTRL */
#define LEUART_PULSECTRL_PULSEEN                 (0x1UL << 4)        /**< Pulse Generator/Extender Enable */
#define _LEUART_PULSECTRL_PULSEEN_SHIFT          4                   /**< Shift value for LEUART_PULSEEN */
#define _LEUART_PULSECTRL_PULSEEN_MASK           0x10UL              /**< Bit mask for LEUART_PULSEEN */
#define LEUART_PULSECTRL_PULSEEN_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEEN_DEFAULT        0x00000000UL        /**< Mode DEFAULT for LEUART_PULSECTRL */
#define LEUART_PULSECTRL_PULSEFILT               (0x1UL << 5)        /**< Pulse Filter */
#define _LEUART_PULSECTRL_PULSEFILT_SHIFT        5                   /**< Shift value for LEUART_PULSEFILT */
#define _LEUART_PULSECTRL_PULSEFILT_MASK         0x20UL              /**< Bit mask for LEUART_PULSEFILT */
#define LEUART_PULSECTRL_PULSEFILT_DEFAULT       (0x00000000UL << 5) /**< Shifted mode DEFAULT for LEUART_PULSECTRL */
#define _LEUART_PULSECTRL_PULSEFILT_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LEUART_PULSECTRL */

/* Bit fields for LEUART FREEZE */
#define _LEUART_FREEZE_RESETVALUE                0x00000000UL        /**< Default value for LEUART_FREEZE */
#define _LEUART_FREEZE_MASK                      0x00000001UL        /**< Mask for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE                  (0x1UL << 0)        /**< Register Update Freeze */
#define _LEUART_FREEZE_REGFREEZE_SHIFT           0                   /**< Shift value for LEUART_REGFREEZE */
#define _LEUART_FREEZE_REGFREEZE_MASK            0x1UL               /**< Bit mask for LEUART_REGFREEZE */
#define LEUART_FREEZE_REGFREEZE_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE_UPDATE           (0x00000000UL << 0) /**< Shifted mode UPDATE for LEUART_FREEZE */
#define LEUART_FREEZE_REGFREEZE_FREEZE           (0x00000001UL << 0) /**< Shifted mode FREEZE for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_DEFAULT         0x00000000UL        /**< Mode DEFAULT for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_UPDATE          0x00000000UL        /**< Mode UPDATE for LEUART_FREEZE */
#define _LEUART_FREEZE_REGFREEZE_FREEZE          0x00000001UL        /**< Mode FREEZE for LEUART_FREEZE */

/* Bit fields for LEUART SYNCBUSY */
#define _LEUART_SYNCBUSY_RESETVALUE              0x00000000UL        /**< Default value for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_MASK                    0x000000FFUL        /**< Mask for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CTRL                     (0x1UL << 0)        /**< LEUARTn_CTRL Register Busy */
#define _LEUART_SYNCBUSY_CTRL_SHIFT              0                   /**< Shift value for LEUART_CTRL */
#define _LEUART_SYNCBUSY_CTRL_MASK               0x1UL               /**< Bit mask for LEUART_CTRL */
#define LEUART_SYNCBUSY_CTRL_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CTRL_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CMD                      (0x1UL << 1)        /**< LEUARTn_CMD Register Busy */
#define _LEUART_SYNCBUSY_CMD_SHIFT               1                   /**< Shift value for LEUART_CMD */
#define _LEUART_SYNCBUSY_CMD_MASK                0x2UL               /**< Bit mask for LEUART_CMD */
#define LEUART_SYNCBUSY_CMD_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CMD_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_CLKDIV                   (0x1UL << 2)        /**< LEUARTn_CLKDIV Register Busy */
#define _LEUART_SYNCBUSY_CLKDIV_SHIFT            2                   /**< Shift value for LEUART_CLKDIV */
#define _LEUART_SYNCBUSY_CLKDIV_MASK             0x4UL               /**< Bit mask for LEUART_CLKDIV */
#define LEUART_SYNCBUSY_CLKDIV_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_CLKDIV_DEFAULT          0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_STARTFRAME               (0x1UL << 3)        /**< LEUARTn_STARTFRAME Register Busy */
#define _LEUART_SYNCBUSY_STARTFRAME_SHIFT        3                   /**< Shift value for LEUART_STARTFRAME */
#define _LEUART_SYNCBUSY_STARTFRAME_MASK         0x8UL               /**< Bit mask for LEUART_STARTFRAME */
#define LEUART_SYNCBUSY_STARTFRAME_DEFAULT       (0x00000000UL << 3) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_STARTFRAME_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_SIGFRAME                 (0x1UL << 4)        /**< LEUARTn_SIGFRAME Register Busy */
#define _LEUART_SYNCBUSY_SIGFRAME_SHIFT          4                   /**< Shift value for LEUART_SIGFRAME */
#define _LEUART_SYNCBUSY_SIGFRAME_MASK           0x10UL              /**< Bit mask for LEUART_SIGFRAME */
#define LEUART_SYNCBUSY_SIGFRAME_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_SIGFRAME_DEFAULT        0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_TXDATAX                  (0x1UL << 5)        /**< LEUARTn_TXDATAX Register Busy */
#define _LEUART_SYNCBUSY_TXDATAX_SHIFT           5                   /**< Shift value for LEUART_TXDATAX */
#define _LEUART_SYNCBUSY_TXDATAX_MASK            0x20UL              /**< Bit mask for LEUART_TXDATAX */
#define LEUART_SYNCBUSY_TXDATAX_DEFAULT          (0x00000000UL << 5) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_TXDATAX_DEFAULT         0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_TXDATA                   (0x1UL << 6)        /**< LEUARTn_TXDATA Register Busy */
#define _LEUART_SYNCBUSY_TXDATA_SHIFT            6                   /**< Shift value for LEUART_TXDATA */
#define _LEUART_SYNCBUSY_TXDATA_MASK             0x40UL              /**< Bit mask for LEUART_TXDATA */
#define LEUART_SYNCBUSY_TXDATA_DEFAULT           (0x00000000UL << 6) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_TXDATA_DEFAULT          0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */
#define LEUART_SYNCBUSY_PULSECTRL                (0x1UL << 7)        /**< LEUARTn_PULSECTRL Register Busy */
#define _LEUART_SYNCBUSY_PULSECTRL_SHIFT         7                   /**< Shift value for LEUART_PULSECTRL */
#define _LEUART_SYNCBUSY_PULSECTRL_MASK          0x80UL              /**< Bit mask for LEUART_PULSECTRL */
#define LEUART_SYNCBUSY_PULSECTRL_DEFAULT        (0x00000000UL << 7) /**< Shifted mode DEFAULT for LEUART_SYNCBUSY */
#define _LEUART_SYNCBUSY_PULSECTRL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LEUART_SYNCBUSY */

/* Bit fields for LEUART ROUTE */
#define _LEUART_ROUTE_RESETVALUE                 0x00000000UL        /**< Default value for LEUART_ROUTE */
#define _LEUART_ROUTE_MASK                       0x00000303UL        /**< Mask for LEUART_ROUTE */
#define LEUART_ROUTE_RXPEN                       (0x1UL << 0)        /**< RX Pin Enable */
#define _LEUART_ROUTE_RXPEN_SHIFT                0                   /**< Shift value for LEUART_RXPEN */
#define _LEUART_ROUTE_RXPEN_MASK                 0x1UL               /**< Bit mask for LEUART_RXPEN */
#define LEUART_ROUTE_RXPEN_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_RXPEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LEUART_ROUTE */
#define LEUART_ROUTE_TXPEN                       (0x1UL << 1)        /**< TX Pin Enable */
#define _LEUART_ROUTE_TXPEN_SHIFT                1                   /**< Shift value for LEUART_TXPEN */
#define _LEUART_ROUTE_TXPEN_MASK                 0x2UL               /**< Bit mask for LEUART_TXPEN */
#define LEUART_ROUTE_TXPEN_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_TXPEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_SHIFT             8                   /**< Shift value for LEUART_LOCATION */
#define _LEUART_ROUTE_LOCATION_MASK              0x300UL             /**< Bit mask for LEUART_LOCATION */
#define LEUART_ROUTE_LOCATION_DEFAULT            (0x00000000UL << 8) /**< Shifted mode DEFAULT for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC0               (0x00000000UL << 8) /**< Shifted mode LOC0 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC1               (0x00000001UL << 8) /**< Shifted mode LOC1 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC2               (0x00000002UL << 8) /**< Shifted mode LOC2 for LEUART_ROUTE */
#define LEUART_ROUTE_LOCATION_LOC3               (0x00000003UL << 8) /**< Shifted mode LOC3 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC0              0x00000000UL        /**< Mode LOC0 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC1              0x00000001UL        /**< Mode LOC1 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC2              0x00000002UL        /**< Mode LOC2 for LEUART_ROUTE */
#define _LEUART_ROUTE_LOCATION_LOC3              0x00000003UL        /**< Mode LOC3 for LEUART_ROUTE */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_LETIMER
 * @{
 *****************************************************************************/

/* Bit fields for LETIMER CTRL */
#define _LETIMER_CTRL_RESETVALUE             0x00000000UL         /**< Default value for LETIMER_CTRL */
#define _LETIMER_CTRL_MASK                   0x00001FFFUL         /**< Mask for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_SHIFT          0                    /**< Shift value for LETIMER_REPMODE */
#define _LETIMER_CTRL_REPMODE_MASK           0x3UL                /**< Bit mask for LETIMER_REPMODE */
#define LETIMER_CTRL_REPMODE_DEFAULT         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_FREE            (0x00000000UL << 0)  /**< Shifted mode FREE for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_ONESHOT         (0x00000001UL << 0)  /**< Shifted mode ONESHOT for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_BUFFERED        (0x00000002UL << 0)  /**< Shifted mode BUFFERED for LETIMER_CTRL */
#define LETIMER_CTRL_REPMODE_DOUBLE          (0x00000003UL << 0)  /**< Shifted mode DOUBLE for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_DEFAULT        0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_FREE           0x00000000UL         /**< Mode FREE for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_ONESHOT        0x00000001UL         /**< Mode ONESHOT for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_BUFFERED       0x00000002UL         /**< Mode BUFFERED for LETIMER_CTRL */
#define _LETIMER_CTRL_REPMODE_DOUBLE         0x00000003UL         /**< Mode DOUBLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_SHIFT            2                    /**< Shift value for LETIMER_UFOA0 */
#define _LETIMER_CTRL_UFOA0_MASK             0xCUL                /**< Bit mask for LETIMER_UFOA0 */
#define LETIMER_CTRL_UFOA0_DEFAULT           (0x00000000UL << 2)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_NONE              (0x00000000UL << 2)  /**< Shifted mode NONE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_TOGGLE            (0x00000001UL << 2)  /**< Shifted mode TOGGLE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_PULSE             (0x00000002UL << 2)  /**< Shifted mode PULSE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA0_PWM               (0x00000003UL << 2)  /**< Shifted mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_NONE             0x00000000UL         /**< Mode NONE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_TOGGLE           0x00000001UL         /**< Mode TOGGLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_PULSE            0x00000002UL         /**< Mode PULSE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA0_PWM              0x00000003UL         /**< Mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_SHIFT            4                    /**< Shift value for LETIMER_UFOA1 */
#define _LETIMER_CTRL_UFOA1_MASK             0x30UL               /**< Bit mask for LETIMER_UFOA1 */
#define LETIMER_CTRL_UFOA1_DEFAULT           (0x00000000UL << 4)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_NONE              (0x00000000UL << 4)  /**< Shifted mode NONE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_TOGGLE            (0x00000001UL << 4)  /**< Shifted mode TOGGLE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_PULSE             (0x00000002UL << 4)  /**< Shifted mode PULSE for LETIMER_CTRL */
#define LETIMER_CTRL_UFOA1_PWM               (0x00000003UL << 4)  /**< Shifted mode PWM for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_NONE             0x00000000UL         /**< Mode NONE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_TOGGLE           0x00000001UL         /**< Mode TOGGLE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_PULSE            0x00000002UL         /**< Mode PULSE for LETIMER_CTRL */
#define _LETIMER_CTRL_UFOA1_PWM              0x00000003UL         /**< Mode PWM for LETIMER_CTRL */
#define LETIMER_CTRL_OPOL0                   (0x1UL << 6)         /**< Output 0 Polarity */
#define _LETIMER_CTRL_OPOL0_SHIFT            6                    /**< Shift value for LETIMER_OPOL0 */
#define _LETIMER_CTRL_OPOL0_MASK             0x40UL               /**< Bit mask for LETIMER_OPOL0 */
#define LETIMER_CTRL_OPOL0_DEFAULT           (0x00000000UL << 6)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_OPOL0_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_OPOL1                   (0x1UL << 7)         /**< Output 1 Polarity */
#define _LETIMER_CTRL_OPOL1_SHIFT            7                    /**< Shift value for LETIMER_OPOL1 */
#define _LETIMER_CTRL_OPOL1_MASK             0x80UL               /**< Bit mask for LETIMER_OPOL1 */
#define LETIMER_CTRL_OPOL1_DEFAULT           (0x00000000UL << 7)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_OPOL1_DEFAULT          0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_BUFTOP                  (0x1UL << 8)         /**< Buffered Top */
#define _LETIMER_CTRL_BUFTOP_SHIFT           8                    /**< Shift value for LETIMER_BUFTOP */
#define _LETIMER_CTRL_BUFTOP_MASK            0x100UL              /**< Bit mask for LETIMER_BUFTOP */
#define LETIMER_CTRL_BUFTOP_DEFAULT          (0x00000000UL << 8)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_BUFTOP_DEFAULT         0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_COMP0TOP                (0x1UL << 9)         /**< Compare Value 0 Is Top Value */
#define _LETIMER_CTRL_COMP0TOP_SHIFT         9                    /**< Shift value for LETIMER_COMP0TOP */
#define _LETIMER_CTRL_COMP0TOP_MASK          0x200UL              /**< Bit mask for LETIMER_COMP0TOP */
#define LETIMER_CTRL_COMP0TOP_DEFAULT        (0x00000000UL << 9)  /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_COMP0TOP_DEFAULT       0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_RTCC0TEN                (0x1UL << 10)        /**< RTC Compare 0 Trigger Enable */
#define _LETIMER_CTRL_RTCC0TEN_SHIFT         10                   /**< Shift value for LETIMER_RTCC0TEN */
#define _LETIMER_CTRL_RTCC0TEN_MASK          0x400UL              /**< Bit mask for LETIMER_RTCC0TEN */
#define LETIMER_CTRL_RTCC0TEN_DEFAULT        (0x00000000UL << 10) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_RTCC0TEN_DEFAULT       0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_RTCC1TEN                (0x1UL << 11)        /**< RTC Compare 1 Trigger Enable */
#define _LETIMER_CTRL_RTCC1TEN_SHIFT         11                   /**< Shift value for LETIMER_RTCC1TEN */
#define _LETIMER_CTRL_RTCC1TEN_MASK          0x800UL              /**< Bit mask for LETIMER_RTCC1TEN */
#define LETIMER_CTRL_RTCC1TEN_DEFAULT        (0x00000000UL << 11) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_RTCC1TEN_DEFAULT       0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */
#define LETIMER_CTRL_DEBUGRUN                (0x1UL << 12)        /**< Debug Mode Run Enable */
#define _LETIMER_CTRL_DEBUGRUN_SHIFT         12                   /**< Shift value for LETIMER_DEBUGRUN */
#define _LETIMER_CTRL_DEBUGRUN_MASK          0x1000UL             /**< Bit mask for LETIMER_DEBUGRUN */
#define LETIMER_CTRL_DEBUGRUN_DEFAULT        (0x00000000UL << 12) /**< Shifted mode DEFAULT for LETIMER_CTRL */
#define _LETIMER_CTRL_DEBUGRUN_DEFAULT       0x00000000UL         /**< Mode DEFAULT for LETIMER_CTRL */

/* Bit fields for LETIMER CMD */
#define _LETIMER_CMD_RESETVALUE              0x00000000UL        /**< Default value for LETIMER_CMD */
#define _LETIMER_CMD_MASK                    0x0000001FUL        /**< Mask for LETIMER_CMD */
#define LETIMER_CMD_START                    (0x1UL << 0)        /**< Start LETIMER */
#define _LETIMER_CMD_START_SHIFT             0                   /**< Shift value for LETIMER_START */
#define _LETIMER_CMD_START_MASK              0x1UL               /**< Bit mask for LETIMER_START */
#define LETIMER_CMD_START_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_START_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_STOP                     (0x1UL << 1)        /**< Stop LETIMER */
#define _LETIMER_CMD_STOP_SHIFT              1                   /**< Shift value for LETIMER_STOP */
#define _LETIMER_CMD_STOP_MASK               0x2UL               /**< Bit mask for LETIMER_STOP */
#define LETIMER_CMD_STOP_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_STOP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CLEAR                    (0x1UL << 2)        /**< Clear LETIMER */
#define _LETIMER_CMD_CLEAR_SHIFT             2                   /**< Shift value for LETIMER_CLEAR */
#define _LETIMER_CMD_CLEAR_MASK              0x4UL               /**< Bit mask for LETIMER_CLEAR */
#define LETIMER_CMD_CLEAR_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CLEAR_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CTO0                     (0x1UL << 3)        /**< Clear Toggle Output 0 */
#define _LETIMER_CMD_CTO0_SHIFT              3                   /**< Shift value for LETIMER_CTO0 */
#define _LETIMER_CMD_CTO0_MASK               0x8UL               /**< Bit mask for LETIMER_CTO0 */
#define LETIMER_CMD_CTO0_DEFAULT             (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CTO0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_CMD */
#define LETIMER_CMD_CTO1                     (0x1UL << 4)        /**< Clear Toggle Output 1 */
#define _LETIMER_CMD_CTO1_SHIFT              4                   /**< Shift value for LETIMER_CTO1 */
#define _LETIMER_CMD_CTO1_MASK               0x10UL              /**< Bit mask for LETIMER_CTO1 */
#define LETIMER_CMD_CTO1_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_CMD */
#define _LETIMER_CMD_CTO1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_CMD */

/* Bit fields for LETIMER STATUS */
#define _LETIMER_STATUS_RESETVALUE           0x00000000UL        /**< Default value for LETIMER_STATUS */
#define _LETIMER_STATUS_MASK                 0x00000001UL        /**< Mask for LETIMER_STATUS */
#define LETIMER_STATUS_RUNNING               (0x1UL << 0)        /**< LETIMER Running */
#define _LETIMER_STATUS_RUNNING_SHIFT        0                   /**< Shift value for LETIMER_RUNNING */
#define _LETIMER_STATUS_RUNNING_MASK         0x1UL               /**< Bit mask for LETIMER_RUNNING */
#define LETIMER_STATUS_RUNNING_DEFAULT       (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_STATUS */
#define _LETIMER_STATUS_RUNNING_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LETIMER_STATUS */

/* Bit fields for LETIMER CNT */
#define _LETIMER_CNT_RESETVALUE              0x00000000UL        /**< Default value for LETIMER_CNT */
#define _LETIMER_CNT_MASK                    0x0000FFFFUL        /**< Mask for LETIMER_CNT */
#define _LETIMER_CNT_CNT_SHIFT               0                   /**< Shift value for LETIMER_CNT */
#define _LETIMER_CNT_CNT_MASK                0xFFFFUL            /**< Bit mask for LETIMER_CNT */
#define LETIMER_CNT_CNT_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_CNT */
#define _LETIMER_CNT_CNT_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LETIMER_CNT */

/* Bit fields for LETIMER COMP0 */
#define _LETIMER_COMP0_RESETVALUE            0x00000000UL        /**< Default value for LETIMER_COMP0 */
#define _LETIMER_COMP0_MASK                  0x0000FFFFUL        /**< Mask for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_SHIFT           0                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_MASK            0xFFFFUL            /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_COMP0_COMP0_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_COMP0 */
#define _LETIMER_COMP0_COMP0_DEFAULT         0x00000000UL        /**< Mode DEFAULT for LETIMER_COMP0 */

/* Bit fields for LETIMER COMP1 */
#define _LETIMER_COMP1_RESETVALUE            0x00000000UL        /**< Default value for LETIMER_COMP1 */
#define _LETIMER_COMP1_MASK                  0x0000FFFFUL        /**< Mask for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_SHIFT           0                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_MASK            0xFFFFUL            /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_COMP1_COMP1_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_COMP1 */
#define _LETIMER_COMP1_COMP1_DEFAULT         0x00000000UL        /**< Mode DEFAULT for LETIMER_COMP1 */

/* Bit fields for LETIMER REP0 */
#define _LETIMER_REP0_RESETVALUE             0x00000000UL        /**< Default value for LETIMER_REP0 */
#define _LETIMER_REP0_MASK                   0x000000FFUL        /**< Mask for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_SHIFT             0                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_MASK              0xFFUL              /**< Bit mask for LETIMER_REP0 */
#define LETIMER_REP0_REP0_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_REP0 */
#define _LETIMER_REP0_REP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_REP0 */

/* Bit fields for LETIMER REP1 */
#define _LETIMER_REP1_RESETVALUE             0x00000000UL        /**< Default value for LETIMER_REP1 */
#define _LETIMER_REP1_MASK                   0x000000FFUL        /**< Mask for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_SHIFT             0                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_MASK              0xFFUL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_REP1_REP1_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_REP1 */
#define _LETIMER_REP1_REP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_REP1 */

/* Bit fields for LETIMER IF */
#define _LETIMER_IF_RESETVALUE               0x00000000UL        /**< Default value for LETIMER_IF */
#define _LETIMER_IF_MASK                     0x0000001FUL        /**< Mask for LETIMER_IF */
#define LETIMER_IF_COMP0                     (0x1UL << 0)        /**< Compare Match 0 Interrupt Flag */
#define _LETIMER_IF_COMP0_SHIFT              0                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IF_COMP0_MASK               0x1UL               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IF_COMP0_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_COMP0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_COMP1                     (0x1UL << 1)        /**< Compare Match 1 Interrupt Flag */
#define _LETIMER_IF_COMP1_SHIFT              1                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IF_COMP1_MASK               0x2UL               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IF_COMP1_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_COMP1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_UF                        (0x1UL << 2)        /**< Underflow Interrupt Flag */
#define _LETIMER_IF_UF_SHIFT                 2                   /**< Shift value for LETIMER_UF */
#define _LETIMER_IF_UF_MASK                  0x4UL               /**< Bit mask for LETIMER_UF */
#define LETIMER_IF_UF_DEFAULT                (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_UF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_REP0                      (0x1UL << 3)        /**< Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IF_REP0_SHIFT               3                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IF_REP0_MASK                0x8UL               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IF_REP0_DEFAULT              (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_REP0_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LETIMER_IF */
#define LETIMER_IF_REP1                      (0x1UL << 4)        /**< Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IF_REP1_SHIFT               4                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IF_REP1_MASK                0x10UL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IF_REP1_DEFAULT              (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_IF */
#define _LETIMER_IF_REP1_DEFAULT             0x00000000UL        /**< Mode DEFAULT for LETIMER_IF */

/* Bit fields for LETIMER IFS */
#define _LETIMER_IFS_RESETVALUE              0x00000000UL        /**< Default value for LETIMER_IFS */
#define _LETIMER_IFS_MASK                    0x0000001FUL        /**< Mask for LETIMER_IFS */
#define LETIMER_IFS_COMP0                    (0x1UL << 0)        /**< Set Compare Match 0 Interrupt Flag */
#define _LETIMER_IFS_COMP0_SHIFT             0                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IFS_COMP0_MASK              0x1UL               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IFS_COMP0_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_COMP1                    (0x1UL << 1)        /**< Set Compare Match 1 Interrupt Flag */
#define _LETIMER_IFS_COMP1_SHIFT             1                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IFS_COMP1_MASK              0x2UL               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IFS_COMP1_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_UF                       (0x1UL << 2)        /**< Set Underflow Interrupt Flag */
#define _LETIMER_IFS_UF_SHIFT                2                   /**< Shift value for LETIMER_UF */
#define _LETIMER_IFS_UF_MASK                 0x4UL               /**< Bit mask for LETIMER_UF */
#define LETIMER_IFS_UF_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_REP0                     (0x1UL << 3)        /**< Set Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IFS_REP0_SHIFT              3                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IFS_REP0_MASK               0x8UL               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IFS_REP0_DEFAULT             (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_REP0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IFS */
#define LETIMER_IFS_REP1                     (0x1UL << 4)        /**< Set Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IFS_REP1_SHIFT              4                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IFS_REP1_MASK               0x10UL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IFS_REP1_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_IFS */
#define _LETIMER_IFS_REP1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IFS */

/* Bit fields for LETIMER IFC */
#define _LETIMER_IFC_RESETVALUE              0x00000000UL        /**< Default value for LETIMER_IFC */
#define _LETIMER_IFC_MASK                    0x0000001FUL        /**< Mask for LETIMER_IFC */
#define LETIMER_IFC_COMP0                    (0x1UL << 0)        /**< Clear Compare Match 0 Interrupt Flag */
#define _LETIMER_IFC_COMP0_SHIFT             0                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IFC_COMP0_MASK              0x1UL               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IFC_COMP0_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_COMP1                    (0x1UL << 1)        /**< Clear Compare Match 1 Interrupt Flag */
#define _LETIMER_IFC_COMP1_SHIFT             1                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IFC_COMP1_MASK              0x2UL               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IFC_COMP1_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_UF                       (0x1UL << 2)        /**< Clear Underflow Interrupt Flag */
#define _LETIMER_IFC_UF_SHIFT                2                   /**< Shift value for LETIMER_UF */
#define _LETIMER_IFC_UF_MASK                 0x4UL               /**< Bit mask for LETIMER_UF */
#define LETIMER_IFC_UF_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_REP0                     (0x1UL << 3)        /**< Clear Repeat Counter 0 Interrupt Flag */
#define _LETIMER_IFC_REP0_SHIFT              3                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IFC_REP0_MASK               0x8UL               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IFC_REP0_DEFAULT             (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_REP0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IFC */
#define LETIMER_IFC_REP1                     (0x1UL << 4)        /**< Clear Repeat Counter 1 Interrupt Flag */
#define _LETIMER_IFC_REP1_SHIFT              4                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IFC_REP1_MASK               0x10UL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IFC_REP1_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_IFC */
#define _LETIMER_IFC_REP1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IFC */

/* Bit fields for LETIMER IEN */
#define _LETIMER_IEN_RESETVALUE              0x00000000UL        /**< Default value for LETIMER_IEN */
#define _LETIMER_IEN_MASK                    0x0000001FUL        /**< Mask for LETIMER_IEN */
#define LETIMER_IEN_COMP0                    (0x1UL << 0)        /**< Compare Match 0 Interrupt Enable */
#define _LETIMER_IEN_COMP0_SHIFT             0                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_IEN_COMP0_MASK              0x1UL               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_IEN_COMP0_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_COMP1                    (0x1UL << 1)        /**< Compare Match 1 Interrupt Enable */
#define _LETIMER_IEN_COMP1_SHIFT             1                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_IEN_COMP1_MASK              0x2UL               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_IEN_COMP1_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_UF                       (0x1UL << 2)        /**< Underflow Interrupt Enable */
#define _LETIMER_IEN_UF_SHIFT                2                   /**< Shift value for LETIMER_UF */
#define _LETIMER_IEN_UF_MASK                 0x4UL               /**< Bit mask for LETIMER_UF */
#define LETIMER_IEN_UF_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_REP0                     (0x1UL << 3)        /**< Repeat Counter 0 Interrupt Enable */
#define _LETIMER_IEN_REP0_SHIFT              3                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_IEN_REP0_MASK               0x8UL               /**< Bit mask for LETIMER_REP0 */
#define LETIMER_IEN_REP0_DEFAULT             (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_REP0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IEN */
#define LETIMER_IEN_REP1                     (0x1UL << 4)        /**< Repeat Counter 1 Interrupt Enable */
#define _LETIMER_IEN_REP1_SHIFT              4                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_IEN_REP1_MASK               0x10UL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_IEN_REP1_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_IEN */
#define _LETIMER_IEN_REP1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for LETIMER_IEN */

/* Bit fields for LETIMER FREEZE */
#define _LETIMER_FREEZE_RESETVALUE           0x00000000UL        /**< Default value for LETIMER_FREEZE */
#define _LETIMER_FREEZE_MASK                 0x00000001UL        /**< Mask for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE             (0x1UL << 0)        /**< Register Update Freeze */
#define _LETIMER_FREEZE_REGFREEZE_SHIFT      0                   /**< Shift value for LETIMER_REGFREEZE */
#define _LETIMER_FREEZE_REGFREEZE_MASK       0x1UL               /**< Bit mask for LETIMER_REGFREEZE */
#define LETIMER_FREEZE_REGFREEZE_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE_UPDATE      (0x00000000UL << 0) /**< Shifted mode UPDATE for LETIMER_FREEZE */
#define LETIMER_FREEZE_REGFREEZE_FREEZE      (0x00000001UL << 0) /**< Shifted mode FREEZE for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_DEFAULT    0x00000000UL        /**< Mode DEFAULT for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_UPDATE     0x00000000UL        /**< Mode UPDATE for LETIMER_FREEZE */
#define _LETIMER_FREEZE_REGFREEZE_FREEZE     0x00000001UL        /**< Mode FREEZE for LETIMER_FREEZE */

/* Bit fields for LETIMER SYNCBUSY */
#define _LETIMER_SYNCBUSY_RESETVALUE         0x00000000UL        /**< Default value for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_MASK               0x0000003FUL        /**< Mask for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_CTRL                (0x1UL << 0)        /**< LETIMERn_CTRL Register Busy */
#define _LETIMER_SYNCBUSY_CTRL_SHIFT         0                   /**< Shift value for LETIMER_CTRL */
#define _LETIMER_SYNCBUSY_CTRL_MASK          0x1UL               /**< Bit mask for LETIMER_CTRL */
#define LETIMER_SYNCBUSY_CTRL_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_CTRL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_CMD                 (0x1UL << 1)        /**< LETIMERn_CMD Register Busy */
#define _LETIMER_SYNCBUSY_CMD_SHIFT          1                   /**< Shift value for LETIMER_CMD */
#define _LETIMER_SYNCBUSY_CMD_MASK           0x2UL               /**< Bit mask for LETIMER_CMD */
#define LETIMER_SYNCBUSY_CMD_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_CMD_DEFAULT        0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_COMP0               (0x1UL << 2)        /**< LETIMERn_COMP0 Register Busy */
#define _LETIMER_SYNCBUSY_COMP0_SHIFT        2                   /**< Shift value for LETIMER_COMP0 */
#define _LETIMER_SYNCBUSY_COMP0_MASK         0x4UL               /**< Bit mask for LETIMER_COMP0 */
#define LETIMER_SYNCBUSY_COMP0_DEFAULT       (0x00000000UL << 2) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_COMP0_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_COMP1               (0x1UL << 3)        /**< LETIMERn_COMP1 Register Busy */
#define _LETIMER_SYNCBUSY_COMP1_SHIFT        3                   /**< Shift value for LETIMER_COMP1 */
#define _LETIMER_SYNCBUSY_COMP1_MASK         0x8UL               /**< Bit mask for LETIMER_COMP1 */
#define LETIMER_SYNCBUSY_COMP1_DEFAULT       (0x00000000UL << 3) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_COMP1_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_REP0                (0x1UL << 4)        /**< LETIMERn_REP0 Register Busy */
#define _LETIMER_SYNCBUSY_REP0_SHIFT         4                   /**< Shift value for LETIMER_REP0 */
#define _LETIMER_SYNCBUSY_REP0_MASK          0x10UL              /**< Bit mask for LETIMER_REP0 */
#define LETIMER_SYNCBUSY_REP0_DEFAULT        (0x00000000UL << 4) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_REP0_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */
#define LETIMER_SYNCBUSY_REP1                (0x1UL << 5)        /**< LETIMERn_REP1 Register Busy */
#define _LETIMER_SYNCBUSY_REP1_SHIFT         5                   /**< Shift value for LETIMER_REP1 */
#define _LETIMER_SYNCBUSY_REP1_MASK          0x20UL              /**< Bit mask for LETIMER_REP1 */
#define LETIMER_SYNCBUSY_REP1_DEFAULT        (0x00000000UL << 5) /**< Shifted mode DEFAULT for LETIMER_SYNCBUSY */
#define _LETIMER_SYNCBUSY_REP1_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LETIMER_SYNCBUSY */

/* Bit fields for LETIMER ROUTE */
#define _LETIMER_ROUTE_RESETVALUE            0x00000000UL        /**< Default value for LETIMER_ROUTE */
#define _LETIMER_ROUTE_MASK                  0x00000303UL        /**< Mask for LETIMER_ROUTE */
#define LETIMER_ROUTE_OUT0PEN                (0x1UL << 0)        /**< Output 0 Pin Enable */
#define _LETIMER_ROUTE_OUT0PEN_SHIFT         0                   /**< Shift value for LETIMER_OUT0PEN */
#define _LETIMER_ROUTE_OUT0PEN_MASK          0x1UL               /**< Bit mask for LETIMER_OUT0PEN */
#define LETIMER_ROUTE_OUT0PEN_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_OUT0PEN_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LETIMER_ROUTE */
#define LETIMER_ROUTE_OUT1PEN                (0x1UL << 1)        /**< Output 1 Pin Enable */
#define _LETIMER_ROUTE_OUT1PEN_SHIFT         1                   /**< Shift value for LETIMER_OUT1PEN */
#define _LETIMER_ROUTE_OUT1PEN_MASK          0x2UL               /**< Bit mask for LETIMER_OUT1PEN */
#define LETIMER_ROUTE_OUT1PEN_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_OUT1PEN_DEFAULT       0x00000000UL        /**< Mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_SHIFT        8                   /**< Shift value for LETIMER_LOCATION */
#define _LETIMER_ROUTE_LOCATION_MASK         0x300UL             /**< Bit mask for LETIMER_LOCATION */
#define LETIMER_ROUTE_LOCATION_DEFAULT       (0x00000000UL << 8) /**< Shifted mode DEFAULT for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC0          (0x00000000UL << 8) /**< Shifted mode LOC0 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC1          (0x00000001UL << 8) /**< Shifted mode LOC1 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC2          (0x00000002UL << 8) /**< Shifted mode LOC2 for LETIMER_ROUTE */
#define LETIMER_ROUTE_LOCATION_LOC3          (0x00000003UL << 8) /**< Shifted mode LOC3 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_DEFAULT      0x00000000UL        /**< Mode DEFAULT for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC0         0x00000000UL        /**< Mode LOC0 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC1         0x00000001UL        /**< Mode LOC1 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC2         0x00000002UL        /**< Mode LOC2 for LETIMER_ROUTE */
#define _LETIMER_ROUTE_LOCATION_LOC3         0x00000003UL        /**< Mode LOC3 for LETIMER_ROUTE */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_PCNT
 * @{
 *****************************************************************************/

/* Bit fields for PCNT CTRL */
#define _PCNT_CTRL_RESETVALUE             0x00000000UL        /**< Default value for PCNT_CTRL */
#define _PCNT_CTRL_MASK                   0x0000003FUL        /**< Mask for PCNT_CTRL */
#define _PCNT_CTRL_MODE_SHIFT             0                   /**< Shift value for PCNT_MODE */
#define _PCNT_CTRL_MODE_MASK              0x3UL               /**< Bit mask for PCNT_MODE */
#define PCNT_CTRL_MODE_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_MODE_DISABLE            (0x00000000UL << 0) /**< Shifted mode DISABLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_OVSSINGLE          (0x00000001UL << 0) /**< Shifted mode OVSSINGLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_EXTCLKSINGLE       (0x00000002UL << 0) /**< Shifted mode EXTCLKSINGLE for PCNT_CTRL */
#define PCNT_CTRL_MODE_EXTCLKQUAD         (0x00000003UL << 0) /**< Shifted mode EXTCLKQUAD for PCNT_CTRL */
#define _PCNT_CTRL_MODE_DEFAULT           0x00000000UL        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_MODE_DISABLE           0x00000000UL        /**< Mode DISABLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_OVSSINGLE         0x00000001UL        /**< Mode OVSSINGLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_EXTCLKSINGLE      0x00000002UL        /**< Mode EXTCLKSINGLE for PCNT_CTRL */
#define _PCNT_CTRL_MODE_EXTCLKQUAD        0x00000003UL        /**< Mode EXTCLKQUAD for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR                  (0x1UL << 2)        /**< Non-Quadrature Mode Counter Direction Control */
#define _PCNT_CTRL_CNTDIR_SHIFT           2                   /**< Shift value for PCNT_CNTDIR */
#define _PCNT_CTRL_CNTDIR_MASK            0x4UL               /**< Bit mask for PCNT_CNTDIR */
#define PCNT_CTRL_CNTDIR_DEFAULT          (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR_UP               (0x00000000UL << 2) /**< Shifted mode UP for PCNT_CTRL */
#define PCNT_CTRL_CNTDIR_DOWN             (0x00000001UL << 2) /**< Shifted mode DOWN for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_DEFAULT         0x00000000UL        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_UP              0x00000000UL        /**< Mode UP for PCNT_CTRL */
#define _PCNT_CTRL_CNTDIR_DOWN            0x00000001UL        /**< Mode DOWN for PCNT_CTRL */
#define PCNT_CTRL_EDGE                    (0x1UL << 3)        /**< Edge Select */
#define _PCNT_CTRL_EDGE_SHIFT             3                   /**< Shift value for PCNT_EDGE */
#define _PCNT_CTRL_EDGE_MASK              0x8UL               /**< Bit mask for PCNT_EDGE */
#define PCNT_CTRL_EDGE_DEFAULT            (0x00000000UL << 3) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_EDGE_POS                (0x00000000UL << 3) /**< Shifted mode POS for PCNT_CTRL */
#define PCNT_CTRL_EDGE_NEG                (0x00000001UL << 3) /**< Shifted mode NEG for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_DEFAULT           0x00000000UL        /**< Mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_POS               0x00000000UL        /**< Mode POS for PCNT_CTRL */
#define _PCNT_CTRL_EDGE_NEG               0x00000001UL        /**< Mode NEG for PCNT_CTRL */
#define PCNT_CTRL_FILT                    (0x1UL << 4)        /**< Enable Digital Pulse Width Filter */
#define _PCNT_CTRL_FILT_SHIFT             4                   /**< Shift value for PCNT_FILT */
#define _PCNT_CTRL_FILT_MASK              0x10UL              /**< Bit mask for PCNT_FILT */
#define PCNT_CTRL_FILT_DEFAULT            (0x00000000UL << 4) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_FILT_DEFAULT           0x00000000UL        /**< Mode DEFAULT for PCNT_CTRL */
#define PCNT_CTRL_RSTEN                   (0x1UL << 5)        /**< Enable PCNT Clock Domain Reset */
#define _PCNT_CTRL_RSTEN_SHIFT            5                   /**< Shift value for PCNT_RSTEN */
#define _PCNT_CTRL_RSTEN_MASK             0x20UL              /**< Bit mask for PCNT_RSTEN */
#define PCNT_CTRL_RSTEN_DEFAULT           (0x00000000UL << 5) /**< Shifted mode DEFAULT for PCNT_CTRL */
#define _PCNT_CTRL_RSTEN_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_CTRL */

/* Bit fields for PCNT CMD */
#define _PCNT_CMD_RESETVALUE              0x00000000UL        /**< Default value for PCNT_CMD */
#define _PCNT_CMD_MASK                    0x00000003UL        /**< Mask for PCNT_CMD */
#define PCNT_CMD_LCNTIM                   (0x1UL << 0)        /**< Load CNT Immediately */
#define _PCNT_CMD_LCNTIM_SHIFT            0                   /**< Shift value for PCNT_LCNTIM */
#define _PCNT_CMD_LCNTIM_MASK             0x1UL               /**< Bit mask for PCNT_LCNTIM */
#define PCNT_CMD_LCNTIM_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_CMD */
#define _PCNT_CMD_LCNTIM_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_CMD */
#define PCNT_CMD_LTOPBIM                  (0x1UL << 1)        /**< Load TOPB Immediately */
#define _PCNT_CMD_LTOPBIM_SHIFT           1                   /**< Shift value for PCNT_LTOPBIM */
#define _PCNT_CMD_LTOPBIM_MASK            0x2UL               /**< Bit mask for PCNT_LTOPBIM */
#define PCNT_CMD_LTOPBIM_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_CMD */
#define _PCNT_CMD_LTOPBIM_DEFAULT         0x00000000UL        /**< Mode DEFAULT for PCNT_CMD */

/* Bit fields for PCNT STATUS */
#define _PCNT_STATUS_RESETVALUE           0x00000000UL        /**< Default value for PCNT_STATUS */
#define _PCNT_STATUS_MASK                 0x00000001UL        /**< Mask for PCNT_STATUS */
#define PCNT_STATUS_DIR                   (0x1UL << 0)        /**< Current Counter Direction */
#define _PCNT_STATUS_DIR_SHIFT            0                   /**< Shift value for PCNT_DIR */
#define _PCNT_STATUS_DIR_MASK             0x1UL               /**< Bit mask for PCNT_DIR */
#define PCNT_STATUS_DIR_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_STATUS */
#define PCNT_STATUS_DIR_UP                (0x00000000UL << 0) /**< Shifted mode UP for PCNT_STATUS */
#define PCNT_STATUS_DIR_DOWN              (0x00000001UL << 0) /**< Shifted mode DOWN for PCNT_STATUS */
#define _PCNT_STATUS_DIR_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_STATUS */
#define _PCNT_STATUS_DIR_UP               0x00000000UL        /**< Mode UP for PCNT_STATUS */
#define _PCNT_STATUS_DIR_DOWN             0x00000001UL        /**< Mode DOWN for PCNT_STATUS */

/* Bit fields for PCNT CNT */
#define _PCNT_CNT_RESETVALUE              0x00000000UL        /**< Default value for PCNT_CNT */
#define _PCNT_CNT_MASK                    0x0000FFFFUL        /**< Mask for PCNT_CNT */
#define _PCNT_CNT_CNT_SHIFT               0                   /**< Shift value for PCNT_CNT */
#define _PCNT_CNT_CNT_MASK                0xFFFFUL            /**< Bit mask for PCNT_CNT */
#define PCNT_CNT_CNT_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_CNT */
#define _PCNT_CNT_CNT_DEFAULT             0x00000000UL        /**< Mode DEFAULT for PCNT_CNT */

/* Bit fields for PCNT TOP */
#define _PCNT_TOP_RESETVALUE              0x0000FFFFUL        /**< Default value for PCNT_TOP */
#define _PCNT_TOP_MASK                    0x0000FFFFUL        /**< Mask for PCNT_TOP */
#define _PCNT_TOP_TOP_SHIFT               0                   /**< Shift value for PCNT_TOP */
#define _PCNT_TOP_TOP_MASK                0xFFFFUL            /**< Bit mask for PCNT_TOP */
#define PCNT_TOP_TOP_DEFAULT              (0x0000FFFFUL << 0) /**< Shifted mode DEFAULT for PCNT_TOP */
#define _PCNT_TOP_TOP_DEFAULT             0x0000FFFFUL        /**< Mode DEFAULT for PCNT_TOP */

/* Bit fields for PCNT TOPB */
#define _PCNT_TOPB_RESETVALUE             0x0000FFFFUL        /**< Default value for PCNT_TOPB */
#define _PCNT_TOPB_MASK                   0x0000FFFFUL        /**< Mask for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_SHIFT             0                   /**< Shift value for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_MASK              0xFFFFUL            /**< Bit mask for PCNT_TOPB */
#define PCNT_TOPB_TOPB_DEFAULT            (0x0000FFFFUL << 0) /**< Shifted mode DEFAULT for PCNT_TOPB */
#define _PCNT_TOPB_TOPB_DEFAULT           0x0000FFFFUL        /**< Mode DEFAULT for PCNT_TOPB */

/* Bit fields for PCNT IF */
#define _PCNT_IF_RESETVALUE               0x00000000UL        /**< Default value for PCNT_IF */
#define _PCNT_IF_MASK                     0x00000007UL        /**< Mask for PCNT_IF */
#define PCNT_IF_UF                        (0x1UL << 0)        /**< Underflow Interrupt Read Flag */
#define _PCNT_IF_UF_SHIFT                 0                   /**< Shift value for PCNT_UF */
#define _PCNT_IF_UF_MASK                  0x1UL               /**< Bit mask for PCNT_UF */
#define PCNT_IF_UF_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_UF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for PCNT_IF */
#define PCNT_IF_OF                        (0x1UL << 1)        /**< Overflow Interrupt Read Flag */
#define _PCNT_IF_OF_SHIFT                 1                   /**< Shift value for PCNT_OF */
#define _PCNT_IF_OF_MASK                  0x2UL               /**< Bit mask for PCNT_OF */
#define PCNT_IF_OF_DEFAULT                (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_OF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for PCNT_IF */
#define PCNT_IF_DIRCNG                    (0x1UL << 2)        /**< Direction Change Detect Interrupt Flag */
#define _PCNT_IF_DIRCNG_SHIFT             2                   /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IF_DIRCNG_MASK              0x4UL               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IF_DIRCNG_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_IF */
#define _PCNT_IF_DIRCNG_DEFAULT           0x00000000UL        /**< Mode DEFAULT for PCNT_IF */

/* Bit fields for PCNT IFS */
#define _PCNT_IFS_RESETVALUE              0x00000000UL        /**< Default value for PCNT_IFS */
#define _PCNT_IFS_MASK                    0x00000007UL        /**< Mask for PCNT_IFS */
#define PCNT_IFS_UF                       (0x1UL << 0)        /**< Underflow interrupt set */
#define _PCNT_IFS_UF_SHIFT                0                   /**< Shift value for PCNT_UF */
#define _PCNT_IFS_UF_MASK                 0x1UL               /**< Bit mask for PCNT_UF */
#define PCNT_IFS_UF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IFS */
#define PCNT_IFS_OF                       (0x1UL << 1)        /**< Overflow Interrupt Set */
#define _PCNT_IFS_OF_SHIFT                1                   /**< Shift value for PCNT_OF */
#define _PCNT_IFS_OF_MASK                 0x2UL               /**< Bit mask for PCNT_OF */
#define PCNT_IFS_OF_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IFS */
#define PCNT_IFS_DIRCNG                   (0x1UL << 2)        /**< Direction Change Detect Interrupt Set */
#define _PCNT_IFS_DIRCNG_SHIFT            2                   /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IFS_DIRCNG_MASK             0x4UL               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IFS_DIRCNG_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_IFS */
#define _PCNT_IFS_DIRCNG_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_IFS */

/* Bit fields for PCNT IFC */
#define _PCNT_IFC_RESETVALUE              0x00000000UL        /**< Default value for PCNT_IFC */
#define _PCNT_IFC_MASK                    0x00000007UL        /**< Mask for PCNT_IFC */
#define PCNT_IFC_UF                       (0x1UL << 0)        /**< Underflow Interrupt Clear */
#define _PCNT_IFC_UF_SHIFT                0                   /**< Shift value for PCNT_UF */
#define _PCNT_IFC_UF_MASK                 0x1UL               /**< Bit mask for PCNT_UF */
#define PCNT_IFC_UF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IFC */
#define PCNT_IFC_OF                       (0x1UL << 1)        /**< Overflow Interrupt Clear */
#define _PCNT_IFC_OF_SHIFT                1                   /**< Shift value for PCNT_OF */
#define _PCNT_IFC_OF_MASK                 0x2UL               /**< Bit mask for PCNT_OF */
#define PCNT_IFC_OF_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IFC */
#define PCNT_IFC_DIRCNG                   (0x1UL << 2)        /**< Direction Change Detect Interrupt Clear */
#define _PCNT_IFC_DIRCNG_SHIFT            2                   /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IFC_DIRCNG_MASK             0x4UL               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IFC_DIRCNG_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_IFC */
#define _PCNT_IFC_DIRCNG_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_IFC */

/* Bit fields for PCNT IEN */
#define _PCNT_IEN_RESETVALUE              0x00000000UL        /**< Default value for PCNT_IEN */
#define _PCNT_IEN_MASK                    0x00000007UL        /**< Mask for PCNT_IEN */
#define PCNT_IEN_UF                       (0x1UL << 0)        /**< Underflow Interrupt Enable */
#define _PCNT_IEN_UF_SHIFT                0                   /**< Shift value for PCNT_UF */
#define _PCNT_IEN_UF_MASK                 0x1UL               /**< Bit mask for PCNT_UF */
#define PCNT_IEN_UF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_UF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IEN */
#define PCNT_IEN_OF                       (0x1UL << 1)        /**< Overflow Interrupt Enable */
#define _PCNT_IEN_OF_SHIFT                1                   /**< Shift value for PCNT_OF */
#define _PCNT_IEN_OF_MASK                 0x2UL               /**< Bit mask for PCNT_OF */
#define PCNT_IEN_OF_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for PCNT_IEN */
#define PCNT_IEN_DIRCNG                   (0x1UL << 2)        /**< Direction Change Detect Interrupt Enable */
#define _PCNT_IEN_DIRCNG_SHIFT            2                   /**< Shift value for PCNT_DIRCNG */
#define _PCNT_IEN_DIRCNG_MASK             0x4UL               /**< Bit mask for PCNT_DIRCNG */
#define PCNT_IEN_DIRCNG_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_IEN */
#define _PCNT_IEN_DIRCNG_DEFAULT          0x00000000UL        /**< Mode DEFAULT for PCNT_IEN */

/* Bit fields for PCNT ROUTE */
#define _PCNT_ROUTE_RESETVALUE            0x00000000UL        /**< Default value for PCNT_ROUTE */
#define _PCNT_ROUTE_MASK                  0x00000300UL        /**< Mask for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_SHIFT        8                   /**< Shift value for PCNT_LOCATION */
#define _PCNT_ROUTE_LOCATION_MASK         0x300UL             /**< Bit mask for PCNT_LOCATION */
#define PCNT_ROUTE_LOCATION_DEFAULT       (0x00000000UL << 8) /**< Shifted mode DEFAULT for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC0          (0x00000000UL << 8) /**< Shifted mode LOC0 for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC1          (0x00000001UL << 8) /**< Shifted mode LOC1 for PCNT_ROUTE */
#define PCNT_ROUTE_LOCATION_LOC2          (0x00000002UL << 8) /**< Shifted mode LOC2 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_DEFAULT      0x00000000UL        /**< Mode DEFAULT for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC0         0x00000000UL        /**< Mode LOC0 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC1         0x00000001UL        /**< Mode LOC1 for PCNT_ROUTE */
#define _PCNT_ROUTE_LOCATION_LOC2         0x00000002UL        /**< Mode LOC2 for PCNT_ROUTE */

/* Bit fields for PCNT FREEZE */
#define _PCNT_FREEZE_RESETVALUE           0x00000000UL        /**< Default value for PCNT_FREEZE */
#define _PCNT_FREEZE_MASK                 0x00000001UL        /**< Mask for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE             (0x1UL << 0)        /**< Register Update Freeze */
#define _PCNT_FREEZE_REGFREEZE_SHIFT      0                   /**< Shift value for PCNT_REGFREEZE */
#define _PCNT_FREEZE_REGFREEZE_MASK       0x1UL               /**< Bit mask for PCNT_REGFREEZE */
#define PCNT_FREEZE_REGFREEZE_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE_UPDATE      (0x00000000UL << 0) /**< Shifted mode UPDATE for PCNT_FREEZE */
#define PCNT_FREEZE_REGFREEZE_FREEZE      (0x00000001UL << 0) /**< Shifted mode FREEZE for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_DEFAULT    0x00000000UL        /**< Mode DEFAULT for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_UPDATE     0x00000000UL        /**< Mode UPDATE for PCNT_FREEZE */
#define _PCNT_FREEZE_REGFREEZE_FREEZE     0x00000001UL        /**< Mode FREEZE for PCNT_FREEZE */

/* Bit fields for PCNT SYNCBUSY */
#define _PCNT_SYNCBUSY_RESETVALUE         0x00000000UL        /**< Default value for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_MASK               0x00000007UL        /**< Mask for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_CTRL                (0x1UL << 0)        /**< PCNTn_CTRL Register Busy */
#define _PCNT_SYNCBUSY_CTRL_SHIFT         0                   /**< Shift value for PCNT_CTRL */
#define _PCNT_SYNCBUSY_CTRL_MASK          0x1UL               /**< Bit mask for PCNT_CTRL */
#define PCNT_SYNCBUSY_CTRL_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_CTRL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_CMD                 (0x1UL << 1)        /**< PCNTn_CMD Register Busy */
#define _PCNT_SYNCBUSY_CMD_SHIFT          1                   /**< Shift value for PCNT_CMD */
#define _PCNT_SYNCBUSY_CMD_MASK           0x2UL               /**< Bit mask for PCNT_CMD */
#define PCNT_SYNCBUSY_CMD_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_CMD_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PCNT_SYNCBUSY */
#define PCNT_SYNCBUSY_TOPB                (0x1UL << 2)        /**< PCNTn_TOPB Register Busy */
#define _PCNT_SYNCBUSY_TOPB_SHIFT         2                   /**< Shift value for PCNT_TOPB */
#define _PCNT_SYNCBUSY_TOPB_MASK          0x4UL               /**< Bit mask for PCNT_TOPB */
#define PCNT_SYNCBUSY_TOPB_DEFAULT        (0x00000000UL << 2) /**< Shifted mode DEFAULT for PCNT_SYNCBUSY */
#define _PCNT_SYNCBUSY_TOPB_DEFAULT       0x00000000UL        /**< Mode DEFAULT for PCNT_SYNCBUSY */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_I2C
 * @{
 *****************************************************************************/

/* Bit fields for I2C CTRL */
#define _I2C_CTRL_RESETVALUE              0x00000000UL         /**< Default value for I2C_CTRL */
#define _I2C_CTRL_MASK                    0x0007B37FUL         /**< Mask for I2C_CTRL */
#define I2C_CTRL_EN                       (0x1UL << 0)         /**< I2C Enable */
#define _I2C_CTRL_EN_SHIFT                0                    /**< Shift value for I2C_EN */
#define _I2C_CTRL_EN_MASK                 0x1UL                /**< Bit mask for I2C_EN */
#define I2C_CTRL_EN_DEFAULT               (0x00000000UL << 0)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_EN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_SLAVE                    (0x1UL << 1)         /**< Addressable as Slave */
#define _I2C_CTRL_SLAVE_SHIFT             1                    /**< Shift value for I2C_SLAVE */
#define _I2C_CTRL_SLAVE_MASK              0x2UL                /**< Bit mask for I2C_SLAVE */
#define I2C_CTRL_SLAVE_DEFAULT            (0x00000000UL << 1)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_SLAVE_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOACK                  (0x1UL << 2)         /**< Automatic Acknowledge */
#define _I2C_CTRL_AUTOACK_SHIFT           2                    /**< Shift value for I2C_AUTOACK */
#define _I2C_CTRL_AUTOACK_MASK            0x4UL                /**< Bit mask for I2C_AUTOACK */
#define I2C_CTRL_AUTOACK_DEFAULT          (0x00000000UL << 2)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOACK_DEFAULT         0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOSE                   (0x1UL << 3)         /**< Automatic STOP when Empty */
#define _I2C_CTRL_AUTOSE_SHIFT            3                    /**< Shift value for I2C_AUTOSE */
#define _I2C_CTRL_AUTOSE_MASK             0x8UL                /**< Bit mask for I2C_AUTOSE */
#define I2C_CTRL_AUTOSE_DEFAULT           (0x00000000UL << 3)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOSE_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_AUTOSN                   (0x1UL << 4)         /**< Automatic STOP on NACK */
#define _I2C_CTRL_AUTOSN_SHIFT            4                    /**< Shift value for I2C_AUTOSN */
#define _I2C_CTRL_AUTOSN_MASK             0x10UL               /**< Bit mask for I2C_AUTOSN */
#define I2C_CTRL_AUTOSN_DEFAULT           (0x00000000UL << 4)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_AUTOSN_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_ARBDIS                   (0x1UL << 5)         /**< Arbitration Disable */
#define _I2C_CTRL_ARBDIS_SHIFT            5                    /**< Shift value for I2C_ARBDIS */
#define _I2C_CTRL_ARBDIS_MASK             0x20UL               /**< Bit mask for I2C_ARBDIS */
#define I2C_CTRL_ARBDIS_DEFAULT           (0x00000000UL << 5)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_ARBDIS_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_GCAMEN                   (0x1UL << 6)         /**< General Call Address Match Enable */
#define _I2C_CTRL_GCAMEN_SHIFT            6                    /**< Shift value for I2C_GCAMEN */
#define _I2C_CTRL_GCAMEN_MASK             0x40UL               /**< Bit mask for I2C_GCAMEN */
#define I2C_CTRL_GCAMEN_DEFAULT           (0x00000000UL << 6)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_GCAMEN_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLHR_SHIFT              8                    /**< Shift value for I2C_CLHR */
#define _I2C_CTRL_CLHR_MASK               0x300UL              /**< Bit mask for I2C_CLHR */
#define I2C_CTRL_CLHR_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_CLHR_STANDARD            (0x00000000UL << 8)  /**< Shifted mode STANDARD for I2C_CTRL */
#define I2C_CTRL_CLHR_ASYMMETRIC          (0x00000001UL << 8)  /**< Shifted mode ASYMMETRIC for I2C_CTRL */
#define I2C_CTRL_CLHR_FAST                (0x00000002UL << 8)  /**< Shifted mode FAST for I2C_CTRL */
#define _I2C_CTRL_CLHR_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLHR_STANDARD           0x00000000UL         /**< Mode STANDARD for I2C_CTRL */
#define _I2C_CTRL_CLHR_ASYMMETRIC         0x00000001UL         /**< Mode ASYMMETRIC for I2C_CTRL */
#define _I2C_CTRL_CLHR_FAST               0x00000002UL         /**< Mode FAST for I2C_CTRL */
#define _I2C_CTRL_BITO_SHIFT              12                   /**< Shift value for I2C_BITO */
#define _I2C_CTRL_BITO_MASK               0x3000UL             /**< Bit mask for I2C_BITO */
#define I2C_CTRL_BITO_DEFAULT             (0x00000000UL << 12) /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_BITO_OFF                 (0x00000000UL << 12) /**< Shifted mode OFF for I2C_CTRL */
#define I2C_CTRL_BITO_40PCC               (0x00000001UL << 12) /**< Shifted mode 40PCC for I2C_CTRL */
#define I2C_CTRL_BITO_80PCC               (0x00000002UL << 12) /**< Shifted mode 80PCC for I2C_CTRL */
#define I2C_CTRL_BITO_160PCC              (0x00000003UL << 12) /**< Shifted mode 160PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_BITO_OFF                0x00000000UL         /**< Mode OFF for I2C_CTRL */
#define _I2C_CTRL_BITO_40PCC              0x00000001UL         /**< Mode 40PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_80PCC              0x00000002UL         /**< Mode 80PCC for I2C_CTRL */
#define _I2C_CTRL_BITO_160PCC             0x00000003UL         /**< Mode 160PCC for I2C_CTRL */
#define I2C_CTRL_GIBITO                   (0x1UL << 15)        /**< Go Idle on Bus Idle Timeout  */
#define _I2C_CTRL_GIBITO_SHIFT            15                   /**< Shift value for I2C_GIBITO */
#define _I2C_CTRL_GIBITO_MASK             0x8000UL             /**< Bit mask for I2C_GIBITO */
#define I2C_CTRL_GIBITO_DEFAULT           (0x00000000UL << 15) /**< Shifted mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_GIBITO_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLTO_SHIFT              16                   /**< Shift value for I2C_CLTO */
#define _I2C_CTRL_CLTO_MASK               0x70000UL            /**< Bit mask for I2C_CLTO */
#define I2C_CTRL_CLTO_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for I2C_CTRL */
#define I2C_CTRL_CLTO_OFF                 (0x00000000UL << 16) /**< Shifted mode OFF for I2C_CTRL */
#define I2C_CTRL_CLTO_40PCC               (0x00000001UL << 16) /**< Shifted mode 40PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_80PCC               (0x00000002UL << 16) /**< Shifted mode 80PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_160PCC              (0x00000003UL << 16) /**< Shifted mode 160PCC for I2C_CTRL */
#define I2C_CTRL_CLTO_320PPC              (0x00000004UL << 16) /**< Shifted mode 320PPC for I2C_CTRL */
#define I2C_CTRL_CLTO_1024PPC             (0x00000005UL << 16) /**< Shifted mode 1024PPC for I2C_CTRL */
#define _I2C_CTRL_CLTO_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_CTRL */
#define _I2C_CTRL_CLTO_OFF                0x00000000UL         /**< Mode OFF for I2C_CTRL */
#define _I2C_CTRL_CLTO_40PCC              0x00000001UL         /**< Mode 40PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_80PCC              0x00000002UL         /**< Mode 80PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_160PCC             0x00000003UL         /**< Mode 160PCC for I2C_CTRL */
#define _I2C_CTRL_CLTO_320PPC             0x00000004UL         /**< Mode 320PPC for I2C_CTRL */
#define _I2C_CTRL_CLTO_1024PPC            0x00000005UL         /**< Mode 1024PPC for I2C_CTRL */

/* Bit fields for I2C CMD */
#define _I2C_CMD_RESETVALUE               0x00000000UL        /**< Default value for I2C_CMD */
#define _I2C_CMD_MASK                     0x000000FFUL        /**< Mask for I2C_CMD */
#define I2C_CMD_START                     (0x1UL << 0)        /**< Send start condition */
#define _I2C_CMD_START_SHIFT              0                   /**< Shift value for I2C_START */
#define _I2C_CMD_START_MASK               0x1UL               /**< Bit mask for I2C_START */
#define I2C_CMD_START_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_START_DEFAULT            0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_STOP                      (0x1UL << 1)        /**< Send stop condition */
#define _I2C_CMD_STOP_SHIFT               1                   /**< Shift value for I2C_STOP */
#define _I2C_CMD_STOP_MASK                0x2UL               /**< Bit mask for I2C_STOP */
#define I2C_CMD_STOP_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_STOP_DEFAULT             0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_ACK                       (0x1UL << 2)        /**< Send ACK */
#define _I2C_CMD_ACK_SHIFT                2                   /**< Shift value for I2C_ACK */
#define _I2C_CMD_ACK_MASK                 0x4UL               /**< Bit mask for I2C_ACK */
#define I2C_CMD_ACK_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_ACK_DEFAULT              0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_NACK                      (0x1UL << 3)        /**< Send NACK */
#define _I2C_CMD_NACK_SHIFT               3                   /**< Shift value for I2C_NACK */
#define _I2C_CMD_NACK_MASK                0x8UL               /**< Bit mask for I2C_NACK */
#define I2C_CMD_NACK_DEFAULT              (0x00000000UL << 3) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_NACK_DEFAULT             0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CONT                      (0x1UL << 4)        /**< Continue transmission */
#define _I2C_CMD_CONT_SHIFT               4                   /**< Shift value for I2C_CONT */
#define _I2C_CMD_CONT_MASK                0x10UL              /**< Bit mask for I2C_CONT */
#define I2C_CMD_CONT_DEFAULT              (0x00000000UL << 4) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CONT_DEFAULT             0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_ABORT                     (0x1UL << 5)        /**< Abort transmission */
#define _I2C_CMD_ABORT_SHIFT              5                   /**< Shift value for I2C_ABORT */
#define _I2C_CMD_ABORT_MASK               0x20UL              /**< Bit mask for I2C_ABORT */
#define I2C_CMD_ABORT_DEFAULT             (0x00000000UL << 5) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_ABORT_DEFAULT            0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CLEARTX                   (0x1UL << 6)        /**< Clear TX */
#define _I2C_CMD_CLEARTX_SHIFT            6                   /**< Shift value for I2C_CLEARTX */
#define _I2C_CMD_CLEARTX_MASK             0x40UL              /**< Bit mask for I2C_CLEARTX */
#define I2C_CMD_CLEARTX_DEFAULT           (0x00000000UL << 6) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CLEARTX_DEFAULT          0x00000000UL        /**< Mode DEFAULT for I2C_CMD */
#define I2C_CMD_CLEARPC                   (0x1UL << 7)        /**< Clear Pending Commands */
#define _I2C_CMD_CLEARPC_SHIFT            7                   /**< Shift value for I2C_CLEARPC */
#define _I2C_CMD_CLEARPC_MASK             0x80UL              /**< Bit mask for I2C_CLEARPC */
#define I2C_CMD_CLEARPC_DEFAULT           (0x00000000UL << 7) /**< Shifted mode DEFAULT for I2C_CMD */
#define _I2C_CMD_CLEARPC_DEFAULT          0x00000000UL        /**< Mode DEFAULT for I2C_CMD */

/* Bit fields for I2C STATE */
#define _I2C_STATE_RESETVALUE             0x00000001UL        /**< Default value for I2C_STATE */
#define _I2C_STATE_MASK                   0x000000FFUL        /**< Mask for I2C_STATE */
#define I2C_STATE_BUSY                    (0x1UL << 0)        /**< Bus Busy */
#define _I2C_STATE_BUSY_SHIFT             0                   /**< Shift value for I2C_BUSY */
#define _I2C_STATE_BUSY_MASK              0x1UL               /**< Bit mask for I2C_BUSY */
#define I2C_STATE_BUSY_DEFAULT            (0x00000001UL << 0) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_BUSY_DEFAULT           0x00000001UL        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_MASTER                  (0x1UL << 1)        /**< Master */
#define _I2C_STATE_MASTER_SHIFT           1                   /**< Shift value for I2C_MASTER */
#define _I2C_STATE_MASTER_MASK            0x2UL               /**< Bit mask for I2C_MASTER */
#define I2C_STATE_MASTER_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_MASTER_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_TRANSMITTER             (0x1UL << 2)        /**< Transmitter */
#define _I2C_STATE_TRANSMITTER_SHIFT      2                   /**< Shift value for I2C_TRANSMITTER */
#define _I2C_STATE_TRANSMITTER_MASK       0x4UL               /**< Bit mask for I2C_TRANSMITTER */
#define I2C_STATE_TRANSMITTER_DEFAULT     (0x00000000UL << 2) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_TRANSMITTER_DEFAULT    0x00000000UL        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_NACKED                  (0x1UL << 3)        /**< Nack Received */
#define _I2C_STATE_NACKED_SHIFT           3                   /**< Shift value for I2C_NACKED */
#define _I2C_STATE_NACKED_MASK            0x8UL               /**< Bit mask for I2C_NACKED */
#define I2C_STATE_NACKED_DEFAULT          (0x00000000UL << 3) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_NACKED_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_STATE */
#define I2C_STATE_BUSHOLD                 (0x1UL << 4)        /**< Bus Held */
#define _I2C_STATE_BUSHOLD_SHIFT          4                   /**< Shift value for I2C_BUSHOLD */
#define _I2C_STATE_BUSHOLD_MASK           0x10UL              /**< Bit mask for I2C_BUSHOLD */
#define I2C_STATE_BUSHOLD_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for I2C_STATE */
#define _I2C_STATE_BUSHOLD_DEFAULT        0x00000000UL        /**< Mode DEFAULT for I2C_STATE */
#define _I2C_STATE_STATE_SHIFT            5                   /**< Shift value for I2C_STATE */
#define _I2C_STATE_STATE_MASK             0xE0UL              /**< Bit mask for I2C_STATE */
#define I2C_STATE_STATE_DEFAULT           (0x00000000UL << 5) /**< Shifted mode DEFAULT for I2C_STATE */
#define I2C_STATE_STATE_IDLE              (0x00000000UL << 5) /**< Shifted mode IDLE for I2C_STATE */
#define I2C_STATE_STATE_WAIT              (0x00000001UL << 5) /**< Shifted mode WAIT for I2C_STATE */
#define I2C_STATE_STATE_START             (0x00000002UL << 5) /**< Shifted mode START for I2C_STATE */
#define I2C_STATE_STATE_ADDR              (0x00000003UL << 5) /**< Shifted mode ADDR for I2C_STATE */
#define I2C_STATE_STATE_ADDRACK           (0x00000004UL << 5) /**< Shifted mode ADDRACK for I2C_STATE */
#define I2C_STATE_STATE_DATA              (0x00000005UL << 5) /**< Shifted mode DATA for I2C_STATE */
#define I2C_STATE_STATE_DATAACK           (0x00000006UL << 5) /**< Shifted mode DATAACK for I2C_STATE */
#define _I2C_STATE_STATE_DEFAULT          0x00000000UL        /**< Mode DEFAULT for I2C_STATE */
#define _I2C_STATE_STATE_IDLE             0x00000000UL        /**< Mode IDLE for I2C_STATE */
#define _I2C_STATE_STATE_WAIT             0x00000001UL        /**< Mode WAIT for I2C_STATE */
#define _I2C_STATE_STATE_START            0x00000002UL        /**< Mode START for I2C_STATE */
#define _I2C_STATE_STATE_ADDR             0x00000003UL        /**< Mode ADDR for I2C_STATE */
#define _I2C_STATE_STATE_ADDRACK          0x00000004UL        /**< Mode ADDRACK for I2C_STATE */
#define _I2C_STATE_STATE_DATA             0x00000005UL        /**< Mode DATA for I2C_STATE */
#define _I2C_STATE_STATE_DATAACK          0x00000006UL        /**< Mode DATAACK for I2C_STATE */

/* Bit fields for I2C STATUS */
#define _I2C_STATUS_RESETVALUE            0x00000080UL        /**< Default value for I2C_STATUS */
#define _I2C_STATUS_MASK                  0x000001FFUL        /**< Mask for I2C_STATUS */
#define I2C_STATUS_PSTART                 (0x1UL << 0)        /**< Pending START */
#define _I2C_STATUS_PSTART_SHIFT          0                   /**< Shift value for I2C_PSTART */
#define _I2C_STATUS_PSTART_MASK           0x1UL               /**< Bit mask for I2C_PSTART */
#define I2C_STATUS_PSTART_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PSTART_DEFAULT        0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PSTOP                  (0x1UL << 1)        /**< Pending STOP */
#define _I2C_STATUS_PSTOP_SHIFT           1                   /**< Shift value for I2C_PSTOP */
#define _I2C_STATUS_PSTOP_MASK            0x2UL               /**< Bit mask for I2C_PSTOP */
#define I2C_STATUS_PSTOP_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PSTOP_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PACK                   (0x1UL << 2)        /**< Pending ACK */
#define _I2C_STATUS_PACK_SHIFT            2                   /**< Shift value for I2C_PACK */
#define _I2C_STATUS_PACK_MASK             0x4UL               /**< Bit mask for I2C_PACK */
#define I2C_STATUS_PACK_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PACK_DEFAULT          0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PNACK                  (0x1UL << 3)        /**< Pending NACK */
#define _I2C_STATUS_PNACK_SHIFT           3                   /**< Shift value for I2C_PNACK */
#define _I2C_STATUS_PNACK_MASK            0x8UL               /**< Bit mask for I2C_PNACK */
#define I2C_STATUS_PNACK_DEFAULT          (0x00000000UL << 3) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PNACK_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PCONT                  (0x1UL << 4)        /**< Pending continue */
#define _I2C_STATUS_PCONT_SHIFT           4                   /**< Shift value for I2C_PCONT */
#define _I2C_STATUS_PCONT_MASK            0x10UL              /**< Bit mask for I2C_PCONT */
#define I2C_STATUS_PCONT_DEFAULT          (0x00000000UL << 4) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PCONT_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_PABORT                 (0x1UL << 5)        /**< Pending abort */
#define _I2C_STATUS_PABORT_SHIFT          5                   /**< Shift value for I2C_PABORT */
#define _I2C_STATUS_PABORT_MASK           0x20UL              /**< Bit mask for I2C_PABORT */
#define I2C_STATUS_PABORT_DEFAULT         (0x00000000UL << 5) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_PABORT_DEFAULT        0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_TXC                    (0x1UL << 6)        /**< TX Complete */
#define _I2C_STATUS_TXC_SHIFT             6                   /**< Shift value for I2C_TXC */
#define _I2C_STATUS_TXC_MASK              0x40UL              /**< Bit mask for I2C_TXC */
#define I2C_STATUS_TXC_DEFAULT            (0x00000000UL << 6) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_TXC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_TXBL                   (0x1UL << 7)        /**< TX Buffer Level */
#define _I2C_STATUS_TXBL_SHIFT            7                   /**< Shift value for I2C_TXBL */
#define _I2C_STATUS_TXBL_MASK             0x80UL              /**< Bit mask for I2C_TXBL */
#define I2C_STATUS_TXBL_DEFAULT           (0x00000001UL << 7) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_TXBL_DEFAULT          0x00000001UL        /**< Mode DEFAULT for I2C_STATUS */
#define I2C_STATUS_RXDATAV                (0x1UL << 8)        /**< RX Data Valid */
#define _I2C_STATUS_RXDATAV_SHIFT         8                   /**< Shift value for I2C_RXDATAV */
#define _I2C_STATUS_RXDATAV_MASK          0x100UL             /**< Bit mask for I2C_RXDATAV */
#define I2C_STATUS_RXDATAV_DEFAULT        (0x00000000UL << 8) /**< Shifted mode DEFAULT for I2C_STATUS */
#define _I2C_STATUS_RXDATAV_DEFAULT       0x00000000UL        /**< Mode DEFAULT for I2C_STATUS */

/* Bit fields for I2C CLKDIV */
#define _I2C_CLKDIV_RESETVALUE            0x00000000UL        /**< Default value for I2C_CLKDIV */
#define _I2C_CLKDIV_MASK                  0x000001FFUL        /**< Mask for I2C_CLKDIV */
#define _I2C_CLKDIV_DIV_SHIFT             0                   /**< Shift value for I2C_DIV */
#define _I2C_CLKDIV_DIV_MASK              0x1FFUL             /**< Bit mask for I2C_DIV */
#define I2C_CLKDIV_DIV_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_CLKDIV */
#define _I2C_CLKDIV_DIV_DEFAULT           0x00000000UL        /**< Mode DEFAULT for I2C_CLKDIV */

/* Bit fields for I2C SADDR */
#define _I2C_SADDR_RESETVALUE             0x00000000UL        /**< Default value for I2C_SADDR */
#define _I2C_SADDR_MASK                   0x000000FEUL        /**< Mask for I2C_SADDR */
#define _I2C_SADDR_ADDR_SHIFT             1                   /**< Shift value for I2C_ADDR */
#define _I2C_SADDR_ADDR_MASK              0xFEUL              /**< Bit mask for I2C_ADDR */
#define I2C_SADDR_ADDR_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_SADDR */
#define _I2C_SADDR_ADDR_DEFAULT           0x00000000UL        /**< Mode DEFAULT for I2C_SADDR */

/* Bit fields for I2C SADDRMASK */
#define _I2C_SADDRMASK_RESETVALUE         0x00000000UL        /**< Default value for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK               0x000000FEUL        /**< Mask for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK_SHIFT         1                   /**< Shift value for I2C_MASK */
#define _I2C_SADDRMASK_MASK_MASK          0xFEUL              /**< Bit mask for I2C_MASK */
#define I2C_SADDRMASK_MASK_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_SADDRMASK */
#define _I2C_SADDRMASK_MASK_DEFAULT       0x00000000UL        /**< Mode DEFAULT for I2C_SADDRMASK */

/* Bit fields for I2C RXDATA */
#define _I2C_RXDATA_RESETVALUE            0x00000000UL        /**< Default value for I2C_RXDATA */
#define _I2C_RXDATA_MASK                  0x000000FFUL        /**< Mask for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_SHIFT          0                   /**< Shift value for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_MASK           0xFFUL              /**< Bit mask for I2C_RXDATA */
#define I2C_RXDATA_RXDATA_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_RXDATA */
#define _I2C_RXDATA_RXDATA_DEFAULT        0x00000000UL        /**< Mode DEFAULT for I2C_RXDATA */

/* Bit fields for I2C RXDATAP */
#define _I2C_RXDATAP_RESETVALUE           0x00000000UL        /**< Default value for I2C_RXDATAP */
#define _I2C_RXDATAP_MASK                 0x000000FFUL        /**< Mask for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_SHIFT        0                   /**< Shift value for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_MASK         0xFFUL              /**< Bit mask for I2C_RXDATAP */
#define I2C_RXDATAP_RXDATAP_DEFAULT       (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_RXDATAP */
#define _I2C_RXDATAP_RXDATAP_DEFAULT      0x00000000UL        /**< Mode DEFAULT for I2C_RXDATAP */

/* Bit fields for I2C TXDATA */
#define _I2C_TXDATA_RESETVALUE            0x00000000UL        /**< Default value for I2C_TXDATA */
#define _I2C_TXDATA_MASK                  0x000000FFUL        /**< Mask for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_SHIFT          0                   /**< Shift value for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_MASK           0xFFUL              /**< Bit mask for I2C_TXDATA */
#define I2C_TXDATA_TXDATA_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_TXDATA */
#define _I2C_TXDATA_TXDATA_DEFAULT        0x00000000UL        /**< Mode DEFAULT for I2C_TXDATA */

/* Bit fields for I2C IF */
#define _I2C_IF_RESETVALUE                0x00000000UL         /**< Default value for I2C_IF */
#define _I2C_IF_MASK                      0x0001FFFFUL         /**< Mask for I2C_IF */
#define I2C_IF_START                      (0x1UL << 0)         /**< START condition Interrupt Flag */
#define _I2C_IF_START_SHIFT               0                    /**< Shift value for I2C_START */
#define _I2C_IF_START_MASK                0x1UL                /**< Bit mask for I2C_START */
#define I2C_IF_START_DEFAULT              (0x00000000UL << 0)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_START_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RSTART                     (0x1UL << 1)         /**< Repeated START condition Interrupt Flag */
#define _I2C_IF_RSTART_SHIFT              1                    /**< Shift value for I2C_RSTART */
#define _I2C_IF_RSTART_MASK               0x2UL                /**< Bit mask for I2C_RSTART */
#define I2C_IF_RSTART_DEFAULT             (0x00000000UL << 1)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RSTART_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ADDR                       (0x1UL << 2)         /**< Address Interrupt Flag */
#define _I2C_IF_ADDR_SHIFT                2                    /**< Shift value for I2C_ADDR */
#define _I2C_IF_ADDR_MASK                 0x4UL                /**< Bit mask for I2C_ADDR */
#define I2C_IF_ADDR_DEFAULT               (0x00000000UL << 2)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ADDR_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXC                        (0x1UL << 3)         /**< Transfer Completed Interrupt Flag */
#define _I2C_IF_TXC_SHIFT                 3                    /**< Shift value for I2C_TXC */
#define _I2C_IF_TXC_MASK                  0x8UL                /**< Bit mask for I2C_TXC */
#define I2C_IF_TXC_DEFAULT                (0x00000000UL << 3)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXC_DEFAULT               0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXBL                       (0x1UL << 4)         /**< Transmit Buffer Level Interrupt Flag */
#define _I2C_IF_TXBL_SHIFT                4                    /**< Shift value for I2C_TXBL */
#define _I2C_IF_TXBL_MASK                 0x10UL               /**< Bit mask for I2C_TXBL */
#define I2C_IF_TXBL_DEFAULT               (0x00000000UL << 4)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXBL_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RXDATAV                    (0x1UL << 5)         /**< Receive Data Valid Interrupt Flag */
#define _I2C_IF_RXDATAV_SHIFT             5                    /**< Shift value for I2C_RXDATAV */
#define _I2C_IF_RXDATAV_MASK              0x20UL               /**< Bit mask for I2C_RXDATAV */
#define I2C_IF_RXDATAV_DEFAULT            (0x00000000UL << 5)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RXDATAV_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ACK                        (0x1UL << 6)         /**< Acknowledge Received Interrupt Flag */
#define _I2C_IF_ACK_SHIFT                 6                    /**< Shift value for I2C_ACK */
#define _I2C_IF_ACK_MASK                  0x40UL               /**< Bit mask for I2C_ACK */
#define I2C_IF_ACK_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ACK_DEFAULT               0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_NACK                       (0x1UL << 7)         /**< Not Acknowledge Received Interrupt Flag */
#define _I2C_IF_NACK_SHIFT                7                    /**< Shift value for I2C_NACK */
#define _I2C_IF_NACK_MASK                 0x80UL               /**< Bit mask for I2C_NACK */
#define I2C_IF_NACK_DEFAULT               (0x00000000UL << 7)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_NACK_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_MSTOP                      (0x1UL << 8)         /**< Master STOP Condition Interrupt Flag */
#define _I2C_IF_MSTOP_SHIFT               8                    /**< Shift value for I2C_MSTOP */
#define _I2C_IF_MSTOP_MASK                0x100UL              /**< Bit mask for I2C_MSTOP */
#define I2C_IF_MSTOP_DEFAULT              (0x00000000UL << 8)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_MSTOP_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_ARBLOST                    (0x1UL << 9)         /**< Arbitration Lost Interrupt Flag */
#define _I2C_IF_ARBLOST_SHIFT             9                    /**< Shift value for I2C_ARBLOST */
#define _I2C_IF_ARBLOST_MASK              0x200UL              /**< Bit mask for I2C_ARBLOST */
#define I2C_IF_ARBLOST_DEFAULT            (0x00000000UL << 9)  /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_ARBLOST_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BUSERR                     (0x1UL << 10)        /**< Bus Error Interrupt Flag */
#define _I2C_IF_BUSERR_SHIFT              10                   /**< Shift value for I2C_BUSERR */
#define _I2C_IF_BUSERR_MASK               0x400UL              /**< Bit mask for I2C_BUSERR */
#define I2C_IF_BUSERR_DEFAULT             (0x00000000UL << 10) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BUSERR_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BUSHOLD                    (0x1UL << 11)        /**< Bus Held Interrupt Flag */
#define _I2C_IF_BUSHOLD_SHIFT             11                   /**< Shift value for I2C_BUSHOLD */
#define _I2C_IF_BUSHOLD_MASK              0x800UL              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IF_BUSHOLD_DEFAULT            (0x00000000UL << 11) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BUSHOLD_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_TXOF                       (0x1UL << 12)        /**< Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IF_TXOF_SHIFT                12                   /**< Shift value for I2C_TXOF */
#define _I2C_IF_TXOF_MASK                 0x1000UL             /**< Bit mask for I2C_TXOF */
#define I2C_IF_TXOF_DEFAULT               (0x00000000UL << 12) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_TXOF_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_RXUF                       (0x1UL << 13)        /**< Receive Buffer Underflow Interrupt Flag */
#define _I2C_IF_RXUF_SHIFT                13                   /**< Shift value for I2C_RXUF */
#define _I2C_IF_RXUF_MASK                 0x2000UL             /**< Bit mask for I2C_RXUF */
#define I2C_IF_RXUF_DEFAULT               (0x00000000UL << 13) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_RXUF_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_BITO                       (0x1UL << 14)        /**< Bus Idle Timeout Interrupt Flag */
#define _I2C_IF_BITO_SHIFT                14                   /**< Shift value for I2C_BITO */
#define _I2C_IF_BITO_MASK                 0x4000UL             /**< Bit mask for I2C_BITO */
#define I2C_IF_BITO_DEFAULT               (0x00000000UL << 14) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_BITO_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_CLTO                       (0x1UL << 15)        /**< Clock Low Timeout Interrupt Flag */
#define _I2C_IF_CLTO_SHIFT                15                   /**< Shift value for I2C_CLTO */
#define _I2C_IF_CLTO_MASK                 0x8000UL             /**< Bit mask for I2C_CLTO */
#define I2C_IF_CLTO_DEFAULT               (0x00000000UL << 15) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_CLTO_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IF */
#define I2C_IF_SSTOP                      (0x1UL << 16)        /**< Slave STOP condition Interrupt Flag */
#define _I2C_IF_SSTOP_SHIFT               16                   /**< Shift value for I2C_SSTOP */
#define _I2C_IF_SSTOP_MASK                0x10000UL            /**< Bit mask for I2C_SSTOP */
#define I2C_IF_SSTOP_DEFAULT              (0x00000000UL << 16) /**< Shifted mode DEFAULT for I2C_IF */
#define _I2C_IF_SSTOP_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IF */

/* Bit fields for I2C IFS */
#define _I2C_IFS_RESETVALUE               0x00000000UL         /**< Default value for I2C_IFS */
#define _I2C_IFS_MASK                     0x0001FFFFUL         /**< Mask for I2C_IFS */
#define I2C_IFS_START                     (0x1UL << 0)         /**< Set START Interrupt Flag */
#define _I2C_IFS_START_SHIFT              0                    /**< Shift value for I2C_START */
#define _I2C_IFS_START_MASK               0x1UL                /**< Bit mask for I2C_START */
#define I2C_IFS_START_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_START_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RSTART                    (0x1UL << 1)         /**< Set Repeated START Interrupt Flag */
#define _I2C_IFS_RSTART_SHIFT             1                    /**< Shift value for I2C_RSTART */
#define _I2C_IFS_RSTART_MASK              0x2UL                /**< Bit mask for I2C_RSTART */
#define I2C_IFS_RSTART_DEFAULT            (0x00000000UL << 1)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RSTART_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ADDR                      (0x1UL << 2)         /**< Set Address Interrupt Flag */
#define _I2C_IFS_ADDR_SHIFT               2                    /**< Shift value for I2C_ADDR */
#define _I2C_IFS_ADDR_MASK                0x4UL                /**< Bit mask for I2C_ADDR */
#define I2C_IFS_ADDR_DEFAULT              (0x00000000UL << 2)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ADDR_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXC                       (0x1UL << 3)         /**< Set Transfer Completed Interrupt Flag */
#define _I2C_IFS_TXC_SHIFT                3                    /**< Shift value for I2C_TXC */
#define _I2C_IFS_TXC_MASK                 0x8UL                /**< Bit mask for I2C_TXC */
#define I2C_IFS_TXC_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXC_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXBL                      (0x1UL << 4)         /**< Set Transmit Buffer level Interrupt Flag */
#define _I2C_IFS_TXBL_SHIFT               4                    /**< Shift value for I2C_TXBL */
#define _I2C_IFS_TXBL_MASK                0x10UL               /**< Bit mask for I2C_TXBL */
#define I2C_IFS_TXBL_DEFAULT              (0x00000000UL << 4)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXBL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RXDATAV                   (0x1UL << 5)         /**< Set Receive Data Valid Interrupt Flag */
#define _I2C_IFS_RXDATAV_SHIFT            5                    /**< Shift value for I2C_RXDATAV */
#define _I2C_IFS_RXDATAV_MASK             0x20UL               /**< Bit mask for I2C_RXDATAV */
#define I2C_IFS_RXDATAV_DEFAULT           (0x00000000UL << 5)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RXDATAV_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ACK                       (0x1UL << 6)         /**< Set Acknowledge Received Interrupt Flag */
#define _I2C_IFS_ACK_SHIFT                6                    /**< Shift value for I2C_ACK */
#define _I2C_IFS_ACK_MASK                 0x40UL               /**< Bit mask for I2C_ACK */
#define I2C_IFS_ACK_DEFAULT               (0x00000000UL << 6)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ACK_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_NACK                      (0x1UL << 7)         /**< Set Not Acknowledge Received Interrupt Flag */
#define _I2C_IFS_NACK_SHIFT               7                    /**< Shift value for I2C_NACK */
#define _I2C_IFS_NACK_MASK                0x80UL               /**< Bit mask for I2C_NACK */
#define I2C_IFS_NACK_DEFAULT              (0x00000000UL << 7)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_NACK_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_MSTOP                     (0x1UL << 8)         /**< Set MSTOP Interrupt Flag */
#define _I2C_IFS_MSTOP_SHIFT              8                    /**< Shift value for I2C_MSTOP */
#define _I2C_IFS_MSTOP_MASK               0x100UL              /**< Bit mask for I2C_MSTOP */
#define I2C_IFS_MSTOP_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_MSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_ARBLOST                   (0x1UL << 9)         /**< Set Arbitration Lost Interrupt Flag */
#define _I2C_IFS_ARBLOST_SHIFT            9                    /**< Shift value for I2C_ARBLOST */
#define _I2C_IFS_ARBLOST_MASK             0x200UL              /**< Bit mask for I2C_ARBLOST */
#define I2C_IFS_ARBLOST_DEFAULT           (0x00000000UL << 9)  /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_ARBLOST_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BUSERR                    (0x1UL << 10)        /**< Set Bus Error Interrupt Flag */
#define _I2C_IFS_BUSERR_SHIFT             10                   /**< Shift value for I2C_BUSERR */
#define _I2C_IFS_BUSERR_MASK              0x400UL              /**< Bit mask for I2C_BUSERR */
#define I2C_IFS_BUSERR_DEFAULT            (0x00000000UL << 10) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BUSERR_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BUSHOLD                   (0x1UL << 11)        /**< Set Bus Held Interrupt Flag */
#define _I2C_IFS_BUSHOLD_SHIFT            11                   /**< Shift value for I2C_BUSHOLD */
#define _I2C_IFS_BUSHOLD_MASK             0x800UL              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IFS_BUSHOLD_DEFAULT           (0x00000000UL << 11) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BUSHOLD_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_TXOF                      (0x1UL << 12)        /**< Set Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IFS_TXOF_SHIFT               12                   /**< Shift value for I2C_TXOF */
#define _I2C_IFS_TXOF_MASK                0x1000UL             /**< Bit mask for I2C_TXOF */
#define I2C_IFS_TXOF_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_TXOF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_RXUF                      (0x1UL << 13)        /**< Set Receive Buffer Underflow Interrupt Flag */
#define _I2C_IFS_RXUF_SHIFT               13                   /**< Shift value for I2C_RXUF */
#define _I2C_IFS_RXUF_MASK                0x2000UL             /**< Bit mask for I2C_RXUF */
#define I2C_IFS_RXUF_DEFAULT              (0x00000000UL << 13) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_RXUF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_BITO                      (0x1UL << 14)        /**< Set Bus Idle Timeout Interrupt Flag */
#define _I2C_IFS_BITO_SHIFT               14                   /**< Shift value for I2C_BITO */
#define _I2C_IFS_BITO_MASK                0x4000UL             /**< Bit mask for I2C_BITO */
#define I2C_IFS_BITO_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_BITO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_CLTO                      (0x1UL << 15)        /**< Set Clock Low Interrupt Flag */
#define _I2C_IFS_CLTO_SHIFT               15                   /**< Shift value for I2C_CLTO */
#define _I2C_IFS_CLTO_MASK                0x8000UL             /**< Bit mask for I2C_CLTO */
#define I2C_IFS_CLTO_DEFAULT              (0x00000000UL << 15) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_CLTO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFS */
#define I2C_IFS_SSTOP                     (0x1UL << 16)        /**< Set SSTOP Interrupt Flag */
#define _I2C_IFS_SSTOP_SHIFT              16                   /**< Shift value for I2C_SSTOP */
#define _I2C_IFS_SSTOP_MASK               0x10000UL            /**< Bit mask for I2C_SSTOP */
#define I2C_IFS_SSTOP_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for I2C_IFS */
#define _I2C_IFS_SSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFS */

/* Bit fields for I2C IFC */
#define _I2C_IFC_RESETVALUE               0x00000000UL         /**< Default value for I2C_IFC */
#define _I2C_IFC_MASK                     0x0001FFFFUL         /**< Mask for I2C_IFC */
#define I2C_IFC_START                     (0x1UL << 0)         /**< Clear START Interrupt Flag */
#define _I2C_IFC_START_SHIFT              0                    /**< Shift value for I2C_START */
#define _I2C_IFC_START_MASK               0x1UL                /**< Bit mask for I2C_START */
#define I2C_IFC_START_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_START_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RSTART                    (0x1UL << 1)         /**< Clear Repeated START Interrupt Flag */
#define _I2C_IFC_RSTART_SHIFT             1                    /**< Shift value for I2C_RSTART */
#define _I2C_IFC_RSTART_MASK              0x2UL                /**< Bit mask for I2C_RSTART */
#define I2C_IFC_RSTART_DEFAULT            (0x00000000UL << 1)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RSTART_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ADDR                      (0x1UL << 2)         /**< Clear Address Interrupt Flag */
#define _I2C_IFC_ADDR_SHIFT               2                    /**< Shift value for I2C_ADDR */
#define _I2C_IFC_ADDR_MASK                0x4UL                /**< Bit mask for I2C_ADDR */
#define I2C_IFC_ADDR_DEFAULT              (0x00000000UL << 2)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ADDR_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXC                       (0x1UL << 3)         /**< Clear Transfer Completed Interrupt Flag */
#define _I2C_IFC_TXC_SHIFT                3                    /**< Shift value for I2C_TXC */
#define _I2C_IFC_TXC_MASK                 0x8UL                /**< Bit mask for I2C_TXC */
#define I2C_IFC_TXC_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXC_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXBL                      (0x1UL << 4)         /**< Clear Transmit Buffer level Interrupt Flag */
#define _I2C_IFC_TXBL_SHIFT               4                    /**< Shift value for I2C_TXBL */
#define _I2C_IFC_TXBL_MASK                0x10UL               /**< Bit mask for I2C_TXBL */
#define I2C_IFC_TXBL_DEFAULT              (0x00000000UL << 4)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXBL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RXDATAV                   (0x1UL << 5)         /**< Clear Receive Data Valid Interrupt Flag */
#define _I2C_IFC_RXDATAV_SHIFT            5                    /**< Shift value for I2C_RXDATAV */
#define _I2C_IFC_RXDATAV_MASK             0x20UL               /**< Bit mask for I2C_RXDATAV */
#define I2C_IFC_RXDATAV_DEFAULT           (0x00000000UL << 5)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RXDATAV_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ACK                       (0x1UL << 6)         /**< Clear Acknowledge Received Interrupt Flag */
#define _I2C_IFC_ACK_SHIFT                6                    /**< Shift value for I2C_ACK */
#define _I2C_IFC_ACK_MASK                 0x40UL               /**< Bit mask for I2C_ACK */
#define I2C_IFC_ACK_DEFAULT               (0x00000000UL << 6)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ACK_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_NACK                      (0x1UL << 7)         /**< Clear Not Acknowledge Received Interrupt Flag */
#define _I2C_IFC_NACK_SHIFT               7                    /**< Shift value for I2C_NACK */
#define _I2C_IFC_NACK_MASK                0x80UL               /**< Bit mask for I2C_NACK */
#define I2C_IFC_NACK_DEFAULT              (0x00000000UL << 7)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_NACK_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_MSTOP                     (0x1UL << 8)         /**< Clear MSTOP Interrupt Flag */
#define _I2C_IFC_MSTOP_SHIFT              8                    /**< Shift value for I2C_MSTOP */
#define _I2C_IFC_MSTOP_MASK               0x100UL              /**< Bit mask for I2C_MSTOP */
#define I2C_IFC_MSTOP_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_MSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_ARBLOST                   (0x1UL << 9)         /**< Clear Arbitration Lost Interrupt Flag */
#define _I2C_IFC_ARBLOST_SHIFT            9                    /**< Shift value for I2C_ARBLOST */
#define _I2C_IFC_ARBLOST_MASK             0x200UL              /**< Bit mask for I2C_ARBLOST */
#define I2C_IFC_ARBLOST_DEFAULT           (0x00000000UL << 9)  /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_ARBLOST_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BUSERR                    (0x1UL << 10)        /**< Clear Bus Error Interrupt Flag */
#define _I2C_IFC_BUSERR_SHIFT             10                   /**< Shift value for I2C_BUSERR */
#define _I2C_IFC_BUSERR_MASK              0x400UL              /**< Bit mask for I2C_BUSERR */
#define I2C_IFC_BUSERR_DEFAULT            (0x00000000UL << 10) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BUSERR_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BUSHOLD                   (0x1UL << 11)        /**< Clear Bus Held Interrupt Flag */
#define _I2C_IFC_BUSHOLD_SHIFT            11                   /**< Shift value for I2C_BUSHOLD */
#define _I2C_IFC_BUSHOLD_MASK             0x800UL              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IFC_BUSHOLD_DEFAULT           (0x00000000UL << 11) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BUSHOLD_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_TXOF                      (0x1UL << 12)        /**< Clear Transmit Buffer Overflow Interrupt Flag */
#define _I2C_IFC_TXOF_SHIFT               12                   /**< Shift value for I2C_TXOF */
#define _I2C_IFC_TXOF_MASK                0x1000UL             /**< Bit mask for I2C_TXOF */
#define I2C_IFC_TXOF_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_TXOF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_RXUF                      (0x1UL << 13)        /**< Clear Receive Buffer Underflow Interrupt Flag */
#define _I2C_IFC_RXUF_SHIFT               13                   /**< Shift value for I2C_RXUF */
#define _I2C_IFC_RXUF_MASK                0x2000UL             /**< Bit mask for I2C_RXUF */
#define I2C_IFC_RXUF_DEFAULT              (0x00000000UL << 13) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_RXUF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_BITO                      (0x1UL << 14)        /**< Clear Bus Idle Timeout Interrupt Flag */
#define _I2C_IFC_BITO_SHIFT               14                   /**< Shift value for I2C_BITO */
#define _I2C_IFC_BITO_MASK                0x4000UL             /**< Bit mask for I2C_BITO */
#define I2C_IFC_BITO_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_BITO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_CLTO                      (0x1UL << 15)        /**< Clear Clock Low Interrupt Flag */
#define _I2C_IFC_CLTO_SHIFT               15                   /**< Shift value for I2C_CLTO */
#define _I2C_IFC_CLTO_MASK                0x8000UL             /**< Bit mask for I2C_CLTO */
#define I2C_IFC_CLTO_DEFAULT              (0x00000000UL << 15) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_CLTO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IFC */
#define I2C_IFC_SSTOP                     (0x1UL << 16)        /**< Clear SSTOP Interrupt Flag */
#define _I2C_IFC_SSTOP_SHIFT              16                   /**< Shift value for I2C_SSTOP */
#define _I2C_IFC_SSTOP_MASK               0x10000UL            /**< Bit mask for I2C_SSTOP */
#define I2C_IFC_SSTOP_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for I2C_IFC */
#define _I2C_IFC_SSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IFC */

/* Bit fields for I2C IEN */
#define _I2C_IEN_RESETVALUE               0x00000000UL         /**< Default value for I2C_IEN */
#define _I2C_IEN_MASK                     0x0001FFFFUL         /**< Mask for I2C_IEN */
#define I2C_IEN_START                     (0x1UL << 0)         /**< START Condition Interrupt Enable */
#define _I2C_IEN_START_SHIFT              0                    /**< Shift value for I2C_START */
#define _I2C_IEN_START_MASK               0x1UL                /**< Bit mask for I2C_START */
#define I2C_IEN_START_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_START_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RSTART                    (0x1UL << 1)         /**< Repeated START condition Interrupt Enable */
#define _I2C_IEN_RSTART_SHIFT             1                    /**< Shift value for I2C_RSTART */
#define _I2C_IEN_RSTART_MASK              0x2UL                /**< Bit mask for I2C_RSTART */
#define I2C_IEN_RSTART_DEFAULT            (0x00000000UL << 1)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RSTART_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ADDR                      (0x1UL << 2)         /**< Address Interrupt Enable */
#define _I2C_IEN_ADDR_SHIFT               2                    /**< Shift value for I2C_ADDR */
#define _I2C_IEN_ADDR_MASK                0x4UL                /**< Bit mask for I2C_ADDR */
#define I2C_IEN_ADDR_DEFAULT              (0x00000000UL << 2)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ADDR_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXC                       (0x1UL << 3)         /**< Transfer Completed Interrupt Enable */
#define _I2C_IEN_TXC_SHIFT                3                    /**< Shift value for I2C_TXC */
#define _I2C_IEN_TXC_MASK                 0x8UL                /**< Bit mask for I2C_TXC */
#define I2C_IEN_TXC_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXC_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXBL                      (0x1UL << 4)         /**< Transmit Buffer level Interrupt Enable */
#define _I2C_IEN_TXBL_SHIFT               4                    /**< Shift value for I2C_TXBL */
#define _I2C_IEN_TXBL_MASK                0x10UL               /**< Bit mask for I2C_TXBL */
#define I2C_IEN_TXBL_DEFAULT              (0x00000000UL << 4)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXBL_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RXDATAV                   (0x1UL << 5)         /**< Receive Data Valid Interrupt Enable */
#define _I2C_IEN_RXDATAV_SHIFT            5                    /**< Shift value for I2C_RXDATAV */
#define _I2C_IEN_RXDATAV_MASK             0x20UL               /**< Bit mask for I2C_RXDATAV */
#define I2C_IEN_RXDATAV_DEFAULT           (0x00000000UL << 5)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RXDATAV_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ACK                       (0x1UL << 6)         /**< Acknowledge Received Interrupt Enable */
#define _I2C_IEN_ACK_SHIFT                6                    /**< Shift value for I2C_ACK */
#define _I2C_IEN_ACK_MASK                 0x40UL               /**< Bit mask for I2C_ACK */
#define I2C_IEN_ACK_DEFAULT               (0x00000000UL << 6)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ACK_DEFAULT              0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_NACK                      (0x1UL << 7)         /**< Not Acknowledge Received Interrupt Enable */
#define _I2C_IEN_NACK_SHIFT               7                    /**< Shift value for I2C_NACK */
#define _I2C_IEN_NACK_MASK                0x80UL               /**< Bit mask for I2C_NACK */
#define I2C_IEN_NACK_DEFAULT              (0x00000000UL << 7)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_NACK_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_MSTOP                     (0x1UL << 8)         /**< MSTOP Interrupt Enable */
#define _I2C_IEN_MSTOP_SHIFT              8                    /**< Shift value for I2C_MSTOP */
#define _I2C_IEN_MSTOP_MASK               0x100UL              /**< Bit mask for I2C_MSTOP */
#define I2C_IEN_MSTOP_DEFAULT             (0x00000000UL << 8)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_MSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_ARBLOST                   (0x1UL << 9)         /**< Arbitration Lost Interrupt Enable */
#define _I2C_IEN_ARBLOST_SHIFT            9                    /**< Shift value for I2C_ARBLOST */
#define _I2C_IEN_ARBLOST_MASK             0x200UL              /**< Bit mask for I2C_ARBLOST */
#define I2C_IEN_ARBLOST_DEFAULT           (0x00000000UL << 9)  /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_ARBLOST_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BUSERR                    (0x1UL << 10)        /**< Bus Error Interrupt Enable */
#define _I2C_IEN_BUSERR_SHIFT             10                   /**< Shift value for I2C_BUSERR */
#define _I2C_IEN_BUSERR_MASK              0x400UL              /**< Bit mask for I2C_BUSERR */
#define I2C_IEN_BUSERR_DEFAULT            (0x00000000UL << 10) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BUSERR_DEFAULT           0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BUSHOLD                   (0x1UL << 11)        /**< Bus Held Interrupt Enable */
#define _I2C_IEN_BUSHOLD_SHIFT            11                   /**< Shift value for I2C_BUSHOLD */
#define _I2C_IEN_BUSHOLD_MASK             0x800UL              /**< Bit mask for I2C_BUSHOLD */
#define I2C_IEN_BUSHOLD_DEFAULT           (0x00000000UL << 11) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BUSHOLD_DEFAULT          0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_TXOF                      (0x1UL << 12)        /**< Transmit Buffer Overflow Interrupt Enable */
#define _I2C_IEN_TXOF_SHIFT               12                   /**< Shift value for I2C_TXOF */
#define _I2C_IEN_TXOF_MASK                0x1000UL             /**< Bit mask for I2C_TXOF */
#define I2C_IEN_TXOF_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_TXOF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_RXUF                      (0x1UL << 13)        /**< Receive Buffer Underflow Interrupt Enable */
#define _I2C_IEN_RXUF_SHIFT               13                   /**< Shift value for I2C_RXUF */
#define _I2C_IEN_RXUF_MASK                0x2000UL             /**< Bit mask for I2C_RXUF */
#define I2C_IEN_RXUF_DEFAULT              (0x00000000UL << 13) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_RXUF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_BITO                      (0x1UL << 14)        /**< Bus Idle Timeout Interrupt Enable */
#define _I2C_IEN_BITO_SHIFT               14                   /**< Shift value for I2C_BITO */
#define _I2C_IEN_BITO_MASK                0x4000UL             /**< Bit mask for I2C_BITO */
#define I2C_IEN_BITO_DEFAULT              (0x00000000UL << 14) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_BITO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_CLTO                      (0x1UL << 15)        /**< Clock Low Interrupt Enable */
#define _I2C_IEN_CLTO_SHIFT               15                   /**< Shift value for I2C_CLTO */
#define _I2C_IEN_CLTO_MASK                0x8000UL             /**< Bit mask for I2C_CLTO */
#define I2C_IEN_CLTO_DEFAULT              (0x00000000UL << 15) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_CLTO_DEFAULT             0x00000000UL         /**< Mode DEFAULT for I2C_IEN */
#define I2C_IEN_SSTOP                     (0x1UL << 16)        /**< SSTOP Interrupt Enable */
#define _I2C_IEN_SSTOP_SHIFT              16                   /**< Shift value for I2C_SSTOP */
#define _I2C_IEN_SSTOP_MASK               0x10000UL            /**< Bit mask for I2C_SSTOP */
#define I2C_IEN_SSTOP_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for I2C_IEN */
#define _I2C_IEN_SSTOP_DEFAULT            0x00000000UL         /**< Mode DEFAULT for I2C_IEN */

/* Bit fields for I2C ROUTE */
#define _I2C_ROUTE_RESETVALUE             0x00000000UL        /**< Default value for I2C_ROUTE */
#define _I2C_ROUTE_MASK                   0x00000303UL        /**< Mask for I2C_ROUTE */
#define I2C_ROUTE_SDAPEN                  (0x1UL << 0)        /**< SDA Pin Enable */
#define _I2C_ROUTE_SDAPEN_SHIFT           0                   /**< Shift value for I2C_SDAPEN */
#define _I2C_ROUTE_SDAPEN_MASK            0x1UL               /**< Bit mask for I2C_SDAPEN */
#define I2C_ROUTE_SDAPEN_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_SDAPEN_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_ROUTE */
#define I2C_ROUTE_SCLPEN                  (0x1UL << 1)        /**< SCL Pin Enable */
#define _I2C_ROUTE_SCLPEN_SHIFT           1                   /**< Shift value for I2C_SCLPEN */
#define _I2C_ROUTE_SCLPEN_MASK            0x2UL               /**< Bit mask for I2C_SCLPEN */
#define I2C_ROUTE_SCLPEN_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_SCLPEN_DEFAULT         0x00000000UL        /**< Mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_SHIFT         8                   /**< Shift value for I2C_LOCATION */
#define _I2C_ROUTE_LOCATION_MASK          0x300UL             /**< Bit mask for I2C_LOCATION */
#define I2C_ROUTE_LOCATION_DEFAULT        (0x00000000UL << 8) /**< Shifted mode DEFAULT for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC0           (0x00000000UL << 8) /**< Shifted mode LOC0 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC1           (0x00000001UL << 8) /**< Shifted mode LOC1 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC2           (0x00000002UL << 8) /**< Shifted mode LOC2 for I2C_ROUTE */
#define I2C_ROUTE_LOCATION_LOC3           (0x00000003UL << 8) /**< Shifted mode LOC3 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_DEFAULT       0x00000000UL        /**< Mode DEFAULT for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC0          0x00000000UL        /**< Mode LOC0 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC1          0x00000001UL        /**< Mode LOC1 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC2          0x00000002UL        /**< Mode LOC2 for I2C_ROUTE */
#define _I2C_ROUTE_LOCATION_LOC3          0x00000003UL        /**< Mode LOC3 for I2C_ROUTE */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ADC
 * @{
 *****************************************************************************/

/* Bit fields for ADC CTRL */
#define _ADC_CTRL_RESETVALUE                    0x001F0000UL         /**< Default value for ADC_CTRL */
#define _ADC_CTRL_MASK                          0x0F1F7F3BUL         /**< Mask for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_SHIFT              0                    /**< Shift value for ADC_WARMUPMODE */
#define _ADC_CTRL_WARMUPMODE_MASK               0x3UL                /**< Bit mask for ADC_WARMUPMODE */
#define ADC_CTRL_WARMUPMODE_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_WARMUPMODE_NORMAL              (0x00000000UL << 0)  /**< Shifted mode NORMAL for ADC_CTRL */
#define ADC_CTRL_WARMUPMODE_FASTBG              (0x00000001UL << 0)  /**< Shifted mode FASTBG for ADC_CTRL */
#define ADC_CTRL_WARMUPMODE_KEEPSCANREFWARM     (0x00000002UL << 0)  /**< Shifted mode KEEPSCANREFWARM for ADC_CTRL */
#define ADC_CTRL_WARMUPMODE_KEEPADCWARM         (0x00000003UL << 0)  /**< Shifted mode KEEPADCWARM for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_DEFAULT            0x00000000UL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_NORMAL             0x00000000UL         /**< Mode NORMAL for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_FASTBG             0x00000001UL         /**< Mode FASTBG for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_KEEPSCANREFWARM    0x00000002UL         /**< Mode KEEPSCANREFWARM for ADC_CTRL */
#define _ADC_CTRL_WARMUPMODE_KEEPADCWARM        0x00000003UL         /**< Mode KEEPADCWARM for ADC_CTRL */
#define ADC_CTRL_TAILGATE                       (0x1UL << 3)         /**< Conversion Tailgating */
#define _ADC_CTRL_TAILGATE_SHIFT                3                    /**< Shift value for ADC_TAILGATE */
#define _ADC_CTRL_TAILGATE_MASK                 0x8UL                /**< Bit mask for ADC_TAILGATE */
#define ADC_CTRL_TAILGATE_DEFAULT               (0x00000000UL << 3)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_TAILGATE_DEFAULT              0x00000000UL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_SHIFT                 4                    /**< Shift value for ADC_LPFMODE */
#define _ADC_CTRL_LPFMODE_MASK                  0x30UL               /**< Bit mask for ADC_LPFMODE */
#define ADC_CTRL_LPFMODE_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_LPFMODE_BYPASS                 (0x00000000UL << 4)  /**< Shifted mode BYPASS for ADC_CTRL */
#define ADC_CTRL_LPFMODE_RCFILT                 (0x00000001UL << 4)  /**< Shifted mode RCFILT for ADC_CTRL */
#define ADC_CTRL_LPFMODE_DECAP                  (0x00000002UL << 4)  /**< Shifted mode DECAP for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_BYPASS                0x00000000UL         /**< Mode BYPASS for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_RCFILT                0x00000001UL         /**< Mode RCFILT for ADC_CTRL */
#define _ADC_CTRL_LPFMODE_DECAP                 0x00000002UL         /**< Mode DECAP for ADC_CTRL */
#define _ADC_CTRL_PRESC_SHIFT                   8                    /**< Shift value for ADC_PRESC */
#define _ADC_CTRL_PRESC_MASK                    0x7F00UL             /**< Bit mask for ADC_PRESC */
#define ADC_CTRL_PRESC_DEFAULT                  (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_PRESC_NODIVISION               (0x00000000UL << 8)  /**< Shifted mode NODIVISION for ADC_CTRL */
#define _ADC_CTRL_PRESC_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_PRESC_NODIVISION              0x00000000UL         /**< Mode NODIVISION for ADC_CTRL */
#define _ADC_CTRL_TIMEBASE_SHIFT                16                   /**< Shift value for ADC_TIMEBASE */
#define _ADC_CTRL_TIMEBASE_MASK                 0x1F0000UL           /**< Bit mask for ADC_TIMEBASE */
#define ADC_CTRL_TIMEBASE_DEFAULT               (0x0000001FUL << 16) /**< Shifted mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_TIMEBASE_DEFAULT              0x0000001FUL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_SHIFT                 24                   /**< Shift value for ADC_OVSRSEL */
#define _ADC_CTRL_OVSRSEL_MASK                  0xF000000UL          /**< Bit mask for ADC_OVSRSEL */
#define ADC_CTRL_OVSRSEL_DEFAULT                (0x00000000UL << 24) /**< Shifted mode DEFAULT for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X2                     (0x00000000UL << 24) /**< Shifted mode X2 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X4                     (0x00000001UL << 24) /**< Shifted mode X4 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X8                     (0x00000002UL << 24) /**< Shifted mode X8 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X16                    (0x00000003UL << 24) /**< Shifted mode X16 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X32                    (0x00000004UL << 24) /**< Shifted mode X32 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X64                    (0x00000005UL << 24) /**< Shifted mode X64 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X128                   (0x00000006UL << 24) /**< Shifted mode X128 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X256                   (0x00000007UL << 24) /**< Shifted mode X256 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X512                   (0x00000008UL << 24) /**< Shifted mode X512 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X1024                  (0x00000009UL << 24) /**< Shifted mode X1024 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X2048                  (0x0000000AUL << 24) /**< Shifted mode X2048 for ADC_CTRL */
#define ADC_CTRL_OVSRSEL_X4096                  (0x0000000BUL << 24) /**< Shifted mode X4096 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X2                    0x00000000UL         /**< Mode X2 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X4                    0x00000001UL         /**< Mode X4 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X8                    0x00000002UL         /**< Mode X8 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X16                   0x00000003UL         /**< Mode X16 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X32                   0x00000004UL         /**< Mode X32 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X64                   0x00000005UL         /**< Mode X64 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X128                  0x00000006UL         /**< Mode X128 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X256                  0x00000007UL         /**< Mode X256 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X512                  0x00000008UL         /**< Mode X512 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X1024                 0x00000009UL         /**< Mode X1024 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X2048                 0x0000000AUL         /**< Mode X2048 for ADC_CTRL */
#define _ADC_CTRL_OVSRSEL_X4096                 0x0000000BUL         /**< Mode X4096 for ADC_CTRL */

/* Bit fields for ADC CMD */
#define _ADC_CMD_RESETVALUE                     0x00000000UL        /**< Default value for ADC_CMD */
#define _ADC_CMD_MASK                           0x0000000FUL        /**< Mask for ADC_CMD */
#define ADC_CMD_SINGLESTART                     (0x1UL << 0)        /**< Single Conversion Start */
#define _ADC_CMD_SINGLESTART_SHIFT              0                   /**< Shift value for ADC_SINGLESTART */
#define _ADC_CMD_SINGLESTART_MASK               0x1UL               /**< Bit mask for ADC_SINGLESTART */
#define ADC_CMD_SINGLESTART_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SINGLESTART_DEFAULT            0x00000000UL        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SINGLESTOP                      (0x1UL << 1)        /**< Single Conversion Stop */
#define _ADC_CMD_SINGLESTOP_SHIFT               1                   /**< Shift value for ADC_SINGLESTOP */
#define _ADC_CMD_SINGLESTOP_MASK                0x2UL               /**< Bit mask for ADC_SINGLESTOP */
#define ADC_CMD_SINGLESTOP_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SINGLESTOP_DEFAULT             0x00000000UL        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SCANSTART                       (0x1UL << 2)        /**< Scan Sequence Start */
#define _ADC_CMD_SCANSTART_SHIFT                2                   /**< Shift value for ADC_SCANSTART */
#define _ADC_CMD_SCANSTART_MASK                 0x4UL               /**< Bit mask for ADC_SCANSTART */
#define ADC_CMD_SCANSTART_DEFAULT               (0x00000000UL << 2) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SCANSTART_DEFAULT              0x00000000UL        /**< Mode DEFAULT for ADC_CMD */
#define ADC_CMD_SCANSTOP                        (0x1UL << 3)        /**< Scan Sequence Stop */
#define _ADC_CMD_SCANSTOP_SHIFT                 3                   /**< Shift value for ADC_SCANSTOP */
#define _ADC_CMD_SCANSTOP_MASK                  0x8UL               /**< Bit mask for ADC_SCANSTOP */
#define ADC_CMD_SCANSTOP_DEFAULT                (0x00000000UL << 3) /**< Shifted mode DEFAULT for ADC_CMD */
#define _ADC_CMD_SCANSTOP_DEFAULT               0x00000000UL        /**< Mode DEFAULT for ADC_CMD */

/* Bit fields for ADC STATUS */
#define _ADC_STATUS_RESETVALUE                  0x00000000UL         /**< Default value for ADC_STATUS */
#define _ADC_STATUS_MASK                        0x07031303UL         /**< Mask for ADC_STATUS */
#define ADC_STATUS_SINGLEACT                    (0x1UL << 0)         /**< Single Conversion Active */
#define _ADC_STATUS_SINGLEACT_SHIFT             0                    /**< Shift value for ADC_SINGLEACT */
#define _ADC_STATUS_SINGLEACT_MASK              0x1UL                /**< Bit mask for ADC_SINGLEACT */
#define ADC_STATUS_SINGLEACT_DEFAULT            (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEACT_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANACT                      (0x1UL << 1)         /**< Scan Conversion Active */
#define _ADC_STATUS_SCANACT_SHIFT               1                    /**< Shift value for ADC_SCANACT */
#define _ADC_STATUS_SCANACT_MASK                0x2UL                /**< Bit mask for ADC_SCANACT */
#define ADC_STATUS_SCANACT_DEFAULT              (0x00000000UL << 1)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANACT_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SINGLEREFWARM                (0x1UL << 8)         /**< Single Reference Warmed Up */
#define _ADC_STATUS_SINGLEREFWARM_SHIFT         8                    /**< Shift value for ADC_SINGLEREFWARM */
#define _ADC_STATUS_SINGLEREFWARM_MASK          0x100UL              /**< Bit mask for ADC_SINGLEREFWARM */
#define ADC_STATUS_SINGLEREFWARM_DEFAULT        (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEREFWARM_DEFAULT       0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANREFWARM                  (0x1UL << 9)         /**< Scan Reference Warmed Up */
#define _ADC_STATUS_SCANREFWARM_SHIFT           9                    /**< Shift value for ADC_SCANREFWARM */
#define _ADC_STATUS_SCANREFWARM_MASK            0x200UL              /**< Bit mask for ADC_SCANREFWARM */
#define ADC_STATUS_SCANREFWARM_DEFAULT          (0x00000000UL << 9)  /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANREFWARM_DEFAULT         0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_WARM                         (0x1UL << 12)        /**< ADC Warmed Up */
#define _ADC_STATUS_WARM_SHIFT                  12                   /**< Shift value for ADC_WARM */
#define _ADC_STATUS_WARM_MASK                   0x1000UL             /**< Bit mask for ADC_WARM */
#define ADC_STATUS_WARM_DEFAULT                 (0x00000000UL << 12) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_WARM_DEFAULT                0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SINGLEDV                     (0x1UL << 16)        /**< Single Sample Data Valid */
#define _ADC_STATUS_SINGLEDV_SHIFT              16                   /**< Shift value for ADC_SINGLEDV */
#define _ADC_STATUS_SINGLEDV_MASK               0x10000UL            /**< Bit mask for ADC_SINGLEDV */
#define ADC_STATUS_SINGLEDV_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SINGLEDV_DEFAULT            0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANDV                       (0x1UL << 17)        /**< Scan Data Valid */
#define _ADC_STATUS_SCANDV_SHIFT                17                   /**< Shift value for ADC_SCANDV */
#define _ADC_STATUS_SCANDV_MASK                 0x20000UL            /**< Bit mask for ADC_SCANDV */
#define ADC_STATUS_SCANDV_DEFAULT               (0x00000000UL << 17) /**< Shifted mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDV_DEFAULT              0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_SHIFT           24                   /**< Shift value for ADC_SCANDATASRC */
#define _ADC_STATUS_SCANDATASRC_MASK            0x7000000UL          /**< Bit mask for ADC_SCANDATASRC */
#define ADC_STATUS_SCANDATASRC_DEFAULT          (0x00000000UL << 24) /**< Shifted mode DEFAULT for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH0              (0x00000000UL << 24) /**< Shifted mode CH0 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH1              (0x00000001UL << 24) /**< Shifted mode CH1 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH2              (0x00000002UL << 24) /**< Shifted mode CH2 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH3              (0x00000003UL << 24) /**< Shifted mode CH3 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH4              (0x00000004UL << 24) /**< Shifted mode CH4 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH5              (0x00000005UL << 24) /**< Shifted mode CH5 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH6              (0x00000006UL << 24) /**< Shifted mode CH6 for ADC_STATUS */
#define ADC_STATUS_SCANDATASRC_CH7              (0x00000007UL << 24) /**< Shifted mode CH7 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_DEFAULT         0x00000000UL         /**< Mode DEFAULT for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH0             0x00000000UL         /**< Mode CH0 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH1             0x00000001UL         /**< Mode CH1 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH2             0x00000002UL         /**< Mode CH2 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH3             0x00000003UL         /**< Mode CH3 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH4             0x00000004UL         /**< Mode CH4 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH5             0x00000005UL         /**< Mode CH5 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH6             0x00000006UL         /**< Mode CH6 for ADC_STATUS */
#define _ADC_STATUS_SCANDATASRC_CH7             0x00000007UL         /**< Mode CH7 for ADC_STATUS */

/* Bit fields for ADC SINGLECTRL */
#define _ADC_SINGLECTRL_RESETVALUE              0x00000000UL         /**< Default value for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_MASK                    0x71F70F37UL         /**< Mask for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REP                      (0x1UL << 0)         /**< Single Sample Repetitive Mode */
#define _ADC_SINGLECTRL_REP_SHIFT               0                    /**< Shift value for ADC_REP */
#define _ADC_SINGLECTRL_REP_MASK                0x1UL                /**< Bit mask for ADC_REP */
#define ADC_SINGLECTRL_REP_DEFAULT              (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REP_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_DIFF                     (0x1UL << 1)         /**< Single Sample Differential Mode */
#define _ADC_SINGLECTRL_DIFF_SHIFT              1                    /**< Shift value for ADC_DIFF */
#define _ADC_SINGLECTRL_DIFF_MASK               0x2UL                /**< Bit mask for ADC_DIFF */
#define ADC_SINGLECTRL_DIFF_DEFAULT             (0x00000000UL << 1)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_DIFF_DEFAULT            0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_ADJ                      (0x1UL << 2)         /**< Single Sample Result Adjustment */
#define _ADC_SINGLECTRL_ADJ_SHIFT               2                    /**< Shift value for ADC_ADJ */
#define _ADC_SINGLECTRL_ADJ_MASK                0x4UL                /**< Bit mask for ADC_ADJ */
#define ADC_SINGLECTRL_ADJ_DEFAULT              (0x00000000UL << 2)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_ADJ_RIGHT                (0x00000000UL << 2)  /**< Shifted mode RIGHT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_ADJ_LEFT                 (0x00000001UL << 2)  /**< Shifted mode LEFT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_ADJ_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_ADJ_RIGHT               0x00000000UL         /**< Mode RIGHT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_ADJ_LEFT                0x00000001UL         /**< Mode LEFT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_SHIFT               4                    /**< Shift value for ADC_RES */
#define _ADC_SINGLECTRL_RES_MASK                0x30UL               /**< Bit mask for ADC_RES */
#define ADC_SINGLECTRL_RES_DEFAULT              (0x00000000UL << 4)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_RES_12BIT                (0x00000000UL << 4)  /**< Shifted mode 12BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_RES_8BIT                 (0x00000001UL << 4)  /**< Shifted mode 8BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_RES_6BIT                 (0x00000002UL << 4)  /**< Shifted mode 6BIT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_RES_OVS                  (0x00000003UL << 4)  /**< Shifted mode OVS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_12BIT               0x00000000UL         /**< Mode 12BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_8BIT                0x00000001UL         /**< Mode 8BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_6BIT                0x00000002UL         /**< Mode 6BIT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_RES_OVS                 0x00000003UL         /**< Mode OVS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_SHIFT          8                    /**< Shift value for ADC_INPUTSEL */
#define _ADC_SINGLECTRL_INPUTSEL_MASK           0xF00UL              /**< Bit mask for ADC_INPUTSEL */
#define ADC_SINGLECTRL_INPUTSEL_DEFAULT         (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH0             (0x00000000UL << 8)  /**< Shifted mode CH0 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH0CH1          (0x00000000UL << 8)  /**< Shifted mode CH0CH1 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH1             (0x00000001UL << 8)  /**< Shifted mode CH1 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH2CH3          (0x00000001UL << 8)  /**< Shifted mode CH2CH3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH2             (0x00000002UL << 8)  /**< Shifted mode CH2 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH4CH5          (0x00000002UL << 8)  /**< Shifted mode CH4CH5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH6CH7          (0x00000003UL << 8)  /**< Shifted mode CH6CH7 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH3             (0x00000003UL << 8)  /**< Shifted mode CH3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH4             (0x00000004UL << 8)  /**< Shifted mode CH4 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH5             (0x00000005UL << 8)  /**< Shifted mode CH5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH6             (0x00000006UL << 8)  /**< Shifted mode CH6 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_CH7             (0x00000007UL << 8)  /**< Shifted mode CH7 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_TEMP            (0x00000008UL << 8)  /**< Shifted mode TEMP for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_VDDDIV3         (0x00000009UL << 8)  /**< Shifted mode VDDDIV3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_VDD             (0x0000000AUL << 8)  /**< Shifted mode VDD for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_VSS             (0x0000000BUL << 8)  /**< Shifted mode VSS for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_VREFDIV2        (0x0000000CUL << 8)  /**< Shifted mode VREFDIV2 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_DACOUT0         (0x0000000DUL << 8)  /**< Shifted mode DACOUT0 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_INPUTSEL_DACOUT1         (0x0000000EUL << 8)  /**< Shifted mode DACOUT1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_DEFAULT        0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH0            0x00000000UL         /**< Mode CH0 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH0CH1         0x00000000UL         /**< Mode CH0CH1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH1            0x00000001UL         /**< Mode CH1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH2CH3         0x00000001UL         /**< Mode CH2CH3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH2            0x00000002UL         /**< Mode CH2 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH4CH5         0x00000002UL         /**< Mode CH4CH5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH6CH7         0x00000003UL         /**< Mode CH6CH7 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH3            0x00000003UL         /**< Mode CH3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH4            0x00000004UL         /**< Mode CH4 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH5            0x00000005UL         /**< Mode CH5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH6            0x00000006UL         /**< Mode CH6 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_CH7            0x00000007UL         /**< Mode CH7 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_TEMP           0x00000008UL         /**< Mode TEMP for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_VDDDIV3        0x00000009UL         /**< Mode VDDDIV3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_VDD            0x0000000AUL         /**< Mode VDD for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_VSS            0x0000000BUL         /**< Mode VSS for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_VREFDIV2       0x0000000CUL         /**< Mode VREFDIV2 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_DACOUT0        0x0000000DUL         /**< Mode DACOUT0 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_INPUTSEL_DACOUT1        0x0000000EUL         /**< Mode DACOUT1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_SHIFT               16                   /**< Shift value for ADC_REF */
#define _ADC_SINGLECTRL_REF_MASK                0x70000UL            /**< Bit mask for ADC_REF */
#define ADC_SINGLECTRL_REF_DEFAULT              (0x00000000UL << 16) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_1V25                 (0x00000000UL << 16) /**< Shifted mode 1V25 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_2V5                  (0x00000001UL << 16) /**< Shifted mode 2V5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_VDD                  (0x00000002UL << 16) /**< Shifted mode VDD for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_5VDIFF               (0x00000003UL << 16) /**< Shifted mode 5VDIFF for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_EXTSINGLE            (0x00000004UL << 16) /**< Shifted mode EXTSINGLE for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_2XEXTDIFF            (0x00000005UL << 16) /**< Shifted mode 2XEXTDIFF for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_REF_2XVDD                (0x00000006UL << 16) /**< Shifted mode 2XVDD for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_1V25                0x00000000UL         /**< Mode 1V25 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_2V5                 0x00000001UL         /**< Mode 2V5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_VDD                 0x00000002UL         /**< Mode VDD for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_5VDIFF              0x00000003UL         /**< Mode 5VDIFF for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_EXTSINGLE           0x00000004UL         /**< Mode EXTSINGLE for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_2XEXTDIFF           0x00000005UL         /**< Mode 2XEXTDIFF for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_REF_2XVDD               0x00000006UL         /**< Mode 2XVDD for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_SHIFT                20                   /**< Shift value for ADC_AT */
#define _ADC_SINGLECTRL_AT_MASK                 0xF00000UL           /**< Bit mask for ADC_AT */
#define ADC_SINGLECTRL_AT_DEFAULT               (0x00000000UL << 20) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_1CYCLE                (0x00000000UL << 20) /**< Shifted mode 1CYCLE for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_2CYCLES               (0x00000001UL << 20) /**< Shifted mode 2CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_4CYCLES               (0x00000002UL << 20) /**< Shifted mode 4CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_8CYCLES               (0x00000003UL << 20) /**< Shifted mode 8CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_16CYCLES              (0x00000004UL << 20) /**< Shifted mode 16CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_32CYCLES              (0x00000005UL << 20) /**< Shifted mode 32CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_64CYCLES              (0x00000006UL << 20) /**< Shifted mode 64CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_128CYCLES             (0x00000007UL << 20) /**< Shifted mode 128CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_AT_256CYCLES             (0x00000008UL << 20) /**< Shifted mode 256CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_DEFAULT              0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_1CYCLE               0x00000000UL         /**< Mode 1CYCLE for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_2CYCLES              0x00000001UL         /**< Mode 2CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_4CYCLES              0x00000002UL         /**< Mode 4CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_8CYCLES              0x00000003UL         /**< Mode 8CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_16CYCLES             0x00000004UL         /**< Mode 16CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_32CYCLES             0x00000005UL         /**< Mode 32CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_64CYCLES             0x00000006UL         /**< Mode 64CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_128CYCLES            0x00000007UL         /**< Mode 128CYCLES for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_AT_256CYCLES            0x00000008UL         /**< Mode 256CYCLES for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSEN                    (0x1UL << 24)        /**< Single Sample PRS Trigger Enable */
#define _ADC_SINGLECTRL_PRSEN_SHIFT             24                   /**< Shift value for ADC_PRSEN */
#define _ADC_SINGLECTRL_PRSEN_MASK              0x1000000UL          /**< Bit mask for ADC_PRSEN */
#define ADC_SINGLECTRL_PRSEN_DEFAULT            (0x00000000UL << 24) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSEN_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_SHIFT            28                   /**< Shift value for ADC_PRSSEL */
#define _ADC_SINGLECTRL_PRSSEL_MASK             0x70000000UL         /**< Bit mask for ADC_PRSSEL */
#define ADC_SINGLECTRL_PRSSEL_DEFAULT           (0x00000000UL << 28) /**< Shifted mode DEFAULT for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH0            (0x00000000UL << 28) /**< Shifted mode PRSCH0 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH1            (0x00000001UL << 28) /**< Shifted mode PRSCH1 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH2            (0x00000002UL << 28) /**< Shifted mode PRSCH2 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH3            (0x00000003UL << 28) /**< Shifted mode PRSCH3 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH4            (0x00000004UL << 28) /**< Shifted mode PRSCH4 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH5            (0x00000005UL << 28) /**< Shifted mode PRSCH5 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH6            (0x00000006UL << 28) /**< Shifted mode PRSCH6 for ADC_SINGLECTRL */
#define ADC_SINGLECTRL_PRSSEL_PRSCH7            (0x00000007UL << 28) /**< Shifted mode PRSCH7 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_DEFAULT          0x00000000UL         /**< Mode DEFAULT for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH0           0x00000000UL         /**< Mode PRSCH0 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH1           0x00000001UL         /**< Mode PRSCH1 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH2           0x00000002UL         /**< Mode PRSCH2 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH3           0x00000003UL         /**< Mode PRSCH3 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH4           0x00000004UL         /**< Mode PRSCH4 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH5           0x00000005UL         /**< Mode PRSCH5 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH6           0x00000006UL         /**< Mode PRSCH6 for ADC_SINGLECTRL */
#define _ADC_SINGLECTRL_PRSSEL_PRSCH7           0x00000007UL         /**< Mode PRSCH7 for ADC_SINGLECTRL */

/* Bit fields for ADC SCANCTRL */
#define _ADC_SCANCTRL_RESETVALUE                0x00000000UL         /**< Default value for ADC_SCANCTRL */
#define _ADC_SCANCTRL_MASK                      0x71F7FF37UL         /**< Mask for ADC_SCANCTRL */
#define ADC_SCANCTRL_REP                        (0x1UL << 0)         /**< Scan Sequence Repetitive Mode */
#define _ADC_SCANCTRL_REP_SHIFT                 0                    /**< Shift value for ADC_REP */
#define _ADC_SCANCTRL_REP_MASK                  0x1UL                /**< Bit mask for ADC_REP */
#define ADC_SCANCTRL_REP_DEFAULT                (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REP_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_DIFF                       (0x1UL << 1)         /**< Scan Sequence Differential Mode */
#define _ADC_SCANCTRL_DIFF_SHIFT                1                    /**< Shift value for ADC_DIFF */
#define _ADC_SCANCTRL_DIFF_MASK                 0x2UL                /**< Bit mask for ADC_DIFF */
#define ADC_SCANCTRL_DIFF_DEFAULT               (0x00000000UL << 1)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_DIFF_DEFAULT              0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_ADJ                        (0x1UL << 2)         /**< Scan Sequence Result Adjustment */
#define _ADC_SCANCTRL_ADJ_SHIFT                 2                    /**< Shift value for ADC_ADJ */
#define _ADC_SCANCTRL_ADJ_MASK                  0x4UL                /**< Bit mask for ADC_ADJ */
#define ADC_SCANCTRL_ADJ_DEFAULT                (0x00000000UL << 2)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_ADJ_RIGHT                  (0x00000000UL << 2)  /**< Shifted mode RIGHT for ADC_SCANCTRL */
#define ADC_SCANCTRL_ADJ_LEFT                   (0x00000001UL << 2)  /**< Shifted mode LEFT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_ADJ_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_ADJ_RIGHT                 0x00000000UL         /**< Mode RIGHT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_ADJ_LEFT                  0x00000001UL         /**< Mode LEFT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_SHIFT                 4                    /**< Shift value for ADC_RES */
#define _ADC_SCANCTRL_RES_MASK                  0x30UL               /**< Bit mask for ADC_RES */
#define ADC_SCANCTRL_RES_DEFAULT                (0x00000000UL << 4)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_RES_12BIT                  (0x00000000UL << 4)  /**< Shifted mode 12BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_RES_8BIT                   (0x00000001UL << 4)  /**< Shifted mode 8BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_RES_6BIT                   (0x00000002UL << 4)  /**< Shifted mode 6BIT for ADC_SCANCTRL */
#define ADC_SCANCTRL_RES_OVS                    (0x00000003UL << 4)  /**< Shifted mode OVS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_12BIT                 0x00000000UL         /**< Mode 12BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_8BIT                  0x00000001UL         /**< Mode 8BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_6BIT                  0x00000002UL         /**< Mode 6BIT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_RES_OVS                   0x00000003UL         /**< Mode OVS for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_SHIFT           8                    /**< Shift value for ADC_INPUTMASK */
#define _ADC_SCANCTRL_INPUTMASK_MASK            0xFF00UL             /**< Bit mask for ADC_INPUTMASK */
#define ADC_SCANCTRL_INPUTMASK_DEFAULT          (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH0              (0x00000001UL << 8)  /**< Shifted mode CH0 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH0CH1           (0x00000001UL << 8)  /**< Shifted mode CH0CH1 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH1              (0x00000002UL << 8)  /**< Shifted mode CH1 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH2CH3           (0x00000002UL << 8)  /**< Shifted mode CH2CH3 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH2              (0x00000004UL << 8)  /**< Shifted mode CH2 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH4CH5           (0x00000004UL << 8)  /**< Shifted mode CH4CH5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH6CH7           (0x00000008UL << 8)  /**< Shifted mode CH6CH7 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH3              (0x00000008UL << 8)  /**< Shifted mode CH3 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH4              (0x00000010UL << 8)  /**< Shifted mode CH4 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH5              (0x00000020UL << 8)  /**< Shifted mode CH5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH6              (0x00000040UL << 8)  /**< Shifted mode CH6 for ADC_SCANCTRL */
#define ADC_SCANCTRL_INPUTMASK_CH7              (0x00000080UL << 8)  /**< Shifted mode CH7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_DEFAULT         0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH0             0x00000001UL         /**< Mode CH0 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH0CH1          0x00000001UL         /**< Mode CH0CH1 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH1             0x00000002UL         /**< Mode CH1 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH2CH3          0x00000002UL         /**< Mode CH2CH3 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH2             0x00000004UL         /**< Mode CH2 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH4CH5          0x00000004UL         /**< Mode CH4CH5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH6CH7          0x00000008UL         /**< Mode CH6CH7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH3             0x00000008UL         /**< Mode CH3 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH4             0x00000010UL         /**< Mode CH4 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH5             0x00000020UL         /**< Mode CH5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH6             0x00000040UL         /**< Mode CH6 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_INPUTMASK_CH7             0x00000080UL         /**< Mode CH7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_SHIFT                 16                   /**< Shift value for ADC_REF */
#define _ADC_SCANCTRL_REF_MASK                  0x70000UL            /**< Bit mask for ADC_REF */
#define ADC_SCANCTRL_REF_DEFAULT                (0x00000000UL << 16) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_1V25                   (0x00000000UL << 16) /**< Shifted mode 1V25 for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_2V5                    (0x00000001UL << 16) /**< Shifted mode 2V5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_VDD                    (0x00000002UL << 16) /**< Shifted mode VDD for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_5VDIFF                 (0x00000003UL << 16) /**< Shifted mode 5VDIFF for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_EXTSINGLE              (0x00000004UL << 16) /**< Shifted mode EXTSINGLE for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_2XEXTDIFF              (0x00000005UL << 16) /**< Shifted mode 2XEXTDIFF for ADC_SCANCTRL */
#define ADC_SCANCTRL_REF_2XVDD                  (0x00000006UL << 16) /**< Shifted mode 2XVDD for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_DEFAULT               0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_1V25                  0x00000000UL         /**< Mode 1V25 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_2V5                   0x00000001UL         /**< Mode 2V5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_VDD                   0x00000002UL         /**< Mode VDD for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_5VDIFF                0x00000003UL         /**< Mode 5VDIFF for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_EXTSINGLE             0x00000004UL         /**< Mode EXTSINGLE for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_2XEXTDIFF             0x00000005UL         /**< Mode 2XEXTDIFF for ADC_SCANCTRL */
#define _ADC_SCANCTRL_REF_2XVDD                 0x00000006UL         /**< Mode 2XVDD for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_SHIFT                  20                   /**< Shift value for ADC_AT */
#define _ADC_SCANCTRL_AT_MASK                   0xF00000UL           /**< Bit mask for ADC_AT */
#define ADC_SCANCTRL_AT_DEFAULT                 (0x00000000UL << 20) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_1CYCLE                  (0x00000000UL << 20) /**< Shifted mode 1CYCLE for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_2CYCLES                 (0x00000001UL << 20) /**< Shifted mode 2CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_4CYCLES                 (0x00000002UL << 20) /**< Shifted mode 4CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_8CYCLES                 (0x00000003UL << 20) /**< Shifted mode 8CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_16CYCLES                (0x00000004UL << 20) /**< Shifted mode 16CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_32CYCLES                (0x00000005UL << 20) /**< Shifted mode 32CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_64CYCLES                (0x00000006UL << 20) /**< Shifted mode 64CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_128CYCLES               (0x00000007UL << 20) /**< Shifted mode 128CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_AT_256CYCLES               (0x00000008UL << 20) /**< Shifted mode 256CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_DEFAULT                0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_1CYCLE                 0x00000000UL         /**< Mode 1CYCLE for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_2CYCLES                0x00000001UL         /**< Mode 2CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_4CYCLES                0x00000002UL         /**< Mode 4CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_8CYCLES                0x00000003UL         /**< Mode 8CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_16CYCLES               0x00000004UL         /**< Mode 16CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_32CYCLES               0x00000005UL         /**< Mode 32CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_64CYCLES               0x00000006UL         /**< Mode 64CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_128CYCLES              0x00000007UL         /**< Mode 128CYCLES for ADC_SCANCTRL */
#define _ADC_SCANCTRL_AT_256CYCLES              0x00000008UL         /**< Mode 256CYCLES for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSEN                      (0x1UL << 24)        /**< Scan Sequence PRS Trigger Enable */
#define _ADC_SCANCTRL_PRSEN_SHIFT               24                   /**< Shift value for ADC_PRSEN */
#define _ADC_SCANCTRL_PRSEN_MASK                0x1000000UL          /**< Bit mask for ADC_PRSEN */
#define ADC_SCANCTRL_PRSEN_DEFAULT              (0x00000000UL << 24) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSEN_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_SHIFT              28                   /**< Shift value for ADC_PRSSEL */
#define _ADC_SCANCTRL_PRSSEL_MASK               0x70000000UL         /**< Bit mask for ADC_PRSSEL */
#define ADC_SCANCTRL_PRSSEL_DEFAULT             (0x00000000UL << 28) /**< Shifted mode DEFAULT for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH0              (0x00000000UL << 28) /**< Shifted mode PRSCH0 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH1              (0x00000001UL << 28) /**< Shifted mode PRSCH1 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH2              (0x00000002UL << 28) /**< Shifted mode PRSCH2 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH3              (0x00000003UL << 28) /**< Shifted mode PRSCH3 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH4              (0x00000004UL << 28) /**< Shifted mode PRSCH4 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH5              (0x00000005UL << 28) /**< Shifted mode PRSCH5 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH6              (0x00000006UL << 28) /**< Shifted mode PRSCH6 for ADC_SCANCTRL */
#define ADC_SCANCTRL_PRSSEL_PRSCH7              (0x00000007UL << 28) /**< Shifted mode PRSCH7 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_DEFAULT            0x00000000UL         /**< Mode DEFAULT for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH0             0x00000000UL         /**< Mode PRSCH0 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH1             0x00000001UL         /**< Mode PRSCH1 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH2             0x00000002UL         /**< Mode PRSCH2 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH3             0x00000003UL         /**< Mode PRSCH3 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH4             0x00000004UL         /**< Mode PRSCH4 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH5             0x00000005UL         /**< Mode PRSCH5 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH6             0x00000006UL         /**< Mode PRSCH6 for ADC_SCANCTRL */
#define _ADC_SCANCTRL_PRSSEL_PRSCH7             0x00000007UL         /**< Mode PRSCH7 for ADC_SCANCTRL */

/* Bit fields for ADC IEN */
#define _ADC_IEN_RESETVALUE                     0x00000000UL        /**< Default value for ADC_IEN */
#define _ADC_IEN_MASK                           0x00000303UL        /**< Mask for ADC_IEN */
#define ADC_IEN_SINGLE                          (0x1UL << 0)        /**< Single Conversion Complete Interrupt Enable */
#define _ADC_IEN_SINGLE_SHIFT                   0                   /**< Shift value for ADC_SINGLE */
#define _ADC_IEN_SINGLE_MASK                    0x1UL               /**< Bit mask for ADC_SINGLE */
#define ADC_IEN_SINGLE_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SINGLE_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SCAN                            (0x1UL << 1)        /**< Scan Conversion Complete Interrupt Enable */
#define _ADC_IEN_SCAN_SHIFT                     1                   /**< Shift value for ADC_SCAN */
#define _ADC_IEN_SCAN_MASK                      0x2UL               /**< Bit mask for ADC_SCAN */
#define ADC_IEN_SCAN_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SCAN_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SINGLEOF                        (0x1UL << 8)        /**< Single Result Overflow Interrupt Enable */
#define _ADC_IEN_SINGLEOF_SHIFT                 8                   /**< Shift value for ADC_SINGLEOF */
#define _ADC_IEN_SINGLEOF_MASK                  0x100UL             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IEN_SINGLEOF_DEFAULT                (0x00000000UL << 8) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SINGLEOF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for ADC_IEN */
#define ADC_IEN_SCANOF                          (0x1UL << 9)        /**< Scan Result Overflow Interrupt Enable */
#define _ADC_IEN_SCANOF_SHIFT                   9                   /**< Shift value for ADC_SCANOF */
#define _ADC_IEN_SCANOF_MASK                    0x200UL             /**< Bit mask for ADC_SCANOF */
#define ADC_IEN_SCANOF_DEFAULT                  (0x00000000UL << 9) /**< Shifted mode DEFAULT for ADC_IEN */
#define _ADC_IEN_SCANOF_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IEN */

/* Bit fields for ADC IF */
#define _ADC_IF_RESETVALUE                      0x00000000UL        /**< Default value for ADC_IF */
#define _ADC_IF_MASK                            0x00000303UL        /**< Mask for ADC_IF */
#define ADC_IF_SINGLE                           (0x1UL << 0)        /**< Single Conversion Complete Interrupt Flag */
#define _ADC_IF_SINGLE_SHIFT                    0                   /**< Shift value for ADC_SINGLE */
#define _ADC_IF_SINGLE_MASK                     0x1UL               /**< Bit mask for ADC_SINGLE */
#define ADC_IF_SINGLE_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SINGLE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SCAN                             (0x1UL << 1)        /**< Scan Conversion Complete Interrupt Flag */
#define _ADC_IF_SCAN_SHIFT                      1                   /**< Shift value for ADC_SCAN */
#define _ADC_IF_SCAN_MASK                       0x2UL               /**< Bit mask for ADC_SCAN */
#define ADC_IF_SCAN_DEFAULT                     (0x00000000UL << 1) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SCAN_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SINGLEOF                         (0x1UL << 8)        /**< Single Result Overflow Interrupt Flag */
#define _ADC_IF_SINGLEOF_SHIFT                  8                   /**< Shift value for ADC_SINGLEOF */
#define _ADC_IF_SINGLEOF_MASK                   0x100UL             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IF_SINGLEOF_DEFAULT                 (0x00000000UL << 8) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SINGLEOF_DEFAULT                0x00000000UL        /**< Mode DEFAULT for ADC_IF */
#define ADC_IF_SCANOF                           (0x1UL << 9)        /**< Scan Result Overflow Interrupt Flag */
#define _ADC_IF_SCANOF_SHIFT                    9                   /**< Shift value for ADC_SCANOF */
#define _ADC_IF_SCANOF_MASK                     0x200UL             /**< Bit mask for ADC_SCANOF */
#define ADC_IF_SCANOF_DEFAULT                   (0x00000000UL << 9) /**< Shifted mode DEFAULT for ADC_IF */
#define _ADC_IF_SCANOF_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for ADC_IF */

/* Bit fields for ADC IFS */
#define _ADC_IFS_RESETVALUE                     0x00000000UL        /**< Default value for ADC_IFS */
#define _ADC_IFS_MASK                           0x00000303UL        /**< Mask for ADC_IFS */
#define ADC_IFS_SINGLE                          (0x1UL << 0)        /**< Single Conversion Complete Interrupt Flag Set */
#define _ADC_IFS_SINGLE_SHIFT                   0                   /**< Shift value for ADC_SINGLE */
#define _ADC_IFS_SINGLE_MASK                    0x1UL               /**< Bit mask for ADC_SINGLE */
#define ADC_IFS_SINGLE_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SINGLE_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SCAN                            (0x1UL << 1)        /**< Scan Conversion Complete Interrupt Flag Set */
#define _ADC_IFS_SCAN_SHIFT                     1                   /**< Shift value for ADC_SCAN */
#define _ADC_IFS_SCAN_MASK                      0x2UL               /**< Bit mask for ADC_SCAN */
#define ADC_IFS_SCAN_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SCAN_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SINGLEOF                        (0x1UL << 8)        /**< Single Result Overflow Interrupt Flag Set */
#define _ADC_IFS_SINGLEOF_SHIFT                 8                   /**< Shift value for ADC_SINGLEOF */
#define _ADC_IFS_SINGLEOF_MASK                  0x100UL             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IFS_SINGLEOF_DEFAULT                (0x00000000UL << 8) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SINGLEOF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for ADC_IFS */
#define ADC_IFS_SCANOF                          (0x1UL << 9)        /**< Scan Result Overflow Interrupt Flag Set */
#define _ADC_IFS_SCANOF_SHIFT                   9                   /**< Shift value for ADC_SCANOF */
#define _ADC_IFS_SCANOF_MASK                    0x200UL             /**< Bit mask for ADC_SCANOF */
#define ADC_IFS_SCANOF_DEFAULT                  (0x00000000UL << 9) /**< Shifted mode DEFAULT for ADC_IFS */
#define _ADC_IFS_SCANOF_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IFS */

/* Bit fields for ADC IFC */
#define _ADC_IFC_RESETVALUE                     0x00000000UL        /**< Default value for ADC_IFC */
#define _ADC_IFC_MASK                           0x00000303UL        /**< Mask for ADC_IFC */
#define ADC_IFC_SINGLE                          (0x1UL << 0)        /**< Single Conversion Complete Interrupt Flag Clear */
#define _ADC_IFC_SINGLE_SHIFT                   0                   /**< Shift value for ADC_SINGLE */
#define _ADC_IFC_SINGLE_MASK                    0x1UL               /**< Bit mask for ADC_SINGLE */
#define ADC_IFC_SINGLE_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SINGLE_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SCAN                            (0x1UL << 1)        /**< Scan Conversion Complete Interrupt Flag Clear */
#define _ADC_IFC_SCAN_SHIFT                     1                   /**< Shift value for ADC_SCAN */
#define _ADC_IFC_SCAN_MASK                      0x2UL               /**< Bit mask for ADC_SCAN */
#define ADC_IFC_SCAN_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SCAN_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SINGLEOF                        (0x1UL << 8)        /**< Single Result Overflow Interrupt Flag Clear */
#define _ADC_IFC_SINGLEOF_SHIFT                 8                   /**< Shift value for ADC_SINGLEOF */
#define _ADC_IFC_SINGLEOF_MASK                  0x100UL             /**< Bit mask for ADC_SINGLEOF */
#define ADC_IFC_SINGLEOF_DEFAULT                (0x00000000UL << 8) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SINGLEOF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for ADC_IFC */
#define ADC_IFC_SCANOF                          (0x1UL << 9)        /**< Scan Result Overflow Interrupt Flag Clear */
#define _ADC_IFC_SCANOF_SHIFT                   9                   /**< Shift value for ADC_SCANOF */
#define _ADC_IFC_SCANOF_MASK                    0x200UL             /**< Bit mask for ADC_SCANOF */
#define ADC_IFC_SCANOF_DEFAULT                  (0x00000000UL << 9) /**< Shifted mode DEFAULT for ADC_IFC */
#define _ADC_IFC_SCANOF_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for ADC_IFC */

/* Bit fields for ADC SINGLEDATA */
#define _ADC_SINGLEDATA_RESETVALUE              0x00000000UL        /**< Default value for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_MASK                    0xFFFFFFFFUL        /**< Mask for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_DATA_SHIFT              0                   /**< Shift value for ADC_DATA */
#define _ADC_SINGLEDATA_DATA_MASK               0xFFFFFFFFUL        /**< Bit mask for ADC_DATA */
#define ADC_SINGLEDATA_DATA_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_SINGLEDATA */
#define _ADC_SINGLEDATA_DATA_DEFAULT            0x00000000UL        /**< Mode DEFAULT for ADC_SINGLEDATA */

/* Bit fields for ADC SCANDATA */
#define _ADC_SCANDATA_RESETVALUE                0x00000000UL        /**< Default value for ADC_SCANDATA */
#define _ADC_SCANDATA_MASK                      0xFFFFFFFFUL        /**< Mask for ADC_SCANDATA */
#define _ADC_SCANDATA_DATA_SHIFT                0                   /**< Shift value for ADC_DATA */
#define _ADC_SCANDATA_DATA_MASK                 0xFFFFFFFFUL        /**< Bit mask for ADC_DATA */
#define ADC_SCANDATA_DATA_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_SCANDATA */
#define _ADC_SCANDATA_DATA_DEFAULT              0x00000000UL        /**< Mode DEFAULT for ADC_SCANDATA */

/* Bit fields for ADC SINGLEDATAP */
#define _ADC_SINGLEDATAP_RESETVALUE             0x00000000UL        /**< Default value for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_MASK                   0xFFFFFFFFUL        /**< Mask for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_DATAP_SHIFT            0                   /**< Shift value for ADC_DATAP */
#define _ADC_SINGLEDATAP_DATAP_MASK             0xFFFFFFFFUL        /**< Bit mask for ADC_DATAP */
#define ADC_SINGLEDATAP_DATAP_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_SINGLEDATAP */
#define _ADC_SINGLEDATAP_DATAP_DEFAULT          0x00000000UL        /**< Mode DEFAULT for ADC_SINGLEDATAP */

/* Bit fields for ADC SCANDATAP */
#define _ADC_SCANDATAP_RESETVALUE               0x00000000UL        /**< Default value for ADC_SCANDATAP */
#define _ADC_SCANDATAP_MASK                     0xFFFFFFFFUL        /**< Mask for ADC_SCANDATAP */
#define _ADC_SCANDATAP_DATAP_SHIFT              0                   /**< Shift value for ADC_DATAP */
#define _ADC_SCANDATAP_DATAP_MASK               0xFFFFFFFFUL        /**< Bit mask for ADC_DATAP */
#define ADC_SCANDATAP_DATAP_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_SCANDATAP */
#define _ADC_SCANDATAP_DATAP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for ADC_SCANDATAP */

/* Bit fields for ADC CAL */
#define _ADC_CAL_RESETVALUE                     0x3F003F00UL         /**< Default value for ADC_CAL */
#define _ADC_CAL_MASK                           0x7F7F7F7FUL         /**< Mask for ADC_CAL */
#define _ADC_CAL_SINGLEOFFSET_SHIFT             0                    /**< Shift value for ADC_SINGLEOFFSET */
#define _ADC_CAL_SINGLEOFFSET_MASK              0x7FUL               /**< Bit mask for ADC_SINGLEOFFSET */
#define ADC_CAL_SINGLEOFFSET_DEFAULT            (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEOFFSET_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEGAIN_SHIFT               8                    /**< Shift value for ADC_SINGLEGAIN */
#define _ADC_CAL_SINGLEGAIN_MASK                0x7F00UL             /**< Bit mask for ADC_SINGLEGAIN */
#define ADC_CAL_SINGLEGAIN_DEFAULT              (0x0000003FUL << 8)  /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SINGLEGAIN_DEFAULT             0x0000003FUL         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANOFFSET_SHIFT               16                   /**< Shift value for ADC_SCANOFFSET */
#define _ADC_CAL_SCANOFFSET_MASK                0x7F0000UL           /**< Bit mask for ADC_SCANOFFSET */
#define ADC_CAL_SCANOFFSET_DEFAULT              (0x00000000UL << 16) /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANOFFSET_DEFAULT             0x00000000UL         /**< Mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANGAIN_SHIFT                 24                   /**< Shift value for ADC_SCANGAIN */
#define _ADC_CAL_SCANGAIN_MASK                  0x7F000000UL         /**< Bit mask for ADC_SCANGAIN */
#define ADC_CAL_SCANGAIN_DEFAULT                (0x0000003FUL << 24) /**< Shifted mode DEFAULT for ADC_CAL */
#define _ADC_CAL_SCANGAIN_DEFAULT               0x0000003FUL         /**< Mode DEFAULT for ADC_CAL */

/* Bit fields for ADC ROUTE */
#define _ADC_ROUTE_RESETVALUE                   0x00000000UL        /**< Default value for ADC_ROUTE */
#define _ADC_ROUTE_MASK                         0x00000001UL        /**< Mask for ADC_ROUTE */
#define ADC_ROUTE_VCMPEN                        (0x1UL << 0)        /**< VCM Pin Output Enable */
#define _ADC_ROUTE_VCMPEN_SHIFT                 0                   /**< Shift value for ADC_VCMPEN */
#define _ADC_ROUTE_VCMPEN_MASK                  0x1UL               /**< Bit mask for ADC_VCMPEN */
#define ADC_ROUTE_VCMPEN_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for ADC_ROUTE */
#define _ADC_ROUTE_VCMPEN_DEFAULT               0x00000000UL        /**< Mode DEFAULT for ADC_ROUTE */

/* Bit fields for ADC BIASPROG */
#define _ADC_BIASPROG_RESETVALUE                0x00000747UL        /**< Default value for ADC_BIASPROG */
#define _ADC_BIASPROG_MASK                      0x00000F4FUL        /**< Mask for ADC_BIASPROG */
#define _ADC_BIASPROG_BIASPROG_SHIFT            0                   /**< Shift value for ADC_BIASPROG */
#define _ADC_BIASPROG_BIASPROG_MASK             0xFUL               /**< Bit mask for ADC_BIASPROG */
#define ADC_BIASPROG_BIASPROG_DEFAULT           (0x00000007UL << 0) /**< Shifted mode DEFAULT for ADC_BIASPROG */
#define _ADC_BIASPROG_BIASPROG_DEFAULT          0x00000007UL        /**< Mode DEFAULT for ADC_BIASPROG */
#define ADC_BIASPROG_HALFBIAS                   (0x1UL << 6)        /**< Half Bias Current */
#define _ADC_BIASPROG_HALFBIAS_SHIFT            6                   /**< Shift value for ADC_HALFBIAS */
#define _ADC_BIASPROG_HALFBIAS_MASK             0x40UL              /**< Bit mask for ADC_HALFBIAS */
#define ADC_BIASPROG_HALFBIAS_DEFAULT           (0x00000001UL << 6) /**< Shifted mode DEFAULT for ADC_BIASPROG */
#define _ADC_BIASPROG_HALFBIAS_DEFAULT          0x00000001UL        /**< Mode DEFAULT for ADC_BIASPROG */
#define _ADC_BIASPROG_COMPBIAS_SHIFT            8                   /**< Shift value for ADC_COMPBIAS */
#define _ADC_BIASPROG_COMPBIAS_MASK             0xF00UL             /**< Bit mask for ADC_COMPBIAS */
#define ADC_BIASPROG_COMPBIAS_DEFAULT           (0x00000007UL << 8) /**< Shifted mode DEFAULT for ADC_BIASPROG */
#define _ADC_BIASPROG_COMPBIAS_DEFAULT          0x00000007UL        /**< Mode DEFAULT for ADC_BIASPROG */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DAC
 * @{
 *****************************************************************************/

/* Bit fields for DAC CTRL */
#define _DAC_CTRL_RESETVALUE              0x00000010UL         /**< Default value for DAC_CTRL */
#define _DAC_CTRL_MASK                    0x0037D3FFUL         /**< Mask for DAC_CTRL */
#define DAC_CTRL_DIFF                     (0x1UL << 0)         /**< Differential Mode */
#define _DAC_CTRL_DIFF_SHIFT              0                    /**< Shift value for DAC_DIFF */
#define _DAC_CTRL_DIFF_MASK               0x1UL                /**< Bit mask for DAC_DIFF */
#define DAC_CTRL_DIFF_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_DIFF_DEFAULT            0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_SINEMODE                 (0x1UL << 1)         /**< Sine Mode */
#define _DAC_CTRL_SINEMODE_SHIFT          1                    /**< Shift value for DAC_SINEMODE */
#define _DAC_CTRL_SINEMODE_MASK           0x2UL                /**< Bit mask for DAC_SINEMODE */
#define DAC_CTRL_SINEMODE_DEFAULT         (0x00000000UL << 1)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_SINEMODE_DEFAULT        0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SHIFT          2                    /**< Shift value for DAC_CONVMODE */
#define _DAC_CTRL_CONVMODE_MASK           0xCUL                /**< Bit mask for DAC_CONVMODE */
#define DAC_CTRL_CONVMODE_DEFAULT         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_CONVMODE_CONTINUOUS      (0x00000000UL << 2)  /**< Shifted mode CONTINUOUS for DAC_CTRL */
#define DAC_CTRL_CONVMODE_SAMPLEHOLD      (0x00000001UL << 2)  /**< Shifted mode SAMPLEHOLD for DAC_CTRL */
#define DAC_CTRL_CONVMODE_SAMPLEOFF       (0x00000002UL << 2)  /**< Shifted mode SAMPLEOFF for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_DEFAULT        0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_CONTINUOUS     0x00000000UL         /**< Mode CONTINUOUS for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SAMPLEHOLD     0x00000001UL         /**< Mode SAMPLEHOLD for DAC_CTRL */
#define _DAC_CTRL_CONVMODE_SAMPLEOFF      0x00000002UL         /**< Mode SAMPLEOFF for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_SHIFT           4                    /**< Shift value for DAC_OUTMODE */
#define _DAC_CTRL_OUTMODE_MASK            0x30UL               /**< Bit mask for DAC_OUTMODE */
#define DAC_CTRL_OUTMODE_DISABLE          (0x00000000UL << 4)  /**< Shifted mode DISABLE for DAC_CTRL */
#define DAC_CTRL_OUTMODE_DEFAULT          (0x00000001UL << 4)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_OUTMODE_PIN              (0x00000001UL << 4)  /**< Shifted mode PIN for DAC_CTRL */
#define DAC_CTRL_OUTMODE_ADC              (0x00000002UL << 4)  /**< Shifted mode ADC for DAC_CTRL */
#define DAC_CTRL_OUTMODE_PINADC           (0x00000003UL << 4)  /**< Shifted mode PINADC for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_DISABLE         0x00000000UL         /**< Mode DISABLE for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_DEFAULT         0x00000001UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_PIN             0x00000001UL         /**< Mode PIN for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_ADC             0x00000002UL         /**< Mode ADC for DAC_CTRL */
#define _DAC_CTRL_OUTMODE_PINADC          0x00000003UL         /**< Mode PINADC for DAC_CTRL */
#define DAC_CTRL_OUTENPRS                 (0x1UL << 6)         /**< PRS Controlled Output Enable */
#define _DAC_CTRL_OUTENPRS_SHIFT          6                    /**< Shift value for DAC_OUTENPRS */
#define _DAC_CTRL_OUTENPRS_MASK           0x40UL               /**< Bit mask for DAC_OUTENPRS */
#define DAC_CTRL_OUTENPRS_DEFAULT         (0x00000000UL << 6)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_OUTENPRS_DEFAULT        0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_CH0PRESCRST              (0x1UL << 7)         /**< Channel 0 Start Reset Prescaler */
#define _DAC_CTRL_CH0PRESCRST_SHIFT       7                    /**< Shift value for DAC_CH0PRESCRST */
#define _DAC_CTRL_CH0PRESCRST_MASK        0x80UL               /**< Bit mask for DAC_CH0PRESCRST */
#define DAC_CTRL_CH0PRESCRST_DEFAULT      (0x00000000UL << 7)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_CH0PRESCRST_DEFAULT     0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFSEL_SHIFT            8                    /**< Shift value for DAC_REFSEL */
#define _DAC_CTRL_REFSEL_MASK             0x300UL              /**< Bit mask for DAC_REFSEL */
#define DAC_CTRL_REFSEL_DEFAULT           (0x00000000UL << 8)  /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_REFSEL_1V25              (0x00000000UL << 8)  /**< Shifted mode 1V25 for DAC_CTRL */
#define DAC_CTRL_REFSEL_2V5               (0x00000001UL << 8)  /**< Shifted mode 2V5 for DAC_CTRL */
#define DAC_CTRL_REFSEL_VDD               (0x00000002UL << 8)  /**< Shifted mode VDD for DAC_CTRL */
#define _DAC_CTRL_REFSEL_DEFAULT          0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFSEL_1V25             0x00000000UL         /**< Mode 1V25 for DAC_CTRL */
#define _DAC_CTRL_REFSEL_2V5              0x00000001UL         /**< Mode 2V5 for DAC_CTRL */
#define _DAC_CTRL_REFSEL_VDD              0x00000002UL         /**< Mode VDD for DAC_CTRL */
#define DAC_CTRL_LPFEN                    (0x1UL << 12)        /**< Low Pass Filter Enable */
#define _DAC_CTRL_LPFEN_SHIFT             12                   /**< Shift value for DAC_LPFEN */
#define _DAC_CTRL_LPFEN_MASK              0x1000UL             /**< Bit mask for DAC_LPFEN */
#define DAC_CTRL_LPFEN_DEFAULT            (0x00000000UL << 12) /**< Shifted mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFEN_DEFAULT           0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_SHIFT           14                   /**< Shift value for DAC_LPFFREQ */
#define _DAC_CTRL_LPFFREQ_MASK            0xC000UL             /**< Bit mask for DAC_LPFFREQ */
#define DAC_CTRL_LPFFREQ_DEFAULT          (0x00000000UL << 14) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ0            (0x00000000UL << 14) /**< Shifted mode FREQ0 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ1            (0x00000001UL << 14) /**< Shifted mode FREQ1 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ2            (0x00000002UL << 14) /**< Shifted mode FREQ2 for DAC_CTRL */
#define DAC_CTRL_LPFFREQ_FREQ3            (0x00000003UL << 14) /**< Shifted mode FREQ3 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_DEFAULT         0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ0           0x00000000UL         /**< Mode FREQ0 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ1           0x00000001UL         /**< Mode FREQ1 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ2           0x00000002UL         /**< Mode FREQ2 for DAC_CTRL */
#define _DAC_CTRL_LPFFREQ_FREQ3           0x00000003UL         /**< Mode FREQ3 for DAC_CTRL */
#define _DAC_CTRL_PRESC_SHIFT             16                   /**< Shift value for DAC_PRESC */
#define _DAC_CTRL_PRESC_MASK              0x70000UL            /**< Bit mask for DAC_PRESC */
#define DAC_CTRL_PRESC_DEFAULT            (0x00000000UL << 16) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_PRESC_NODIVISION         (0x00000000UL << 16) /**< Shifted mode NODIVISION for DAC_CTRL */
#define _DAC_CTRL_PRESC_DEFAULT           0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_PRESC_NODIVISION        0x00000000UL         /**< Mode NODIVISION for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_SHIFT           20                   /**< Shift value for DAC_REFRSEL */
#define _DAC_CTRL_REFRSEL_MASK            0x300000UL           /**< Bit mask for DAC_REFRSEL */
#define DAC_CTRL_REFRSEL_DEFAULT          (0x00000000UL << 20) /**< Shifted mode DEFAULT for DAC_CTRL */
#define DAC_CTRL_REFRSEL_8CYCLES          (0x00000000UL << 20) /**< Shifted mode 8CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_16CYCLES         (0x00000001UL << 20) /**< Shifted mode 16CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_32CYCLES         (0x00000002UL << 20) /**< Shifted mode 32CYCLES for DAC_CTRL */
#define DAC_CTRL_REFRSEL_64CYCLES         (0x00000003UL << 20) /**< Shifted mode 64CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_DEFAULT         0x00000000UL         /**< Mode DEFAULT for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_8CYCLES         0x00000000UL         /**< Mode 8CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_16CYCLES        0x00000001UL         /**< Mode 16CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_32CYCLES        0x00000002UL         /**< Mode 32CYCLES for DAC_CTRL */
#define _DAC_CTRL_REFRSEL_64CYCLES        0x00000003UL         /**< Mode 64CYCLES for DAC_CTRL */

/* Bit fields for DAC STATUS */
#define _DAC_STATUS_RESETVALUE            0x00000000UL        /**< Default value for DAC_STATUS */
#define _DAC_STATUS_MASK                  0x00000003UL        /**< Mask for DAC_STATUS */
#define DAC_STATUS_CH0DV                  (0x1UL << 0)        /**< Channel 0 Data Valid */
#define _DAC_STATUS_CH0DV_SHIFT           0                   /**< Shift value for DAC_CH0DV */
#define _DAC_STATUS_CH0DV_MASK            0x1UL               /**< Bit mask for DAC_CH0DV */
#define DAC_STATUS_CH0DV_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_STATUS */
#define _DAC_STATUS_CH0DV_DEFAULT         0x00000000UL        /**< Mode DEFAULT for DAC_STATUS */
#define DAC_STATUS_CH1DV                  (0x1UL << 1)        /**< Channel 1 Data Valid */
#define _DAC_STATUS_CH1DV_SHIFT           1                   /**< Shift value for DAC_CH1DV */
#define _DAC_STATUS_CH1DV_MASK            0x2UL               /**< Bit mask for DAC_CH1DV */
#define DAC_STATUS_CH1DV_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_STATUS */
#define _DAC_STATUS_CH1DV_DEFAULT         0x00000000UL        /**< Mode DEFAULT for DAC_STATUS */

/* Bit fields for DAC CH0CTRL */
#define _DAC_CH0CTRL_RESETVALUE           0x00000000UL        /**< Default value for DAC_CH0CTRL */
#define _DAC_CH0CTRL_MASK                 0x00000077UL        /**< Mask for DAC_CH0CTRL */
#define DAC_CH0CTRL_EN                    (0x1UL << 0)        /**< Channel 0 Enable */
#define _DAC_CH0CTRL_EN_SHIFT             0                   /**< Shift value for DAC_EN */
#define _DAC_CH0CTRL_EN_MASK              0x1UL               /**< Bit mask for DAC_EN */
#define DAC_CH0CTRL_EN_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_EN_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_REFREN                (0x1UL << 1)        /**< Channel 0 Automatic Refresh Enable */
#define _DAC_CH0CTRL_REFREN_SHIFT         1                   /**< Shift value for DAC_REFREN */
#define _DAC_CH0CTRL_REFREN_MASK          0x2UL               /**< Bit mask for DAC_REFREN */
#define DAC_CH0CTRL_REFREN_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_REFREN_DEFAULT       0x00000000UL        /**< Mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSEN                 (0x1UL << 2)        /**< Channel 0 PRS Trigger Enable */
#define _DAC_CH0CTRL_PRSEN_SHIFT          2                   /**< Shift value for DAC_PRSEN */
#define _DAC_CH0CTRL_PRSEN_MASK           0x4UL               /**< Bit mask for DAC_PRSEN */
#define DAC_CH0CTRL_PRSEN_DEFAULT         (0x00000000UL << 2) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSEN_DEFAULT        0x00000000UL        /**< Mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_SHIFT         4                   /**< Shift value for DAC_PRSSEL */
#define _DAC_CH0CTRL_PRSSEL_MASK          0x70UL              /**< Bit mask for DAC_PRSSEL */
#define DAC_CH0CTRL_PRSSEL_DEFAULT        (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH0         (0x00000000UL << 4) /**< Shifted mode PRSCH0 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH1         (0x00000001UL << 4) /**< Shifted mode PRSCH1 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH2         (0x00000002UL << 4) /**< Shifted mode PRSCH2 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH3         (0x00000003UL << 4) /**< Shifted mode PRSCH3 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH4         (0x00000004UL << 4) /**< Shifted mode PRSCH4 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH5         (0x00000005UL << 4) /**< Shifted mode PRSCH5 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH6         (0x00000006UL << 4) /**< Shifted mode PRSCH6 for DAC_CH0CTRL */
#define DAC_CH0CTRL_PRSSEL_PRSCH7         (0x00000007UL << 4) /**< Shifted mode PRSCH7 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH0        0x00000000UL        /**< Mode PRSCH0 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH1        0x00000001UL        /**< Mode PRSCH1 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH2        0x00000002UL        /**< Mode PRSCH2 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH3        0x00000003UL        /**< Mode PRSCH3 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH4        0x00000004UL        /**< Mode PRSCH4 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH5        0x00000005UL        /**< Mode PRSCH5 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH6        0x00000006UL        /**< Mode PRSCH6 for DAC_CH0CTRL */
#define _DAC_CH0CTRL_PRSSEL_PRSCH7        0x00000007UL        /**< Mode PRSCH7 for DAC_CH0CTRL */

/* Bit fields for DAC CH1CTRL */
#define _DAC_CH1CTRL_RESETVALUE           0x00000000UL        /**< Default value for DAC_CH1CTRL */
#define _DAC_CH1CTRL_MASK                 0x00000077UL        /**< Mask for DAC_CH1CTRL */
#define DAC_CH1CTRL_EN                    (0x1UL << 0)        /**< Channel 1 Enable */
#define _DAC_CH1CTRL_EN_SHIFT             0                   /**< Shift value for DAC_EN */
#define _DAC_CH1CTRL_EN_MASK              0x1UL               /**< Bit mask for DAC_EN */
#define DAC_CH1CTRL_EN_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_EN_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_REFREN                (0x1UL << 1)        /**< Channel 1 Automatic Refresh Enable */
#define _DAC_CH1CTRL_REFREN_SHIFT         1                   /**< Shift value for DAC_REFREN */
#define _DAC_CH1CTRL_REFREN_MASK          0x2UL               /**< Bit mask for DAC_REFREN */
#define DAC_CH1CTRL_REFREN_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_REFREN_DEFAULT       0x00000000UL        /**< Mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSEN                 (0x1UL << 2)        /**< Channel 1 PRS Trigger Enable */
#define _DAC_CH1CTRL_PRSEN_SHIFT          2                   /**< Shift value for DAC_PRSEN */
#define _DAC_CH1CTRL_PRSEN_MASK           0x4UL               /**< Bit mask for DAC_PRSEN */
#define DAC_CH1CTRL_PRSEN_DEFAULT         (0x00000000UL << 2) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSEN_DEFAULT        0x00000000UL        /**< Mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_SHIFT         4                   /**< Shift value for DAC_PRSSEL */
#define _DAC_CH1CTRL_PRSSEL_MASK          0x70UL              /**< Bit mask for DAC_PRSSEL */
#define DAC_CH1CTRL_PRSSEL_DEFAULT        (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH0         (0x00000000UL << 4) /**< Shifted mode PRSCH0 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH1         (0x00000001UL << 4) /**< Shifted mode PRSCH1 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH2         (0x00000002UL << 4) /**< Shifted mode PRSCH2 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH3         (0x00000003UL << 4) /**< Shifted mode PRSCH3 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH4         (0x00000004UL << 4) /**< Shifted mode PRSCH4 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH5         (0x00000005UL << 4) /**< Shifted mode PRSCH5 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH6         (0x00000006UL << 4) /**< Shifted mode PRSCH6 for DAC_CH1CTRL */
#define DAC_CH1CTRL_PRSSEL_PRSCH7         (0x00000007UL << 4) /**< Shifted mode PRSCH7 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH0        0x00000000UL        /**< Mode PRSCH0 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH1        0x00000001UL        /**< Mode PRSCH1 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH2        0x00000002UL        /**< Mode PRSCH2 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH3        0x00000003UL        /**< Mode PRSCH3 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH4        0x00000004UL        /**< Mode PRSCH4 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH5        0x00000005UL        /**< Mode PRSCH5 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH6        0x00000006UL        /**< Mode PRSCH6 for DAC_CH1CTRL */
#define _DAC_CH1CTRL_PRSSEL_PRSCH7        0x00000007UL        /**< Mode PRSCH7 for DAC_CH1CTRL */

/* Bit fields for DAC IEN */
#define _DAC_IEN_RESETVALUE               0x00000000UL        /**< Default value for DAC_IEN */
#define _DAC_IEN_MASK                     0x00000033UL        /**< Mask for DAC_IEN */
#define DAC_IEN_CH0                       (0x1UL << 0)        /**< Channel 0 Conversion Complete Interrupt Enable */
#define _DAC_IEN_CH0_SHIFT                0                   /**< Shift value for DAC_CH0 */
#define _DAC_IEN_CH0_MASK                 0x1UL               /**< Bit mask for DAC_CH0 */
#define DAC_IEN_CH0_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH0_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH1                       (0x1UL << 1)        /**< Channel 1 Conversion Complete Interrupt Enable */
#define _DAC_IEN_CH1_SHIFT                1                   /**< Shift value for DAC_CH1 */
#define _DAC_IEN_CH1_MASK                 0x2UL               /**< Bit mask for DAC_CH1 */
#define DAC_IEN_CH1_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH1_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH0UF                     (0x1UL << 4)        /**< Channel 0 Conversion Data Underflow Interrupt Enable */
#define _DAC_IEN_CH0UF_SHIFT              4                   /**< Shift value for DAC_CH0UF */
#define _DAC_IEN_CH0UF_MASK               0x10UL              /**< Bit mask for DAC_CH0UF */
#define DAC_IEN_CH0UF_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH0UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IEN */
#define DAC_IEN_CH1UF                     (0x1UL << 5)        /**< Channel 1 Conversion Data Underflow Interrupt Enable */
#define _DAC_IEN_CH1UF_SHIFT              5                   /**< Shift value for DAC_CH1UF */
#define _DAC_IEN_CH1UF_MASK               0x20UL              /**< Bit mask for DAC_CH1UF */
#define DAC_IEN_CH1UF_DEFAULT             (0x00000000UL << 5) /**< Shifted mode DEFAULT for DAC_IEN */
#define _DAC_IEN_CH1UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IEN */

/* Bit fields for DAC IF */
#define _DAC_IF_RESETVALUE                0x00000000UL        /**< Default value for DAC_IF */
#define _DAC_IF_MASK                      0x00000033UL        /**< Mask for DAC_IF */
#define DAC_IF_CH0                        (0x1UL << 0)        /**< Channel 0 Conversion Complete Interrupt Flag */
#define _DAC_IF_CH0_SHIFT                 0                   /**< Shift value for DAC_CH0 */
#define _DAC_IF_CH0_MASK                  0x1UL               /**< Bit mask for DAC_CH0 */
#define DAC_IF_CH0_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH0_DEFAULT               0x00000000UL        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH1                        (0x1UL << 1)        /**< Channel 1 Conversion Complete Interrupt Flag */
#define _DAC_IF_CH1_SHIFT                 1                   /**< Shift value for DAC_CH1 */
#define _DAC_IF_CH1_MASK                  0x2UL               /**< Bit mask for DAC_CH1 */
#define DAC_IF_CH1_DEFAULT                (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH1_DEFAULT               0x00000000UL        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH0UF                      (0x1UL << 4)        /**< Channel 0 Data Underflow Interrupt Flag */
#define _DAC_IF_CH0UF_SHIFT               4                   /**< Shift value for DAC_CH0UF */
#define _DAC_IF_CH0UF_MASK                0x10UL              /**< Bit mask for DAC_CH0UF */
#define DAC_IF_CH0UF_DEFAULT              (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH0UF_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DAC_IF */
#define DAC_IF_CH1UF                      (0x1UL << 5)        /**< Channel 1 Data Underflow Interrupt Flag */
#define _DAC_IF_CH1UF_SHIFT               5                   /**< Shift value for DAC_CH1UF */
#define _DAC_IF_CH1UF_MASK                0x20UL              /**< Bit mask for DAC_CH1UF */
#define DAC_IF_CH1UF_DEFAULT              (0x00000000UL << 5) /**< Shifted mode DEFAULT for DAC_IF */
#define _DAC_IF_CH1UF_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DAC_IF */

/* Bit fields for DAC IFS */
#define _DAC_IFS_RESETVALUE               0x00000000UL        /**< Default value for DAC_IFS */
#define _DAC_IFS_MASK                     0x00000033UL        /**< Mask for DAC_IFS */
#define DAC_IFS_CH0                       (0x1UL << 0)        /**< Channel 0 Conversion Complete Interrupt Flag Set */
#define _DAC_IFS_CH0_SHIFT                0                   /**< Shift value for DAC_CH0 */
#define _DAC_IFS_CH0_MASK                 0x1UL               /**< Bit mask for DAC_CH0 */
#define DAC_IFS_CH0_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH0_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH1                       (0x1UL << 1)        /**< Channel 1 Conversion Complete Interrupt Flag Set */
#define _DAC_IFS_CH1_SHIFT                1                   /**< Shift value for DAC_CH1 */
#define _DAC_IFS_CH1_MASK                 0x2UL               /**< Bit mask for DAC_CH1 */
#define DAC_IFS_CH1_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH1_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH0UF                     (0x1UL << 4)        /**< Channel 0 Data Underflow Interrupt Flag Set */
#define _DAC_IFS_CH0UF_SHIFT              4                   /**< Shift value for DAC_CH0UF */
#define _DAC_IFS_CH0UF_MASK               0x10UL              /**< Bit mask for DAC_CH0UF */
#define DAC_IFS_CH0UF_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH0UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IFS */
#define DAC_IFS_CH1UF                     (0x1UL << 5)        /**< Channel 1 Data Underflow Interrupt Flag Set */
#define _DAC_IFS_CH1UF_SHIFT              5                   /**< Shift value for DAC_CH1UF */
#define _DAC_IFS_CH1UF_MASK               0x20UL              /**< Bit mask for DAC_CH1UF */
#define DAC_IFS_CH1UF_DEFAULT             (0x00000000UL << 5) /**< Shifted mode DEFAULT for DAC_IFS */
#define _DAC_IFS_CH1UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IFS */

/* Bit fields for DAC IFC */
#define _DAC_IFC_RESETVALUE               0x00000000UL        /**< Default value for DAC_IFC */
#define _DAC_IFC_MASK                     0x00000033UL        /**< Mask for DAC_IFC */
#define DAC_IFC_CH0                       (0x1UL << 0)        /**< Channel 0 Conversion Complete Interrupt Flag Clear */
#define _DAC_IFC_CH0_SHIFT                0                   /**< Shift value for DAC_CH0 */
#define _DAC_IFC_CH0_MASK                 0x1UL               /**< Bit mask for DAC_CH0 */
#define DAC_IFC_CH0_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH0_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH1                       (0x1UL << 1)        /**< Channel 1 Conversion Complete Interrupt Flag Clear */
#define _DAC_IFC_CH1_SHIFT                1                   /**< Shift value for DAC_CH1 */
#define _DAC_IFC_CH1_MASK                 0x2UL               /**< Bit mask for DAC_CH1 */
#define DAC_IFC_CH1_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH1_DEFAULT              0x00000000UL        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH0UF                     (0x1UL << 4)        /**< Channel 0 Data Underflow Interrupt Flag Clear */
#define _DAC_IFC_CH0UF_SHIFT              4                   /**< Shift value for DAC_CH0UF */
#define _DAC_IFC_CH0UF_MASK               0x10UL              /**< Bit mask for DAC_CH0UF */
#define DAC_IFC_CH0UF_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH0UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IFC */
#define DAC_IFC_CH1UF                     (0x1UL << 5)        /**< Channel 1 Data Underflow Interrupt Flag Clear */
#define _DAC_IFC_CH1UF_SHIFT              5                   /**< Shift value for DAC_CH1UF */
#define _DAC_IFC_CH1UF_MASK               0x20UL              /**< Bit mask for DAC_CH1UF */
#define DAC_IFC_CH1UF_DEFAULT             (0x00000000UL << 5) /**< Shifted mode DEFAULT for DAC_IFC */
#define _DAC_IFC_CH1UF_DEFAULT            0x00000000UL        /**< Mode DEFAULT for DAC_IFC */

/* Bit fields for DAC CH0DATA */
#define _DAC_CH0DATA_RESETVALUE           0x00000000UL        /**< Default value for DAC_CH0DATA */
#define _DAC_CH0DATA_MASK                 0x00000FFFUL        /**< Mask for DAC_CH0DATA */
#define _DAC_CH0DATA_DATA_SHIFT           0                   /**< Shift value for DAC_DATA */
#define _DAC_CH0DATA_DATA_MASK            0xFFFUL             /**< Bit mask for DAC_DATA */
#define DAC_CH0DATA_DATA_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_CH0DATA */
#define _DAC_CH0DATA_DATA_DEFAULT         0x00000000UL        /**< Mode DEFAULT for DAC_CH0DATA */

/* Bit fields for DAC CH1DATA */
#define _DAC_CH1DATA_RESETVALUE           0x00000000UL        /**< Default value for DAC_CH1DATA */
#define _DAC_CH1DATA_MASK                 0x00000FFFUL        /**< Mask for DAC_CH1DATA */
#define _DAC_CH1DATA_DATA_SHIFT           0                   /**< Shift value for DAC_DATA */
#define _DAC_CH1DATA_DATA_MASK            0xFFFUL             /**< Bit mask for DAC_DATA */
#define DAC_CH1DATA_DATA_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for DAC_CH1DATA */
#define _DAC_CH1DATA_DATA_DEFAULT         0x00000000UL        /**< Mode DEFAULT for DAC_CH1DATA */

/* Bit fields for DAC COMBDATA */
#define _DAC_COMBDATA_RESETVALUE          0x00000000UL         /**< Default value for DAC_COMBDATA */
#define _DAC_COMBDATA_MASK                0x0FFF0FFFUL         /**< Mask for DAC_COMBDATA */
#define _DAC_COMBDATA_CH0DATA_SHIFT       0                    /**< Shift value for DAC_CH0DATA */
#define _DAC_COMBDATA_CH0DATA_MASK        0xFFFUL              /**< Bit mask for DAC_CH0DATA */
#define DAC_COMBDATA_CH0DATA_DEFAULT      (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH0DATA_DEFAULT     0x00000000UL         /**< Mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH1DATA_SHIFT       16                   /**< Shift value for DAC_CH1DATA */
#define _DAC_COMBDATA_CH1DATA_MASK        0xFFF0000UL          /**< Bit mask for DAC_CH1DATA */
#define DAC_COMBDATA_CH1DATA_DEFAULT      (0x00000000UL << 16) /**< Shifted mode DEFAULT for DAC_COMBDATA */
#define _DAC_COMBDATA_CH1DATA_DEFAULT     0x00000000UL         /**< Mode DEFAULT for DAC_COMBDATA */

/* Bit fields for DAC CAL */
#define _DAC_CAL_RESETVALUE               0x00400000UL         /**< Default value for DAC_CAL */
#define _DAC_CAL_MASK                     0x007F3F3FUL         /**< Mask for DAC_CAL */
#define _DAC_CAL_CH0OFFSET_SHIFT          0                    /**< Shift value for DAC_CH0OFFSET */
#define _DAC_CAL_CH0OFFSET_MASK           0x3FUL               /**< Bit mask for DAC_CH0OFFSET */
#define DAC_CAL_CH0OFFSET_DEFAULT         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH0OFFSET_DEFAULT        0x00000000UL         /**< Mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH1OFFSET_SHIFT          8                    /**< Shift value for DAC_CH1OFFSET */
#define _DAC_CAL_CH1OFFSET_MASK           0x3F00UL             /**< Bit mask for DAC_CH1OFFSET */
#define DAC_CAL_CH1OFFSET_DEFAULT         (0x00000000UL << 8)  /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_CH1OFFSET_DEFAULT        0x00000000UL         /**< Mode DEFAULT for DAC_CAL */
#define _DAC_CAL_GAIN_SHIFT               16                   /**< Shift value for DAC_GAIN */
#define _DAC_CAL_GAIN_MASK                0x7F0000UL           /**< Bit mask for DAC_GAIN */
#define DAC_CAL_GAIN_DEFAULT              (0x00000040UL << 16) /**< Shifted mode DEFAULT for DAC_CAL */
#define _DAC_CAL_GAIN_DEFAULT             0x00000040UL         /**< Mode DEFAULT for DAC_CAL */

/* Bit fields for DAC BIASPROG */
#define _DAC_BIASPROG_RESETVALUE          0x00000047UL        /**< Default value for DAC_BIASPROG */
#define _DAC_BIASPROG_MASK                0x0000004FUL        /**< Mask for DAC_BIASPROG */
#define _DAC_BIASPROG_BIASPROG_SHIFT      0                   /**< Shift value for DAC_BIASPROG */
#define _DAC_BIASPROG_BIASPROG_MASK       0xFUL               /**< Bit mask for DAC_BIASPROG */
#define DAC_BIASPROG_BIASPROG_DEFAULT     (0x00000007UL << 0) /**< Shifted mode DEFAULT for DAC_BIASPROG */
#define _DAC_BIASPROG_BIASPROG_DEFAULT    0x00000007UL        /**< Mode DEFAULT for DAC_BIASPROG */
#define DAC_BIASPROG_HALFBIAS             (0x1UL << 6)        /**< Half Bias Current */
#define _DAC_BIASPROG_HALFBIAS_SHIFT      6                   /**< Shift value for DAC_HALFBIAS */
#define _DAC_BIASPROG_HALFBIAS_MASK       0x40UL              /**< Bit mask for DAC_HALFBIAS */
#define DAC_BIASPROG_HALFBIAS_DEFAULT     (0x00000001UL << 6) /**< Shifted mode DEFAULT for DAC_BIASPROG */
#define _DAC_BIASPROG_HALFBIAS_DEFAULT    0x00000001UL        /**< Mode DEFAULT for DAC_BIASPROG */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ACMP
 * @{
 *****************************************************************************/

/* Bit fields for ACMP CTRL */
#define _ACMP_CTRL_RESETVALUE              0x47000000UL         /**< Default value for ACMP_CTRL */
#define _ACMP_CTRL_MASK                    0xCF03077FUL         /**< Mask for ACMP_CTRL */
#define ACMP_CTRL_EN                       (0x1UL << 0)         /**< Analog Comparator Enable */
#define _ACMP_CTRL_EN_SHIFT                0                    /**< Shift value for ACMP_EN */
#define _ACMP_CTRL_EN_MASK                 0x1UL                /**< Bit mask for ACMP_EN */
#define ACMP_CTRL_EN_DEFAULT               (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_EN_DEFAULT              0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_MUXEN                    (0x1UL << 1)         /**< Input Mux Enable */
#define _ACMP_CTRL_MUXEN_SHIFT             1                    /**< Shift value for ACMP_MUXEN */
#define _ACMP_CTRL_MUXEN_MASK              0x2UL                /**< Bit mask for ACMP_MUXEN */
#define ACMP_CTRL_MUXEN_DEFAULT            (0x00000000UL << 1)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_MUXEN_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL                 (0x1UL << 2)         /**< Inactive Value */
#define _ACMP_CTRL_INACTVAL_SHIFT          2                    /**< Shift value for ACMP_INACTVAL */
#define _ACMP_CTRL_INACTVAL_MASK           0x4UL                /**< Bit mask for ACMP_INACTVAL */
#define ACMP_CTRL_INACTVAL_DEFAULT         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL_LOW             (0x00000000UL << 2)  /**< Shifted mode LOW for ACMP_CTRL */
#define ACMP_CTRL_INACTVAL_HIGH            (0x00000001UL << 2)  /**< Shifted mode HIGH for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_DEFAULT        0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_LOW            0x00000000UL         /**< Mode LOW for ACMP_CTRL */
#define _ACMP_CTRL_INACTVAL_HIGH           0x00000001UL         /**< Mode HIGH for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV                  (0x1UL << 3)         /**< Comparator GPIO Output Invert */
#define _ACMP_CTRL_GPIOINV_SHIFT           3                    /**< Shift value for ACMP_GPIOINV */
#define _ACMP_CTRL_GPIOINV_MASK            0x8UL                /**< Bit mask for ACMP_GPIOINV */
#define ACMP_CTRL_GPIOINV_DEFAULT          (0x00000000UL << 3)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV_NOTINV           (0x00000000UL << 3)  /**< Shifted mode NOTINV for ACMP_CTRL */
#define ACMP_CTRL_GPIOINV_INV              (0x00000001UL << 3)  /**< Shifted mode INV for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_DEFAULT         0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_NOTINV          0x00000000UL         /**< Mode NOTINV for ACMP_CTRL */
#define _ACMP_CTRL_GPIOINV_INV             0x00000001UL         /**< Mode INV for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_SHIFT           4                    /**< Shift value for ACMP_HYSTSEL */
#define _ACMP_CTRL_HYSTSEL_MASK            0x70UL               /**< Bit mask for ACMP_HYSTSEL */
#define ACMP_CTRL_HYSTSEL_DEFAULT          (0x00000000UL << 4)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST0            (0x00000000UL << 4)  /**< Shifted mode HYST0 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST1            (0x00000001UL << 4)  /**< Shifted mode HYST1 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST2            (0x00000002UL << 4)  /**< Shifted mode HYST2 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST3            (0x00000003UL << 4)  /**< Shifted mode HYST3 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST4            (0x00000004UL << 4)  /**< Shifted mode HYST4 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST5            (0x00000005UL << 4)  /**< Shifted mode HYST5 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST6            (0x00000006UL << 4)  /**< Shifted mode HYST6 for ACMP_CTRL */
#define ACMP_CTRL_HYSTSEL_HYST7            (0x00000007UL << 4)  /**< Shifted mode HYST7 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_DEFAULT         0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST0           0x00000000UL         /**< Mode HYST0 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST1           0x00000001UL         /**< Mode HYST1 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST2           0x00000002UL         /**< Mode HYST2 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST3           0x00000003UL         /**< Mode HYST3 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST4           0x00000004UL         /**< Mode HYST4 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST5           0x00000005UL         /**< Mode HYST5 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST6           0x00000006UL         /**< Mode HYST6 for ACMP_CTRL */
#define _ACMP_CTRL_HYSTSEL_HYST7           0x00000007UL         /**< Mode HYST7 for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_SHIFT          8                    /**< Shift value for ACMP_WARMTIME */
#define _ACMP_CTRL_WARMTIME_MASK           0x700UL              /**< Bit mask for ACMP_WARMTIME */
#define ACMP_CTRL_WARMTIME_DEFAULT         (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_4CYCLES         (0x00000000UL << 8)  /**< Shifted mode 4CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_8CYCLES         (0x00000001UL << 8)  /**< Shifted mode 8CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_16CYCLES        (0x00000002UL << 8)  /**< Shifted mode 16CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_32CYCLES        (0x00000003UL << 8)  /**< Shifted mode 32CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_64CYCLES        (0x00000004UL << 8)  /**< Shifted mode 64CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_128CYCLES       (0x00000005UL << 8)  /**< Shifted mode 128CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_256CYCLES       (0x00000006UL << 8)  /**< Shifted mode 256CYCLES for ACMP_CTRL */
#define ACMP_CTRL_WARMTIME_512CYCLES       (0x00000007UL << 8)  /**< Shifted mode 512CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_DEFAULT        0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_4CYCLES        0x00000000UL         /**< Mode 4CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_8CYCLES        0x00000001UL         /**< Mode 8CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_16CYCLES       0x00000002UL         /**< Mode 16CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_32CYCLES       0x00000003UL         /**< Mode 32CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_64CYCLES       0x00000004UL         /**< Mode 64CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_128CYCLES      0x00000005UL         /**< Mode 128CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_256CYCLES      0x00000006UL         /**< Mode 256CYCLES for ACMP_CTRL */
#define _ACMP_CTRL_WARMTIME_512CYCLES      0x00000007UL         /**< Mode 512CYCLES for ACMP_CTRL */
#define ACMP_CTRL_IRISE                    (0x1UL << 16)        /**< Rising Edge Interrupt Sense */
#define _ACMP_CTRL_IRISE_SHIFT             16                   /**< Shift value for ACMP_IRISE */
#define _ACMP_CTRL_IRISE_MASK              0x10000UL            /**< Bit mask for ACMP_IRISE */
#define ACMP_CTRL_IRISE_DEFAULT            (0x00000000UL << 16) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_IRISE_DISABLED           (0x00000000UL << 16) /**< Shifted mode DISABLED for ACMP_CTRL */
#define ACMP_CTRL_IRISE_ENABLED            (0x00000001UL << 16) /**< Shifted mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_DISABLED          0x00000000UL         /**< Mode DISABLED for ACMP_CTRL */
#define _ACMP_CTRL_IRISE_ENABLED           0x00000001UL         /**< Mode ENABLED for ACMP_CTRL */
#define ACMP_CTRL_IFALL                    (0x1UL << 17)        /**< Falling Edge Interrupt Sense */
#define _ACMP_CTRL_IFALL_SHIFT             17                   /**< Shift value for ACMP_IFALL */
#define _ACMP_CTRL_IFALL_MASK              0x20000UL            /**< Bit mask for ACMP_IFALL */
#define ACMP_CTRL_IFALL_DEFAULT            (0x00000000UL << 17) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_IFALL_DISABLED           (0x00000000UL << 17) /**< Shifted mode DISABLED for ACMP_CTRL */
#define ACMP_CTRL_IFALL_ENABLED            (0x00000001UL << 17) /**< Shifted mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_DEFAULT           0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_DISABLED          0x00000000UL         /**< Mode DISABLED for ACMP_CTRL */
#define _ACMP_CTRL_IFALL_ENABLED           0x00000001UL         /**< Mode ENABLED for ACMP_CTRL */
#define _ACMP_CTRL_BIASPROG_SHIFT          24                   /**< Shift value for ACMP_BIASPROG */
#define _ACMP_CTRL_BIASPROG_MASK           0xF000000UL          /**< Bit mask for ACMP_BIASPROG */
#define ACMP_CTRL_BIASPROG_DEFAULT         (0x00000007UL << 24) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_BIASPROG_DEFAULT        0x00000007UL         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_HALFBIAS                 (0x1UL << 30)        /**< Half Bias Current */
#define _ACMP_CTRL_HALFBIAS_SHIFT          30                   /**< Shift value for ACMP_HALFBIAS */
#define _ACMP_CTRL_HALFBIAS_MASK           0x40000000UL         /**< Bit mask for ACMP_HALFBIAS */
#define ACMP_CTRL_HALFBIAS_DEFAULT         (0x00000001UL << 30) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_HALFBIAS_DEFAULT        0x00000001UL         /**< Mode DEFAULT for ACMP_CTRL */
#define ACMP_CTRL_FULLBIAS                 (0x1UL << 31)        /**< Full Bias Current */
#define _ACMP_CTRL_FULLBIAS_SHIFT          31                   /**< Shift value for ACMP_FULLBIAS */
#define _ACMP_CTRL_FULLBIAS_MASK           0x80000000UL         /**< Bit mask for ACMP_FULLBIAS */
#define ACMP_CTRL_FULLBIAS_DEFAULT         (0x00000000UL << 31) /**< Shifted mode DEFAULT for ACMP_CTRL */
#define _ACMP_CTRL_FULLBIAS_DEFAULT        0x00000000UL         /**< Mode DEFAULT for ACMP_CTRL */

/* Bit fields for ACMP INPUTSEL */
#define _ACMP_INPUTSEL_RESETVALUE          0x00010080UL         /**< Default value for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_MASK                0x31013FF7UL         /**< Mask for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_SHIFT        0                    /**< Shift value for ACMP_POSSEL */
#define _ACMP_INPUTSEL_POSSEL_MASK         0x7UL                /**< Bit mask for ACMP_POSSEL */
#define ACMP_INPUTSEL_POSSEL_DEFAULT       (0x00000000UL << 0)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH0           (0x00000000UL << 0)  /**< Shifted mode CH0 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH1           (0x00000001UL << 0)  /**< Shifted mode CH1 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH2           (0x00000002UL << 0)  /**< Shifted mode CH2 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH3           (0x00000003UL << 0)  /**< Shifted mode CH3 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH4           (0x00000004UL << 0)  /**< Shifted mode CH4 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH5           (0x00000005UL << 0)  /**< Shifted mode CH5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH6           (0x00000006UL << 0)  /**< Shifted mode CH6 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_POSSEL_CH7           (0x00000007UL << 0)  /**< Shifted mode CH7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_DEFAULT      0x00000000UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH0          0x00000000UL         /**< Mode CH0 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH1          0x00000001UL         /**< Mode CH1 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH2          0x00000002UL         /**< Mode CH2 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH3          0x00000003UL         /**< Mode CH3 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH4          0x00000004UL         /**< Mode CH4 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH5          0x00000005UL         /**< Mode CH5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH6          0x00000006UL         /**< Mode CH6 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_POSSEL_CH7          0x00000007UL         /**< Mode CH7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_SHIFT        4                    /**< Shift value for ACMP_NEGSEL */
#define _ACMP_INPUTSEL_NEGSEL_MASK         0xF0UL               /**< Bit mask for ACMP_NEGSEL */
#define ACMP_INPUTSEL_NEGSEL_CH0           (0x00000000UL << 4)  /**< Shifted mode CH0 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH1           (0x00000001UL << 4)  /**< Shifted mode CH1 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH2           (0x00000002UL << 4)  /**< Shifted mode CH2 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH3           (0x00000003UL << 4)  /**< Shifted mode CH3 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH4           (0x00000004UL << 4)  /**< Shifted mode CH4 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH5           (0x00000005UL << 4)  /**< Shifted mode CH5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH6           (0x00000006UL << 4)  /**< Shifted mode CH6 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CH7           (0x00000007UL << 4)  /**< Shifted mode CH7 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_DEFAULT       (0x00000008UL << 4)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_1V25          (0x00000008UL << 4)  /**< Shifted mode 1V25 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_2V5           (0x00000009UL << 4)  /**< Shifted mode 2V5 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_VDD           (0x0000000AUL << 4)  /**< Shifted mode VDD for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_NEGSEL_CAPSENSE      (0x0000000BUL << 4)  /**< Shifted mode CAPSENSE for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH0          0x00000000UL         /**< Mode CH0 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH1          0x00000001UL         /**< Mode CH1 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH2          0x00000002UL         /**< Mode CH2 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH3          0x00000003UL         /**< Mode CH3 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH4          0x00000004UL         /**< Mode CH4 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH5          0x00000005UL         /**< Mode CH5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH6          0x00000006UL         /**< Mode CH6 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CH7          0x00000007UL         /**< Mode CH7 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_DEFAULT      0x00000008UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_1V25         0x00000008UL         /**< Mode 1V25 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_2V5          0x00000009UL         /**< Mode 2V5 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_VDD          0x0000000AUL         /**< Mode VDD for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_NEGSEL_CAPSENSE     0x0000000BUL         /**< Mode CAPSENSE for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_VDDLEVEL_SHIFT      8                    /**< Shift value for ACMP_VDDLEVEL */
#define _ACMP_INPUTSEL_VDDLEVEL_MASK       0x3F00UL             /**< Bit mask for ACMP_VDDLEVEL */
#define ACMP_INPUTSEL_VDDLEVEL_DEFAULT     (0x00000000UL << 8)  /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_VDDLEVEL_DEFAULT    0x00000000UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_LPREF                (0x1UL << 16)        /**< Low Power Reference Mode */
#define _ACMP_INPUTSEL_LPREF_SHIFT         16                   /**< Shift value for ACMP_LPREF */
#define _ACMP_INPUTSEL_LPREF_MASK          0x10000UL            /**< Bit mask for ACMP_LPREF */
#define ACMP_INPUTSEL_LPREF_DEFAULT        (0x00000001UL << 16) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_LPREF_DEFAULT       0x00000001UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESEN              (0x1UL << 24)        /**< Capacitive Sense Mode Internal Resistor Enable */
#define _ACMP_INPUTSEL_CSRESEN_SHIFT       24                   /**< Shift value for ACMP_CSRESEN */
#define _ACMP_INPUTSEL_CSRESEN_MASK        0x1000000UL          /**< Bit mask for ACMP_CSRESEN */
#define ACMP_INPUTSEL_CSRESEN_DEFAULT      (0x00000000UL << 24) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESEN_DEFAULT     0x00000000UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_SHIFT      28                   /**< Shift value for ACMP_CSRESSEL */
#define _ACMP_INPUTSEL_CSRESSEL_MASK       0x30000000UL         /**< Bit mask for ACMP_CSRESSEL */
#define ACMP_INPUTSEL_CSRESSEL_DEFAULT     (0x00000000UL << 28) /**< Shifted mode DEFAULT for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_RES0        (0x00000000UL << 28) /**< Shifted mode RES0 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_RES1        (0x00000001UL << 28) /**< Shifted mode RES1 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_RES2        (0x00000002UL << 28) /**< Shifted mode RES2 for ACMP_INPUTSEL */
#define ACMP_INPUTSEL_CSRESSEL_RES3        (0x00000003UL << 28) /**< Shifted mode RES3 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_DEFAULT    0x00000000UL         /**< Mode DEFAULT for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_RES0       0x00000000UL         /**< Mode RES0 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_RES1       0x00000001UL         /**< Mode RES1 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_RES2       0x00000002UL         /**< Mode RES2 for ACMP_INPUTSEL */
#define _ACMP_INPUTSEL_CSRESSEL_RES3       0x00000003UL         /**< Mode RES3 for ACMP_INPUTSEL */

/* Bit fields for ACMP STATUS */
#define _ACMP_STATUS_RESETVALUE            0x00000000UL        /**< Default value for ACMP_STATUS */
#define _ACMP_STATUS_MASK                  0x00000003UL        /**< Mask for ACMP_STATUS */
#define ACMP_STATUS_ACMPACT                (0x1UL << 0)        /**< Analog Comparator Active */
#define _ACMP_STATUS_ACMPACT_SHIFT         0                   /**< Shift value for ACMP_ACMPACT */
#define _ACMP_STATUS_ACMPACT_MASK          0x1UL               /**< Bit mask for ACMP_ACMPACT */
#define ACMP_STATUS_ACMPACT_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_STATUS */
#define _ACMP_STATUS_ACMPACT_DEFAULT       0x00000000UL        /**< Mode DEFAULT for ACMP_STATUS */
#define ACMP_STATUS_ACMPOUT                (0x1UL << 1)        /**< Analog Comparator Output */
#define _ACMP_STATUS_ACMPOUT_SHIFT         1                   /**< Shift value for ACMP_ACMPOUT */
#define _ACMP_STATUS_ACMPOUT_MASK          0x2UL               /**< Bit mask for ACMP_ACMPOUT */
#define ACMP_STATUS_ACMPOUT_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for ACMP_STATUS */
#define _ACMP_STATUS_ACMPOUT_DEFAULT       0x00000000UL        /**< Mode DEFAULT for ACMP_STATUS */

/* Bit fields for ACMP IEN */
#define _ACMP_IEN_RESETVALUE               0x00000000UL        /**< Default value for ACMP_IEN */
#define _ACMP_IEN_MASK                     0x00000003UL        /**< Mask for ACMP_IEN */
#define ACMP_IEN_EDGE                      (0x1UL << 0)        /**< Edge Trigger Interrupt Enable */
#define _ACMP_IEN_EDGE_SHIFT               0                   /**< Shift value for ACMP_EDGE */
#define _ACMP_IEN_EDGE_MASK                0x1UL               /**< Bit mask for ACMP_EDGE */
#define ACMP_IEN_EDGE_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_IEN */
#define _ACMP_IEN_EDGE_DEFAULT             0x00000000UL        /**< Mode DEFAULT for ACMP_IEN */
#define ACMP_IEN_WARMUP                    (0x1UL << 1)        /**< Warm-up Interrupt Enable */
#define _ACMP_IEN_WARMUP_SHIFT             1                   /**< Shift value for ACMP_WARMUP */
#define _ACMP_IEN_WARMUP_MASK              0x2UL               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IEN_WARMUP_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for ACMP_IEN */
#define _ACMP_IEN_WARMUP_DEFAULT           0x00000000UL        /**< Mode DEFAULT for ACMP_IEN */

/* Bit fields for ACMP IF */
#define _ACMP_IF_RESETVALUE                0x00000000UL        /**< Default value for ACMP_IF */
#define _ACMP_IF_MASK                      0x00000003UL        /**< Mask for ACMP_IF */
#define ACMP_IF_EDGE                       (0x1UL << 0)        /**< Edge Triggered Interrupt Flag */
#define _ACMP_IF_EDGE_SHIFT                0                   /**< Shift value for ACMP_EDGE */
#define _ACMP_IF_EDGE_MASK                 0x1UL               /**< Bit mask for ACMP_EDGE */
#define ACMP_IF_EDGE_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_IF */
#define _ACMP_IF_EDGE_DEFAULT              0x00000000UL        /**< Mode DEFAULT for ACMP_IF */
#define ACMP_IF_WARMUP                     (0x1UL << 1)        /**< Warm-up Interrupt Flag */
#define _ACMP_IF_WARMUP_SHIFT              1                   /**< Shift value for ACMP_WARMUP */
#define _ACMP_IF_WARMUP_MASK               0x2UL               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IF_WARMUP_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for ACMP_IF */
#define _ACMP_IF_WARMUP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for ACMP_IF */

/* Bit fields for ACMP IFS */
#define _ACMP_IFS_RESETVALUE               0x00000000UL        /**< Default value for ACMP_IFS */
#define _ACMP_IFS_MASK                     0x00000003UL        /**< Mask for ACMP_IFS */
#define ACMP_IFS_EDGE                      (0x1UL << 0)        /**< Edge Triggered Interrupt Flag Set */
#define _ACMP_IFS_EDGE_SHIFT               0                   /**< Shift value for ACMP_EDGE */
#define _ACMP_IFS_EDGE_MASK                0x1UL               /**< Bit mask for ACMP_EDGE */
#define ACMP_IFS_EDGE_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_IFS */
#define _ACMP_IFS_EDGE_DEFAULT             0x00000000UL        /**< Mode DEFAULT for ACMP_IFS */
#define ACMP_IFS_WARMUP                    (0x1UL << 1)        /**< Warm-up Interrupt Flag Set */
#define _ACMP_IFS_WARMUP_SHIFT             1                   /**< Shift value for ACMP_WARMUP */
#define _ACMP_IFS_WARMUP_MASK              0x2UL               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IFS_WARMUP_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for ACMP_IFS */
#define _ACMP_IFS_WARMUP_DEFAULT           0x00000000UL        /**< Mode DEFAULT for ACMP_IFS */

/* Bit fields for ACMP IFC */
#define _ACMP_IFC_RESETVALUE               0x00000000UL        /**< Default value for ACMP_IFC */
#define _ACMP_IFC_MASK                     0x00000003UL        /**< Mask for ACMP_IFC */
#define ACMP_IFC_EDGE                      (0x1UL << 0)        /**< Edge Triggered Interrupt Flag Clear */
#define _ACMP_IFC_EDGE_SHIFT               0                   /**< Shift value for ACMP_EDGE */
#define _ACMP_IFC_EDGE_MASK                0x1UL               /**< Bit mask for ACMP_EDGE */
#define ACMP_IFC_EDGE_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_IFC */
#define _ACMP_IFC_EDGE_DEFAULT             0x00000000UL        /**< Mode DEFAULT for ACMP_IFC */
#define ACMP_IFC_WARMUP                    (0x1UL << 1)        /**< Warm-up Interrupt Flag Clear */
#define _ACMP_IFC_WARMUP_SHIFT             1                   /**< Shift value for ACMP_WARMUP */
#define _ACMP_IFC_WARMUP_MASK              0x2UL               /**< Bit mask for ACMP_WARMUP */
#define ACMP_IFC_WARMUP_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for ACMP_IFC */
#define _ACMP_IFC_WARMUP_DEFAULT           0x00000000UL        /**< Mode DEFAULT for ACMP_IFC */

/* Bit fields for ACMP ROUTE */
#define _ACMP_ROUTE_RESETVALUE             0x00000000UL        /**< Default value for ACMP_ROUTE */
#define _ACMP_ROUTE_MASK                   0x00000301UL        /**< Mask for ACMP_ROUTE */
#define ACMP_ROUTE_ACMPPEN                 (0x1UL << 0)        /**< ACMP Output Pin Enable */
#define _ACMP_ROUTE_ACMPPEN_SHIFT          0                   /**< Shift value for ACMP_ACMPPEN */
#define _ACMP_ROUTE_ACMPPEN_MASK           0x1UL               /**< Bit mask for ACMP_ACMPPEN */
#define ACMP_ROUTE_ACMPPEN_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_ACMPPEN_DEFAULT        0x00000000UL        /**< Mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_SHIFT         8                   /**< Shift value for ACMP_LOCATION */
#define _ACMP_ROUTE_LOCATION_MASK          0x300UL             /**< Bit mask for ACMP_LOCATION */
#define ACMP_ROUTE_LOCATION_DEFAULT        (0x00000000UL << 8) /**< Shifted mode DEFAULT for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC0           (0x00000000UL << 8) /**< Shifted mode LOC0 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC1           (0x00000001UL << 8) /**< Shifted mode LOC1 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC2           (0x00000002UL << 8) /**< Shifted mode LOC2 for ACMP_ROUTE */
#define ACMP_ROUTE_LOCATION_LOC3           (0x00000003UL << 8) /**< Shifted mode LOC3 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_DEFAULT       0x00000000UL        /**< Mode DEFAULT for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC0          0x00000000UL        /**< Mode LOC0 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC1          0x00000001UL        /**< Mode LOC1 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC2          0x00000002UL        /**< Mode LOC2 for ACMP_ROUTE */
#define _ACMP_ROUTE_LOCATION_LOC3          0x00000003UL        /**< Mode LOC3 for ACMP_ROUTE */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_MSC
 * @{
 *****************************************************************************/

/* Bit fields for MSC CTRL */
#define _MSC_CTRL_RESETVALUE                    0x00000001UL        /**< Default value for MSC_CTRL */
#define _MSC_CTRL_MASK                          0x00000001UL        /**< Mask for MSC_CTRL */
#define MSC_CTRL_BUSFAULT                       (0x1UL << 0)        /**< Bus Fault Response Enable */
#define _MSC_CTRL_BUSFAULT_SHIFT                0                   /**< Shift value for MSC_BUSFAULT */
#define _MSC_CTRL_BUSFAULT_MASK                 0x1UL               /**< Bit mask for MSC_BUSFAULT */
#define MSC_CTRL_BUSFAULT_GENERATE              (0x00000000UL << 0) /**< Shifted mode GENERATE for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_DEFAULT               (0x00000001UL << 0) /**< Shifted mode DEFAULT for MSC_CTRL */
#define MSC_CTRL_BUSFAULT_IGNORE                (0x00000001UL << 0) /**< Shifted mode IGNORE for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_GENERATE             0x00000000UL        /**< Mode GENERATE for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_DEFAULT              0x00000001UL        /**< Mode DEFAULT for MSC_CTRL */
#define _MSC_CTRL_BUSFAULT_IGNORE               0x00000001UL        /**< Mode IGNORE for MSC_CTRL */

/* Bit fields for MSC READCTRL */
#define _MSC_READCTRL_RESETVALUE                0x00000001UL        /**< Default value for MSC_READCTRL */
#define _MSC_READCTRL_MASK                      0x00000007UL        /**< Mask for MSC_READCTRL */
#define _MSC_READCTRL_MODE_SHIFT                0                   /**< Shift value for MSC_MODE */
#define _MSC_READCTRL_MODE_MASK                 0x7UL               /**< Bit mask for MSC_MODE */
#define MSC_READCTRL_MODE_WS0                   (0x00000000UL << 0) /**< Shifted mode WS0 for MSC_READCTRL */
#define MSC_READCTRL_MODE_DEFAULT               (0x00000001UL << 0) /**< Shifted mode DEFAULT for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1                   (0x00000001UL << 0) /**< Shifted mode WS1 for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS0SCBTP              (0x00000002UL << 0) /**< Shifted mode WS0SCBTP for MSC_READCTRL */
#define MSC_READCTRL_MODE_WS1SCBTP              (0x00000003UL << 0) /**< Shifted mode WS1SCBTP for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS0                  0x00000000UL        /**< Mode WS0 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_DEFAULT              0x00000001UL        /**< Mode DEFAULT for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1                  0x00000001UL        /**< Mode WS1 for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS0SCBTP             0x00000002UL        /**< Mode WS0SCBTP for MSC_READCTRL */
#define _MSC_READCTRL_MODE_WS1SCBTP             0x00000003UL        /**< Mode WS1SCBTP for MSC_READCTRL */

/* Bit fields for MSC WRITECTRL */
#define _MSC_WRITECTRL_RESETVALUE               0x00000000UL        /**< Default value for MSC_WRITECTRL */
#define _MSC_WRITECTRL_MASK                     0x00000003UL        /**< Mask for MSC_WRITECTRL */
#define MSC_WRITECTRL_WREN                      (0x1UL << 0)        /**< Enable Write/Erase Controller  */
#define _MSC_WRITECTRL_WREN_SHIFT               0                   /**< Shift value for MSC_WREN */
#define _MSC_WRITECTRL_WREN_MASK                0x1UL               /**< Bit mask for MSC_WREN */
#define MSC_WRITECTRL_WREN_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_WRITECTRL */
#define _MSC_WRITECTRL_WREN_DEFAULT             0x00000000UL        /**< Mode DEFAULT for MSC_WRITECTRL */
#define MSC_WRITECTRL_IRQERASEABORT             (0x1UL << 1)        /**< Abort Page Erase on Interrupt */
#define _MSC_WRITECTRL_IRQERASEABORT_SHIFT      1                   /**< Shift value for MSC_IRQERASEABORT */
#define _MSC_WRITECTRL_IRQERASEABORT_MASK       0x2UL               /**< Bit mask for MSC_IRQERASEABORT */
#define MSC_WRITECTRL_IRQERASEABORT_DEFAULT     (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_WRITECTRL */
#define _MSC_WRITECTRL_IRQERASEABORT_DEFAULT    0x00000000UL        /**< Mode DEFAULT for MSC_WRITECTRL */

/* Bit fields for MSC WRITECMD */
#define _MSC_WRITECMD_RESETVALUE                0x00000000UL        /**< Default value for MSC_WRITECMD */
#define _MSC_WRITECMD_MASK                      0x0000001FUL        /**< Mask for MSC_WRITECMD */
#define MSC_WRITECMD_LADDRIM                    (0x1UL << 0)        /**< Load MSC_ADDRB into ADDR */
#define _MSC_WRITECMD_LADDRIM_SHIFT             0                   /**< Shift value for MSC_LADDRIM */
#define _MSC_WRITECMD_LADDRIM_MASK              0x1UL               /**< Bit mask for MSC_LADDRIM */
#define MSC_WRITECMD_LADDRIM_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_LADDRIM_DEFAULT           0x00000000UL        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_ERASEPAGE                  (0x1UL << 1)        /**< Erase Page */
#define _MSC_WRITECMD_ERASEPAGE_SHIFT           1                   /**< Shift value for MSC_ERASEPAGE */
#define _MSC_WRITECMD_ERASEPAGE_MASK            0x2UL               /**< Bit mask for MSC_ERASEPAGE */
#define MSC_WRITECMD_ERASEPAGE_DEFAULT          (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_ERASEPAGE_DEFAULT         0x00000000UL        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEEND                   (0x1UL << 2)        /**< End Write Mode */
#define _MSC_WRITECMD_WRITEEND_SHIFT            2                   /**< Shift value for MSC_WRITEEND */
#define _MSC_WRITECMD_WRITEEND_MASK             0x4UL               /**< Bit mask for MSC_WRITEEND */
#define MSC_WRITECMD_WRITEEND_DEFAULT           (0x00000000UL << 2) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITEEND_DEFAULT          0x00000000UL        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITEONCE                  (0x1UL << 3)        /**< Word Write-Once Trigger */
#define _MSC_WRITECMD_WRITEONCE_SHIFT           3                   /**< Shift value for MSC_WRITEONCE */
#define _MSC_WRITECMD_WRITEONCE_MASK            0x8UL               /**< Bit mask for MSC_WRITEONCE */
#define MSC_WRITECMD_WRITEONCE_DEFAULT          (0x00000000UL << 3) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITEONCE_DEFAULT         0x00000000UL        /**< Mode DEFAULT for MSC_WRITECMD */
#define MSC_WRITECMD_WRITETRIG                  (0x1UL << 4)        /**< Word Write Sequence Trigger */
#define _MSC_WRITECMD_WRITETRIG_SHIFT           4                   /**< Shift value for MSC_WRITETRIG */
#define _MSC_WRITECMD_WRITETRIG_MASK            0x10UL              /**< Bit mask for MSC_WRITETRIG */
#define MSC_WRITECMD_WRITETRIG_DEFAULT          (0x00000000UL << 4) /**< Shifted mode DEFAULT for MSC_WRITECMD */
#define _MSC_WRITECMD_WRITETRIG_DEFAULT         0x00000000UL        /**< Mode DEFAULT for MSC_WRITECMD */

/* Bit fields for MSC ADDRB */
#define _MSC_ADDRB_RESETVALUE                   0x00000000UL        /**< Default value for MSC_ADDRB */
#define _MSC_ADDRB_MASK                         0xFFFFFFFFUL        /**< Mask for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_SHIFT                  0                   /**< Shift value for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_MASK                   0xFFFFFFFFUL        /**< Bit mask for MSC_ADDRB */
#define MSC_ADDRB_ADDRB_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_ADDRB */
#define _MSC_ADDRB_ADDRB_DEFAULT                0x00000000UL        /**< Mode DEFAULT for MSC_ADDRB */

/* Bit fields for MSC WDATA */
#define _MSC_WDATA_RESETVALUE                   0x00000000UL        /**< Default value for MSC_WDATA */
#define _MSC_WDATA_MASK                         0xFFFFFFFFUL        /**< Mask for MSC_WDATA */
#define _MSC_WDATA_WDATA_SHIFT                  0                   /**< Shift value for MSC_WDATA */
#define _MSC_WDATA_WDATA_MASK                   0xFFFFFFFFUL        /**< Bit mask for MSC_WDATA */
#define MSC_WDATA_WDATA_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_WDATA */
#define _MSC_WDATA_WDATA_DEFAULT                0x00000000UL        /**< Mode DEFAULT for MSC_WDATA */

/* Bit fields for MSC STATUS */
#define _MSC_STATUS_RESETVALUE                  0x00000008UL        /**< Default value for MSC_STATUS */
#define _MSC_STATUS_MASK                        0x0000003FUL        /**< Mask for MSC_STATUS */
#define MSC_STATUS_BUSY                         (0x1UL << 0)        /**< Erase/Write Busy */
#define _MSC_STATUS_BUSY_SHIFT                  0                   /**< Shift value for MSC_BUSY */
#define _MSC_STATUS_BUSY_MASK                   0x1UL               /**< Bit mask for MSC_BUSY */
#define MSC_STATUS_BUSY_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_BUSY_DEFAULT                0x00000000UL        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_LOCKED                       (0x1UL << 1)        /**< Access Locked */
#define _MSC_STATUS_LOCKED_SHIFT                1                   /**< Shift value for MSC_LOCKED */
#define _MSC_STATUS_LOCKED_MASK                 0x2UL               /**< Bit mask for MSC_LOCKED */
#define MSC_STATUS_LOCKED_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_LOCKED_DEFAULT              0x00000000UL        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_INVADDR                      (0x1UL << 2)        /**< Invalid Write Address or Erase Page */
#define _MSC_STATUS_INVADDR_SHIFT               2                   /**< Shift value for MSC_INVADDR */
#define _MSC_STATUS_INVADDR_MASK                0x4UL               /**< Bit mask for MSC_INVADDR */
#define MSC_STATUS_INVADDR_DEFAULT              (0x00000000UL << 2) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_INVADDR_DEFAULT             0x00000000UL        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WDATAREADY                   (0x1UL << 3)        /**< WDATA Write Ready */
#define _MSC_STATUS_WDATAREADY_SHIFT            3                   /**< Shift value for MSC_WDATAREADY */
#define _MSC_STATUS_WDATAREADY_MASK             0x8UL               /**< Bit mask for MSC_WDATAREADY */
#define MSC_STATUS_WDATAREADY_DEFAULT           (0x00000001UL << 3) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_WDATAREADY_DEFAULT          0x00000001UL        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_WORDTIMEOUT                  (0x1UL << 4)        /**< Flash Write Word Timeout */
#define _MSC_STATUS_WORDTIMEOUT_SHIFT           4                   /**< Shift value for MSC_WORDTIMEOUT */
#define _MSC_STATUS_WORDTIMEOUT_MASK            0x10UL              /**< Bit mask for MSC_WORDTIMEOUT */
#define MSC_STATUS_WORDTIMEOUT_DEFAULT          (0x00000000UL << 4) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_WORDTIMEOUT_DEFAULT         0x00000000UL        /**< Mode DEFAULT for MSC_STATUS */
#define MSC_STATUS_ERASEABORTED                 (0x1UL << 5)        /**< The Current Flash Erase Operation Aborted */
#define _MSC_STATUS_ERASEABORTED_SHIFT          5                   /**< Shift value for MSC_ERASEABORTED */
#define _MSC_STATUS_ERASEABORTED_MASK           0x20UL              /**< Bit mask for MSC_ERASEABORTED */
#define MSC_STATUS_ERASEABORTED_DEFAULT         (0x00000000UL << 5) /**< Shifted mode DEFAULT for MSC_STATUS */
#define _MSC_STATUS_ERASEABORTED_DEFAULT        0x00000000UL        /**< Mode DEFAULT for MSC_STATUS */

/* Bit fields for MSC IF */
#define _MSC_IF_RESETVALUE                      0x00000000UL        /**< Default value for MSC_IF */
#define _MSC_IF_MASK                            0x00000003UL        /**< Mask for MSC_IF */
#define MSC_IF_ERASE                            (0x1UL << 0)        /**< Erase Done Interrupt Read Flag */
#define _MSC_IF_ERASE_SHIFT                     0                   /**< Shift value for MSC_ERASE */
#define _MSC_IF_ERASE_MASK                      0x1UL               /**< Bit mask for MSC_ERASE */
#define MSC_IF_ERASE_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_IF */
#define _MSC_IF_ERASE_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for MSC_IF */
#define MSC_IF_WRITE                            (0x1UL << 1)        /**< Write Done Interrupt Read Flag */
#define _MSC_IF_WRITE_SHIFT                     1                   /**< Shift value for MSC_WRITE */
#define _MSC_IF_WRITE_MASK                      0x2UL               /**< Bit mask for MSC_WRITE */
#define MSC_IF_WRITE_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_IF */
#define _MSC_IF_WRITE_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for MSC_IF */

/* Bit fields for MSC IFS */
#define _MSC_IFS_RESETVALUE                     0x00000000UL        /**< Default value for MSC_IFS */
#define _MSC_IFS_MASK                           0x00000003UL        /**< Mask for MSC_IFS */
#define MSC_IFS_ERASE                           (0x1UL << 0)        /**< Erase Done Interrupt Set */
#define _MSC_IFS_ERASE_SHIFT                    0                   /**< Shift value for MSC_ERASE */
#define _MSC_IFS_ERASE_MASK                     0x1UL               /**< Bit mask for MSC_ERASE */
#define MSC_IFS_ERASE_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_IFS */
#define _MSC_IFS_ERASE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IFS */
#define MSC_IFS_WRITE                           (0x1UL << 1)        /**< Write Done Interrupt Set */
#define _MSC_IFS_WRITE_SHIFT                    1                   /**< Shift value for MSC_WRITE */
#define _MSC_IFS_WRITE_MASK                     0x2UL               /**< Bit mask for MSC_WRITE */
#define MSC_IFS_WRITE_DEFAULT                   (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_IFS */
#define _MSC_IFS_WRITE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IFS */

/* Bit fields for MSC IFC */
#define _MSC_IFC_RESETVALUE                     0x00000000UL        /**< Default value for MSC_IFC */
#define _MSC_IFC_MASK                           0x00000003UL        /**< Mask for MSC_IFC */
#define MSC_IFC_ERASE                           (0x1UL << 0)        /**< Erase Done Interrupt Clear */
#define _MSC_IFC_ERASE_SHIFT                    0                   /**< Shift value for MSC_ERASE */
#define _MSC_IFC_ERASE_MASK                     0x1UL               /**< Bit mask for MSC_ERASE */
#define MSC_IFC_ERASE_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_IFC */
#define _MSC_IFC_ERASE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IFC */
#define MSC_IFC_WRITE                           (0x1UL << 1)        /**< Write Done Interrupt Clear */
#define _MSC_IFC_WRITE_SHIFT                    1                   /**< Shift value for MSC_WRITE */
#define _MSC_IFC_WRITE_MASK                     0x2UL               /**< Bit mask for MSC_WRITE */
#define MSC_IFC_WRITE_DEFAULT                   (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_IFC */
#define _MSC_IFC_WRITE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IFC */

/* Bit fields for MSC IEN */
#define _MSC_IEN_RESETVALUE                     0x00000000UL        /**< Default value for MSC_IEN */
#define _MSC_IEN_MASK                           0x00000003UL        /**< Mask for MSC_IEN */
#define MSC_IEN_ERASE                           (0x1UL << 0)        /**< Erase Done Interrupt Enable */
#define _MSC_IEN_ERASE_SHIFT                    0                   /**< Shift value for MSC_ERASE */
#define _MSC_IEN_ERASE_MASK                     0x1UL               /**< Bit mask for MSC_ERASE */
#define MSC_IEN_ERASE_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_IEN */
#define _MSC_IEN_ERASE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IEN */
#define MSC_IEN_WRITE                           (0x1UL << 1)        /**< Write Done Interrupt Enable */
#define _MSC_IEN_WRITE_SHIFT                    1                   /**< Shift value for MSC_WRITE */
#define _MSC_IEN_WRITE_MASK                     0x2UL               /**< Bit mask for MSC_WRITE */
#define MSC_IEN_WRITE_DEFAULT                   (0x00000000UL << 1) /**< Shifted mode DEFAULT for MSC_IEN */
#define _MSC_IEN_WRITE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for MSC_IEN */

/* Bit fields for MSC LOCK */
#define _MSC_LOCK_RESETVALUE                    0x00000000UL        /**< Default value for MSC_LOCK */
#define _MSC_LOCK_MASK                          0x0000FFFFUL        /**< Mask for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_SHIFT                 0                   /**< Shift value for MSC_LOCKKEY */
#define _MSC_LOCK_LOCKKEY_MASK                  0xFFFFUL            /**< Bit mask for MSC_LOCKKEY */
#define MSC_LOCK_LOCKKEY_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCK                   (0x00000000UL << 0) /**< Shifted mode LOCK for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCKED               (0x00000000UL << 0) /**< Shifted mode UNLOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_LOCKED                 (0x00000001UL << 0) /**< Shifted mode LOCKED for MSC_LOCK */
#define MSC_LOCK_LOCKKEY_UNLOCK                 (0x00001B71UL << 0) /**< Shifted mode UNLOCK for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_DEFAULT               0x00000000UL        /**< Mode DEFAULT for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCK                  0x00000000UL        /**< Mode LOCK for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCKED              0x00000000UL        /**< Mode UNLOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_LOCKED                0x00000001UL        /**< Mode LOCKED for MSC_LOCK */
#define _MSC_LOCK_LOCKKEY_UNLOCK                0x00001B71UL        /**< Mode UNLOCK for MSC_LOCK */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_EMU
 * @{
 *****************************************************************************/

/* Bit fields for EMU CTRL */
#define _EMU_CTRL_RESETVALUE              0x00000000UL        /**< Default value for EMU_CTRL */
#define _EMU_CTRL_MASK                    0x0000000FUL        /**< Mask for EMU_CTRL */
#define EMU_CTRL_EMVREG                   (0x1UL << 0)        /**< Energy Mode Voltage Regulator Control */
#define _EMU_CTRL_EMVREG_SHIFT            0                   /**< Shift value for EMU_EMVREG */
#define _EMU_CTRL_EMVREG_MASK             0x1UL               /**< Bit mask for EMU_EMVREG */
#define EMU_CTRL_EMVREG_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for EMU_CTRL */
#define EMU_CTRL_EMVREG_REDUCED           (0x00000000UL << 0) /**< Shifted mode REDUCED for EMU_CTRL */
#define EMU_CTRL_EMVREG_FULL              (0x00000001UL << 0) /**< Shifted mode FULL for EMU_CTRL */
#define _EMU_CTRL_EMVREG_DEFAULT          0x00000000UL        /**< Mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EMVREG_REDUCED          0x00000000UL        /**< Mode REDUCED for EMU_CTRL */
#define _EMU_CTRL_EMVREG_FULL             0x00000001UL        /**< Mode FULL for EMU_CTRL */
#define EMU_CTRL_EM2BLOCK                 (0x1UL << 1)        /**< Energy Mode 2 Block */
#define _EMU_CTRL_EM2BLOCK_SHIFT          1                   /**< Shift value for EMU_EM2BLOCK */
#define _EMU_CTRL_EM2BLOCK_MASK           0x2UL               /**< Bit mask for EMU_EM2BLOCK */
#define EMU_CTRL_EM2BLOCK_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM2BLOCK_DEFAULT        0x00000000UL        /**< Mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM4CTRL_SHIFT           2                   /**< Shift value for EMU_EM4CTRL */
#define _EMU_CTRL_EM4CTRL_MASK            0xCUL               /**< Bit mask for EMU_EM4CTRL */
#define EMU_CTRL_EM4CTRL_DEFAULT          (0x00000000UL << 2) /**< Shifted mode DEFAULT for EMU_CTRL */
#define _EMU_CTRL_EM4CTRL_DEFAULT         0x00000000UL        /**< Mode DEFAULT for EMU_CTRL */

/* Bit fields for EMU MEMCTRL */
#define _EMU_MEMCTRL_RESETVALUE           0x00000000UL        /**< Default value for EMU_MEMCTRL */
#define _EMU_MEMCTRL_MASK                 0x00000007UL        /**< Mask for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_SHIFT      0                   /**< Shift value for EMU_POWERDOWN */
#define _EMU_MEMCTRL_POWERDOWN_MASK       0x7UL               /**< Bit mask for EMU_POWERDOWN */
#define EMU_MEMCTRL_POWERDOWN_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK3        (0x00000004UL << 0) /**< Shifted mode BLK3 for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK23       (0x00000006UL << 0) /**< Shifted mode BLK23 for EMU_MEMCTRL */
#define EMU_MEMCTRL_POWERDOWN_BLK123      (0x00000007UL << 0) /**< Shifted mode BLK123 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_DEFAULT    0x00000000UL        /**< Mode DEFAULT for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK3       0x00000004UL        /**< Mode BLK3 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK23      0x00000006UL        /**< Mode BLK23 for EMU_MEMCTRL */
#define _EMU_MEMCTRL_POWERDOWN_BLK123     0x00000007UL        /**< Mode BLK123 for EMU_MEMCTRL */

/* Bit fields for EMU LOCK */
#define _EMU_LOCK_RESETVALUE              0x00000000UL        /**< Default value for EMU_LOCK */
#define _EMU_LOCK_MASK                    0x0000FFFFUL        /**< Mask for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_SHIFT           0                   /**< Shift value for EMU_LOCKKEY */
#define _EMU_LOCK_LOCKKEY_MASK            0xFFFFUL            /**< Bit mask for EMU_LOCKKEY */
#define EMU_LOCK_LOCKKEY_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_LOCK             (0x00000000UL << 0) /**< Shifted mode LOCK for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_UNLOCKED         (0x00000000UL << 0) /**< Shifted mode UNLOCKED for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_LOCKED           (0x00000001UL << 0) /**< Shifted mode LOCKED for EMU_LOCK */
#define EMU_LOCK_LOCKKEY_UNLOCK           (0x0000ADE8UL << 0) /**< Shifted mode UNLOCK for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_DEFAULT         0x00000000UL        /**< Mode DEFAULT for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_LOCK            0x00000000UL        /**< Mode LOCK for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_UNLOCKED        0x00000000UL        /**< Mode UNLOCKED for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_LOCKED          0x00000001UL        /**< Mode LOCKED for EMU_LOCK */
#define _EMU_LOCK_LOCKKEY_UNLOCK          0x0000ADE8UL        /**< Mode UNLOCK for EMU_LOCK */

/* Bit fields for EMU AUXCTRL */
#define _EMU_AUXCTRL_RESETVALUE           0x00000000UL        /**< Default value for EMU_AUXCTRL */
#define _EMU_AUXCTRL_MASK                 0x00000001UL        /**< Mask for EMU_AUXCTRL */
#define EMU_AUXCTRL_HRCCLR                (0x1UL << 0)        /**< Hard Reset Cause Clear */
#define _EMU_AUXCTRL_HRCCLR_SHIFT         0                   /**< Shift value for EMU_HRCCLR */
#define _EMU_AUXCTRL_HRCCLR_MASK          0x1UL               /**< Bit mask for EMU_HRCCLR */
#define EMU_AUXCTRL_HRCCLR_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for EMU_AUXCTRL */
#define _EMU_AUXCTRL_HRCCLR_DEFAULT       0x00000000UL        /**< Mode DEFAULT for EMU_AUXCTRL */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_RMU
 * @{
 *****************************************************************************/

/* Bit fields for RMU CTRL */
#define _RMU_CTRL_RESETVALUE                 0x00000000UL        /**< Default value for RMU_CTRL */
#define _RMU_CTRL_MASK                       0x00000001UL        /**< Mask for RMU_CTRL */
#define RMU_CTRL_LOCKUPRDIS                  (0x1UL << 0)        /**< Lockup Reset Disable */
#define _RMU_CTRL_LOCKUPRDIS_SHIFT           0                   /**< Shift value for RMU_LOCKUPRDIS */
#define _RMU_CTRL_LOCKUPRDIS_MASK            0x1UL               /**< Bit mask for RMU_LOCKUPRDIS */
#define RMU_CTRL_LOCKUPRDIS_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for RMU_CTRL */
#define _RMU_CTRL_LOCKUPRDIS_DEFAULT         0x00000000UL        /**< Mode DEFAULT for RMU_CTRL */

/* Bit fields for RMU RSTCAUSE */
#define _RMU_RSTCAUSE_RESETVALUE             0x00000000UL        /**< Default value for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_MASK                   0x0000007FUL        /**< Mask for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_PORST                   (0x1UL << 0)        /**< Power On Reset */
#define _RMU_RSTCAUSE_PORST_SHIFT            0                   /**< Shift value for RMU_PORST */
#define _RMU_RSTCAUSE_PORST_MASK             0x1UL               /**< Bit mask for RMU_PORST */
#define RMU_RSTCAUSE_PORST_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_PORST_DEFAULT          0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_BODUNREGRST             (0x1UL << 1)        /**< Brown Out Detector Unregulated Domain Reset */
#define _RMU_RSTCAUSE_BODUNREGRST_SHIFT      1                   /**< Shift value for RMU_BODUNREGRST */
#define _RMU_RSTCAUSE_BODUNREGRST_MASK       0x2UL               /**< Bit mask for RMU_BODUNREGRST */
#define RMU_RSTCAUSE_BODUNREGRST_DEFAULT     (0x00000000UL << 1) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_BODUNREGRST_DEFAULT    0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_BODREGRST               (0x1UL << 2)        /**< Brown Out Detector Regulated Domain Reset */
#define _RMU_RSTCAUSE_BODREGRST_SHIFT        2                   /**< Shift value for RMU_BODREGRST */
#define _RMU_RSTCAUSE_BODREGRST_MASK         0x4UL               /**< Bit mask for RMU_BODREGRST */
#define RMU_RSTCAUSE_BODREGRST_DEFAULT       (0x00000000UL << 2) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_BODREGRST_DEFAULT      0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_EXTRST                  (0x1UL << 3)        /**< External Pin Reset */
#define _RMU_RSTCAUSE_EXTRST_SHIFT           3                   /**< Shift value for RMU_EXTRST */
#define _RMU_RSTCAUSE_EXTRST_MASK            0x8UL               /**< Bit mask for RMU_EXTRST */
#define RMU_RSTCAUSE_EXTRST_DEFAULT          (0x00000000UL << 3) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_EXTRST_DEFAULT         0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_WDOGRST                 (0x1UL << 4)        /**< Watchdog Reset */
#define _RMU_RSTCAUSE_WDOGRST_SHIFT          4                   /**< Shift value for RMU_WDOGRST */
#define _RMU_RSTCAUSE_WDOGRST_MASK           0x10UL              /**< Bit mask for RMU_WDOGRST */
#define RMU_RSTCAUSE_WDOGRST_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_WDOGRST_DEFAULT        0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_LOCKUPRST               (0x1UL << 5)        /**< LOCKUP Reset */
#define _RMU_RSTCAUSE_LOCKUPRST_SHIFT        5                   /**< Shift value for RMU_LOCKUPRST */
#define _RMU_RSTCAUSE_LOCKUPRST_MASK         0x20UL              /**< Bit mask for RMU_LOCKUPRST */
#define RMU_RSTCAUSE_LOCKUPRST_DEFAULT       (0x00000000UL << 5) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_LOCKUPRST_DEFAULT      0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */
#define RMU_RSTCAUSE_SYSREQRST               (0x1UL << 6)        /**< System Request Reset */
#define _RMU_RSTCAUSE_SYSREQRST_SHIFT        6                   /**< Shift value for RMU_SYSREQRST */
#define _RMU_RSTCAUSE_SYSREQRST_MASK         0x40UL              /**< Bit mask for RMU_SYSREQRST */
#define RMU_RSTCAUSE_SYSREQRST_DEFAULT       (0x00000000UL << 6) /**< Shifted mode DEFAULT for RMU_RSTCAUSE */
#define _RMU_RSTCAUSE_SYSREQRST_DEFAULT      0x00000000UL        /**< Mode DEFAULT for RMU_RSTCAUSE */

/* Bit fields for RMU CMD */
#define _RMU_CMD_RESETVALUE                  0x00000000UL        /**< Default value for RMU_CMD */
#define _RMU_CMD_MASK                        0x00000001UL        /**< Mask for RMU_CMD */
#define RMU_CMD_RCCLR                        (0x1UL << 0)        /**< Reset Cause Clear */
#define _RMU_CMD_RCCLR_SHIFT                 0                   /**< Shift value for RMU_RCCLR */
#define _RMU_CMD_RCCLR_MASK                  0x1UL               /**< Bit mask for RMU_RCCLR */
#define RMU_CMD_RCCLR_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for RMU_CMD */
#define _RMU_CMD_RCCLR_DEFAULT               0x00000000UL        /**< Mode DEFAULT for RMU_CMD */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_CMU
 * @{
 *****************************************************************************/

/* Bit fields for CMU CTRL */
#define _CMU_CTRL_RESETVALUE                       0x000C262CUL         /**< Default value for CMU_CTRL */
#define _CMU_CTRL_MASK                             0x00FE3EEFUL         /**< Mask for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_SHIFT                   0                    /**< Shift value for CMU_HFXOMODE */
#define _CMU_CTRL_HFXOMODE_MASK                    0x3UL                /**< Bit mask for CMU_HFXOMODE */
#define CMU_CTRL_HFXOMODE_DEFAULT                  (0x00000000UL << 0)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_XTAL                     (0x00000000UL << 0)  /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_BUFEXTCLK                (0x00000001UL << 0)  /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_HFXOMODE_DIGEXTCLK                (0x00000002UL << 0)  /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_XTAL                    0x00000000UL         /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_BUFEXTCLK               0x00000001UL         /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOMODE_DIGEXTCLK               0x00000002UL         /**< Mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_SHIFT                  2                    /**< Shift value for CMU_HFXOBOOST */
#define _CMU_CTRL_HFXOBOOST_MASK                   0xCUL                /**< Bit mask for CMU_HFXOBOOST */
#define CMU_CTRL_HFXOBOOST_50PCENT                 (0x00000000UL << 2)  /**< Shifted mode 50PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_70PCENT                 (0x00000001UL << 2)  /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_80PCENT                 (0x00000002UL << 2)  /**< Shifted mode 80PCENT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_DEFAULT                 (0x00000003UL << 2)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOBOOST_100PCENT                (0x00000003UL << 2)  /**< Shifted mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_50PCENT                0x00000000UL         /**< Mode 50PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_70PCENT                0x00000001UL         /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_80PCENT                0x00000002UL         /**< Mode 80PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_DEFAULT                0x00000003UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOBOOST_100PCENT               0x00000003UL         /**< Mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_SHIFT                 5                    /**< Shift value for CMU_HFXOBUFCUR */
#define _CMU_CTRL_HFXOBUFCUR_MASK                  0x60UL               /**< Bit mask for CMU_HFXOBUFCUR */
#define CMU_CTRL_HFXOBUFCUR_DEFAULT                (0x00000001UL << 5)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOBUFCUR_DEFAULT               0x00000001UL         /**< Mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOGLITCHDETEN                   (0x1UL << 7)         /**< HFXO Glitch Detector Enable */
#define _CMU_CTRL_HFXOGLITCHDETEN_SHIFT            7                    /**< Shift value for CMU_HFXOGLITCHDETEN */
#define _CMU_CTRL_HFXOGLITCHDETEN_MASK             0x80UL               /**< Bit mask for CMU_HFXOGLITCHDETEN */
#define CMU_CTRL_HFXOGLITCHDETEN_DEFAULT           (0x00000000UL << 7)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOGLITCHDETEN_DEFAULT          0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_SHIFT                9                    /**< Shift value for CMU_HFXOTIMEOUT */
#define _CMU_CTRL_HFXOTIMEOUT_MASK                 0x600UL              /**< Bit mask for CMU_HFXOTIMEOUT */
#define CMU_CTRL_HFXOTIMEOUT_8CYCLES               (0x00000000UL << 9)  /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_256CYCLES             (0x00000001UL << 9)  /**< Shifted mode 256CYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_1KCYCLES              (0x00000002UL << 9)  /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_DEFAULT               (0x00000003UL << 9)  /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_HFXOTIMEOUT_16KCYCLES             (0x00000003UL << 9)  /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_8CYCLES              0x00000000UL         /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_256CYCLES            0x00000001UL         /**< Mode 256CYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_1KCYCLES             0x00000002UL         /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_DEFAULT              0x00000003UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_HFXOTIMEOUT_16KCYCLES            0x00000003UL         /**< Mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_SHIFT                   11                   /**< Shift value for CMU_LFXOMODE */
#define _CMU_CTRL_LFXOMODE_MASK                    0x1800UL             /**< Bit mask for CMU_LFXOMODE */
#define CMU_CTRL_LFXOMODE_DEFAULT                  (0x00000000UL << 11) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_XTAL                     (0x00000000UL << 11) /**< Shifted mode XTAL for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_BUFEXTCLK                (0x00000001UL << 11) /**< Shifted mode BUFEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOMODE_DIGEXTCLK                (0x00000002UL << 11) /**< Shifted mode DIGEXTCLK for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_XTAL                    0x00000000UL         /**< Mode XTAL for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_BUFEXTCLK               0x00000001UL         /**< Mode BUFEXTCLK for CMU_CTRL */
#define _CMU_CTRL_LFXOMODE_DIGEXTCLK               0x00000002UL         /**< Mode DIGEXTCLK for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST                         (0x1UL << 13)        /**< LFXO Start-up Boost Current */
#define _CMU_CTRL_LFXOBOOST_SHIFT                  13                   /**< Shift value for CMU_LFXOBOOST */
#define _CMU_CTRL_LFXOBOOST_MASK                   0x2000UL             /**< Bit mask for CMU_LFXOBOOST */
#define CMU_CTRL_LFXOBOOST_70PCENT                 (0x00000000UL << 13) /**< Shifted mode 70PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_DEFAULT                 (0x00000001UL << 13) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOBOOST_100PCENT                (0x00000001UL << 13) /**< Shifted mode 100PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_70PCENT                0x00000000UL         /**< Mode 70PCENT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_DEFAULT                0x00000001UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOBOOST_100PCENT               0x00000001UL         /**< Mode 100PCENT for CMU_CTRL */
#define CMU_CTRL_LFXOBUFCUR                        (0x1UL << 17)        /**< LFXO Boost Buffer Current */
#define _CMU_CTRL_LFXOBUFCUR_SHIFT                 17                   /**< Shift value for CMU_LFXOBUFCUR */
#define _CMU_CTRL_LFXOBUFCUR_MASK                  0x20000UL            /**< Bit mask for CMU_LFXOBUFCUR */
#define CMU_CTRL_LFXOBUFCUR_DEFAULT                (0x00000000UL << 17) /**< Shifted mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOBUFCUR_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_SHIFT                18                   /**< Shift value for CMU_LFXOTIMEOUT */
#define _CMU_CTRL_LFXOTIMEOUT_MASK                 0xC0000UL            /**< Bit mask for CMU_LFXOTIMEOUT */
#define CMU_CTRL_LFXOTIMEOUT_8CYCLES               (0x00000000UL << 18) /**< Shifted mode 8CYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_1KCYCLES              (0x00000001UL << 18) /**< Shifted mode 1KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_16KCYCLES             (0x00000002UL << 18) /**< Shifted mode 16KCYCLES for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_DEFAULT               (0x00000003UL << 18) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_LFXOTIMEOUT_32KCYCLES             (0x00000003UL << 18) /**< Shifted mode 32KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_8CYCLES              0x00000000UL         /**< Mode 8CYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_1KCYCLES             0x00000001UL         /**< Mode 1KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_16KCYCLES            0x00000002UL         /**< Mode 16KCYCLES for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_DEFAULT              0x00000003UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_LFXOTIMEOUT_32KCYCLES            0x00000003UL         /**< Mode 32KCYCLES for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_SHIFT                 20                   /**< Shift value for CMU_CLKOUTSEL0 */
#define _CMU_CTRL_CLKOUTSEL0_MASK                  0x700000UL           /**< Bit mask for CMU_CLKOUTSEL0 */
#define CMU_CTRL_CLKOUTSEL0_DEFAULT                (0x00000000UL << 20) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFRCO                  (0x00000000UL << 20) /**< Shifted mode HFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFXO                   (0x00000001UL << 20) /**< Shifted mode HFXO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK2                 (0x00000002UL << 20) /**< Shifted mode HFCLK2 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK4                 (0x00000003UL << 20) /**< Shifted mode HFCLK4 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK8                 (0x00000004UL << 20) /**< Shifted mode HFCLK8 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_HFCLK16                (0x00000005UL << 20) /**< Shifted mode HFCLK16 for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL0_ULFRCO                 (0x00000006UL << 20) /**< Shifted mode ULFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFRCO                 0x00000000UL         /**< Mode HFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFXO                  0x00000001UL         /**< Mode HFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK2                0x00000002UL         /**< Mode HFCLK2 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK4                0x00000003UL         /**< Mode HFCLK4 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK8                0x00000004UL         /**< Mode HFCLK8 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_HFCLK16               0x00000005UL         /**< Mode HFCLK16 for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL0_ULFRCO                0x00000006UL         /**< Mode ULFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1                        (0x1UL << 23)        /**< Clock Output Select 1 */
#define _CMU_CTRL_CLKOUTSEL1_SHIFT                 23                   /**< Shift value for CMU_CLKOUTSEL1 */
#define _CMU_CTRL_CLKOUTSEL1_MASK                  0x800000UL           /**< Bit mask for CMU_CLKOUTSEL1 */
#define CMU_CTRL_CLKOUTSEL1_DEFAULT                (0x00000000UL << 23) /**< Shifted mode DEFAULT for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFRCO                  (0x00000000UL << 23) /**< Shifted mode LFRCO for CMU_CTRL */
#define CMU_CTRL_CLKOUTSEL1_LFXO                   (0x00000001UL << 23) /**< Shifted mode LFXO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFRCO                 0x00000000UL         /**< Mode LFRCO for CMU_CTRL */
#define _CMU_CTRL_CLKOUTSEL1_LFXO                  0x00000001UL         /**< Mode LFXO for CMU_CTRL */

/* Bit fields for CMU HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_RESETVALUE               0x00000000UL        /**< Default value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_MASK                     0x0000000FUL        /**< Mask for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_SHIFT       0                   /**< Shift value for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_MASK        0xFUL               /**< Bit mask for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT      (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK        (0x00000000UL << 0) /**< Shifted mode HFCLK for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2       (0x00000001UL << 0) /**< Shifted mode HFCLK2 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4       (0x00000002UL << 0) /**< Shifted mode HFCLK4 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8       (0x00000003UL << 0) /**< Shifted mode HFCLK8 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16      (0x00000004UL << 0) /**< Shifted mode HFCLK16 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32      (0x00000005UL << 0) /**< Shifted mode HFCLK32 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64      (0x00000006UL << 0) /**< Shifted mode HFCLK64 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128     (0x00000007UL << 0) /**< Shifted mode HFCLK128 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256     (0x00000008UL << 0) /**< Shifted mode HFCLK256 for CMU_HFCORECLKDIV */
#define CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512     (0x00000009UL << 0) /**< Shifted mode HFCLK512 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_DEFAULT     0x00000000UL        /**< Mode DEFAULT for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK       0x00000000UL        /**< Mode HFCLK for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK2      0x00000001UL        /**< Mode HFCLK2 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK4      0x00000002UL        /**< Mode HFCLK4 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK8      0x00000003UL        /**< Mode HFCLK8 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK16     0x00000004UL        /**< Mode HFCLK16 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK32     0x00000005UL        /**< Mode HFCLK32 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK64     0x00000006UL        /**< Mode HFCLK64 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK128    0x00000007UL        /**< Mode HFCLK128 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK256    0x00000008UL        /**< Mode HFCLK256 for CMU_HFCORECLKDIV */
#define _CMU_HFCORECLKDIV_HFCORECLKDIV_HFCLK512    0x00000009UL        /**< Mode HFCLK512 for CMU_HFCORECLKDIV */

/* Bit fields for CMU HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_RESETVALUE                0x00000100UL        /**< Default value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_MASK                      0x0000010FUL        /**< Mask for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_SHIFT         0                   /**< Shift value for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_MASK          0xFUL               /**< Bit mask for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK          (0x00000000UL << 0) /**< Shifted mode HFCLK for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2         (0x00000001UL << 0) /**< Shifted mode HFCLK2 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4         (0x00000002UL << 0) /**< Shifted mode HFCLK4 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8         (0x00000003UL << 0) /**< Shifted mode HFCLK8 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16        (0x00000004UL << 0) /**< Shifted mode HFCLK16 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32        (0x00000005UL << 0) /**< Shifted mode HFCLK32 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64        (0x00000006UL << 0) /**< Shifted mode HFCLK64 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128       (0x00000007UL << 0) /**< Shifted mode HFCLK128 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256       (0x00000008UL << 0) /**< Shifted mode HFCLK256 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512       (0x00000009UL << 0) /**< Shifted mode HFCLK512 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_DEFAULT       0x00000000UL        /**< Mode DEFAULT for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK         0x00000000UL        /**< Mode HFCLK for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK2        0x00000001UL        /**< Mode HFCLK2 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK4        0x00000002UL        /**< Mode HFCLK4 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK8        0x00000003UL        /**< Mode HFCLK8 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK16       0x00000004UL        /**< Mode HFCLK16 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK32       0x00000005UL        /**< Mode HFCLK32 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK64       0x00000006UL        /**< Mode HFCLK64 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK128      0x00000007UL        /**< Mode HFCLK128 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK256      0x00000008UL        /**< Mode HFCLK256 for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKDIV_HFCLK512      0x00000009UL        /**< Mode HFCLK512 for CMU_HFPERCLKDIV */
#define CMU_HFPERCLKDIV_HFPERCLKEN                 (0x1UL << 8)        /**< HFPERCLK Enable */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_SHIFT          8                   /**< Shift value for CMU_HFPERCLKEN */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_MASK           0x100UL             /**< Bit mask for CMU_HFPERCLKEN */
#define CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT         (0x00000001UL << 8) /**< Shifted mode DEFAULT for CMU_HFPERCLKDIV */
#define _CMU_HFPERCLKDIV_HFPERCLKEN_DEFAULT        0x00000001UL        /**< Mode DEFAULT for CMU_HFPERCLKDIV */

/* Bit fields for CMU HFRCOCTRL */
#define _CMU_HFRCOCTRL_RESETVALUE                  0x00000380UL         /**< Default value for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_MASK                        0x0001F7FFUL         /**< Mask for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_SHIFT                0                    /**< Shift value for CMU_TUNING */
#define _CMU_HFRCOCTRL_TUNING_MASK                 0xFFUL               /**< Bit mask for CMU_TUNING */
#define CMU_HFRCOCTRL_TUNING_DEFAULT               (0x00000080UL << 0)  /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_TUNING_DEFAULT              0x00000080UL         /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_SHIFT                  8                    /**< Shift value for CMU_BAND */
#define _CMU_HFRCOCTRL_BAND_MASK                   0x700UL              /**< Bit mask for CMU_BAND */
#define CMU_HFRCOCTRL_BAND_1MHZ                    (0x00000000UL << 8)  /**< Shifted mode 1MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_7MHZ                    (0x00000001UL << 8)  /**< Shifted mode 7MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_11MHZ                   (0x00000002UL << 8)  /**< Shifted mode 11MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_DEFAULT                 (0x00000003UL << 8)  /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_14MHZ                   (0x00000003UL << 8)  /**< Shifted mode 14MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_21MHZ                   (0x00000004UL << 8)  /**< Shifted mode 21MHZ for CMU_HFRCOCTRL */
#define CMU_HFRCOCTRL_BAND_28MHZ                   (0x00000005UL << 8)  /**< Shifted mode 28MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_1MHZ                   0x00000000UL         /**< Mode 1MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_7MHZ                   0x00000001UL         /**< Mode 7MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_11MHZ                  0x00000002UL         /**< Mode 11MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_DEFAULT                0x00000003UL         /**< Mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_14MHZ                  0x00000003UL         /**< Mode 14MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_21MHZ                  0x00000004UL         /**< Mode 21MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_BAND_28MHZ                  0x00000005UL         /**< Mode 28MHZ for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_SUDELAY_SHIFT               12                   /**< Shift value for CMU_SUDELAY */
#define _CMU_HFRCOCTRL_SUDELAY_MASK                0x1F000UL            /**< Bit mask for CMU_SUDELAY */
#define CMU_HFRCOCTRL_SUDELAY_DEFAULT              (0x00000000UL << 12) /**< Shifted mode DEFAULT for CMU_HFRCOCTRL */
#define _CMU_HFRCOCTRL_SUDELAY_DEFAULT             0x00000000UL         /**< Mode DEFAULT for CMU_HFRCOCTRL */

/* Bit fields for CMU LFRCOCTRL */
#define _CMU_LFRCOCTRL_RESETVALUE                  0x00000040UL        /**< Default value for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_MASK                        0x0000007FUL        /**< Mask for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_SHIFT                0                   /**< Shift value for CMU_TUNING */
#define _CMU_LFRCOCTRL_TUNING_MASK                 0x7FUL              /**< Bit mask for CMU_TUNING */
#define CMU_LFRCOCTRL_TUNING_DEFAULT               (0x00000040UL << 0) /**< Shifted mode DEFAULT for CMU_LFRCOCTRL */
#define _CMU_LFRCOCTRL_TUNING_DEFAULT              0x00000040UL        /**< Mode DEFAULT for CMU_LFRCOCTRL */

/* Bit fields for CMU AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_RESETVALUE               0x00000080UL        /**< Default value for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_MASK                     0x000000FFUL        /**< Mask for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_SHIFT             0                   /**< Shift value for CMU_TUNING */
#define _CMU_AUXHFRCOCTRL_TUNING_MASK              0xFFUL              /**< Bit mask for CMU_TUNING */
#define CMU_AUXHFRCOCTRL_TUNING_DEFAULT            (0x00000080UL << 0) /**< Shifted mode DEFAULT for CMU_AUXHFRCOCTRL */
#define _CMU_AUXHFRCOCTRL_TUNING_DEFAULT           0x00000080UL        /**< Mode DEFAULT for CMU_AUXHFRCOCTRL */

/* Bit fields for CMU CALCTRL */
#define _CMU_CALCTRL_RESETVALUE                    0x00000000UL        /**< Default value for CMU_CALCTRL */
#define _CMU_CALCTRL_MASK                          0x00000007UL        /**< Mask for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_SHIFT                  0                   /**< Shift value for CMU_REFSEL */
#define _CMU_CALCTRL_REFSEL_MASK                   0x7UL               /**< Bit mask for CMU_REFSEL */
#define CMU_CALCTRL_REFSEL_DEFAULT                 (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_HFXO                    (0x00000000UL << 0) /**< Shifted mode HFXO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_LFXO                    (0x00000001UL << 0) /**< Shifted mode LFXO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_HFRCO                   (0x00000002UL << 0) /**< Shifted mode HFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_LFRCO                   (0x00000003UL << 0) /**< Shifted mode LFRCO for CMU_CALCTRL */
#define CMU_CALCTRL_REFSEL_AUXHFRCO                (0x00000004UL << 0) /**< Shifted mode AUXHFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_DEFAULT                0x00000000UL        /**< Mode DEFAULT for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_HFXO                   0x00000000UL        /**< Mode HFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_LFXO                   0x00000001UL        /**< Mode LFXO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_HFRCO                  0x00000002UL        /**< Mode HFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_LFRCO                  0x00000003UL        /**< Mode LFRCO for CMU_CALCTRL */
#define _CMU_CALCTRL_REFSEL_AUXHFRCO               0x00000004UL        /**< Mode AUXHFRCO for CMU_CALCTRL */

/* Bit fields for CMU CALCNT */
#define _CMU_CALCNT_RESETVALUE                     0x00000000UL        /**< Default value for CMU_CALCNT */
#define _CMU_CALCNT_MASK                           0x000FFFFFUL        /**< Mask for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_SHIFT                   0                   /**< Shift value for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_MASK                    0xFFFFFUL           /**< Bit mask for CMU_CALCNT */
#define CMU_CALCNT_CALCNT_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_CALCNT */
#define _CMU_CALCNT_CALCNT_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for CMU_CALCNT */

/* Bit fields for CMU OSCENCMD */
#define _CMU_OSCENCMD_RESETVALUE                   0x00000000UL        /**< Default value for CMU_OSCENCMD */
#define _CMU_OSCENCMD_MASK                         0x000003FFUL        /**< Mask for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCOEN                       (0x1UL << 0)        /**< HFRCO Enable */
#define _CMU_OSCENCMD_HFRCOEN_SHIFT                0                   /**< Shift value for CMU_HFRCOEN */
#define _CMU_OSCENCMD_HFRCOEN_MASK                 0x1UL               /**< Bit mask for CMU_HFRCOEN */
#define CMU_OSCENCMD_HFRCOEN_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFRCOEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFRCODIS                      (0x1UL << 1)        /**< HFRCO Disable */
#define _CMU_OSCENCMD_HFRCODIS_SHIFT               1                   /**< Shift value for CMU_HFRCODIS */
#define _CMU_OSCENCMD_HFRCODIS_MASK                0x2UL               /**< Bit mask for CMU_HFRCODIS */
#define CMU_OSCENCMD_HFRCODIS_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFRCODIS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXOEN                        (0x1UL << 2)        /**< HFXO Enable */
#define _CMU_OSCENCMD_HFXOEN_SHIFT                 2                   /**< Shift value for CMU_HFXOEN */
#define _CMU_OSCENCMD_HFXOEN_MASK                  0x4UL               /**< Bit mask for CMU_HFXOEN */
#define CMU_OSCENCMD_HFXOEN_DEFAULT                (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFXOEN_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_HFXODIS                       (0x1UL << 3)        /**< HFXO Disable */
#define _CMU_OSCENCMD_HFXODIS_SHIFT                3                   /**< Shift value for CMU_HFXODIS */
#define _CMU_OSCENCMD_HFXODIS_MASK                 0x8UL               /**< Bit mask for CMU_HFXODIS */
#define CMU_OSCENCMD_HFXODIS_DEFAULT               (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_HFXODIS_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCOEN                    (0x1UL << 4)        /**< AUXHFRCO Enable */
#define _CMU_OSCENCMD_AUXHFRCOEN_SHIFT             4                   /**< Shift value for CMU_AUXHFRCOEN */
#define _CMU_OSCENCMD_AUXHFRCOEN_MASK              0x10UL              /**< Bit mask for CMU_AUXHFRCOEN */
#define CMU_OSCENCMD_AUXHFRCOEN_DEFAULT            (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_AUXHFRCOEN_DEFAULT           0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_AUXHFRCODIS                   (0x1UL << 5)        /**< AUXHFRCO Disable */
#define _CMU_OSCENCMD_AUXHFRCODIS_SHIFT            5                   /**< Shift value for CMU_AUXHFRCODIS */
#define _CMU_OSCENCMD_AUXHFRCODIS_MASK             0x20UL              /**< Bit mask for CMU_AUXHFRCODIS */
#define CMU_OSCENCMD_AUXHFRCODIS_DEFAULT           (0x00000000UL << 5) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_AUXHFRCODIS_DEFAULT          0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCOEN                       (0x1UL << 6)        /**< LFRCO Enable */
#define _CMU_OSCENCMD_LFRCOEN_SHIFT                6                   /**< Shift value for CMU_LFRCOEN */
#define _CMU_OSCENCMD_LFRCOEN_MASK                 0x40UL              /**< Bit mask for CMU_LFRCOEN */
#define CMU_OSCENCMD_LFRCOEN_DEFAULT               (0x00000000UL << 6) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFRCOEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFRCODIS                      (0x1UL << 7)        /**< LFRCO Disable */
#define _CMU_OSCENCMD_LFRCODIS_SHIFT               7                   /**< Shift value for CMU_LFRCODIS */
#define _CMU_OSCENCMD_LFRCODIS_MASK                0x80UL              /**< Bit mask for CMU_LFRCODIS */
#define CMU_OSCENCMD_LFRCODIS_DEFAULT              (0x00000000UL << 7) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFRCODIS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXOEN                        (0x1UL << 8)        /**< LFXO Enable */
#define _CMU_OSCENCMD_LFXOEN_SHIFT                 8                   /**< Shift value for CMU_LFXOEN */
#define _CMU_OSCENCMD_LFXOEN_MASK                  0x100UL             /**< Bit mask for CMU_LFXOEN */
#define CMU_OSCENCMD_LFXOEN_DEFAULT                (0x00000000UL << 8) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFXOEN_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */
#define CMU_OSCENCMD_LFXODIS                       (0x1UL << 9)        /**< LFXO Disable */
#define _CMU_OSCENCMD_LFXODIS_SHIFT                9                   /**< Shift value for CMU_LFXODIS */
#define _CMU_OSCENCMD_LFXODIS_MASK                 0x200UL             /**< Bit mask for CMU_LFXODIS */
#define CMU_OSCENCMD_LFXODIS_DEFAULT               (0x00000000UL << 9) /**< Shifted mode DEFAULT for CMU_OSCENCMD */
#define _CMU_OSCENCMD_LFXODIS_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_OSCENCMD */

/* Bit fields for CMU CMD */
#define _CMU_CMD_RESETVALUE                        0x00000000UL        /**< Default value for CMU_CMD */
#define _CMU_CMD_MASK                              0x0000000FUL        /**< Mask for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_SHIFT                    0                   /**< Shift value for CMU_HFCLKSEL */
#define _CMU_CMD_HFCLKSEL_MASK                     0x7UL               /**< Bit mask for CMU_HFCLKSEL */
#define CMU_CMD_HFCLKSEL_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFRCO                     (0x00000001UL << 0) /**< Shifted mode HFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_HFXO                      (0x00000002UL << 0) /**< Shifted mode HFXO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFRCO                     (0x00000003UL << 0) /**< Shifted mode LFRCO for CMU_CMD */
#define CMU_CMD_HFCLKSEL_LFXO                      (0x00000004UL << 0) /**< Shifted mode LFXO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFRCO                    0x00000001UL        /**< Mode HFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_HFXO                     0x00000002UL        /**< Mode HFXO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFRCO                    0x00000003UL        /**< Mode LFRCO for CMU_CMD */
#define _CMU_CMD_HFCLKSEL_LFXO                     0x00000004UL        /**< Mode LFXO for CMU_CMD */
#define CMU_CMD_CALSTART                           (0x1UL << 3)        /**< Calibration Start */
#define _CMU_CMD_CALSTART_SHIFT                    3                   /**< Shift value for CMU_CALSTART */
#define _CMU_CMD_CALSTART_MASK                     0x8UL               /**< Bit mask for CMU_CALSTART */
#define CMU_CMD_CALSTART_DEFAULT                   (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_CMD */
#define _CMU_CMD_CALSTART_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_CMD */

/* Bit fields for CMU LFCLKSEL */
#define _CMU_LFCLKSEL_RESETVALUE                   0x00000005UL        /**< Default value for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_MASK                         0x0000000FUL        /**< Mask for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_SHIFT                    0                   /**< Shift value for CMU_LFA */
#define _CMU_LFCLKSEL_LFA_MASK                     0x3UL               /**< Bit mask for CMU_LFA */
#define CMU_LFCLKSEL_LFA_DISABLED                  (0x00000000UL << 0) /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_DEFAULT                   (0x00000001UL << 0) /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFRCO                     (0x00000001UL << 0) /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_LFXO                      (0x00000002UL << 0) /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2           (0x00000003UL << 0) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_DISABLED                 0x00000000UL        /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_DEFAULT                  0x00000001UL        /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFRCO                    0x00000001UL        /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_LFXO                     0x00000002UL        /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFA_HFCORECLKLEDIV2          0x00000003UL        /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_SHIFT                    2                   /**< Shift value for CMU_LFB */
#define _CMU_LFCLKSEL_LFB_MASK                     0xCUL               /**< Bit mask for CMU_LFB */
#define CMU_LFCLKSEL_LFB_DISABLED                  (0x00000000UL << 2) /**< Shifted mode DISABLED for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_DEFAULT                   (0x00000001UL << 2) /**< Shifted mode DEFAULT for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFRCO                     (0x00000001UL << 2) /**< Shifted mode LFRCO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_LFXO                      (0x00000002UL << 2) /**< Shifted mode LFXO for CMU_LFCLKSEL */
#define CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2           (0x00000003UL << 2) /**< Shifted mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_DISABLED                 0x00000000UL        /**< Mode DISABLED for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_DEFAULT                  0x00000001UL        /**< Mode DEFAULT for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFRCO                    0x00000001UL        /**< Mode LFRCO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_LFXO                     0x00000002UL        /**< Mode LFXO for CMU_LFCLKSEL */
#define _CMU_LFCLKSEL_LFB_HFCORECLKLEDIV2          0x00000003UL        /**< Mode HFCORECLKLEDIV2 for CMU_LFCLKSEL */

/* Bit fields for CMU STATUS */
#define _CMU_STATUS_RESETVALUE                     0x00000403UL         /**< Default value for CMU_STATUS */
#define _CMU_STATUS_MASK                           0x00007FFFUL         /**< Mask for CMU_STATUS */
#define CMU_STATUS_HFRCOENS                        (0x1UL << 0)         /**< HFRCO Enable Status */
#define _CMU_STATUS_HFRCOENS_SHIFT                 0                    /**< Shift value for CMU_HFRCOENS */
#define _CMU_STATUS_HFRCOENS_MASK                  0x1UL                /**< Bit mask for CMU_HFRCOENS */
#define CMU_STATUS_HFRCOENS_DEFAULT                (0x00000001UL << 0)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCOENS_DEFAULT               0x00000001UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCORDY                        (0x1UL << 1)         /**< HFRCO Ready */
#define _CMU_STATUS_HFRCORDY_SHIFT                 1                    /**< Shift value for CMU_HFRCORDY */
#define _CMU_STATUS_HFRCORDY_MASK                  0x2UL                /**< Bit mask for CMU_HFRCORDY */
#define CMU_STATUS_HFRCORDY_DEFAULT                (0x00000001UL << 1)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCORDY_DEFAULT               0x00000001UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOENS                         (0x1UL << 2)         /**< HFXO Enable Status */
#define _CMU_STATUS_HFXOENS_SHIFT                  2                    /**< Shift value for CMU_HFXOENS */
#define _CMU_STATUS_HFXOENS_MASK                   0x4UL                /**< Bit mask for CMU_HFXOENS */
#define CMU_STATUS_HFXOENS_DEFAULT                 (0x00000000UL << 2)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXOENS_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXORDY                         (0x1UL << 3)         /**< HFXO Ready */
#define _CMU_STATUS_HFXORDY_SHIFT                  3                    /**< Shift value for CMU_HFXORDY */
#define _CMU_STATUS_HFXORDY_MASK                   0x8UL                /**< Bit mask for CMU_HFXORDY */
#define CMU_STATUS_HFXORDY_DEFAULT                 (0x00000000UL << 3)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXORDY_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCOENS                     (0x1UL << 4)         /**< AUXHFRCO Enable Status */
#define _CMU_STATUS_AUXHFRCOENS_SHIFT              4                    /**< Shift value for CMU_AUXHFRCOENS */
#define _CMU_STATUS_AUXHFRCOENS_MASK               0x10UL               /**< Bit mask for CMU_AUXHFRCOENS */
#define CMU_STATUS_AUXHFRCOENS_DEFAULT             (0x00000000UL << 4)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_AUXHFRCOENS_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_AUXHFRCORDY                     (0x1UL << 5)         /**< AUXHFRCO Ready */
#define _CMU_STATUS_AUXHFRCORDY_SHIFT              5                    /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_STATUS_AUXHFRCORDY_MASK               0x20UL               /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_STATUS_AUXHFRCORDY_DEFAULT             (0x00000000UL << 5)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_AUXHFRCORDY_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOENS                        (0x1UL << 6)         /**< LFRCO Enable Status */
#define _CMU_STATUS_LFRCOENS_SHIFT                 6                    /**< Shift value for CMU_LFRCOENS */
#define _CMU_STATUS_LFRCOENS_MASK                  0x40UL               /**< Bit mask for CMU_LFRCOENS */
#define CMU_STATUS_LFRCOENS_DEFAULT                (0x00000000UL << 6)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCOENS_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCORDY                        (0x1UL << 7)         /**< LFRCO Ready */
#define _CMU_STATUS_LFRCORDY_SHIFT                 7                    /**< Shift value for CMU_LFRCORDY */
#define _CMU_STATUS_LFRCORDY_MASK                  0x80UL               /**< Bit mask for CMU_LFRCORDY */
#define CMU_STATUS_LFRCORDY_DEFAULT                (0x00000000UL << 7)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCORDY_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOENS                         (0x1UL << 8)         /**< LFXO Enable Status */
#define _CMU_STATUS_LFXOENS_SHIFT                  8                    /**< Shift value for CMU_LFXOENS */
#define _CMU_STATUS_LFXOENS_MASK                   0x100UL              /**< Bit mask for CMU_LFXOENS */
#define CMU_STATUS_LFXOENS_DEFAULT                 (0x00000000UL << 8)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXOENS_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXORDY                         (0x1UL << 9)         /**< LFXO Ready */
#define _CMU_STATUS_LFXORDY_SHIFT                  9                    /**< Shift value for CMU_LFXORDY */
#define _CMU_STATUS_LFXORDY_MASK                   0x200UL              /**< Bit mask for CMU_LFXORDY */
#define CMU_STATUS_LFXORDY_DEFAULT                 (0x00000000UL << 9)  /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXORDY_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFRCOSEL                        (0x1UL << 10)        /**< HFRCO Selected */
#define _CMU_STATUS_HFRCOSEL_SHIFT                 10                   /**< Shift value for CMU_HFRCOSEL */
#define _CMU_STATUS_HFRCOSEL_MASK                  0x400UL              /**< Bit mask for CMU_HFRCOSEL */
#define CMU_STATUS_HFRCOSEL_DEFAULT                (0x00000001UL << 10) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFRCOSEL_DEFAULT               0x00000001UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_HFXOSEL                         (0x1UL << 11)        /**< HFXO Selected */
#define _CMU_STATUS_HFXOSEL_SHIFT                  11                   /**< Shift value for CMU_HFXOSEL */
#define _CMU_STATUS_HFXOSEL_MASK                   0x800UL              /**< Bit mask for CMU_HFXOSEL */
#define CMU_STATUS_HFXOSEL_DEFAULT                 (0x00000000UL << 11) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_HFXOSEL_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFRCOSEL                        (0x1UL << 12)        /**< LFRCO Selected */
#define _CMU_STATUS_LFRCOSEL_SHIFT                 12                   /**< Shift value for CMU_LFRCOSEL */
#define _CMU_STATUS_LFRCOSEL_MASK                  0x1000UL             /**< Bit mask for CMU_LFRCOSEL */
#define CMU_STATUS_LFRCOSEL_DEFAULT                (0x00000000UL << 12) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFRCOSEL_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_LFXOSEL                         (0x1UL << 13)        /**< LFXO Selected */
#define _CMU_STATUS_LFXOSEL_SHIFT                  13                   /**< Shift value for CMU_LFXOSEL */
#define _CMU_STATUS_LFXOSEL_MASK                   0x2000UL             /**< Bit mask for CMU_LFXOSEL */
#define CMU_STATUS_LFXOSEL_DEFAULT                 (0x00000000UL << 13) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_LFXOSEL_DEFAULT                0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */
#define CMU_STATUS_CALBSY                          (0x1UL << 14)        /**< Calibration Busy */
#define _CMU_STATUS_CALBSY_SHIFT                   14                   /**< Shift value for CMU_CALBSY */
#define _CMU_STATUS_CALBSY_MASK                    0x4000UL             /**< Bit mask for CMU_CALBSY */
#define CMU_STATUS_CALBSY_DEFAULT                  (0x00000000UL << 14) /**< Shifted mode DEFAULT for CMU_STATUS */
#define _CMU_STATUS_CALBSY_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for CMU_STATUS */

/* Bit fields for CMU IF */
#define _CMU_IF_RESETVALUE                         0x00000001UL        /**< Default value for CMU_IF */
#define _CMU_IF_MASK                               0x0000003FUL        /**< Mask for CMU_IF */
#define CMU_IF_HFRCORDY                            (0x1UL << 0)        /**< HFRCO Ready Interrupt Flag */
#define _CMU_IF_HFRCORDY_SHIFT                     0                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IF_HFRCORDY_MASK                      0x1UL               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IF_HFRCORDY_DEFAULT                    (0x00000001UL << 0) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_HFRCORDY_DEFAULT                   0x00000001UL        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_HFXORDY                             (0x1UL << 1)        /**< HFXO Ready Interrupt Flag */
#define _CMU_IF_HFXORDY_SHIFT                      1                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IF_HFXORDY_MASK                       0x2UL               /**< Bit mask for CMU_HFXORDY */
#define CMU_IF_HFXORDY_DEFAULT                     (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_HFXORDY_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFRCORDY                            (0x1UL << 2)        /**< LFRCO Ready Interrupt Flag */
#define _CMU_IF_LFRCORDY_SHIFT                     2                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IF_LFRCORDY_MASK                      0x4UL               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IF_LFRCORDY_DEFAULT                    (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_LFRCORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_LFXORDY                             (0x1UL << 3)        /**< LFXO Ready Interrupt Flag */
#define _CMU_IF_LFXORDY_SHIFT                      3                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IF_LFXORDY_MASK                       0x8UL               /**< Bit mask for CMU_LFXORDY */
#define CMU_IF_LFXORDY_DEFAULT                     (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_LFXORDY_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_AUXHFRCORDY                         (0x1UL << 4)        /**< AUXHFRCO Ready Interrupt Flag */
#define _CMU_IF_AUXHFRCORDY_SHIFT                  4                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IF_AUXHFRCORDY_MASK                   0x10UL              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IF_AUXHFRCORDY_DEFAULT                 (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_AUXHFRCORDY_DEFAULT                0x00000000UL        /**< Mode DEFAULT for CMU_IF */
#define CMU_IF_CALRDY                              (0x1UL << 5)        /**< Calibration Ready Interrupt Flag */
#define _CMU_IF_CALRDY_SHIFT                       5                   /**< Shift value for CMU_CALRDY */
#define _CMU_IF_CALRDY_MASK                        0x20UL              /**< Bit mask for CMU_CALRDY */
#define CMU_IF_CALRDY_DEFAULT                      (0x00000000UL << 5) /**< Shifted mode DEFAULT for CMU_IF */
#define _CMU_IF_CALRDY_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for CMU_IF */

/* Bit fields for CMU IFS */
#define _CMU_IFS_RESETVALUE                        0x00000000UL        /**< Default value for CMU_IFS */
#define _CMU_IFS_MASK                              0x0000003FUL        /**< Mask for CMU_IFS */
#define CMU_IFS_HFRCORDY                           (0x1UL << 0)        /**< HFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_HFRCORDY_SHIFT                    0                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFS_HFRCORDY_MASK                     0x1UL               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IFS_HFRCORDY_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_HFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_HFXORDY                            (0x1UL << 1)        /**< HFXO Ready Interrupt Flag Set */
#define _CMU_IFS_HFXORDY_SHIFT                     1                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IFS_HFXORDY_MASK                      0x2UL               /**< Bit mask for CMU_HFXORDY */
#define CMU_IFS_HFXORDY_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_HFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFRCORDY                           (0x1UL << 2)        /**< LFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_LFRCORDY_SHIFT                    2                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFS_LFRCORDY_MASK                     0x4UL               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IFS_LFRCORDY_DEFAULT                   (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_LFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_LFXORDY                            (0x1UL << 3)        /**< LFXO Ready Interrupt Flag Set */
#define _CMU_IFS_LFXORDY_SHIFT                     3                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IFS_LFXORDY_MASK                      0x8UL               /**< Bit mask for CMU_LFXORDY */
#define CMU_IFS_LFXORDY_DEFAULT                    (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_LFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_AUXHFRCORDY                        (0x1UL << 4)        /**< AUXHFRCO Ready Interrupt Flag Set */
#define _CMU_IFS_AUXHFRCORDY_SHIFT                 4                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFS_AUXHFRCORDY_MASK                  0x10UL              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IFS_AUXHFRCORDY_DEFAULT                (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_AUXHFRCORDY_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_IFS */
#define CMU_IFS_CALRDY                             (0x1UL << 5)        /**< Calibration Ready Interrupt Flag Set */
#define _CMU_IFS_CALRDY_SHIFT                      5                   /**< Shift value for CMU_CALRDY */
#define _CMU_IFS_CALRDY_MASK                       0x20UL              /**< Bit mask for CMU_CALRDY */
#define CMU_IFS_CALRDY_DEFAULT                     (0x00000000UL << 5) /**< Shifted mode DEFAULT for CMU_IFS */
#define _CMU_IFS_CALRDY_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for CMU_IFS */

/* Bit fields for CMU IFC */
#define _CMU_IFC_RESETVALUE                        0x00000000UL        /**< Default value for CMU_IFC */
#define _CMU_IFC_MASK                              0x0000003FUL        /**< Mask for CMU_IFC */
#define CMU_IFC_HFRCORDY                           (0x1UL << 0)        /**< HFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFRCORDY_SHIFT                    0                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IFC_HFRCORDY_MASK                     0x1UL               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IFC_HFRCORDY_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_HFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_HFXORDY                            (0x1UL << 1)        /**< HFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_HFXORDY_SHIFT                     1                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IFC_HFXORDY_MASK                      0x2UL               /**< Bit mask for CMU_HFXORDY */
#define CMU_IFC_HFXORDY_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_HFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFRCORDY                           (0x1UL << 2)        /**< LFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFRCORDY_SHIFT                    2                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IFC_LFRCORDY_MASK                     0x4UL               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IFC_LFRCORDY_DEFAULT                   (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_LFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_LFXORDY                            (0x1UL << 3)        /**< LFXO Ready Interrupt Flag Clear */
#define _CMU_IFC_LFXORDY_SHIFT                     3                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IFC_LFXORDY_MASK                      0x8UL               /**< Bit mask for CMU_LFXORDY */
#define CMU_IFC_LFXORDY_DEFAULT                    (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_LFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_AUXHFRCORDY                        (0x1UL << 4)        /**< AUXHFRCO Ready Interrupt Flag Clear */
#define _CMU_IFC_AUXHFRCORDY_SHIFT                 4                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IFC_AUXHFRCORDY_MASK                  0x10UL              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IFC_AUXHFRCORDY_DEFAULT                (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_AUXHFRCORDY_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_IFC */
#define CMU_IFC_CALRDY                             (0x1UL << 5)        /**< Calibration Ready Interrupt Flag Clear */
#define _CMU_IFC_CALRDY_SHIFT                      5                   /**< Shift value for CMU_CALRDY */
#define _CMU_IFC_CALRDY_MASK                       0x20UL              /**< Bit mask for CMU_CALRDY */
#define CMU_IFC_CALRDY_DEFAULT                     (0x00000000UL << 5) /**< Shifted mode DEFAULT for CMU_IFC */
#define _CMU_IFC_CALRDY_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for CMU_IFC */

/* Bit fields for CMU IEN */
#define _CMU_IEN_RESETVALUE                        0x00000000UL        /**< Default value for CMU_IEN */
#define _CMU_IEN_MASK                              0x0000003FUL        /**< Mask for CMU_IEN */
#define CMU_IEN_HFRCORDY                           (0x1UL << 0)        /**< HFRCO Ready Interrupt Enable */
#define _CMU_IEN_HFRCORDY_SHIFT                    0                   /**< Shift value for CMU_HFRCORDY */
#define _CMU_IEN_HFRCORDY_MASK                     0x1UL               /**< Bit mask for CMU_HFRCORDY */
#define CMU_IEN_HFRCORDY_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_HFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_HFXORDY                            (0x1UL << 1)        /**< HFXO Ready Interrupt Enable */
#define _CMU_IEN_HFXORDY_SHIFT                     1                   /**< Shift value for CMU_HFXORDY */
#define _CMU_IEN_HFXORDY_MASK                      0x2UL               /**< Bit mask for CMU_HFXORDY */
#define CMU_IEN_HFXORDY_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_HFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFRCORDY                           (0x1UL << 2)        /**< LFRCO Ready Interrupt Enable */
#define _CMU_IEN_LFRCORDY_SHIFT                    2                   /**< Shift value for CMU_LFRCORDY */
#define _CMU_IEN_LFRCORDY_MASK                     0x4UL               /**< Bit mask for CMU_LFRCORDY */
#define CMU_IEN_LFRCORDY_DEFAULT                   (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_LFRCORDY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_LFXORDY                            (0x1UL << 3)        /**< LFXO Ready Interrupt Enable */
#define _CMU_IEN_LFXORDY_SHIFT                     3                   /**< Shift value for CMU_LFXORDY */
#define _CMU_IEN_LFXORDY_MASK                      0x8UL               /**< Bit mask for CMU_LFXORDY */
#define CMU_IEN_LFXORDY_DEFAULT                    (0x00000000UL << 3) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_LFXORDY_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_AUXHFRCORDY                        (0x1UL << 4)        /**< AUXHFRCO Ready Interrupt Enable */
#define _CMU_IEN_AUXHFRCORDY_SHIFT                 4                   /**< Shift value for CMU_AUXHFRCORDY */
#define _CMU_IEN_AUXHFRCORDY_MASK                  0x10UL              /**< Bit mask for CMU_AUXHFRCORDY */
#define CMU_IEN_AUXHFRCORDY_DEFAULT                (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_AUXHFRCORDY_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_IEN */
#define CMU_IEN_CALRDY                             (0x1UL << 5)        /**< Calibration Ready Interrupt Enable */
#define _CMU_IEN_CALRDY_SHIFT                      5                   /**< Shift value for CMU_CALRDY */
#define _CMU_IEN_CALRDY_MASK                       0x20UL              /**< Bit mask for CMU_CALRDY */
#define CMU_IEN_CALRDY_DEFAULT                     (0x00000000UL << 5) /**< Shifted mode DEFAULT for CMU_IEN */
#define _CMU_IEN_CALRDY_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for CMU_IEN */

/* Bit fields for CMU HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_RESETVALUE               0x00000000UL        /**< Default value for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_MASK                     0x0000000FUL        /**< Mask for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_DMA                       (0x1UL << 1)        /**< Direct Memory Access Controller Clock Enable */
#define _CMU_HFCORECLKEN0_DMA_SHIFT                1                   /**< Shift value for CMU_DMA */
#define _CMU_HFCORECLKEN0_DMA_MASK                 0x2UL               /**< Bit mask for CMU_DMA */
#define CMU_HFCORECLKEN0_DMA_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_DMA_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_HFCORECLKEN0 */
#define CMU_HFCORECLKEN0_LE                        (0x1UL << 2)        /**< Low Energy Peripheral Interface Clock Enable */
#define _CMU_HFCORECLKEN0_LE_SHIFT                 2                   /**< Shift value for CMU_LE */
#define _CMU_HFCORECLKEN0_LE_MASK                  0x4UL               /**< Bit mask for CMU_LE */
#define CMU_HFCORECLKEN0_LE_DEFAULT                (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_HFCORECLKEN0 */
#define _CMU_HFCORECLKEN0_LE_DEFAULT               0x00000000UL        /**< Mode DEFAULT for CMU_HFCORECLKEN0 */

/* Bit fields for CMU HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_RESETVALUE                0x00000000UL         /**< Default value for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_MASK                      0x0000FFFFUL         /**< Mask for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART0                     (0x1UL << 0)         /**< Universal Synchronous/Asynchronous Receiver/Transmitter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_USART0_SHIFT              0                    /**< Shift value for CMU_USART0 */
#define _CMU_HFPERCLKEN0_USART0_MASK               0x1UL                /**< Bit mask for CMU_USART0 */
#define CMU_HFPERCLKEN0_USART0_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_USART0_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_USART1                     (0x1UL << 1)         /**< Universal Synchronous/Asynchronous Receiver/Transmitter 1 Clock Enable */
#define _CMU_HFPERCLKEN0_USART1_SHIFT              1                    /**< Shift value for CMU_USART1 */
#define _CMU_HFPERCLKEN0_USART1_MASK               0x2UL                /**< Bit mask for CMU_USART1 */
#define CMU_HFPERCLKEN0_USART1_DEFAULT             (0x00000000UL << 1)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_USART1_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER0                     (0x1UL << 4)         /**< Timer 0 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER0_SHIFT              4                    /**< Shift value for CMU_TIMER0 */
#define _CMU_HFPERCLKEN0_TIMER0_MASK               0x10UL               /**< Bit mask for CMU_TIMER0 */
#define CMU_HFPERCLKEN0_TIMER0_DEFAULT             (0x00000000UL << 4)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_TIMER0_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_TIMER1                     (0x1UL << 5)         /**< Timer 1 Clock Enable */
#define _CMU_HFPERCLKEN0_TIMER1_SHIFT              5                    /**< Shift value for CMU_TIMER1 */
#define _CMU_HFPERCLKEN0_TIMER1_MASK               0x20UL               /**< Bit mask for CMU_TIMER1 */
#define CMU_HFPERCLKEN0_TIMER1_DEFAULT             (0x00000000UL << 5)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_TIMER1_DEFAULT            0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP0                      (0x1UL << 7)         /**< Analog Comparator 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP0_SHIFT               7                    /**< Shift value for CMU_ACMP0 */
#define _CMU_HFPERCLKEN0_ACMP0_MASK                0x80UL               /**< Bit mask for CMU_ACMP0 */
#define CMU_HFPERCLKEN0_ACMP0_DEFAULT              (0x00000000UL << 7)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ACMP0_DEFAULT             0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ACMP1                      (0x1UL << 8)         /**< Analog Comparator 1 Clock Enable */
#define _CMU_HFPERCLKEN0_ACMP1_SHIFT               8                    /**< Shift value for CMU_ACMP1 */
#define _CMU_HFPERCLKEN0_ACMP1_MASK                0x100UL              /**< Bit mask for CMU_ACMP1 */
#define CMU_HFPERCLKEN0_ACMP1_DEFAULT              (0x00000000UL << 8)  /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ACMP1_DEFAULT             0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_PRS                        (0x1UL << 10)        /**< Peripheral Reflex System Clock Enable */
#define _CMU_HFPERCLKEN0_PRS_SHIFT                 10                   /**< Shift value for CMU_PRS */
#define _CMU_HFPERCLKEN0_PRS_MASK                  0x400UL              /**< Bit mask for CMU_PRS */
#define CMU_HFPERCLKEN0_PRS_DEFAULT                (0x00000000UL << 10) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_PRS_DEFAULT               0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_DAC0                       (0x1UL << 11)        /**< Digital to Analog Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_DAC0_SHIFT                11                   /**< Shift value for CMU_DAC0 */
#define _CMU_HFPERCLKEN0_DAC0_MASK                 0x800UL              /**< Bit mask for CMU_DAC0 */
#define CMU_HFPERCLKEN0_DAC0_DEFAULT               (0x00000000UL << 11) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_DAC0_DEFAULT              0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_GPIO                       (0x1UL << 12)        /**< General purpose Input/Output Clock Enable */
#define _CMU_HFPERCLKEN0_GPIO_SHIFT                12                   /**< Shift value for CMU_GPIO */
#define _CMU_HFPERCLKEN0_GPIO_MASK                 0x1000UL             /**< Bit mask for CMU_GPIO */
#define CMU_HFPERCLKEN0_GPIO_DEFAULT               (0x00000000UL << 12) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_GPIO_DEFAULT              0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_VCMP                       (0x1UL << 13)        /**< Voltage Comparator Clock Enable */
#define _CMU_HFPERCLKEN0_VCMP_SHIFT                13                   /**< Shift value for CMU_VCMP */
#define _CMU_HFPERCLKEN0_VCMP_MASK                 0x2000UL             /**< Bit mask for CMU_VCMP */
#define CMU_HFPERCLKEN0_VCMP_DEFAULT               (0x00000000UL << 13) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_VCMP_DEFAULT              0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_ADC0                       (0x1UL << 14)        /**< Analog to Digital Converter 0 Clock Enable */
#define _CMU_HFPERCLKEN0_ADC0_SHIFT                14                   /**< Shift value for CMU_ADC0 */
#define _CMU_HFPERCLKEN0_ADC0_MASK                 0x4000UL             /**< Bit mask for CMU_ADC0 */
#define CMU_HFPERCLKEN0_ADC0_DEFAULT               (0x00000000UL << 14) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_ADC0_DEFAULT              0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */
#define CMU_HFPERCLKEN0_I2C0                       (0x1UL << 15)        /**< I2C 0 Clock Enable */
#define _CMU_HFPERCLKEN0_I2C0_SHIFT                15                   /**< Shift value for CMU_I2C0 */
#define _CMU_HFPERCLKEN0_I2C0_MASK                 0x8000UL             /**< Bit mask for CMU_I2C0 */
#define CMU_HFPERCLKEN0_I2C0_DEFAULT               (0x00000000UL << 15) /**< Shifted mode DEFAULT for CMU_HFPERCLKEN0 */
#define _CMU_HFPERCLKEN0_I2C0_DEFAULT              0x00000000UL         /**< Mode DEFAULT for CMU_HFPERCLKEN0 */

/* Bit fields for CMU SYNCBUSY */
#define _CMU_SYNCBUSY_RESETVALUE                   0x00000000UL        /**< Default value for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_MASK                         0x00000055UL        /**< Mask for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFACLKEN0                     (0x1UL << 0)        /**< Low Frequency A Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFACLKEN0_SHIFT              0                   /**< Shift value for CMU_LFACLKEN0 */
#define _CMU_SYNCBUSY_LFACLKEN0_MASK               0x1UL               /**< Bit mask for CMU_LFACLKEN0 */
#define CMU_SYNCBUSY_LFACLKEN0_DEFAULT             (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFACLKEN0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFAPRESC0                     (0x1UL << 2)        /**< Low Frequency A Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFAPRESC0_SHIFT              2                   /**< Shift value for CMU_LFAPRESC0 */
#define _CMU_SYNCBUSY_LFAPRESC0_MASK               0x4UL               /**< Bit mask for CMU_LFAPRESC0 */
#define CMU_SYNCBUSY_LFAPRESC0_DEFAULT             (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFAPRESC0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBCLKEN0                     (0x1UL << 4)        /**< Low Frequency B Clock Enable 0 Busy */
#define _CMU_SYNCBUSY_LFBCLKEN0_SHIFT              4                   /**< Shift value for CMU_LFBCLKEN0 */
#define _CMU_SYNCBUSY_LFBCLKEN0_MASK               0x10UL              /**< Bit mask for CMU_LFBCLKEN0 */
#define CMU_SYNCBUSY_LFBCLKEN0_DEFAULT             (0x00000000UL << 4) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFBCLKEN0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for CMU_SYNCBUSY */
#define CMU_SYNCBUSY_LFBPRESC0                     (0x1UL << 6)        /**< Low Frequency B Prescaler 0 Busy */
#define _CMU_SYNCBUSY_LFBPRESC0_SHIFT              6                   /**< Shift value for CMU_LFBPRESC0 */
#define _CMU_SYNCBUSY_LFBPRESC0_MASK               0x40UL              /**< Bit mask for CMU_LFBPRESC0 */
#define CMU_SYNCBUSY_LFBPRESC0_DEFAULT             (0x00000000UL << 6) /**< Shifted mode DEFAULT for CMU_SYNCBUSY */
#define _CMU_SYNCBUSY_LFBPRESC0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for CMU_SYNCBUSY */

/* Bit fields for CMU FREEZE */
#define _CMU_FREEZE_RESETVALUE                     0x00000000UL        /**< Default value for CMU_FREEZE */
#define _CMU_FREEZE_MASK                           0x00000001UL        /**< Mask for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE                       (0x1UL << 0)        /**< Register Update Freeze */
#define _CMU_FREEZE_REGFREEZE_SHIFT                0                   /**< Shift value for CMU_REGFREEZE */
#define _CMU_FREEZE_REGFREEZE_MASK                 0x1UL               /**< Bit mask for CMU_REGFREEZE */
#define CMU_FREEZE_REGFREEZE_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_UPDATE                (0x00000000UL << 0) /**< Shifted mode UPDATE for CMU_FREEZE */
#define CMU_FREEZE_REGFREEZE_FREEZE                (0x00000001UL << 0) /**< Shifted mode FREEZE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_UPDATE               0x00000000UL        /**< Mode UPDATE for CMU_FREEZE */
#define _CMU_FREEZE_REGFREEZE_FREEZE               0x00000001UL        /**< Mode FREEZE for CMU_FREEZE */

/* Bit fields for CMU LFACLKEN0 */
#define _CMU_LFACLKEN0_RESETVALUE                  0x00000000UL        /**< Default value for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_MASK                        0x00000007UL        /**< Mask for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_RTC                          (0x1UL << 0)        /**< Real-Time Counter Clock Enable */
#define _CMU_LFACLKEN0_RTC_SHIFT                   0                   /**< Shift value for CMU_RTC */
#define _CMU_LFACLKEN0_RTC_MASK                    0x1UL               /**< Bit mask for CMU_RTC */
#define CMU_LFACLKEN0_RTC_DEFAULT                  (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_RTC_DEFAULT                 0x00000000UL        /**< Mode DEFAULT for CMU_LFACLKEN0 */
#define CMU_LFACLKEN0_LETIMER0                     (0x1UL << 1)        /**< Low Energy Timer 0 Clock Enable */
#define _CMU_LFACLKEN0_LETIMER0_SHIFT              1                   /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFACLKEN0_LETIMER0_MASK               0x2UL               /**< Bit mask for CMU_LETIMER0 */
#define CMU_LFACLKEN0_LETIMER0_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_LFACLKEN0 */
#define _CMU_LFACLKEN0_LETIMER0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for CMU_LFACLKEN0 */

/* Bit fields for CMU LFBCLKEN0 */
#define _CMU_LFBCLKEN0_RESETVALUE                  0x00000000UL        /**< Default value for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_MASK                        0x00000003UL        /**< Mask for CMU_LFBCLKEN0 */
#define CMU_LFBCLKEN0_LEUART0                      (0x1UL << 0)        /**< Low Energy UART 0 Clock Enable */
#define _CMU_LFBCLKEN0_LEUART0_SHIFT               0                   /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBCLKEN0_LEUART0_MASK                0x1UL               /**< Bit mask for CMU_LEUART0 */
#define CMU_LFBCLKEN0_LEUART0_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_LFBCLKEN0 */
#define _CMU_LFBCLKEN0_LEUART0_DEFAULT             0x00000000UL        /**< Mode DEFAULT for CMU_LFBCLKEN0 */

/* Bit fields for CMU LFAPRESC0 */
#define _CMU_LFAPRESC0_RESETVALUE                  0x00000000UL        /**< Default value for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_MASK                        0x000003FFUL        /**< Mask for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_SHIFT                   0                   /**< Shift value for CMU_RTC */
#define _CMU_LFAPRESC0_RTC_MASK                    0xFUL               /**< Bit mask for CMU_RTC */
#define CMU_LFAPRESC0_RTC_DIV1                     (0x00000000UL << 0) /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2                     (0x00000001UL << 0) /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4                     (0x00000002UL << 0) /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8                     (0x00000003UL << 0) /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16                    (0x00000004UL << 0) /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32                    (0x00000005UL << 0) /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV64                    (0x00000006UL << 0) /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV128                   (0x00000007UL << 0) /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV256                   (0x00000008UL << 0) /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV512                   (0x00000009UL << 0) /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV1024                  (0x0000000AUL << 0) /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV2048                  (0x0000000BUL << 0) /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV4096                  (0x0000000CUL << 0) /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV8192                  (0x0000000DUL << 0) /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV16384                 (0x0000000EUL << 0) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_RTC_DIV32768                 (0x0000000FUL << 0) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV1                    0x00000000UL        /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2                    0x00000001UL        /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4                    0x00000002UL        /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8                    0x00000003UL        /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16                   0x00000004UL        /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32                   0x00000005UL        /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV64                   0x00000006UL        /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV128                  0x00000007UL        /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV256                  0x00000008UL        /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV512                  0x00000009UL        /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV1024                 0x0000000AUL        /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV2048                 0x0000000BUL        /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV4096                 0x0000000CUL        /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV8192                 0x0000000DUL        /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV16384                0x0000000EUL        /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_RTC_DIV32768                0x0000000FUL        /**< Mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_SHIFT              4                   /**< Shift value for CMU_LETIMER0 */
#define _CMU_LFAPRESC0_LETIMER0_MASK               0xF0UL              /**< Bit mask for CMU_LETIMER0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1                (0x00000000UL << 4) /**< Shifted mode DIV1 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2                (0x00000001UL << 4) /**< Shifted mode DIV2 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4                (0x00000002UL << 4) /**< Shifted mode DIV4 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8                (0x00000003UL << 4) /**< Shifted mode DIV8 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16               (0x00000004UL << 4) /**< Shifted mode DIV16 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32               (0x00000005UL << 4) /**< Shifted mode DIV32 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV64               (0x00000006UL << 4) /**< Shifted mode DIV64 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV128              (0x00000007UL << 4) /**< Shifted mode DIV128 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV256              (0x00000008UL << 4) /**< Shifted mode DIV256 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV512              (0x00000009UL << 4) /**< Shifted mode DIV512 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV1024             (0x0000000AUL << 4) /**< Shifted mode DIV1024 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV2048             (0x0000000BUL << 4) /**< Shifted mode DIV2048 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV4096             (0x0000000CUL << 4) /**< Shifted mode DIV4096 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV8192             (0x0000000DUL << 4) /**< Shifted mode DIV8192 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV16384            (0x0000000EUL << 4) /**< Shifted mode DIV16384 for CMU_LFAPRESC0 */
#define CMU_LFAPRESC0_LETIMER0_DIV32768            (0x0000000FUL << 4) /**< Shifted mode DIV32768 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1               0x00000000UL        /**< Mode DIV1 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2               0x00000001UL        /**< Mode DIV2 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4               0x00000002UL        /**< Mode DIV4 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8               0x00000003UL        /**< Mode DIV8 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16              0x00000004UL        /**< Mode DIV16 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32              0x00000005UL        /**< Mode DIV32 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV64              0x00000006UL        /**< Mode DIV64 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV128             0x00000007UL        /**< Mode DIV128 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV256             0x00000008UL        /**< Mode DIV256 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV512             0x00000009UL        /**< Mode DIV512 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV1024            0x0000000AUL        /**< Mode DIV1024 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV2048            0x0000000BUL        /**< Mode DIV2048 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV4096            0x0000000CUL        /**< Mode DIV4096 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV8192            0x0000000DUL        /**< Mode DIV8192 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV16384           0x0000000EUL        /**< Mode DIV16384 for CMU_LFAPRESC0 */
#define _CMU_LFAPRESC0_LETIMER0_DIV32768           0x0000000FUL        /**< Mode DIV32768 for CMU_LFAPRESC0 */

/* Bit fields for CMU LFBPRESC0 */
#define _CMU_LFBPRESC0_RESETVALUE                  0x00000000UL        /**< Default value for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_MASK                        0x00000033UL        /**< Mask for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_SHIFT               0                   /**< Shift value for CMU_LEUART0 */
#define _CMU_LFBPRESC0_LEUART0_MASK                0x3UL               /**< Bit mask for CMU_LEUART0 */
#define CMU_LFBPRESC0_LEUART0_DIV1                 (0x00000000UL << 0) /**< Shifted mode DIV1 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV2                 (0x00000001UL << 0) /**< Shifted mode DIV2 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV4                 (0x00000002UL << 0) /**< Shifted mode DIV4 for CMU_LFBPRESC0 */
#define CMU_LFBPRESC0_LEUART0_DIV8                 (0x00000003UL << 0) /**< Shifted mode DIV8 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV1                0x00000000UL        /**< Mode DIV1 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV2                0x00000001UL        /**< Mode DIV2 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV4                0x00000002UL        /**< Mode DIV4 for CMU_LFBPRESC0 */
#define _CMU_LFBPRESC0_LEUART0_DIV8                0x00000003UL        /**< Mode DIV8 for CMU_LFBPRESC0 */

/* Bit fields for CMU PCNTCTRL */
#define _CMU_PCNTCTRL_RESETVALUE                   0x00000015UL        /**< Default value for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_MASK                         0x0000003FUL        /**< Mask for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKEN                    (0x1UL << 0)        /**< PCNT0 Clock Enable */
#define _CMU_PCNTCTRL_PCNT0CLKEN_SHIFT             0                   /**< Shift value for CMU_PCNT0CLKEN */
#define _CMU_PCNTCTRL_PCNT0CLKEN_MASK              0x1UL               /**< Bit mask for CMU_PCNT0CLKEN */
#define CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT            (0x00000001UL << 0) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKEN_DEFAULT           0x00000001UL        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL                   (0x1UL << 1)        /**< PCNT0 Clock Select */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_SHIFT            1                   /**< Shift value for CMU_PCNT0CLKSEL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_MASK             0x2UL               /**< Bit mask for CMU_PCNT0CLKSEL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT           (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK            (0x00000000UL << 1) /**< Shifted mode LFACLK for CMU_PCNTCTRL */
#define CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0           (0x00000001UL << 1) /**< Shifted mode PCNT0S0 for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_DEFAULT          0x00000000UL        /**< Mode DEFAULT for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_LFACLK           0x00000000UL        /**< Mode LFACLK for CMU_PCNTCTRL */
#define _CMU_PCNTCTRL_PCNT0CLKSEL_PCNT0S0          0x00000001UL        /**< Mode PCNT0S0 for CMU_PCNTCTRL */

/* Bit fields for CMU ROUTE */
#define _CMU_ROUTE_RESETVALUE                      0x00000000UL        /**< Default value for CMU_ROUTE */
#define _CMU_ROUTE_MASK                            0x00000007UL        /**< Mask for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT0PEN                       (0x1UL << 0)        /**< CLKOUT0 Pin Enable */
#define _CMU_ROUTE_CLKOUT0PEN_SHIFT                0                   /**< Shift value for CMU_CLKOUT0PEN */
#define _CMU_ROUTE_CLKOUT0PEN_MASK                 0x1UL               /**< Bit mask for CMU_CLKOUT0PEN */
#define CMU_ROUTE_CLKOUT0PEN_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_CLKOUT0PEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_CLKOUT1PEN                       (0x1UL << 1)        /**< CLKOUT1 Pin Enable */
#define _CMU_ROUTE_CLKOUT1PEN_SHIFT                1                   /**< Shift value for CMU_CLKOUT1PEN */
#define _CMU_ROUTE_CLKOUT1PEN_MASK                 0x2UL               /**< Bit mask for CMU_CLKOUT1PEN */
#define CMU_ROUTE_CLKOUT1PEN_DEFAULT               (0x00000000UL << 1) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_CLKOUT1PEN_DEFAULT              0x00000000UL        /**< Mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION                         (0x1UL << 2)        /**< I/O Location */
#define _CMU_ROUTE_LOCATION_SHIFT                  2                   /**< Shift value for CMU_LOCATION */
#define _CMU_ROUTE_LOCATION_MASK                   0x4UL               /**< Bit mask for CMU_LOCATION */
#define CMU_ROUTE_LOCATION_DEFAULT                 (0x00000000UL << 2) /**< Shifted mode DEFAULT for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC0                    (0x00000000UL << 2) /**< Shifted mode LOC0 for CMU_ROUTE */
#define CMU_ROUTE_LOCATION_LOC1                    (0x00000001UL << 2) /**< Shifted mode LOC1 for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_DEFAULT                0x00000000UL        /**< Mode DEFAULT for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_LOC0                   0x00000000UL        /**< Mode LOC0 for CMU_ROUTE */
#define _CMU_ROUTE_LOCATION_LOC1                   0x00000001UL        /**< Mode LOC1 for CMU_ROUTE */

/* Bit fields for CMU LOCK */
#define _CMU_LOCK_RESETVALUE                       0x00000000UL        /**< Default value for CMU_LOCK */
#define _CMU_LOCK_MASK                             0x0000FFFFUL        /**< Mask for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_SHIFT                    0                   /**< Shift value for CMU_LOCKKEY */
#define _CMU_LOCK_LOCKKEY_MASK                     0xFFFFUL            /**< Bit mask for CMU_LOCKKEY */
#define CMU_LOCK_LOCKKEY_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCK                      (0x00000000UL << 0) /**< Shifted mode LOCK for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCKED                  (0x00000000UL << 0) /**< Shifted mode UNLOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_LOCKED                    (0x00000001UL << 0) /**< Shifted mode LOCKED for CMU_LOCK */
#define CMU_LOCK_LOCKKEY_UNLOCK                    (0x0000580EUL << 0) /**< Shifted mode UNLOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCK                     0x00000000UL        /**< Mode LOCK for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCKED                 0x00000000UL        /**< Mode UNLOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_LOCKED                   0x00000001UL        /**< Mode LOCKED for CMU_LOCK */
#define _CMU_LOCK_LOCKKEY_UNLOCK                   0x0000580EUL        /**< Mode UNLOCK for CMU_LOCK */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_GPIO
 * @{
 *****************************************************************************/

/* Bit fields for GPIO P_CTRL */
#define _GPIO_P_CTRL_RESETVALUE                           0x00000000UL        /**< Default value for GPIO_P_CTRL */
#define _GPIO_P_CTRL_MASK                                 0x00000003UL        /**< Mask for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_SHIFT                      0                   /**< Shift value for GPIO_DRIVEMODE */
#define _GPIO_P_CTRL_DRIVEMODE_MASK                       0x3UL               /**< Bit mask for GPIO_DRIVEMODE */
#define GPIO_P_CTRL_DRIVEMODE_DEFAULT                     (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_STANDARD                    (0x00000000UL << 0) /**< Shifted mode STANDARD for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_LOWEST                      (0x00000001UL << 0) /**< Shifted mode LOWEST for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_HIGH                        (0x00000002UL << 0) /**< Shifted mode HIGH for GPIO_P_CTRL */
#define GPIO_P_CTRL_DRIVEMODE_LOW                         (0x00000003UL << 0) /**< Shifted mode LOW for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_STANDARD                   0x00000000UL        /**< Mode STANDARD for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_LOWEST                     0x00000001UL        /**< Mode LOWEST for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_HIGH                       0x00000002UL        /**< Mode HIGH for GPIO_P_CTRL */
#define _GPIO_P_CTRL_DRIVEMODE_LOW                        0x00000003UL        /**< Mode LOW for GPIO_P_CTRL */

/* Bit fields for GPIO P_MODEL */
#define _GPIO_P_MODEL_RESETVALUE                          0x00000000UL         /**< Default value for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MASK                                0xFFFFFFFFUL         /**< Mask for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_SHIFT                         0                    /**< Shift value for GPIO_MODE0 */
#define _GPIO_P_MODEL_MODE0_MASK                          0xFUL                /**< Bit mask for GPIO_MODE0 */
#define GPIO_P_MODEL_MODE0_DEFAULT                        (0x00000000UL << 0)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_DISABLED                       (0x00000000UL << 0)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUT                          (0x00000001UL << 0)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUTPULL                      (0x00000002UL << 0)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_INPUTPULLFILTER                (0x00000003UL << 0)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_PUSHPULL                       (0x00000004UL << 0)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_PUSHPULLDRIVE                  (0x00000005UL << 0)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDOR                        (0x00000006UL << 0)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDORPULLDOWN                (0x00000007UL << 0)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDAND                       (0x00000008UL << 0)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDFILTER                 (0x00000009UL << 0)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDPULLUP                 (0x0000000AUL << 0)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDPULLUPFILTER           (0x0000000BUL << 0)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVE                  (0x0000000CUL << 0)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEFILTER            (0x0000000DUL << 0)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUP            (0x0000000EUL << 0)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 0)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE0_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_SHIFT                         4                    /**< Shift value for GPIO_MODE1 */
#define _GPIO_P_MODEL_MODE1_MASK                          0xF0UL               /**< Bit mask for GPIO_MODE1 */
#define GPIO_P_MODEL_MODE1_DEFAULT                        (0x00000000UL << 4)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_DISABLED                       (0x00000000UL << 4)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUT                          (0x00000001UL << 4)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUTPULL                      (0x00000002UL << 4)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_INPUTPULLFILTER                (0x00000003UL << 4)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_PUSHPULL                       (0x00000004UL << 4)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_PUSHPULLDRIVE                  (0x00000005UL << 4)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDOR                        (0x00000006UL << 4)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDORPULLDOWN                (0x00000007UL << 4)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDAND                       (0x00000008UL << 4)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDFILTER                 (0x00000009UL << 4)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDPULLUP                 (0x0000000AUL << 4)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDPULLUPFILTER           (0x0000000BUL << 4)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVE                  (0x0000000CUL << 4)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEFILTER            (0x0000000DUL << 4)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUP            (0x0000000EUL << 4)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 4)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE1_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_SHIFT                         8                    /**< Shift value for GPIO_MODE2 */
#define _GPIO_P_MODEL_MODE2_MASK                          0xF00UL              /**< Bit mask for GPIO_MODE2 */
#define GPIO_P_MODEL_MODE2_DEFAULT                        (0x00000000UL << 8)  /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_DISABLED                       (0x00000000UL << 8)  /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUT                          (0x00000001UL << 8)  /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUTPULL                      (0x00000002UL << 8)  /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_INPUTPULLFILTER                (0x00000003UL << 8)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_PUSHPULL                       (0x00000004UL << 8)  /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_PUSHPULLDRIVE                  (0x00000005UL << 8)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDOR                        (0x00000006UL << 8)  /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDORPULLDOWN                (0x00000007UL << 8)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDAND                       (0x00000008UL << 8)  /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDFILTER                 (0x00000009UL << 8)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDPULLUP                 (0x0000000AUL << 8)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDPULLUPFILTER           (0x0000000BUL << 8)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVE                  (0x0000000CUL << 8)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEFILTER            (0x0000000DUL << 8)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUP            (0x0000000EUL << 8)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 8)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE2_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_SHIFT                         12                   /**< Shift value for GPIO_MODE3 */
#define _GPIO_P_MODEL_MODE3_MASK                          0xF000UL             /**< Bit mask for GPIO_MODE3 */
#define GPIO_P_MODEL_MODE3_DEFAULT                        (0x00000000UL << 12) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_DISABLED                       (0x00000000UL << 12) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUT                          (0x00000001UL << 12) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUTPULL                      (0x00000002UL << 12) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_INPUTPULLFILTER                (0x00000003UL << 12) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_PUSHPULL                       (0x00000004UL << 12) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_PUSHPULLDRIVE                  (0x00000005UL << 12) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDOR                        (0x00000006UL << 12) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDORPULLDOWN                (0x00000007UL << 12) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDAND                       (0x00000008UL << 12) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDFILTER                 (0x00000009UL << 12) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDPULLUP                 (0x0000000AUL << 12) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDPULLUPFILTER           (0x0000000BUL << 12) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVE                  (0x0000000CUL << 12) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEFILTER            (0x0000000DUL << 12) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUP            (0x0000000EUL << 12) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 12) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE3_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_SHIFT                         16                   /**< Shift value for GPIO_MODE4 */
#define _GPIO_P_MODEL_MODE4_MASK                          0xF0000UL            /**< Bit mask for GPIO_MODE4 */
#define GPIO_P_MODEL_MODE4_DEFAULT                        (0x00000000UL << 16) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_DISABLED                       (0x00000000UL << 16) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUT                          (0x00000001UL << 16) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUTPULL                      (0x00000002UL << 16) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_INPUTPULLFILTER                (0x00000003UL << 16) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_PUSHPULL                       (0x00000004UL << 16) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_PUSHPULLDRIVE                  (0x00000005UL << 16) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDOR                        (0x00000006UL << 16) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDORPULLDOWN                (0x00000007UL << 16) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDAND                       (0x00000008UL << 16) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDFILTER                 (0x00000009UL << 16) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDPULLUP                 (0x0000000AUL << 16) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDPULLUPFILTER           (0x0000000BUL << 16) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVE                  (0x0000000CUL << 16) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEFILTER            (0x0000000DUL << 16) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUP            (0x0000000EUL << 16) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 16) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE4_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_SHIFT                         20                   /**< Shift value for GPIO_MODE5 */
#define _GPIO_P_MODEL_MODE5_MASK                          0xF00000UL           /**< Bit mask for GPIO_MODE5 */
#define GPIO_P_MODEL_MODE5_DEFAULT                        (0x00000000UL << 20) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_DISABLED                       (0x00000000UL << 20) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUT                          (0x00000001UL << 20) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUTPULL                      (0x00000002UL << 20) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_INPUTPULLFILTER                (0x00000003UL << 20) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_PUSHPULL                       (0x00000004UL << 20) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_PUSHPULLDRIVE                  (0x00000005UL << 20) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDOR                        (0x00000006UL << 20) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDORPULLDOWN                (0x00000007UL << 20) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDAND                       (0x00000008UL << 20) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDFILTER                 (0x00000009UL << 20) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDPULLUP                 (0x0000000AUL << 20) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDPULLUPFILTER           (0x0000000BUL << 20) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVE                  (0x0000000CUL << 20) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEFILTER            (0x0000000DUL << 20) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUP            (0x0000000EUL << 20) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 20) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE5_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_SHIFT                         24                   /**< Shift value for GPIO_MODE6 */
#define _GPIO_P_MODEL_MODE6_MASK                          0xF000000UL          /**< Bit mask for GPIO_MODE6 */
#define GPIO_P_MODEL_MODE6_DEFAULT                        (0x00000000UL << 24) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_DISABLED                       (0x00000000UL << 24) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUT                          (0x00000001UL << 24) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUTPULL                      (0x00000002UL << 24) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_INPUTPULLFILTER                (0x00000003UL << 24) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_PUSHPULL                       (0x00000004UL << 24) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_PUSHPULLDRIVE                  (0x00000005UL << 24) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDOR                        (0x00000006UL << 24) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDORPULLDOWN                (0x00000007UL << 24) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDAND                       (0x00000008UL << 24) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDFILTER                 (0x00000009UL << 24) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDPULLUP                 (0x0000000AUL << 24) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDPULLUPFILTER           (0x0000000BUL << 24) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVE                  (0x0000000CUL << 24) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEFILTER            (0x0000000DUL << 24) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUP            (0x0000000EUL << 24) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 24) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE6_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_SHIFT                         28                   /**< Shift value for GPIO_MODE7 */
#define _GPIO_P_MODEL_MODE7_MASK                          0xF0000000UL         /**< Bit mask for GPIO_MODE7 */
#define GPIO_P_MODEL_MODE7_DEFAULT                        (0x00000000UL << 28) /**< Shifted mode DEFAULT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_DISABLED                       (0x00000000UL << 28) /**< Shifted mode DISABLED for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUT                          (0x00000001UL << 28) /**< Shifted mode INPUT for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUTPULL                      (0x00000002UL << 28) /**< Shifted mode INPUTPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_INPUTPULLFILTER                (0x00000003UL << 28) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_PUSHPULL                       (0x00000004UL << 28) /**< Shifted mode PUSHPULL for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_PUSHPULLDRIVE                  (0x00000005UL << 28) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDOR                        (0x00000006UL << 28) /**< Shifted mode WIREDOR for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDORPULLDOWN                (0x00000007UL << 28) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDAND                       (0x00000008UL << 28) /**< Shifted mode WIREDAND for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDFILTER                 (0x00000009UL << 28) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDPULLUP                 (0x0000000AUL << 28) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDPULLUPFILTER           (0x0000000BUL << 28) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVE                  (0x0000000CUL << 28) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEFILTER            (0x0000000DUL << 28) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUP            (0x0000000EUL << 28) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 28) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEL */
#define _GPIO_P_MODEL_MODE7_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEL */

/* Bit fields for GPIO P_MODEH */
#define _GPIO_P_MODEH_RESETVALUE                          0x00000000UL         /**< Default value for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MASK                                0xFFFFFFFFUL         /**< Mask for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_SHIFT                         0                    /**< Shift value for GPIO_MODE8 */
#define _GPIO_P_MODEH_MODE8_MASK                          0xFUL                /**< Bit mask for GPIO_MODE8 */
#define GPIO_P_MODEH_MODE8_DEFAULT                        (0x00000000UL << 0)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_DISABLED                       (0x00000000UL << 0)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUT                          (0x00000001UL << 0)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUTPULL                      (0x00000002UL << 0)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_INPUTPULLFILTER                (0x00000003UL << 0)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_PUSHPULL                       (0x00000004UL << 0)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_PUSHPULLDRIVE                  (0x00000005UL << 0)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDOR                        (0x00000006UL << 0)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDORPULLDOWN                (0x00000007UL << 0)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDAND                       (0x00000008UL << 0)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDFILTER                 (0x00000009UL << 0)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDPULLUP                 (0x0000000AUL << 0)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDPULLUPFILTER           (0x0000000BUL << 0)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVE                  (0x0000000CUL << 0)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEFILTER            (0x0000000DUL << 0)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUP            (0x0000000EUL << 0)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 0)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE8_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_SHIFT                         4                    /**< Shift value for GPIO_MODE9 */
#define _GPIO_P_MODEH_MODE9_MASK                          0xF0UL               /**< Bit mask for GPIO_MODE9 */
#define GPIO_P_MODEH_MODE9_DEFAULT                        (0x00000000UL << 4)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_DISABLED                       (0x00000000UL << 4)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUT                          (0x00000001UL << 4)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUTPULL                      (0x00000002UL << 4)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_INPUTPULLFILTER                (0x00000003UL << 4)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_PUSHPULL                       (0x00000004UL << 4)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_PUSHPULLDRIVE                  (0x00000005UL << 4)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDOR                        (0x00000006UL << 4)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDORPULLDOWN                (0x00000007UL << 4)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDAND                       (0x00000008UL << 4)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDFILTER                 (0x00000009UL << 4)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDPULLUP                 (0x0000000AUL << 4)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDPULLUPFILTER           (0x0000000BUL << 4)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVE                  (0x0000000CUL << 4)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEFILTER            (0x0000000DUL << 4)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUP            (0x0000000EUL << 4)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUPFILTER      (0x0000000FUL << 4)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_DISABLED                      0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUT                         0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUTPULL                     0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_INPUTPULLFILTER               0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_PUSHPULL                      0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_PUSHPULLDRIVE                 0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDOR                       0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDORPULLDOWN               0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDAND                      0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDFILTER                0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDPULLUP                0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDPULLUPFILTER          0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVE                 0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEFILTER           0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUP           0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE9_WIREDANDDRIVEPULLUPFILTER     0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_SHIFT                        8                    /**< Shift value for GPIO_MODE10 */
#define _GPIO_P_MODEH_MODE10_MASK                         0xF00UL              /**< Bit mask for GPIO_MODE10 */
#define GPIO_P_MODEH_MODE10_DEFAULT                       (0x00000000UL << 8)  /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_DISABLED                      (0x00000000UL << 8)  /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUT                         (0x00000001UL << 8)  /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUTPULL                     (0x00000002UL << 8)  /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_INPUTPULLFILTER               (0x00000003UL << 8)  /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_PUSHPULL                      (0x00000004UL << 8)  /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_PUSHPULLDRIVE                 (0x00000005UL << 8)  /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDOR                       (0x00000006UL << 8)  /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDORPULLDOWN               (0x00000007UL << 8)  /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDAND                      (0x00000008UL << 8)  /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDFILTER                (0x00000009UL << 8)  /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDPULLUP                (0x0000000AUL << 8)  /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDPULLUPFILTER          (0x0000000BUL << 8)  /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVE                 (0x0000000CUL << 8)  /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEFILTER           (0x0000000DUL << 8)  /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUP           (0x0000000EUL << 8)  /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 8)  /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE10_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_SHIFT                        12                   /**< Shift value for GPIO_MODE11 */
#define _GPIO_P_MODEH_MODE11_MASK                         0xF000UL             /**< Bit mask for GPIO_MODE11 */
#define GPIO_P_MODEH_MODE11_DEFAULT                       (0x00000000UL << 12) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_DISABLED                      (0x00000000UL << 12) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUT                         (0x00000001UL << 12) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUTPULL                     (0x00000002UL << 12) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_INPUTPULLFILTER               (0x00000003UL << 12) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_PUSHPULL                      (0x00000004UL << 12) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_PUSHPULLDRIVE                 (0x00000005UL << 12) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDOR                       (0x00000006UL << 12) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDORPULLDOWN               (0x00000007UL << 12) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDAND                      (0x00000008UL << 12) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDFILTER                (0x00000009UL << 12) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDPULLUP                (0x0000000AUL << 12) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDPULLUPFILTER          (0x0000000BUL << 12) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVE                 (0x0000000CUL << 12) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEFILTER           (0x0000000DUL << 12) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUP           (0x0000000EUL << 12) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 12) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE11_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_SHIFT                        16                   /**< Shift value for GPIO_MODE12 */
#define _GPIO_P_MODEH_MODE12_MASK                         0xF0000UL            /**< Bit mask for GPIO_MODE12 */
#define GPIO_P_MODEH_MODE12_DEFAULT                       (0x00000000UL << 16) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_DISABLED                      (0x00000000UL << 16) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUT                         (0x00000001UL << 16) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUTPULL                     (0x00000002UL << 16) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_INPUTPULLFILTER               (0x00000003UL << 16) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_PUSHPULL                      (0x00000004UL << 16) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_PUSHPULLDRIVE                 (0x00000005UL << 16) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDOR                       (0x00000006UL << 16) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDORPULLDOWN               (0x00000007UL << 16) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDAND                      (0x00000008UL << 16) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDFILTER                (0x00000009UL << 16) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDPULLUP                (0x0000000AUL << 16) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDPULLUPFILTER          (0x0000000BUL << 16) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVE                 (0x0000000CUL << 16) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEFILTER           (0x0000000DUL << 16) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUP           (0x0000000EUL << 16) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 16) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE12_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_SHIFT                        20                   /**< Shift value for GPIO_MODE13 */
#define _GPIO_P_MODEH_MODE13_MASK                         0xF00000UL           /**< Bit mask for GPIO_MODE13 */
#define GPIO_P_MODEH_MODE13_DEFAULT                       (0x00000000UL << 20) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_DISABLED                      (0x00000000UL << 20) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUT                         (0x00000001UL << 20) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUTPULL                     (0x00000002UL << 20) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_INPUTPULLFILTER               (0x00000003UL << 20) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_PUSHPULL                      (0x00000004UL << 20) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_PUSHPULLDRIVE                 (0x00000005UL << 20) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDOR                       (0x00000006UL << 20) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDORPULLDOWN               (0x00000007UL << 20) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDAND                      (0x00000008UL << 20) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDFILTER                (0x00000009UL << 20) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDPULLUP                (0x0000000AUL << 20) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDPULLUPFILTER          (0x0000000BUL << 20) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVE                 (0x0000000CUL << 20) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEFILTER           (0x0000000DUL << 20) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUP           (0x0000000EUL << 20) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 20) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE13_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_SHIFT                        24                   /**< Shift value for GPIO_MODE14 */
#define _GPIO_P_MODEH_MODE14_MASK                         0xF000000UL          /**< Bit mask for GPIO_MODE14 */
#define GPIO_P_MODEH_MODE14_DEFAULT                       (0x00000000UL << 24) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_DISABLED                      (0x00000000UL << 24) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUT                         (0x00000001UL << 24) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUTPULL                     (0x00000002UL << 24) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_INPUTPULLFILTER               (0x00000003UL << 24) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_PUSHPULL                      (0x00000004UL << 24) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_PUSHPULLDRIVE                 (0x00000005UL << 24) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDOR                       (0x00000006UL << 24) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDORPULLDOWN               (0x00000007UL << 24) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDAND                      (0x00000008UL << 24) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDFILTER                (0x00000009UL << 24) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDPULLUP                (0x0000000AUL << 24) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDPULLUPFILTER          (0x0000000BUL << 24) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVE                 (0x0000000CUL << 24) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEFILTER           (0x0000000DUL << 24) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUP           (0x0000000EUL << 24) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 24) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE14_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_SHIFT                        28                   /**< Shift value for GPIO_MODE15 */
#define _GPIO_P_MODEH_MODE15_MASK                         0xF0000000UL         /**< Bit mask for GPIO_MODE15 */
#define GPIO_P_MODEH_MODE15_DEFAULT                       (0x00000000UL << 28) /**< Shifted mode DEFAULT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_DISABLED                      (0x00000000UL << 28) /**< Shifted mode DISABLED for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUT                         (0x00000001UL << 28) /**< Shifted mode INPUT for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUTPULL                     (0x00000002UL << 28) /**< Shifted mode INPUTPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_INPUTPULLFILTER               (0x00000003UL << 28) /**< Shifted mode INPUTPULLFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_PUSHPULL                      (0x00000004UL << 28) /**< Shifted mode PUSHPULL for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_PUSHPULLDRIVE                 (0x00000005UL << 28) /**< Shifted mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDOR                       (0x00000006UL << 28) /**< Shifted mode WIREDOR for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDORPULLDOWN               (0x00000007UL << 28) /**< Shifted mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDAND                      (0x00000008UL << 28) /**< Shifted mode WIREDAND for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDFILTER                (0x00000009UL << 28) /**< Shifted mode WIREDANDFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDPULLUP                (0x0000000AUL << 28) /**< Shifted mode WIREDANDPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDPULLUPFILTER          (0x0000000BUL << 28) /**< Shifted mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVE                 (0x0000000CUL << 28) /**< Shifted mode WIREDANDDRIVE for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEFILTER           (0x0000000DUL << 28) /**< Shifted mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUP           (0x0000000EUL << 28) /**< Shifted mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUPFILTER     (0x0000000FUL << 28) /**< Shifted mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_DEFAULT                      0x00000000UL         /**< Mode DEFAULT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_DISABLED                     0x00000000UL         /**< Mode DISABLED for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUT                        0x00000001UL         /**< Mode INPUT for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUTPULL                    0x00000002UL         /**< Mode INPUTPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_INPUTPULLFILTER              0x00000003UL         /**< Mode INPUTPULLFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_PUSHPULL                     0x00000004UL         /**< Mode PUSHPULL for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_PUSHPULLDRIVE                0x00000005UL         /**< Mode PUSHPULLDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDOR                      0x00000006UL         /**< Mode WIREDOR for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDORPULLDOWN              0x00000007UL         /**< Mode WIREDORPULLDOWN for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDAND                     0x00000008UL         /**< Mode WIREDAND for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDFILTER               0x00000009UL         /**< Mode WIREDANDFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDPULLUP               0x0000000AUL         /**< Mode WIREDANDPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDPULLUPFILTER         0x0000000BUL         /**< Mode WIREDANDPULLUPFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVE                0x0000000CUL         /**< Mode WIREDANDDRIVE for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEFILTER          0x0000000DUL         /**< Mode WIREDANDDRIVEFILTER for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUP          0x0000000EUL         /**< Mode WIREDANDDRIVEPULLUP for GPIO_P_MODEH */
#define _GPIO_P_MODEH_MODE15_WIREDANDDRIVEPULLUPFILTER    0x0000000FUL         /**< Mode WIREDANDDRIVEPULLUPFILTER for GPIO_P_MODEH */

/* Bit fields for GPIO P_DOUT */
#define _GPIO_P_DOUT_RESETVALUE                           0x00000000UL        /**< Default value for GPIO_P_DOUT */
#define _GPIO_P_DOUT_MASK                                 0x0000FFFFUL        /**< Mask for GPIO_P_DOUT */
#define _GPIO_P_DOUT_DOUT_SHIFT                           0                   /**< Shift value for GPIO_DOUT */
#define _GPIO_P_DOUT_DOUT_MASK                            0xFFFFUL            /**< Bit mask for GPIO_DOUT */
#define GPIO_P_DOUT_DOUT_DEFAULT                          (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUT */
#define _GPIO_P_DOUT_DOUT_DEFAULT                         0x00000000UL        /**< Mode DEFAULT for GPIO_P_DOUT */

/* Bit fields for GPIO P_DOUTSET */
#define _GPIO_P_DOUTSET_RESETVALUE                        0x00000000UL        /**< Default value for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_MASK                              0x0000FFFFUL        /**< Mask for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_SHIFT                     0                   /**< Shift value for GPIO_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_MASK                      0xFFFFUL            /**< Bit mask for GPIO_DOUTSET */
#define GPIO_P_DOUTSET_DOUTSET_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTSET */
#define _GPIO_P_DOUTSET_DOUTSET_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for GPIO_P_DOUTSET */

/* Bit fields for GPIO P_DOUTCLR */
#define _GPIO_P_DOUTCLR_RESETVALUE                        0x00000000UL        /**< Default value for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_MASK                              0x0000FFFFUL        /**< Mask for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_SHIFT                     0                   /**< Shift value for GPIO_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_MASK                      0xFFFFUL            /**< Bit mask for GPIO_DOUTCLR */
#define GPIO_P_DOUTCLR_DOUTCLR_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTCLR */
#define _GPIO_P_DOUTCLR_DOUTCLR_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for GPIO_P_DOUTCLR */

/* Bit fields for GPIO P_DOUTTGL */
#define _GPIO_P_DOUTTGL_RESETVALUE                        0x00000000UL        /**< Default value for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_MASK                              0x0000FFFFUL        /**< Mask for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_SHIFT                     0                   /**< Shift value for GPIO_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_MASK                      0xFFFFUL            /**< Bit mask for GPIO_DOUTTGL */
#define GPIO_P_DOUTTGL_DOUTTGL_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_DOUTTGL */
#define _GPIO_P_DOUTTGL_DOUTTGL_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for GPIO_P_DOUTTGL */

/* Bit fields for GPIO P_DIN */
#define _GPIO_P_DIN_RESETVALUE                            0x00000000UL        /**< Default value for GPIO_P_DIN */
#define _GPIO_P_DIN_MASK                                  0x0000FFFFUL        /**< Mask for GPIO_P_DIN */
#define _GPIO_P_DIN_DIN_SHIFT                             0                   /**< Shift value for GPIO_DIN */
#define _GPIO_P_DIN_DIN_MASK                              0xFFFFUL            /**< Bit mask for GPIO_DIN */
#define GPIO_P_DIN_DIN_DEFAULT                            (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_P_DIN */
#define _GPIO_P_DIN_DIN_DEFAULT                           0x00000000UL        /**< Mode DEFAULT for GPIO_P_DIN */

/* Bit fields for GPIO P_PINLOCKN */
#define _GPIO_P_PINLOCKN_RESETVALUE                       0x0000FFFFUL        /**< Default value for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_MASK                             0x0000FFFFUL        /**< Mask for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_SHIFT                   0                   /**< Shift value for GPIO_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_MASK                    0xFFFFUL            /**< Bit mask for GPIO_PINLOCKN */
#define GPIO_P_PINLOCKN_PINLOCKN_DEFAULT                  (0x0000FFFFUL << 0) /**< Shifted mode DEFAULT for GPIO_P_PINLOCKN */
#define _GPIO_P_PINLOCKN_PINLOCKN_DEFAULT                 0x0000FFFFUL        /**< Mode DEFAULT for GPIO_P_PINLOCKN */

/* Bit fields for GPIO EXTIPSELL */
#define _GPIO_EXTIPSELL_RESETVALUE                        0x00000000UL         /**< Default value for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_MASK                              0x77777777UL         /**< Mask for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_SHIFT                   0                    /**< Shift value for GPIO_EXTIPSEL0 */
#define _GPIO_EXTIPSELL_EXTIPSEL0_MASK                    0x7UL                /**< Bit mask for GPIO_EXTIPSEL0 */
#define GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT                  (0x00000000UL << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTA                    (0x00000000UL << 0)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTB                    (0x00000001UL << 0)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTC                    (0x00000002UL << 0)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTD                    (0x00000003UL << 0)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTE                    (0x00000004UL << 0)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTF                    (0x00000005UL << 0)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_SHIFT                   4                    /**< Shift value for GPIO_EXTIPSEL1 */
#define _GPIO_EXTIPSELL_EXTIPSEL1_MASK                    0x70UL               /**< Bit mask for GPIO_EXTIPSEL1 */
#define GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT                  (0x00000000UL << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTA                    (0x00000000UL << 4)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTB                    (0x00000001UL << 4)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTC                    (0x00000002UL << 4)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTD                    (0x00000003UL << 4)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTE                    (0x00000004UL << 4)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTF                    (0x00000005UL << 4)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_SHIFT                   8                    /**< Shift value for GPIO_EXTIPSEL2 */
#define _GPIO_EXTIPSELL_EXTIPSEL2_MASK                    0x700UL              /**< Bit mask for GPIO_EXTIPSEL2 */
#define GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT                  (0x00000000UL << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTA                    (0x00000000UL << 8)  /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTB                    (0x00000001UL << 8)  /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTC                    (0x00000002UL << 8)  /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTD                    (0x00000003UL << 8)  /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTE                    (0x00000004UL << 8)  /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTF                    (0x00000005UL << 8)  /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_SHIFT                   12                   /**< Shift value for GPIO_EXTIPSEL3 */
#define _GPIO_EXTIPSELL_EXTIPSEL3_MASK                    0x7000UL             /**< Bit mask for GPIO_EXTIPSEL3 */
#define GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT                  (0x00000000UL << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTA                    (0x00000000UL << 12) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTB                    (0x00000001UL << 12) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTC                    (0x00000002UL << 12) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTD                    (0x00000003UL << 12) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTE                    (0x00000004UL << 12) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTF                    (0x00000005UL << 12) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_SHIFT                   16                   /**< Shift value for GPIO_EXTIPSEL4 */
#define _GPIO_EXTIPSELL_EXTIPSEL4_MASK                    0x70000UL            /**< Bit mask for GPIO_EXTIPSEL4 */
#define GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT                  (0x00000000UL << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTA                    (0x00000000UL << 16) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTB                    (0x00000001UL << 16) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTC                    (0x00000002UL << 16) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTD                    (0x00000003UL << 16) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTE                    (0x00000004UL << 16) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTF                    (0x00000005UL << 16) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_SHIFT                   20                   /**< Shift value for GPIO_EXTIPSEL5 */
#define _GPIO_EXTIPSELL_EXTIPSEL5_MASK                    0x700000UL           /**< Bit mask for GPIO_EXTIPSEL5 */
#define GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT                  (0x00000000UL << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTA                    (0x00000000UL << 20) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTB                    (0x00000001UL << 20) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTC                    (0x00000002UL << 20) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTD                    (0x00000003UL << 20) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTE                    (0x00000004UL << 20) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTF                    (0x00000005UL << 20) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_SHIFT                   24                   /**< Shift value for GPIO_EXTIPSEL6 */
#define _GPIO_EXTIPSELL_EXTIPSEL6_MASK                    0x7000000UL          /**< Bit mask for GPIO_EXTIPSEL6 */
#define GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT                  (0x00000000UL << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTA                    (0x00000000UL << 24) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTB                    (0x00000001UL << 24) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTC                    (0x00000002UL << 24) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTD                    (0x00000003UL << 24) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTE                    (0x00000004UL << 24) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTF                    (0x00000005UL << 24) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_SHIFT                   28                   /**< Shift value for GPIO_EXTIPSEL7 */
#define _GPIO_EXTIPSELL_EXTIPSEL7_MASK                    0x70000000UL         /**< Bit mask for GPIO_EXTIPSEL7 */
#define GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT                  (0x00000000UL << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTA                    (0x00000000UL << 28) /**< Shifted mode PORTA for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTB                    (0x00000001UL << 28) /**< Shifted mode PORTB for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTC                    (0x00000002UL << 28) /**< Shifted mode PORTC for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTD                    (0x00000003UL << 28) /**< Shifted mode PORTD for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTE                    (0x00000004UL << 28) /**< Shifted mode PORTE for GPIO_EXTIPSELL */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTF                    (0x00000005UL << 28) /**< Shifted mode PORTF for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELL */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELL */

/* Bit fields for GPIO EXTIPSELH */
#define _GPIO_EXTIPSELH_RESETVALUE                        0x00000000UL         /**< Default value for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_MASK                              0x77777777UL         /**< Mask for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_SHIFT                   0                    /**< Shift value for GPIO_EXTIPSEL8 */
#define _GPIO_EXTIPSELH_EXTIPSEL8_MASK                    0x7UL                /**< Bit mask for GPIO_EXTIPSEL8 */
#define GPIO_EXTIPSELH_EXTIPSEL8_DEFAULT                  (0x00000000UL << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTA                    (0x00000000UL << 0)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTB                    (0x00000001UL << 0)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTC                    (0x00000002UL << 0)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTD                    (0x00000003UL << 0)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTE                    (0x00000004UL << 0)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL8_PORTF                    (0x00000005UL << 0)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL8_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_SHIFT                   4                    /**< Shift value for GPIO_EXTIPSEL9 */
#define _GPIO_EXTIPSELH_EXTIPSEL9_MASK                    0x70UL               /**< Bit mask for GPIO_EXTIPSEL9 */
#define GPIO_EXTIPSELH_EXTIPSEL9_DEFAULT                  (0x00000000UL << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTA                    (0x00000000UL << 4)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTB                    (0x00000001UL << 4)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTC                    (0x00000002UL << 4)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTD                    (0x00000003UL << 4)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTE                    (0x00000004UL << 4)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL9_PORTF                    (0x00000005UL << 4)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_DEFAULT                 0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTA                   0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTB                   0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTC                   0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTD                   0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTE                   0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL9_PORTF                   0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_SHIFT                  8                    /**< Shift value for GPIO_EXTIPSEL10 */
#define _GPIO_EXTIPSELH_EXTIPSEL10_MASK                   0x700UL              /**< Bit mask for GPIO_EXTIPSEL10 */
#define GPIO_EXTIPSELH_EXTIPSEL10_DEFAULT                 (0x00000000UL << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTA                   (0x00000000UL << 8)  /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTB                   (0x00000001UL << 8)  /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTC                   (0x00000002UL << 8)  /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTD                   (0x00000003UL << 8)  /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTE                   (0x00000004UL << 8)  /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL10_PORTF                   (0x00000005UL << 8)  /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL10_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_SHIFT                  12                   /**< Shift value for GPIO_EXTIPSEL11 */
#define _GPIO_EXTIPSELH_EXTIPSEL11_MASK                   0x7000UL             /**< Bit mask for GPIO_EXTIPSEL11 */
#define GPIO_EXTIPSELH_EXTIPSEL11_DEFAULT                 (0x00000000UL << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTA                   (0x00000000UL << 12) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTB                   (0x00000001UL << 12) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTC                   (0x00000002UL << 12) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTD                   (0x00000003UL << 12) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTE                   (0x00000004UL << 12) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL11_PORTF                   (0x00000005UL << 12) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL11_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_SHIFT                  16                   /**< Shift value for GPIO_EXTIPSEL12 */
#define _GPIO_EXTIPSELH_EXTIPSEL12_MASK                   0x70000UL            /**< Bit mask for GPIO_EXTIPSEL12 */
#define GPIO_EXTIPSELH_EXTIPSEL12_DEFAULT                 (0x00000000UL << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTA                   (0x00000000UL << 16) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTB                   (0x00000001UL << 16) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTC                   (0x00000002UL << 16) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTD                   (0x00000003UL << 16) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTE                   (0x00000004UL << 16) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL12_PORTF                   (0x00000005UL << 16) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL12_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_SHIFT                  20                   /**< Shift value for GPIO_EXTIPSEL13 */
#define _GPIO_EXTIPSELH_EXTIPSEL13_MASK                   0x700000UL           /**< Bit mask for GPIO_EXTIPSEL13 */
#define GPIO_EXTIPSELH_EXTIPSEL13_DEFAULT                 (0x00000000UL << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTA                   (0x00000000UL << 20) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTB                   (0x00000001UL << 20) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTC                   (0x00000002UL << 20) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTD                   (0x00000003UL << 20) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTE                   (0x00000004UL << 20) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL13_PORTF                   (0x00000005UL << 20) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL13_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_SHIFT                  24                   /**< Shift value for GPIO_EXTIPSEL14 */
#define _GPIO_EXTIPSELH_EXTIPSEL14_MASK                   0x7000000UL          /**< Bit mask for GPIO_EXTIPSEL14 */
#define GPIO_EXTIPSELH_EXTIPSEL14_DEFAULT                 (0x00000000UL << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTA                   (0x00000000UL << 24) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTB                   (0x00000001UL << 24) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTC                   (0x00000002UL << 24) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTD                   (0x00000003UL << 24) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTE                   (0x00000004UL << 24) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL14_PORTF                   (0x00000005UL << 24) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL14_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_SHIFT                  28                   /**< Shift value for GPIO_EXTIPSEL15 */
#define _GPIO_EXTIPSELH_EXTIPSEL15_MASK                   0x70000000UL         /**< Bit mask for GPIO_EXTIPSEL15 */
#define GPIO_EXTIPSELH_EXTIPSEL15_DEFAULT                 (0x00000000UL << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTA                   (0x00000000UL << 28) /**< Shifted mode PORTA for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTB                   (0x00000001UL << 28) /**< Shifted mode PORTB for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTC                   (0x00000002UL << 28) /**< Shifted mode PORTC for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTD                   (0x00000003UL << 28) /**< Shifted mode PORTD for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTE                   (0x00000004UL << 28) /**< Shifted mode PORTE for GPIO_EXTIPSELH */
#define GPIO_EXTIPSELH_EXTIPSEL15_PORTF                   (0x00000005UL << 28) /**< Shifted mode PORTF for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_DEFAULT                0x00000000UL         /**< Mode DEFAULT for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTA                  0x00000000UL         /**< Mode PORTA for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTB                  0x00000001UL         /**< Mode PORTB for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTC                  0x00000002UL         /**< Mode PORTC for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTD                  0x00000003UL         /**< Mode PORTD for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTE                  0x00000004UL         /**< Mode PORTE for GPIO_EXTIPSELH */
#define _GPIO_EXTIPSELH_EXTIPSEL15_PORTF                  0x00000005UL         /**< Mode PORTF for GPIO_EXTIPSELH */

/* Bit fields for GPIO EXTIRISE */
#define _GPIO_EXTIRISE_RESETVALUE                         0x00000000UL        /**< Default value for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_MASK                               0x0000FFFFUL        /**< Mask for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_SHIFT                     0                   /**< Shift value for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_MASK                      0xFFFFUL            /**< Bit mask for GPIO_EXTIRISE */
#define GPIO_EXTIRISE_EXTIRISE_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_EXTIRISE */
#define _GPIO_EXTIRISE_EXTIRISE_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for GPIO_EXTIRISE */

/* Bit fields for GPIO EXTIFALL */
#define _GPIO_EXTIFALL_RESETVALUE                         0x00000000UL        /**< Default value for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_MASK                               0x0000FFFFUL        /**< Mask for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_SHIFT                     0                   /**< Shift value for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_MASK                      0xFFFFUL            /**< Bit mask for GPIO_EXTIFALL */
#define GPIO_EXTIFALL_EXTIFALL_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_EXTIFALL */
#define _GPIO_EXTIFALL_EXTIFALL_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for GPIO_EXTIFALL */

/* Bit fields for GPIO IEN */
#define _GPIO_IEN_RESETVALUE                              0x00000000UL        /**< Default value for GPIO_IEN */
#define _GPIO_IEN_MASK                                    0x0000FFFFUL        /**< Mask for GPIO_IEN */
#define _GPIO_IEN_EXT_SHIFT                               0                   /**< Shift value for GPIO_EXT */
#define _GPIO_IEN_EXT_MASK                                0xFFFFUL            /**< Bit mask for GPIO_EXT */
#define GPIO_IEN_EXT_DEFAULT                              (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_IEN */
#define _GPIO_IEN_EXT_DEFAULT                             0x00000000UL        /**< Mode DEFAULT for GPIO_IEN */

/* Bit fields for GPIO IF */
#define _GPIO_IF_RESETVALUE                               0x00000000UL        /**< Default value for GPIO_IF */
#define _GPIO_IF_MASK                                     0x0000FFFFUL        /**< Mask for GPIO_IF */
#define _GPIO_IF_EXT_SHIFT                                0                   /**< Shift value for GPIO_EXT */
#define _GPIO_IF_EXT_MASK                                 0xFFFFUL            /**< Bit mask for GPIO_EXT */
#define GPIO_IF_EXT_DEFAULT                               (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_IF */
#define _GPIO_IF_EXT_DEFAULT                              0x00000000UL        /**< Mode DEFAULT for GPIO_IF */

/* Bit fields for GPIO IFS */
#define _GPIO_IFS_RESETVALUE                              0x00000000UL        /**< Default value for GPIO_IFS */
#define _GPIO_IFS_MASK                                    0x0000FFFFUL        /**< Mask for GPIO_IFS */
#define _GPIO_IFS_EXT_SHIFT                               0                   /**< Shift value for GPIO_EXT */
#define _GPIO_IFS_EXT_MASK                                0xFFFFUL            /**< Bit mask for GPIO_EXT */
#define GPIO_IFS_EXT_DEFAULT                              (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_IFS */
#define _GPIO_IFS_EXT_DEFAULT                             0x00000000UL        /**< Mode DEFAULT for GPIO_IFS */

/* Bit fields for GPIO IFC */
#define _GPIO_IFC_RESETVALUE                              0x00000000UL        /**< Default value for GPIO_IFC */
#define _GPIO_IFC_MASK                                    0x0000FFFFUL        /**< Mask for GPIO_IFC */
#define _GPIO_IFC_EXT_SHIFT                               0                   /**< Shift value for GPIO_EXT */
#define _GPIO_IFC_EXT_MASK                                0xFFFFUL            /**< Bit mask for GPIO_EXT */
#define GPIO_IFC_EXT_DEFAULT                              (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_IFC */
#define _GPIO_IFC_EXT_DEFAULT                             0x00000000UL        /**< Mode DEFAULT for GPIO_IFC */

/* Bit fields for GPIO ROUTE */
#define _GPIO_ROUTE_RESETVALUE                            0x00000003UL        /**< Default value for GPIO_ROUTE */
#define _GPIO_ROUTE_MASK                                  0x00000307UL        /**< Mask for GPIO_ROUTE */
#define GPIO_ROUTE_SWCLKPEN                               (0x1UL << 0)        /**< Serial Wire Clock Pin Enable */
#define _GPIO_ROUTE_SWCLKPEN_SHIFT                        0                   /**< Shift value for GPIO_SWCLKPEN */
#define _GPIO_ROUTE_SWCLKPEN_MASK                         0x1UL               /**< Bit mask for GPIO_SWCLKPEN */
#define GPIO_ROUTE_SWCLKPEN_DEFAULT                       (0x00000001UL << 0) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWCLKPEN_DEFAULT                      0x00000001UL        /**< Mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWDIOPEN                               (0x1UL << 1)        /**< Serial Wire Data Pin Enable */
#define _GPIO_ROUTE_SWDIOPEN_SHIFT                        1                   /**< Shift value for GPIO_SWDIOPEN */
#define _GPIO_ROUTE_SWDIOPEN_MASK                         0x2UL               /**< Bit mask for GPIO_SWDIOPEN */
#define GPIO_ROUTE_SWDIOPEN_DEFAULT                       (0x00000001UL << 1) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWDIOPEN_DEFAULT                      0x00000001UL        /**< Mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWOPEN                                 (0x1UL << 2)        /**< Serial Wire Viewer Output Pin Enable */
#define _GPIO_ROUTE_SWOPEN_SHIFT                          2                   /**< Shift value for GPIO_SWOPEN */
#define _GPIO_ROUTE_SWOPEN_MASK                           0x4UL               /**< Bit mask for GPIO_SWOPEN */
#define GPIO_ROUTE_SWOPEN_DEFAULT                         (0x00000000UL << 2) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWOPEN_DEFAULT                        0x00000000UL        /**< Mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_SHIFT                      8                   /**< Shift value for GPIO_SWLOCATION */
#define _GPIO_ROUTE_SWLOCATION_MASK                       0x300UL             /**< Bit mask for GPIO_SWLOCATION */
#define GPIO_ROUTE_SWLOCATION_DEFAULT                     (0x00000000UL << 8) /**< Shifted mode DEFAULT for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC0                        (0x00000000UL << 8) /**< Shifted mode LOC0 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC1                        (0x00000001UL << 8) /**< Shifted mode LOC1 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC2                        (0x00000002UL << 8) /**< Shifted mode LOC2 for GPIO_ROUTE */
#define GPIO_ROUTE_SWLOCATION_LOC3                        (0x00000003UL << 8) /**< Shifted mode LOC3 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_DEFAULT                    0x00000000UL        /**< Mode DEFAULT for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC0                       0x00000000UL        /**< Mode LOC0 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC1                       0x00000001UL        /**< Mode LOC1 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC2                       0x00000002UL        /**< Mode LOC2 for GPIO_ROUTE */
#define _GPIO_ROUTE_SWLOCATION_LOC3                       0x00000003UL        /**< Mode LOC3 for GPIO_ROUTE */

/* Bit fields for GPIO INSENSE */
#define _GPIO_INSENSE_RESETVALUE                          0x00000003UL        /**< Default value for GPIO_INSENSE */
#define _GPIO_INSENSE_MASK                                0x00000003UL        /**< Mask for GPIO_INSENSE */
#define GPIO_INSENSE_INTSENSE                             (0x1UL << 0)        /**< Interrupt Sense Enable */
#define _GPIO_INSENSE_INTSENSE_SHIFT                      0                   /**< Shift value for GPIO_INTSENSE */
#define _GPIO_INSENSE_INTSENSE_MASK                       0x1UL               /**< Bit mask for GPIO_INTSENSE */
#define GPIO_INSENSE_INTSENSE_DEFAULT                     (0x00000001UL << 0) /**< Shifted mode DEFAULT for GPIO_INSENSE */
#define _GPIO_INSENSE_INTSENSE_DEFAULT                    0x00000001UL        /**< Mode DEFAULT for GPIO_INSENSE */
#define GPIO_INSENSE_PRSSENSE                             (0x1UL << 1)        /**< PRS Sense Enable */
#define _GPIO_INSENSE_PRSSENSE_SHIFT                      1                   /**< Shift value for GPIO_PRSSENSE */
#define _GPIO_INSENSE_PRSSENSE_MASK                       0x2UL               /**< Bit mask for GPIO_PRSSENSE */
#define GPIO_INSENSE_PRSSENSE_DEFAULT                     (0x00000001UL << 1) /**< Shifted mode DEFAULT for GPIO_INSENSE */
#define _GPIO_INSENSE_PRSSENSE_DEFAULT                    0x00000001UL        /**< Mode DEFAULT for GPIO_INSENSE */

/* Bit fields for GPIO LOCK */
#define _GPIO_LOCK_RESETVALUE                             0x00000000UL        /**< Default value for GPIO_LOCK */
#define _GPIO_LOCK_MASK                                   0x0000FFFFUL        /**< Mask for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_SHIFT                          0                   /**< Shift value for GPIO_LOCKKEY */
#define _GPIO_LOCK_LOCKKEY_MASK                           0xFFFFUL            /**< Bit mask for GPIO_LOCKKEY */
#define GPIO_LOCK_LOCKKEY_DEFAULT                         (0x00000000UL << 0) /**< Shifted mode DEFAULT for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_LOCK                            (0x00000000UL << 0) /**< Shifted mode LOCK for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_UNLOCKED                        (0x00000000UL << 0) /**< Shifted mode UNLOCKED for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_LOCKED                          (0x00000001UL << 0) /**< Shifted mode LOCKED for GPIO_LOCK */
#define GPIO_LOCK_LOCKKEY_UNLOCK                          (0x0000A534UL << 0) /**< Shifted mode UNLOCK for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_DEFAULT                        0x00000000UL        /**< Mode DEFAULT for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_LOCK                           0x00000000UL        /**< Mode LOCK for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_UNLOCKED                       0x00000000UL        /**< Mode UNLOCKED for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_LOCKED                         0x00000001UL        /**< Mode LOCKED for GPIO_LOCK */
#define _GPIO_LOCK_LOCKKEY_UNLOCK                         0x0000A534UL        /**< Mode UNLOCK for GPIO_LOCK */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_PRS
 * @{
 *****************************************************************************/

/* Bit fields for PRS SWPULSE */
#define _PRS_SWPULSE_RESETVALUE              0x00000000UL        /**< Default value for PRS_SWPULSE */
#define _PRS_SWPULSE_MASK                    0x000000FFUL        /**< Mask for PRS_SWPULSE */
#define PRS_SWPULSE_CH0PULSE                 (0x1UL << 0)        /**< Channel 0 Pulse Generation */
#define _PRS_SWPULSE_CH0PULSE_SHIFT          0                   /**< Shift value for PRS_CH0PULSE */
#define _PRS_SWPULSE_CH0PULSE_MASK           0x1UL               /**< Bit mask for PRS_CH0PULSE */
#define PRS_SWPULSE_CH0PULSE_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH0PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH1PULSE                 (0x1UL << 1)        /**< Channel 1 Pulse Generation */
#define _PRS_SWPULSE_CH1PULSE_SHIFT          1                   /**< Shift value for PRS_CH1PULSE */
#define _PRS_SWPULSE_CH1PULSE_MASK           0x2UL               /**< Bit mask for PRS_CH1PULSE */
#define PRS_SWPULSE_CH1PULSE_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH1PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH2PULSE                 (0x1UL << 2)        /**< Channel 2 Pulse Generation */
#define _PRS_SWPULSE_CH2PULSE_SHIFT          2                   /**< Shift value for PRS_CH2PULSE */
#define _PRS_SWPULSE_CH2PULSE_MASK           0x4UL               /**< Bit mask for PRS_CH2PULSE */
#define PRS_SWPULSE_CH2PULSE_DEFAULT         (0x00000000UL << 2) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH2PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH3PULSE                 (0x1UL << 3)        /**< Channel 3 Pulse Generation */
#define _PRS_SWPULSE_CH3PULSE_SHIFT          3                   /**< Shift value for PRS_CH3PULSE */
#define _PRS_SWPULSE_CH3PULSE_MASK           0x8UL               /**< Bit mask for PRS_CH3PULSE */
#define PRS_SWPULSE_CH3PULSE_DEFAULT         (0x00000000UL << 3) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH3PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH4PULSE                 (0x1UL << 4)        /**< Channel 4 Pulse Generation */
#define _PRS_SWPULSE_CH4PULSE_SHIFT          4                   /**< Shift value for PRS_CH4PULSE */
#define _PRS_SWPULSE_CH4PULSE_MASK           0x10UL              /**< Bit mask for PRS_CH4PULSE */
#define PRS_SWPULSE_CH4PULSE_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH4PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH5PULSE                 (0x1UL << 5)        /**< Channel 5 Pulse Generation */
#define _PRS_SWPULSE_CH5PULSE_SHIFT          5                   /**< Shift value for PRS_CH5PULSE */
#define _PRS_SWPULSE_CH5PULSE_MASK           0x20UL              /**< Bit mask for PRS_CH5PULSE */
#define PRS_SWPULSE_CH5PULSE_DEFAULT         (0x00000000UL << 5) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH5PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH6PULSE                 (0x1UL << 6)        /**< Channel 6 Pulse Generation */
#define _PRS_SWPULSE_CH6PULSE_SHIFT          6                   /**< Shift value for PRS_CH6PULSE */
#define _PRS_SWPULSE_CH6PULSE_MASK           0x40UL              /**< Bit mask for PRS_CH6PULSE */
#define PRS_SWPULSE_CH6PULSE_DEFAULT         (0x00000000UL << 6) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH6PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */
#define PRS_SWPULSE_CH7PULSE                 (0x1UL << 7)        /**< Channel 7 Pulse Generation */
#define _PRS_SWPULSE_CH7PULSE_SHIFT          7                   /**< Shift value for PRS_CH7PULSE */
#define _PRS_SWPULSE_CH7PULSE_MASK           0x80UL              /**< Bit mask for PRS_CH7PULSE */
#define PRS_SWPULSE_CH7PULSE_DEFAULT         (0x00000000UL << 7) /**< Shifted mode DEFAULT for PRS_SWPULSE */
#define _PRS_SWPULSE_CH7PULSE_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWPULSE */

/* Bit fields for PRS SWLEVEL */
#define _PRS_SWLEVEL_RESETVALUE              0x00000000UL        /**< Default value for PRS_SWLEVEL */
#define _PRS_SWLEVEL_MASK                    0x000000FFUL        /**< Mask for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH0LEVEL                 (0x1UL << 0)        /**< Channel 0 Software Level */
#define _PRS_SWLEVEL_CH0LEVEL_SHIFT          0                   /**< Shift value for PRS_CH0LEVEL */
#define _PRS_SWLEVEL_CH0LEVEL_MASK           0x1UL               /**< Bit mask for PRS_CH0LEVEL */
#define PRS_SWLEVEL_CH0LEVEL_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH0LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH1LEVEL                 (0x1UL << 1)        /**< Channel 1 Software Level */
#define _PRS_SWLEVEL_CH1LEVEL_SHIFT          1                   /**< Shift value for PRS_CH1LEVEL */
#define _PRS_SWLEVEL_CH1LEVEL_MASK           0x2UL               /**< Bit mask for PRS_CH1LEVEL */
#define PRS_SWLEVEL_CH1LEVEL_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH1LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH2LEVEL                 (0x1UL << 2)        /**< Channel 2 Software Level */
#define _PRS_SWLEVEL_CH2LEVEL_SHIFT          2                   /**< Shift value for PRS_CH2LEVEL */
#define _PRS_SWLEVEL_CH2LEVEL_MASK           0x4UL               /**< Bit mask for PRS_CH2LEVEL */
#define PRS_SWLEVEL_CH2LEVEL_DEFAULT         (0x00000000UL << 2) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH2LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH3LEVEL                 (0x1UL << 3)        /**< Channel 3 Software Level */
#define _PRS_SWLEVEL_CH3LEVEL_SHIFT          3                   /**< Shift value for PRS_CH3LEVEL */
#define _PRS_SWLEVEL_CH3LEVEL_MASK           0x8UL               /**< Bit mask for PRS_CH3LEVEL */
#define PRS_SWLEVEL_CH3LEVEL_DEFAULT         (0x00000000UL << 3) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH3LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH4LEVEL                 (0x1UL << 4)        /**< Channel 4 Software Level */
#define _PRS_SWLEVEL_CH4LEVEL_SHIFT          4                   /**< Shift value for PRS_CH4LEVEL */
#define _PRS_SWLEVEL_CH4LEVEL_MASK           0x10UL              /**< Bit mask for PRS_CH4LEVEL */
#define PRS_SWLEVEL_CH4LEVEL_DEFAULT         (0x00000000UL << 4) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH4LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH5LEVEL                 (0x1UL << 5)        /**< Channel 5 Software Level */
#define _PRS_SWLEVEL_CH5LEVEL_SHIFT          5                   /**< Shift value for PRS_CH5LEVEL */
#define _PRS_SWLEVEL_CH5LEVEL_MASK           0x20UL              /**< Bit mask for PRS_CH5LEVEL */
#define PRS_SWLEVEL_CH5LEVEL_DEFAULT         (0x00000000UL << 5) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH5LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH6LEVEL                 (0x1UL << 6)        /**< Channel 6 Software Level */
#define _PRS_SWLEVEL_CH6LEVEL_SHIFT          6                   /**< Shift value for PRS_CH6LEVEL */
#define _PRS_SWLEVEL_CH6LEVEL_MASK           0x40UL              /**< Bit mask for PRS_CH6LEVEL */
#define PRS_SWLEVEL_CH6LEVEL_DEFAULT         (0x00000000UL << 6) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH6LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */
#define PRS_SWLEVEL_CH7LEVEL                 (0x1UL << 7)        /**< Channel 7 Software Level */
#define _PRS_SWLEVEL_CH7LEVEL_SHIFT          7                   /**< Shift value for PRS_CH7LEVEL */
#define _PRS_SWLEVEL_CH7LEVEL_MASK           0x80UL              /**< Bit mask for PRS_CH7LEVEL */
#define PRS_SWLEVEL_CH7LEVEL_DEFAULT         (0x00000000UL << 7) /**< Shifted mode DEFAULT for PRS_SWLEVEL */
#define _PRS_SWLEVEL_CH7LEVEL_DEFAULT        0x00000000UL        /**< Mode DEFAULT for PRS_SWLEVEL */

/* Bit fields for PRS CH_CTRL */
#define _PRS_CH_CTRL_RESETVALUE              0x00000000UL         /**< Default value for PRS_CH_CTRL */
#define _PRS_CH_CTRL_MASK                    0x033F0007UL         /**< Mask for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_SHIFT            0                    /**< Shift value for PRS_SIGSEL */
#define _PRS_CH_CTRL_SIGSEL_MASK             0x7UL                /**< Bit mask for PRS_SIGSEL */
#define PRS_CH_CTRL_SIGSEL_VCMPOUT           (0x00000000UL << 0)  /**< Shifted mode VCMPOUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP0OUT          (0x00000000UL << 0)  /**< Shifted mode ACMP0OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ACMP1OUT          (0x00000000UL << 0)  /**< Shifted mode ACMP1OUT for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_DAC0CH0           (0x00000000UL << 0)  /**< Shifted mode DAC0CH0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SINGLE        (0x00000000UL << 0)  /**< Shifted mode ADC0SINGLE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0IRTX        (0x00000000UL << 0)  /**< Shifted mode USART0IRTX for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0UF          (0x00000000UL << 0)  /**< Shifted mode TIMER0UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1UF          (0x00000000UL << 0)  /**< Shifted mode TIMER1UF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCOF             (0x00000000UL << 0)  /**< Shifted mode RTCOF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN0          (0x00000000UL << 0)  /**< Shifted mode GPIOPIN0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN8          (0x00000000UL << 0)  /**< Shifted mode GPIOPIN8 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_DAC0CH1           (0x00000001UL << 0)  /**< Shifted mode DAC0CH1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_ADC0SCAN          (0x00000001UL << 0)  /**< Shifted mode ADC0SCAN for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0TXC         (0x00000001UL << 0)  /**< Shifted mode USART0TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1TXC         (0x00000001UL << 0)  /**< Shifted mode USART1TXC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0OF          (0x00000001UL << 0)  /**< Shifted mode TIMER0OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1OF          (0x00000001UL << 0)  /**< Shifted mode TIMER1OF for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCOMP0          (0x00000001UL << 0)  /**< Shifted mode RTCCOMP0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN1          (0x00000001UL << 0)  /**< Shifted mode GPIOPIN1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN9          (0x00000001UL << 0)  /**< Shifted mode GPIOPIN9 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART0RXDATAV     (0x00000002UL << 0)  /**< Shifted mode USART0RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_USART1RXDATAV     (0x00000002UL << 0)  /**< Shifted mode USART1RXDATAV for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC0         (0x00000002UL << 0)  /**< Shifted mode TIMER0CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC0         (0x00000002UL << 0)  /**< Shifted mode TIMER1CC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_RTCCOMP1          (0x00000002UL << 0)  /**< Shifted mode RTCCOMP1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN2          (0x00000002UL << 0)  /**< Shifted mode GPIOPIN2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN10         (0x00000002UL << 0)  /**< Shifted mode GPIOPIN10 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC1         (0x00000003UL << 0)  /**< Shifted mode TIMER0CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC1         (0x00000003UL << 0)  /**< Shifted mode TIMER1CC1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN3          (0x00000003UL << 0)  /**< Shifted mode GPIOPIN3 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN11         (0x00000003UL << 0)  /**< Shifted mode GPIOPIN11 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER0CC2         (0x00000004UL << 0)  /**< Shifted mode TIMER0CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_TIMER1CC2         (0x00000004UL << 0)  /**< Shifted mode TIMER1CC2 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN4          (0x00000004UL << 0)  /**< Shifted mode GPIOPIN4 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN12         (0x00000004UL << 0)  /**< Shifted mode GPIOPIN12 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN5          (0x00000005UL << 0)  /**< Shifted mode GPIOPIN5 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN13         (0x00000005UL << 0)  /**< Shifted mode GPIOPIN13 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN6          (0x00000006UL << 0)  /**< Shifted mode GPIOPIN6 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN14         (0x00000006UL << 0)  /**< Shifted mode GPIOPIN14 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN7          (0x00000007UL << 0)  /**< Shifted mode GPIOPIN7 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SIGSEL_GPIOPIN15         (0x00000007UL << 0)  /**< Shifted mode GPIOPIN15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_VCMPOUT          0x00000000UL         /**< Mode VCMPOUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP0OUT         0x00000000UL         /**< Mode ACMP0OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ACMP1OUT         0x00000000UL         /**< Mode ACMP1OUT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_DAC0CH0          0x00000000UL         /**< Mode DAC0CH0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SINGLE       0x00000000UL         /**< Mode ADC0SINGLE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0IRTX       0x00000000UL         /**< Mode USART0IRTX for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0UF         0x00000000UL         /**< Mode TIMER0UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1UF         0x00000000UL         /**< Mode TIMER1UF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCOF            0x00000000UL         /**< Mode RTCOF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN0         0x00000000UL         /**< Mode GPIOPIN0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN8         0x00000000UL         /**< Mode GPIOPIN8 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_DAC0CH1          0x00000001UL         /**< Mode DAC0CH1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_ADC0SCAN         0x00000001UL         /**< Mode ADC0SCAN for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0TXC        0x00000001UL         /**< Mode USART0TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1TXC        0x00000001UL         /**< Mode USART1TXC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0OF         0x00000001UL         /**< Mode TIMER0OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1OF         0x00000001UL         /**< Mode TIMER1OF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCOMP0         0x00000001UL         /**< Mode RTCCOMP0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN1         0x00000001UL         /**< Mode GPIOPIN1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN9         0x00000001UL         /**< Mode GPIOPIN9 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART0RXDATAV    0x00000002UL         /**< Mode USART0RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_USART1RXDATAV    0x00000002UL         /**< Mode USART1RXDATAV for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC0        0x00000002UL         /**< Mode TIMER0CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC0        0x00000002UL         /**< Mode TIMER1CC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_RTCCOMP1         0x00000002UL         /**< Mode RTCCOMP1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN2         0x00000002UL         /**< Mode GPIOPIN2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN10        0x00000002UL         /**< Mode GPIOPIN10 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC1        0x00000003UL         /**< Mode TIMER0CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC1        0x00000003UL         /**< Mode TIMER1CC1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN3         0x00000003UL         /**< Mode GPIOPIN3 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN11        0x00000003UL         /**< Mode GPIOPIN11 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER0CC2        0x00000004UL         /**< Mode TIMER0CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_TIMER1CC2        0x00000004UL         /**< Mode TIMER1CC2 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN4         0x00000004UL         /**< Mode GPIOPIN4 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN12        0x00000004UL         /**< Mode GPIOPIN12 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN5         0x00000005UL         /**< Mode GPIOPIN5 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN13        0x00000005UL         /**< Mode GPIOPIN13 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN6         0x00000006UL         /**< Mode GPIOPIN6 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN14        0x00000006UL         /**< Mode GPIOPIN14 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN7         0x00000007UL         /**< Mode GPIOPIN7 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SIGSEL_GPIOPIN15        0x00000007UL         /**< Mode GPIOPIN15 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_SHIFT         16                   /**< Shift value for PRS_SOURCESEL */
#define _PRS_CH_CTRL_SOURCESEL_MASK          0x3F0000UL           /**< Bit mask for PRS_SOURCESEL */
#define PRS_CH_CTRL_SOURCESEL_NONE           (0x00000000UL << 16) /**< Shifted mode NONE for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_VCMP           (0x00000001UL << 16) /**< Shifted mode VCMP for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP0          (0x00000002UL << 16) /**< Shifted mode ACMP0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ACMP1          (0x00000003UL << 16) /**< Shifted mode ACMP1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_DAC0           (0x00000006UL << 16) /**< Shifted mode DAC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_ADC0           (0x00000008UL << 16) /**< Shifted mode ADC0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART0         (0x00000010UL << 16) /**< Shifted mode USART0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_USART1         (0x00000011UL << 16) /**< Shifted mode USART1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER0         (0x0000001CUL << 16) /**< Shifted mode TIMER0 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_TIMER1         (0x0000001DUL << 16) /**< Shifted mode TIMER1 for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_RTC            (0x00000028UL << 16) /**< Shifted mode RTC for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOL          (0x00000030UL << 16) /**< Shifted mode GPIOL for PRS_CH_CTRL */
#define PRS_CH_CTRL_SOURCESEL_GPIOH          (0x00000031UL << 16) /**< Shifted mode GPIOH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_NONE          0x00000000UL         /**< Mode NONE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_VCMP          0x00000001UL         /**< Mode VCMP for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP0         0x00000002UL         /**< Mode ACMP0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ACMP1         0x00000003UL         /**< Mode ACMP1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_DAC0          0x00000006UL         /**< Mode DAC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_ADC0          0x00000008UL         /**< Mode ADC0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART0        0x00000010UL         /**< Mode USART0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_USART1        0x00000011UL         /**< Mode USART1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER0        0x0000001CUL         /**< Mode TIMER0 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_TIMER1        0x0000001DUL         /**< Mode TIMER1 for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_RTC           0x00000028UL         /**< Mode RTC for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOL         0x00000030UL         /**< Mode GPIOL for PRS_CH_CTRL */
#define _PRS_CH_CTRL_SOURCESEL_GPIOH         0x00000031UL         /**< Mode GPIOH for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_SHIFT             24                   /**< Shift value for PRS_EDSEL */
#define _PRS_CH_CTRL_EDSEL_MASK              0x3000000UL          /**< Bit mask for PRS_EDSEL */
#define PRS_CH_CTRL_EDSEL_DEFAULT            (0x00000000UL << 24) /**< Shifted mode DEFAULT for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_OFF                (0x00000000UL << 24) /**< Shifted mode OFF for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_POSEDGE            (0x00000001UL << 24) /**< Shifted mode POSEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_NEGEDGE            (0x00000002UL << 24) /**< Shifted mode NEGEDGE for PRS_CH_CTRL */
#define PRS_CH_CTRL_EDSEL_BOTHEDGES          (0x00000003UL << 24) /**< Shifted mode BOTHEDGES for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_DEFAULT           0x00000000UL         /**< Mode DEFAULT for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_OFF               0x00000000UL         /**< Mode OFF for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_POSEDGE           0x00000001UL         /**< Mode POSEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_NEGEDGE           0x00000002UL         /**< Mode NEGEDGE for PRS_CH_CTRL */
#define _PRS_CH_CTRL_EDSEL_BOTHEDGES         0x00000003UL         /**< Mode BOTHEDGES for PRS_CH_CTRL */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DMA
 * @{
 *****************************************************************************/

/* Bit fields for DMA STATUS */
#define _DMA_STATUS_RESETVALUE                          0x10070000UL         /**< Default value for DMA_STATUS */
#define _DMA_STATUS_MASK                                0xF01F00F1UL         /**< Mask for DMA_STATUS */
#define DMA_STATUS_EN                                   (0x1UL << 0)         /**< DMA Enable Status */
#define _DMA_STATUS_EN_SHIFT                            0                    /**< Shift value for DMA_EN */
#define _DMA_STATUS_EN_MASK                             0x1UL                /**< Bit mask for DMA_EN */
#define DMA_STATUS_EN_DEFAULT                           (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_EN_DEFAULT                          0x00000000UL         /**< Mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_STATE_SHIFT                         4                    /**< Shift value for DMA_STATE */
#define _DMA_STATUS_STATE_MASK                          0xF0UL               /**< Bit mask for DMA_STATE */
#define DMA_STATUS_STATE_DEFAULT                        (0x00000000UL << 4)  /**< Shifted mode DEFAULT for DMA_STATUS */
#define DMA_STATUS_STATE_IDLE                           (0x00000000UL << 4)  /**< Shifted mode IDLE for DMA_STATUS */
#define DMA_STATUS_STATE_RDCHCTRLDATA                   (0x00000001UL << 4)  /**< Shifted mode RDCHCTRLDATA for DMA_STATUS */
#define DMA_STATUS_STATE_RDSRCENDPTR                    (0x00000002UL << 4)  /**< Shifted mode RDSRCENDPTR for DMA_STATUS */
#define DMA_STATUS_STATE_RDDSTENDPTR                    (0x00000003UL << 4)  /**< Shifted mode RDDSTENDPTR for DMA_STATUS */
#define DMA_STATUS_STATE_RDSRCDATA                      (0x00000004UL << 4)  /**< Shifted mode RDSRCDATA for DMA_STATUS */
#define DMA_STATUS_STATE_WRDSTDATA                      (0x00000005UL << 4)  /**< Shifted mode WRDSTDATA for DMA_STATUS */
#define DMA_STATUS_STATE_WAITREQCLR                     (0x00000006UL << 4)  /**< Shifted mode WAITREQCLR for DMA_STATUS */
#define DMA_STATUS_STATE_WRCHCTRLDATA                   (0x00000007UL << 4)  /**< Shifted mode WRCHCTRLDATA for DMA_STATUS */
#define DMA_STATUS_STATE_STALLED                        (0x00000008UL << 4)  /**< Shifted mode STALLED for DMA_STATUS */
#define DMA_STATUS_STATE_DONE                           (0x00000009UL << 4)  /**< Shifted mode DONE for DMA_STATUS */
#define DMA_STATUS_STATE_PERSCATTRANS                   (0x0000000AUL << 4)  /**< Shifted mode PERSCATTRANS for DMA_STATUS */
#define _DMA_STATUS_STATE_DEFAULT                       0x00000000UL         /**< Mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_STATE_IDLE                          0x00000000UL         /**< Mode IDLE for DMA_STATUS */
#define _DMA_STATUS_STATE_RDCHCTRLDATA                  0x00000001UL         /**< Mode RDCHCTRLDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_RDSRCENDPTR                   0x00000002UL         /**< Mode RDSRCENDPTR for DMA_STATUS */
#define _DMA_STATUS_STATE_RDDSTENDPTR                   0x00000003UL         /**< Mode RDDSTENDPTR for DMA_STATUS */
#define _DMA_STATUS_STATE_RDSRCDATA                     0x00000004UL         /**< Mode RDSRCDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_WRDSTDATA                     0x00000005UL         /**< Mode WRDSTDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_WAITREQCLR                    0x00000006UL         /**< Mode WAITREQCLR for DMA_STATUS */
#define _DMA_STATUS_STATE_WRCHCTRLDATA                  0x00000007UL         /**< Mode WRCHCTRLDATA for DMA_STATUS */
#define _DMA_STATUS_STATE_STALLED                       0x00000008UL         /**< Mode STALLED for DMA_STATUS */
#define _DMA_STATUS_STATE_DONE                          0x00000009UL         /**< Mode DONE for DMA_STATUS */
#define _DMA_STATUS_STATE_PERSCATTRANS                  0x0000000AUL         /**< Mode PERSCATTRANS for DMA_STATUS */
#define _DMA_STATUS_CHNUM_SHIFT                         16                   /**< Shift value for DMA_CHNUM */
#define _DMA_STATUS_CHNUM_MASK                          0x1F0000UL           /**< Bit mask for DMA_CHNUM */
#define DMA_STATUS_CHNUM_DEFAULT                        (0x00000007UL << 16) /**< Shifted mode DEFAULT for DMA_STATUS */
#define _DMA_STATUS_CHNUM_DEFAULT                       0x00000007UL         /**< Mode DEFAULT for DMA_STATUS */

/* Bit fields for DMA CONFIG */
#define _DMA_CONFIG_RESETVALUE                          0x00000000UL        /**< Default value for DMA_CONFIG */
#define _DMA_CONFIG_MASK                                0x000000E1UL        /**< Mask for DMA_CONFIG */
#define DMA_CONFIG_EN                                   (0x1UL << 0)        /**< Enable DMA */
#define _DMA_CONFIG_EN_SHIFT                            0                   /**< Shift value for DMA_EN */
#define _DMA_CONFIG_EN_MASK                             0x1UL               /**< Bit mask for DMA_EN */
#define DMA_CONFIG_EN_DEFAULT                           (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_EN_DEFAULT                          0x00000000UL        /**< Mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_CHPROT_SHIFT                        5                   /**< Shift value for DMA_CHPROT */
#define _DMA_CONFIG_CHPROT_MASK                         0xE0UL              /**< Bit mask for DMA_CHPROT */
#define DMA_CONFIG_CHPROT_DEFAULT                       (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CONFIG */
#define _DMA_CONFIG_CHPROT_DEFAULT                      0x00000000UL        /**< Mode DEFAULT for DMA_CONFIG */

/* Bit fields for DMA CTRLBASE */
#define _DMA_CTRLBASE_RESETVALUE                        0x00000000UL        /**< Default value for DMA_CTRLBASE */
#define _DMA_CTRLBASE_MASK                              0xFFFFFFFFUL        /**< Mask for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_SHIFT                    0                   /**< Shift value for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_MASK                     0xFFFFFFFFUL        /**< Bit mask for DMA_CTRLBASE */
#define DMA_CTRLBASE_CTRLBASE_DEFAULT                   (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CTRLBASE */
#define _DMA_CTRLBASE_CTRLBASE_DEFAULT                  0x00000000UL        /**< Mode DEFAULT for DMA_CTRLBASE */

/* Bit fields for DMA ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_RESETVALUE                     0x00000080UL        /**< Default value for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_MASK                           0xFFFFFFFFUL        /**< Mask for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_SHIFT              0                   /**< Shift value for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_MASK               0xFFFFFFFFUL        /**< Bit mask for DMA_ALTCTRLBASE */
#define DMA_ALTCTRLBASE_ALTCTRLBASE_DEFAULT             (0x00000080UL << 0) /**< Shifted mode DEFAULT for DMA_ALTCTRLBASE */
#define _DMA_ALTCTRLBASE_ALTCTRLBASE_DEFAULT            0x00000080UL        /**< Mode DEFAULT for DMA_ALTCTRLBASE */

/* Bit fields for DMA WAITSTATUS */
#define _DMA_WAITSTATUS_RESETVALUE                      0x000000FFUL        /**< Default value for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_MASK                            0xFFFFFFFFUL        /**< Mask for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_SHIFT                0                   /**< Shift value for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_MASK                 0xFFFFFFFFUL        /**< Bit mask for DMA_WAITSTATUS */
#define DMA_WAITSTATUS_WAITSTATUS_DEFAULT               (0x000000FFUL << 0) /**< Shifted mode DEFAULT for DMA_WAITSTATUS */
#define _DMA_WAITSTATUS_WAITSTATUS_DEFAULT              0x000000FFUL        /**< Mode DEFAULT for DMA_WAITSTATUS */

/* Bit fields for DMA CHSWREQ */
#define _DMA_CHSWREQ_RESETVALUE                         0x00000000UL        /**< Default value for DMA_CHSWREQ */
#define _DMA_CHSWREQ_MASK                               0x000000FFUL        /**< Mask for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH0SWREQ                            (0x1UL << 0)        /**< Channel 0 Software Request */
#define _DMA_CHSWREQ_CH0SWREQ_SHIFT                     0                   /**< Shift value for DMA_CH0SWREQ */
#define _DMA_CHSWREQ_CH0SWREQ_MASK                      0x1UL               /**< Bit mask for DMA_CH0SWREQ */
#define DMA_CHSWREQ_CH0SWREQ_DEFAULT                    (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH0SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH1SWREQ                            (0x1UL << 1)        /**< Channel 1 Software Request */
#define _DMA_CHSWREQ_CH1SWREQ_SHIFT                     1                   /**< Shift value for DMA_CH1SWREQ */
#define _DMA_CHSWREQ_CH1SWREQ_MASK                      0x2UL               /**< Bit mask for DMA_CH1SWREQ */
#define DMA_CHSWREQ_CH1SWREQ_DEFAULT                    (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH1SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH2SWREQ                            (0x1UL << 2)        /**< Channel 2 Software Request */
#define _DMA_CHSWREQ_CH2SWREQ_SHIFT                     2                   /**< Shift value for DMA_CH2SWREQ */
#define _DMA_CHSWREQ_CH2SWREQ_MASK                      0x4UL               /**< Bit mask for DMA_CH2SWREQ */
#define DMA_CHSWREQ_CH2SWREQ_DEFAULT                    (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH2SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH3SWREQ                            (0x1UL << 3)        /**< Channel 3 Software Request */
#define _DMA_CHSWREQ_CH3SWREQ_SHIFT                     3                   /**< Shift value for DMA_CH3SWREQ */
#define _DMA_CHSWREQ_CH3SWREQ_MASK                      0x8UL               /**< Bit mask for DMA_CH3SWREQ */
#define DMA_CHSWREQ_CH3SWREQ_DEFAULT                    (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH3SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH4SWREQ                            (0x1UL << 4)        /**< Channel 4 Software Request */
#define _DMA_CHSWREQ_CH4SWREQ_SHIFT                     4                   /**< Shift value for DMA_CH4SWREQ */
#define _DMA_CHSWREQ_CH4SWREQ_MASK                      0x10UL              /**< Bit mask for DMA_CH4SWREQ */
#define DMA_CHSWREQ_CH4SWREQ_DEFAULT                    (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH4SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH5SWREQ                            (0x1UL << 5)        /**< Channel 5 Software Request */
#define _DMA_CHSWREQ_CH5SWREQ_SHIFT                     5                   /**< Shift value for DMA_CH5SWREQ */
#define _DMA_CHSWREQ_CH5SWREQ_MASK                      0x20UL              /**< Bit mask for DMA_CH5SWREQ */
#define DMA_CHSWREQ_CH5SWREQ_DEFAULT                    (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH5SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH6SWREQ                            (0x1UL << 6)        /**< Channel 6 Software Request */
#define _DMA_CHSWREQ_CH6SWREQ_SHIFT                     6                   /**< Shift value for DMA_CH6SWREQ */
#define _DMA_CHSWREQ_CH6SWREQ_MASK                      0x40UL              /**< Bit mask for DMA_CH6SWREQ */
#define DMA_CHSWREQ_CH6SWREQ_DEFAULT                    (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH6SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */
#define DMA_CHSWREQ_CH7SWREQ                            (0x1UL << 7)        /**< Channel 7 Software Request */
#define _DMA_CHSWREQ_CH7SWREQ_SHIFT                     7                   /**< Shift value for DMA_CH7SWREQ */
#define _DMA_CHSWREQ_CH7SWREQ_MASK                      0x80UL              /**< Bit mask for DMA_CH7SWREQ */
#define DMA_CHSWREQ_CH7SWREQ_DEFAULT                    (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHSWREQ */
#define _DMA_CHSWREQ_CH7SWREQ_DEFAULT                   0x00000000UL        /**< Mode DEFAULT for DMA_CHSWREQ */

/* Bit fields for DMA CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_RESETVALUE                     0x00000000UL        /**< Default value for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_MASK                           0x000000FFUL        /**< Mask for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH0USEBURSTS                    (0x1UL << 0)        /**< Channel 0 Useburst Set */
#define _DMA_CHUSEBURSTS_CH0USEBURSTS_SHIFT             0                   /**< Shift value for DMA_CH0USEBURSTS */
#define _DMA_CHUSEBURSTS_CH0USEBURSTS_MASK              0x1UL               /**< Bit mask for DMA_CH0USEBURSTS */
#define DMA_CHUSEBURSTS_CH0USEBURSTS_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH0USEBURSTS_SINGLEANDBURST     (0x00000000UL << 0) /**< Shifted mode SINGLEANDBURST for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH0USEBURSTS_BURSTONLY          (0x00000001UL << 0) /**< Shifted mode BURSTONLY for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH0USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH0USEBURSTS_SINGLEANDBURST    0x00000000UL        /**< Mode SINGLEANDBURST for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH0USEBURSTS_BURSTONLY         0x00000001UL        /**< Mode BURSTONLY for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH1USEBURSTS                    (0x1UL << 1)        /**< Channel 1 Useburst Set */
#define _DMA_CHUSEBURSTS_CH1USEBURSTS_SHIFT             1                   /**< Shift value for DMA_CH1USEBURSTS */
#define _DMA_CHUSEBURSTS_CH1USEBURSTS_MASK              0x2UL               /**< Bit mask for DMA_CH1USEBURSTS */
#define DMA_CHUSEBURSTS_CH1USEBURSTS_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH1USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH2USEBURSTS                    (0x1UL << 2)        /**< Channel 2 Useburst Set */
#define _DMA_CHUSEBURSTS_CH2USEBURSTS_SHIFT             2                   /**< Shift value for DMA_CH2USEBURSTS */
#define _DMA_CHUSEBURSTS_CH2USEBURSTS_MASK              0x4UL               /**< Bit mask for DMA_CH2USEBURSTS */
#define DMA_CHUSEBURSTS_CH2USEBURSTS_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH2USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH3USEBURSTS                    (0x1UL << 3)        /**< Channel 3 Useburst Set */
#define _DMA_CHUSEBURSTS_CH3USEBURSTS_SHIFT             3                   /**< Shift value for DMA_CH3USEBURSTS */
#define _DMA_CHUSEBURSTS_CH3USEBURSTS_MASK              0x8UL               /**< Bit mask for DMA_CH3USEBURSTS */
#define DMA_CHUSEBURSTS_CH3USEBURSTS_DEFAULT            (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH3USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH4USEBURSTS                    (0x1UL << 4)        /**< Channel 4 Useburst Set */
#define _DMA_CHUSEBURSTS_CH4USEBURSTS_SHIFT             4                   /**< Shift value for DMA_CH4USEBURSTS */
#define _DMA_CHUSEBURSTS_CH4USEBURSTS_MASK              0x10UL              /**< Bit mask for DMA_CH4USEBURSTS */
#define DMA_CHUSEBURSTS_CH4USEBURSTS_DEFAULT            (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH4USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH5USEBURSTS                    (0x1UL << 5)        /**< Channel 5 Useburst Set */
#define _DMA_CHUSEBURSTS_CH5USEBURSTS_SHIFT             5                   /**< Shift value for DMA_CH5USEBURSTS */
#define _DMA_CHUSEBURSTS_CH5USEBURSTS_MASK              0x20UL              /**< Bit mask for DMA_CH5USEBURSTS */
#define DMA_CHUSEBURSTS_CH5USEBURSTS_DEFAULT            (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH5USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH6USEBURSTS                    (0x1UL << 6)        /**< Channel 6 Useburst Set */
#define _DMA_CHUSEBURSTS_CH6USEBURSTS_SHIFT             6                   /**< Shift value for DMA_CH6USEBURSTS */
#define _DMA_CHUSEBURSTS_CH6USEBURSTS_MASK              0x40UL              /**< Bit mask for DMA_CH6USEBURSTS */
#define DMA_CHUSEBURSTS_CH6USEBURSTS_DEFAULT            (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH6USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */
#define DMA_CHUSEBURSTS_CH7USEBURSTS                    (0x1UL << 7)        /**< Channel 7 Useburst Set */
#define _DMA_CHUSEBURSTS_CH7USEBURSTS_SHIFT             7                   /**< Shift value for DMA_CH7USEBURSTS */
#define _DMA_CHUSEBURSTS_CH7USEBURSTS_MASK              0x80UL              /**< Bit mask for DMA_CH7USEBURSTS */
#define DMA_CHUSEBURSTS_CH7USEBURSTS_DEFAULT            (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTS */
#define _DMA_CHUSEBURSTS_CH7USEBURSTS_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTS */

/* Bit fields for DMA CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_RESETVALUE                     0x00000000UL        /**< Default value for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_MASK                           0x000000FFUL        /**< Mask for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH0USEBURSTC                    (0x1UL << 0)        /**< Channel 0 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH0USEBURSTC_SHIFT             0                   /**< Shift value for DMA_CH0USEBURSTC */
#define _DMA_CHUSEBURSTC_CH0USEBURSTC_MASK              0x1UL               /**< Bit mask for DMA_CH0USEBURSTC */
#define DMA_CHUSEBURSTC_CH0USEBURSTC_DEFAULT            (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH0USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH1USEBURSTC                    (0x1UL << 1)        /**< Channel 1 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH1USEBURSTC_SHIFT             1                   /**< Shift value for DMA_CH1USEBURSTC */
#define _DMA_CHUSEBURSTC_CH1USEBURSTC_MASK              0x2UL               /**< Bit mask for DMA_CH1USEBURSTC */
#define DMA_CHUSEBURSTC_CH1USEBURSTC_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH1USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH2USEBURSTC                    (0x1UL << 2)        /**< Channel 2 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH2USEBURSTC_SHIFT             2                   /**< Shift value for DMA_CH2USEBURSTC */
#define _DMA_CHUSEBURSTC_CH2USEBURSTC_MASK              0x4UL               /**< Bit mask for DMA_CH2USEBURSTC */
#define DMA_CHUSEBURSTC_CH2USEBURSTC_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH2USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH3USEBURSTC                    (0x1UL << 3)        /**< Channel 3 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH3USEBURSTC_SHIFT             3                   /**< Shift value for DMA_CH3USEBURSTC */
#define _DMA_CHUSEBURSTC_CH3USEBURSTC_MASK              0x8UL               /**< Bit mask for DMA_CH3USEBURSTC */
#define DMA_CHUSEBURSTC_CH3USEBURSTC_DEFAULT            (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH3USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH4USEBURSTC                    (0x1UL << 4)        /**< Channel 4 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH4USEBURSTC_SHIFT             4                   /**< Shift value for DMA_CH4USEBURSTC */
#define _DMA_CHUSEBURSTC_CH4USEBURSTC_MASK              0x10UL              /**< Bit mask for DMA_CH4USEBURSTC */
#define DMA_CHUSEBURSTC_CH4USEBURSTC_DEFAULT            (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH4USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH5USEBURSTC                    (0x1UL << 5)        /**< Channel 5 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH5USEBURSTC_SHIFT             5                   /**< Shift value for DMA_CH5USEBURSTC */
#define _DMA_CHUSEBURSTC_CH5USEBURSTC_MASK              0x20UL              /**< Bit mask for DMA_CH5USEBURSTC */
#define DMA_CHUSEBURSTC_CH5USEBURSTC_DEFAULT            (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH5USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH6USEBURSTC                    (0x1UL << 6)        /**< Channel 6 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH6USEBURSTC_SHIFT             6                   /**< Shift value for DMA_CH6USEBURSTC */
#define _DMA_CHUSEBURSTC_CH6USEBURSTC_MASK              0x40UL              /**< Bit mask for DMA_CH6USEBURSTC */
#define DMA_CHUSEBURSTC_CH6USEBURSTC_DEFAULT            (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH6USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */
#define DMA_CHUSEBURSTC_CH7USEBURSTC                    (0x1UL << 7)        /**< Channel 7 Useburst Clear */
#define _DMA_CHUSEBURSTC_CH7USEBURSTC_SHIFT             7                   /**< Shift value for DMA_CH7USEBURSTC */
#define _DMA_CHUSEBURSTC_CH7USEBURSTC_MASK              0x80UL              /**< Bit mask for DMA_CH7USEBURSTC */
#define DMA_CHUSEBURSTC_CH7USEBURSTC_DEFAULT            (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHUSEBURSTC */
#define _DMA_CHUSEBURSTC_CH7USEBURSTC_DEFAULT           0x00000000UL        /**< Mode DEFAULT for DMA_CHUSEBURSTC */

/* Bit fields for DMA CHREQMASKS */
#define _DMA_CHREQMASKS_RESETVALUE                      0x00000000UL        /**< Default value for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_MASK                            0x000000FFUL        /**< Mask for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH0REQMASKS                      (0x1UL << 0)        /**< Channel 0 Request Mask Set */
#define _DMA_CHREQMASKS_CH0REQMASKS_SHIFT               0                   /**< Shift value for DMA_CH0REQMASKS */
#define _DMA_CHREQMASKS_CH0REQMASKS_MASK                0x1UL               /**< Bit mask for DMA_CH0REQMASKS */
#define DMA_CHREQMASKS_CH0REQMASKS_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH0REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH1REQMASKS                      (0x1UL << 1)        /**< Channel 1 Request Mask Set */
#define _DMA_CHREQMASKS_CH1REQMASKS_SHIFT               1                   /**< Shift value for DMA_CH1REQMASKS */
#define _DMA_CHREQMASKS_CH1REQMASKS_MASK                0x2UL               /**< Bit mask for DMA_CH1REQMASKS */
#define DMA_CHREQMASKS_CH1REQMASKS_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH1REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH2REQMASKS                      (0x1UL << 2)        /**< Channel 2 Request Mask Set */
#define _DMA_CHREQMASKS_CH2REQMASKS_SHIFT               2                   /**< Shift value for DMA_CH2REQMASKS */
#define _DMA_CHREQMASKS_CH2REQMASKS_MASK                0x4UL               /**< Bit mask for DMA_CH2REQMASKS */
#define DMA_CHREQMASKS_CH2REQMASKS_DEFAULT              (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH2REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH3REQMASKS                      (0x1UL << 3)        /**< Channel 3 Request Mask Set */
#define _DMA_CHREQMASKS_CH3REQMASKS_SHIFT               3                   /**< Shift value for DMA_CH3REQMASKS */
#define _DMA_CHREQMASKS_CH3REQMASKS_MASK                0x8UL               /**< Bit mask for DMA_CH3REQMASKS */
#define DMA_CHREQMASKS_CH3REQMASKS_DEFAULT              (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH3REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH4REQMASKS                      (0x1UL << 4)        /**< Channel 4 Request Mask Set */
#define _DMA_CHREQMASKS_CH4REQMASKS_SHIFT               4                   /**< Shift value for DMA_CH4REQMASKS */
#define _DMA_CHREQMASKS_CH4REQMASKS_MASK                0x10UL              /**< Bit mask for DMA_CH4REQMASKS */
#define DMA_CHREQMASKS_CH4REQMASKS_DEFAULT              (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH4REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH5REQMASKS                      (0x1UL << 5)        /**< Channel 5 Request Mask Set */
#define _DMA_CHREQMASKS_CH5REQMASKS_SHIFT               5                   /**< Shift value for DMA_CH5REQMASKS */
#define _DMA_CHREQMASKS_CH5REQMASKS_MASK                0x20UL              /**< Bit mask for DMA_CH5REQMASKS */
#define DMA_CHREQMASKS_CH5REQMASKS_DEFAULT              (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH5REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH6REQMASKS                      (0x1UL << 6)        /**< Channel 6 Request Mask Set */
#define _DMA_CHREQMASKS_CH6REQMASKS_SHIFT               6                   /**< Shift value for DMA_CH6REQMASKS */
#define _DMA_CHREQMASKS_CH6REQMASKS_MASK                0x40UL              /**< Bit mask for DMA_CH6REQMASKS */
#define DMA_CHREQMASKS_CH6REQMASKS_DEFAULT              (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH6REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */
#define DMA_CHREQMASKS_CH7REQMASKS                      (0x1UL << 7)        /**< Channel 7 Request Mask Set */
#define _DMA_CHREQMASKS_CH7REQMASKS_SHIFT               7                   /**< Shift value for DMA_CH7REQMASKS */
#define _DMA_CHREQMASKS_CH7REQMASKS_MASK                0x80UL              /**< Bit mask for DMA_CH7REQMASKS */
#define DMA_CHREQMASKS_CH7REQMASKS_DEFAULT              (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHREQMASKS */
#define _DMA_CHREQMASKS_CH7REQMASKS_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKS */

/* Bit fields for DMA CHREQMASKC */
#define _DMA_CHREQMASKC_RESETVALUE                      0x00000000UL        /**< Default value for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_MASK                            0x000000FFUL        /**< Mask for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH0REQMASKC                      (0x1UL << 0)        /**< Channel 0 Request Mask Clear */
#define _DMA_CHREQMASKC_CH0REQMASKC_SHIFT               0                   /**< Shift value for DMA_CH0REQMASKC */
#define _DMA_CHREQMASKC_CH0REQMASKC_MASK                0x1UL               /**< Bit mask for DMA_CH0REQMASKC */
#define DMA_CHREQMASKC_CH0REQMASKC_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH0REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH1REQMASKC                      (0x1UL << 1)        /**< Channel 1 Request Mask Clear */
#define _DMA_CHREQMASKC_CH1REQMASKC_SHIFT               1                   /**< Shift value for DMA_CH1REQMASKC */
#define _DMA_CHREQMASKC_CH1REQMASKC_MASK                0x2UL               /**< Bit mask for DMA_CH1REQMASKC */
#define DMA_CHREQMASKC_CH1REQMASKC_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH1REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH2REQMASKC                      (0x1UL << 2)        /**< Channel 2 Request Mask Clear */
#define _DMA_CHREQMASKC_CH2REQMASKC_SHIFT               2                   /**< Shift value for DMA_CH2REQMASKC */
#define _DMA_CHREQMASKC_CH2REQMASKC_MASK                0x4UL               /**< Bit mask for DMA_CH2REQMASKC */
#define DMA_CHREQMASKC_CH2REQMASKC_DEFAULT              (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH2REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH3REQMASKC                      (0x1UL << 3)        /**< Channel 3 Request Mask Clear */
#define _DMA_CHREQMASKC_CH3REQMASKC_SHIFT               3                   /**< Shift value for DMA_CH3REQMASKC */
#define _DMA_CHREQMASKC_CH3REQMASKC_MASK                0x8UL               /**< Bit mask for DMA_CH3REQMASKC */
#define DMA_CHREQMASKC_CH3REQMASKC_DEFAULT              (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH3REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH4REQMASKC                      (0x1UL << 4)        /**< Channel 4 Request Mask Clear */
#define _DMA_CHREQMASKC_CH4REQMASKC_SHIFT               4                   /**< Shift value for DMA_CH4REQMASKC */
#define _DMA_CHREQMASKC_CH4REQMASKC_MASK                0x10UL              /**< Bit mask for DMA_CH4REQMASKC */
#define DMA_CHREQMASKC_CH4REQMASKC_DEFAULT              (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH4REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH5REQMASKC                      (0x1UL << 5)        /**< Channel 5 Request Mask Clear */
#define _DMA_CHREQMASKC_CH5REQMASKC_SHIFT               5                   /**< Shift value for DMA_CH5REQMASKC */
#define _DMA_CHREQMASKC_CH5REQMASKC_MASK                0x20UL              /**< Bit mask for DMA_CH5REQMASKC */
#define DMA_CHREQMASKC_CH5REQMASKC_DEFAULT              (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH5REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH6REQMASKC                      (0x1UL << 6)        /**< Channel 6 Request Mask Clear */
#define _DMA_CHREQMASKC_CH6REQMASKC_SHIFT               6                   /**< Shift value for DMA_CH6REQMASKC */
#define _DMA_CHREQMASKC_CH6REQMASKC_MASK                0x40UL              /**< Bit mask for DMA_CH6REQMASKC */
#define DMA_CHREQMASKC_CH6REQMASKC_DEFAULT              (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH6REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */
#define DMA_CHREQMASKC_CH7REQMASKC                      (0x1UL << 7)        /**< Channel 7 Request Mask Clear */
#define _DMA_CHREQMASKC_CH7REQMASKC_SHIFT               7                   /**< Shift value for DMA_CH7REQMASKC */
#define _DMA_CHREQMASKC_CH7REQMASKC_MASK                0x80UL              /**< Bit mask for DMA_CH7REQMASKC */
#define DMA_CHREQMASKC_CH7REQMASKC_DEFAULT              (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHREQMASKC */
#define _DMA_CHREQMASKC_CH7REQMASKC_DEFAULT             0x00000000UL        /**< Mode DEFAULT for DMA_CHREQMASKC */

/* Bit fields for DMA CHENS */
#define _DMA_CHENS_RESETVALUE                           0x00000000UL        /**< Default value for DMA_CHENS */
#define _DMA_CHENS_MASK                                 0x000000FFUL        /**< Mask for DMA_CHENS */
#define DMA_CHENS_CH0ENS                                (0x1UL << 0)        /**< Channel 0 Enable Set */
#define _DMA_CHENS_CH0ENS_SHIFT                         0                   /**< Shift value for DMA_CH0ENS */
#define _DMA_CHENS_CH0ENS_MASK                          0x1UL               /**< Bit mask for DMA_CH0ENS */
#define DMA_CHENS_CH0ENS_DEFAULT                        (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH0ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH1ENS                                (0x1UL << 1)        /**< Channel 1 Enable Set */
#define _DMA_CHENS_CH1ENS_SHIFT                         1                   /**< Shift value for DMA_CH1ENS */
#define _DMA_CHENS_CH1ENS_MASK                          0x2UL               /**< Bit mask for DMA_CH1ENS */
#define DMA_CHENS_CH1ENS_DEFAULT                        (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH1ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH2ENS                                (0x1UL << 2)        /**< Channel 2 Enable Set */
#define _DMA_CHENS_CH2ENS_SHIFT                         2                   /**< Shift value for DMA_CH2ENS */
#define _DMA_CHENS_CH2ENS_MASK                          0x4UL               /**< Bit mask for DMA_CH2ENS */
#define DMA_CHENS_CH2ENS_DEFAULT                        (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH2ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH3ENS                                (0x1UL << 3)        /**< Channel 3 Enable Set */
#define _DMA_CHENS_CH3ENS_SHIFT                         3                   /**< Shift value for DMA_CH3ENS */
#define _DMA_CHENS_CH3ENS_MASK                          0x8UL               /**< Bit mask for DMA_CH3ENS */
#define DMA_CHENS_CH3ENS_DEFAULT                        (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH3ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH4ENS                                (0x1UL << 4)        /**< Channel 4 Enable Set */
#define _DMA_CHENS_CH4ENS_SHIFT                         4                   /**< Shift value for DMA_CH4ENS */
#define _DMA_CHENS_CH4ENS_MASK                          0x10UL              /**< Bit mask for DMA_CH4ENS */
#define DMA_CHENS_CH4ENS_DEFAULT                        (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH4ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH5ENS                                (0x1UL << 5)        /**< Channel 5 Enable Set */
#define _DMA_CHENS_CH5ENS_SHIFT                         5                   /**< Shift value for DMA_CH5ENS */
#define _DMA_CHENS_CH5ENS_MASK                          0x20UL              /**< Bit mask for DMA_CH5ENS */
#define DMA_CHENS_CH5ENS_DEFAULT                        (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH5ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH6ENS                                (0x1UL << 6)        /**< Channel 6 Enable Set */
#define _DMA_CHENS_CH6ENS_SHIFT                         6                   /**< Shift value for DMA_CH6ENS */
#define _DMA_CHENS_CH6ENS_MASK                          0x40UL              /**< Bit mask for DMA_CH6ENS */
#define DMA_CHENS_CH6ENS_DEFAULT                        (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH6ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */
#define DMA_CHENS_CH7ENS                                (0x1UL << 7)        /**< Channel 7 Enable Set */
#define _DMA_CHENS_CH7ENS_SHIFT                         7                   /**< Shift value for DMA_CH7ENS */
#define _DMA_CHENS_CH7ENS_MASK                          0x80UL              /**< Bit mask for DMA_CH7ENS */
#define DMA_CHENS_CH7ENS_DEFAULT                        (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHENS */
#define _DMA_CHENS_CH7ENS_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENS */

/* Bit fields for DMA CHENC */
#define _DMA_CHENC_RESETVALUE                           0x00000000UL        /**< Default value for DMA_CHENC */
#define _DMA_CHENC_MASK                                 0x000000FFUL        /**< Mask for DMA_CHENC */
#define DMA_CHENC_CH0ENC                                (0x1UL << 0)        /**< Channel 0 Enable Clear */
#define _DMA_CHENC_CH0ENC_SHIFT                         0                   /**< Shift value for DMA_CH0ENC */
#define _DMA_CHENC_CH0ENC_MASK                          0x1UL               /**< Bit mask for DMA_CH0ENC */
#define DMA_CHENC_CH0ENC_DEFAULT                        (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH0ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH1ENC                                (0x1UL << 1)        /**< Channel 1 Enable Clear */
#define _DMA_CHENC_CH1ENC_SHIFT                         1                   /**< Shift value for DMA_CH1ENC */
#define _DMA_CHENC_CH1ENC_MASK                          0x2UL               /**< Bit mask for DMA_CH1ENC */
#define DMA_CHENC_CH1ENC_DEFAULT                        (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH1ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH2ENC                                (0x1UL << 2)        /**< Channel 2 Enable Clear */
#define _DMA_CHENC_CH2ENC_SHIFT                         2                   /**< Shift value for DMA_CH2ENC */
#define _DMA_CHENC_CH2ENC_MASK                          0x4UL               /**< Bit mask for DMA_CH2ENC */
#define DMA_CHENC_CH2ENC_DEFAULT                        (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH2ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH3ENC                                (0x1UL << 3)        /**< Channel 3 Enable Clear */
#define _DMA_CHENC_CH3ENC_SHIFT                         3                   /**< Shift value for DMA_CH3ENC */
#define _DMA_CHENC_CH3ENC_MASK                          0x8UL               /**< Bit mask for DMA_CH3ENC */
#define DMA_CHENC_CH3ENC_DEFAULT                        (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH3ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH4ENC                                (0x1UL << 4)        /**< Channel 4 Enable Clear */
#define _DMA_CHENC_CH4ENC_SHIFT                         4                   /**< Shift value for DMA_CH4ENC */
#define _DMA_CHENC_CH4ENC_MASK                          0x10UL              /**< Bit mask for DMA_CH4ENC */
#define DMA_CHENC_CH4ENC_DEFAULT                        (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH4ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH5ENC                                (0x1UL << 5)        /**< Channel 5 Enable Clear */
#define _DMA_CHENC_CH5ENC_SHIFT                         5                   /**< Shift value for DMA_CH5ENC */
#define _DMA_CHENC_CH5ENC_MASK                          0x20UL              /**< Bit mask for DMA_CH5ENC */
#define DMA_CHENC_CH5ENC_DEFAULT                        (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH5ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH6ENC                                (0x1UL << 6)        /**< Channel 6 Enable Clear */
#define _DMA_CHENC_CH6ENC_SHIFT                         6                   /**< Shift value for DMA_CH6ENC */
#define _DMA_CHENC_CH6ENC_MASK                          0x40UL              /**< Bit mask for DMA_CH6ENC */
#define DMA_CHENC_CH6ENC_DEFAULT                        (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH6ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */
#define DMA_CHENC_CH7ENC                                (0x1UL << 7)        /**< Channel 7 Enable Clear */
#define _DMA_CHENC_CH7ENC_SHIFT                         7                   /**< Shift value for DMA_CH7ENC */
#define _DMA_CHENC_CH7ENC_MASK                          0x80UL              /**< Bit mask for DMA_CH7ENC */
#define DMA_CHENC_CH7ENC_DEFAULT                        (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHENC */
#define _DMA_CHENC_CH7ENC_DEFAULT                       0x00000000UL        /**< Mode DEFAULT for DMA_CHENC */

/* Bit fields for DMA CHALTS */
#define _DMA_CHALTS_RESETVALUE                          0x00000000UL        /**< Default value for DMA_CHALTS */
#define _DMA_CHALTS_MASK                                0x000000FFUL        /**< Mask for DMA_CHALTS */
#define DMA_CHALTS_CH0ALTS                              (0x1UL << 0)        /**< Channel 0 Alternate Structure Set */
#define _DMA_CHALTS_CH0ALTS_SHIFT                       0                   /**< Shift value for DMA_CH0ALTS */
#define _DMA_CHALTS_CH0ALTS_MASK                        0x1UL               /**< Bit mask for DMA_CH0ALTS */
#define DMA_CHALTS_CH0ALTS_DEFAULT                      (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH0ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH1ALTS                              (0x1UL << 1)        /**< Channel 1 Alternate Structure Set */
#define _DMA_CHALTS_CH1ALTS_SHIFT                       1                   /**< Shift value for DMA_CH1ALTS */
#define _DMA_CHALTS_CH1ALTS_MASK                        0x2UL               /**< Bit mask for DMA_CH1ALTS */
#define DMA_CHALTS_CH1ALTS_DEFAULT                      (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH1ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH2ALTS                              (0x1UL << 2)        /**< Channel 2 Alternate Structure Set */
#define _DMA_CHALTS_CH2ALTS_SHIFT                       2                   /**< Shift value for DMA_CH2ALTS */
#define _DMA_CHALTS_CH2ALTS_MASK                        0x4UL               /**< Bit mask for DMA_CH2ALTS */
#define DMA_CHALTS_CH2ALTS_DEFAULT                      (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH2ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH3ALTS                              (0x1UL << 3)        /**< Channel 3 Alternate Structure Set */
#define _DMA_CHALTS_CH3ALTS_SHIFT                       3                   /**< Shift value for DMA_CH3ALTS */
#define _DMA_CHALTS_CH3ALTS_MASK                        0x8UL               /**< Bit mask for DMA_CH3ALTS */
#define DMA_CHALTS_CH3ALTS_DEFAULT                      (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH3ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH4ALTS                              (0x1UL << 4)        /**< Channel 4 Alternate Structure Set */
#define _DMA_CHALTS_CH4ALTS_SHIFT                       4                   /**< Shift value for DMA_CH4ALTS */
#define _DMA_CHALTS_CH4ALTS_MASK                        0x10UL              /**< Bit mask for DMA_CH4ALTS */
#define DMA_CHALTS_CH4ALTS_DEFAULT                      (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH4ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH5ALTS                              (0x1UL << 5)        /**< Channel 5 Alternate Structure Set */
#define _DMA_CHALTS_CH5ALTS_SHIFT                       5                   /**< Shift value for DMA_CH5ALTS */
#define _DMA_CHALTS_CH5ALTS_MASK                        0x20UL              /**< Bit mask for DMA_CH5ALTS */
#define DMA_CHALTS_CH5ALTS_DEFAULT                      (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH5ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH6ALTS                              (0x1UL << 6)        /**< Channel 6 Alternate Structure Set */
#define _DMA_CHALTS_CH6ALTS_SHIFT                       6                   /**< Shift value for DMA_CH6ALTS */
#define _DMA_CHALTS_CH6ALTS_MASK                        0x40UL              /**< Bit mask for DMA_CH6ALTS */
#define DMA_CHALTS_CH6ALTS_DEFAULT                      (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH6ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */
#define DMA_CHALTS_CH7ALTS                              (0x1UL << 7)        /**< Channel 7 Alternate Structure Set */
#define _DMA_CHALTS_CH7ALTS_SHIFT                       7                   /**< Shift value for DMA_CH7ALTS */
#define _DMA_CHALTS_CH7ALTS_MASK                        0x80UL              /**< Bit mask for DMA_CH7ALTS */
#define DMA_CHALTS_CH7ALTS_DEFAULT                      (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHALTS */
#define _DMA_CHALTS_CH7ALTS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTS */

/* Bit fields for DMA CHALTC */
#define _DMA_CHALTC_RESETVALUE                          0x00000000UL        /**< Default value for DMA_CHALTC */
#define _DMA_CHALTC_MASK                                0x000000FFUL        /**< Mask for DMA_CHALTC */
#define DMA_CHALTC_CH0ALTC                              (0x1UL << 0)        /**< Channel 0 Alternate Clear */
#define _DMA_CHALTC_CH0ALTC_SHIFT                       0                   /**< Shift value for DMA_CH0ALTC */
#define _DMA_CHALTC_CH0ALTC_MASK                        0x1UL               /**< Bit mask for DMA_CH0ALTC */
#define DMA_CHALTC_CH0ALTC_DEFAULT                      (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH0ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH1ALTC                              (0x1UL << 1)        /**< Channel 1 Alternate Clear */
#define _DMA_CHALTC_CH1ALTC_SHIFT                       1                   /**< Shift value for DMA_CH1ALTC */
#define _DMA_CHALTC_CH1ALTC_MASK                        0x2UL               /**< Bit mask for DMA_CH1ALTC */
#define DMA_CHALTC_CH1ALTC_DEFAULT                      (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH1ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH2ALTC                              (0x1UL << 2)        /**< Channel 2 Alternate Clear */
#define _DMA_CHALTC_CH2ALTC_SHIFT                       2                   /**< Shift value for DMA_CH2ALTC */
#define _DMA_CHALTC_CH2ALTC_MASK                        0x4UL               /**< Bit mask for DMA_CH2ALTC */
#define DMA_CHALTC_CH2ALTC_DEFAULT                      (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH2ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH3ALTC                              (0x1UL << 3)        /**< Channel 3 Alternate Clear */
#define _DMA_CHALTC_CH3ALTC_SHIFT                       3                   /**< Shift value for DMA_CH3ALTC */
#define _DMA_CHALTC_CH3ALTC_MASK                        0x8UL               /**< Bit mask for DMA_CH3ALTC */
#define DMA_CHALTC_CH3ALTC_DEFAULT                      (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH3ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH4ALTC                              (0x1UL << 4)        /**< Channel 4 Alternate Clear */
#define _DMA_CHALTC_CH4ALTC_SHIFT                       4                   /**< Shift value for DMA_CH4ALTC */
#define _DMA_CHALTC_CH4ALTC_MASK                        0x10UL              /**< Bit mask for DMA_CH4ALTC */
#define DMA_CHALTC_CH4ALTC_DEFAULT                      (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH4ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH5ALTC                              (0x1UL << 5)        /**< Channel 5 Alternate Clear */
#define _DMA_CHALTC_CH5ALTC_SHIFT                       5                   /**< Shift value for DMA_CH5ALTC */
#define _DMA_CHALTC_CH5ALTC_MASK                        0x20UL              /**< Bit mask for DMA_CH5ALTC */
#define DMA_CHALTC_CH5ALTC_DEFAULT                      (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH5ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH6ALTC                              (0x1UL << 6)        /**< Channel 6 Alternate Clear */
#define _DMA_CHALTC_CH6ALTC_SHIFT                       6                   /**< Shift value for DMA_CH6ALTC */
#define _DMA_CHALTC_CH6ALTC_MASK                        0x40UL              /**< Bit mask for DMA_CH6ALTC */
#define DMA_CHALTC_CH6ALTC_DEFAULT                      (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH6ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */
#define DMA_CHALTC_CH7ALTC                              (0x1UL << 7)        /**< Channel 7 Alternate Clear */
#define _DMA_CHALTC_CH7ALTC_SHIFT                       7                   /**< Shift value for DMA_CH7ALTC */
#define _DMA_CHALTC_CH7ALTC_MASK                        0x80UL              /**< Bit mask for DMA_CH7ALTC */
#define DMA_CHALTC_CH7ALTC_DEFAULT                      (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHALTC */
#define _DMA_CHALTC_CH7ALTC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHALTC */

/* Bit fields for DMA CHPRIS */
#define _DMA_CHPRIS_RESETVALUE                          0x00000000UL        /**< Default value for DMA_CHPRIS */
#define _DMA_CHPRIS_MASK                                0x000000FFUL        /**< Mask for DMA_CHPRIS */
#define DMA_CHPRIS_CH0PRIS                              (0x1UL << 0)        /**< Channel 0 High Priority Set */
#define _DMA_CHPRIS_CH0PRIS_SHIFT                       0                   /**< Shift value for DMA_CH0PRIS */
#define _DMA_CHPRIS_CH0PRIS_MASK                        0x1UL               /**< Bit mask for DMA_CH0PRIS */
#define DMA_CHPRIS_CH0PRIS_DEFAULT                      (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH0PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH1PRIS                              (0x1UL << 1)        /**< Channel 1 High Priority Set */
#define _DMA_CHPRIS_CH1PRIS_SHIFT                       1                   /**< Shift value for DMA_CH1PRIS */
#define _DMA_CHPRIS_CH1PRIS_MASK                        0x2UL               /**< Bit mask for DMA_CH1PRIS */
#define DMA_CHPRIS_CH1PRIS_DEFAULT                      (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH1PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH2PRIS                              (0x1UL << 2)        /**< Channel 2 High Priority Set */
#define _DMA_CHPRIS_CH2PRIS_SHIFT                       2                   /**< Shift value for DMA_CH2PRIS */
#define _DMA_CHPRIS_CH2PRIS_MASK                        0x4UL               /**< Bit mask for DMA_CH2PRIS */
#define DMA_CHPRIS_CH2PRIS_DEFAULT                      (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH2PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH3PRIS                              (0x1UL << 3)        /**< Channel 3 High Priority Set */
#define _DMA_CHPRIS_CH3PRIS_SHIFT                       3                   /**< Shift value for DMA_CH3PRIS */
#define _DMA_CHPRIS_CH3PRIS_MASK                        0x8UL               /**< Bit mask for DMA_CH3PRIS */
#define DMA_CHPRIS_CH3PRIS_DEFAULT                      (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH3PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH4PRIS                              (0x1UL << 4)        /**< Channel 4 High Priority Set */
#define _DMA_CHPRIS_CH4PRIS_SHIFT                       4                   /**< Shift value for DMA_CH4PRIS */
#define _DMA_CHPRIS_CH4PRIS_MASK                        0x10UL              /**< Bit mask for DMA_CH4PRIS */
#define DMA_CHPRIS_CH4PRIS_DEFAULT                      (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH4PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH5PRIS                              (0x1UL << 5)        /**< Channel 5 High Priority Set */
#define _DMA_CHPRIS_CH5PRIS_SHIFT                       5                   /**< Shift value for DMA_CH5PRIS */
#define _DMA_CHPRIS_CH5PRIS_MASK                        0x20UL              /**< Bit mask for DMA_CH5PRIS */
#define DMA_CHPRIS_CH5PRIS_DEFAULT                      (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH5PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH6PRIS                              (0x1UL << 6)        /**< Channel 6 High Priority Set */
#define _DMA_CHPRIS_CH6PRIS_SHIFT                       6                   /**< Shift value for DMA_CH6PRIS */
#define _DMA_CHPRIS_CH6PRIS_MASK                        0x40UL              /**< Bit mask for DMA_CH6PRIS */
#define DMA_CHPRIS_CH6PRIS_DEFAULT                      (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH6PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */
#define DMA_CHPRIS_CH7PRIS                              (0x1UL << 7)        /**< Channel 7 High Priority Set */
#define _DMA_CHPRIS_CH7PRIS_SHIFT                       7                   /**< Shift value for DMA_CH7PRIS */
#define _DMA_CHPRIS_CH7PRIS_MASK                        0x80UL              /**< Bit mask for DMA_CH7PRIS */
#define DMA_CHPRIS_CH7PRIS_DEFAULT                      (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHPRIS */
#define _DMA_CHPRIS_CH7PRIS_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIS */

/* Bit fields for DMA CHPRIC */
#define _DMA_CHPRIC_RESETVALUE                          0x00000000UL        /**< Default value for DMA_CHPRIC */
#define _DMA_CHPRIC_MASK                                0x000000FFUL        /**< Mask for DMA_CHPRIC */
#define DMA_CHPRIC_CH0PRIC                              (0x1UL << 0)        /**< Channel 0 High Priority Clear */
#define _DMA_CHPRIC_CH0PRIC_SHIFT                       0                   /**< Shift value for DMA_CH0PRIC */
#define _DMA_CHPRIC_CH0PRIC_MASK                        0x1UL               /**< Bit mask for DMA_CH0PRIC */
#define DMA_CHPRIC_CH0PRIC_DEFAULT                      (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH0PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH1PRIC                              (0x1UL << 1)        /**< Channel 1 High Priority Clear */
#define _DMA_CHPRIC_CH1PRIC_SHIFT                       1                   /**< Shift value for DMA_CH1PRIC */
#define _DMA_CHPRIC_CH1PRIC_MASK                        0x2UL               /**< Bit mask for DMA_CH1PRIC */
#define DMA_CHPRIC_CH1PRIC_DEFAULT                      (0x00000000UL << 1) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH1PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH2PRIC                              (0x1UL << 2)        /**< Channel 2 High Priority Clear */
#define _DMA_CHPRIC_CH2PRIC_SHIFT                       2                   /**< Shift value for DMA_CH2PRIC */
#define _DMA_CHPRIC_CH2PRIC_MASK                        0x4UL               /**< Bit mask for DMA_CH2PRIC */
#define DMA_CHPRIC_CH2PRIC_DEFAULT                      (0x00000000UL << 2) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH2PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH3PRIC                              (0x1UL << 3)        /**< Channel 3 High Priority Clear */
#define _DMA_CHPRIC_CH3PRIC_SHIFT                       3                   /**< Shift value for DMA_CH3PRIC */
#define _DMA_CHPRIC_CH3PRIC_MASK                        0x8UL               /**< Bit mask for DMA_CH3PRIC */
#define DMA_CHPRIC_CH3PRIC_DEFAULT                      (0x00000000UL << 3) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH3PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH4PRIC                              (0x1UL << 4)        /**< Channel 4 High Priority Clear */
#define _DMA_CHPRIC_CH4PRIC_SHIFT                       4                   /**< Shift value for DMA_CH4PRIC */
#define _DMA_CHPRIC_CH4PRIC_MASK                        0x10UL              /**< Bit mask for DMA_CH4PRIC */
#define DMA_CHPRIC_CH4PRIC_DEFAULT                      (0x00000000UL << 4) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH4PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH5PRIC                              (0x1UL << 5)        /**< Channel 5 High Priority Clear */
#define _DMA_CHPRIC_CH5PRIC_SHIFT                       5                   /**< Shift value for DMA_CH5PRIC */
#define _DMA_CHPRIC_CH5PRIC_MASK                        0x20UL              /**< Bit mask for DMA_CH5PRIC */
#define DMA_CHPRIC_CH5PRIC_DEFAULT                      (0x00000000UL << 5) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH5PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH6PRIC                              (0x1UL << 6)        /**< Channel 6 High Priority Clear */
#define _DMA_CHPRIC_CH6PRIC_SHIFT                       6                   /**< Shift value for DMA_CH6PRIC */
#define _DMA_CHPRIC_CH6PRIC_MASK                        0x40UL              /**< Bit mask for DMA_CH6PRIC */
#define DMA_CHPRIC_CH6PRIC_DEFAULT                      (0x00000000UL << 6) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH6PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */
#define DMA_CHPRIC_CH7PRIC                              (0x1UL << 7)        /**< Channel 7 High Priority Clear */
#define _DMA_CHPRIC_CH7PRIC_SHIFT                       7                   /**< Shift value for DMA_CH7PRIC */
#define _DMA_CHPRIC_CH7PRIC_MASK                        0x80UL              /**< Bit mask for DMA_CH7PRIC */
#define DMA_CHPRIC_CH7PRIC_DEFAULT                      (0x00000000UL << 7) /**< Shifted mode DEFAULT for DMA_CHPRIC */
#define _DMA_CHPRIC_CH7PRIC_DEFAULT                     0x00000000UL        /**< Mode DEFAULT for DMA_CHPRIC */

/* Bit fields for DMA ERRORC */
#define _DMA_ERRORC_RESETVALUE                          0x00000000UL        /**< Default value for DMA_ERRORC */
#define _DMA_ERRORC_MASK                                0x00000001UL        /**< Mask for DMA_ERRORC */
#define DMA_ERRORC_ERRORC                               (0x1UL << 0)        /**< Bus Error Clear */
#define _DMA_ERRORC_ERRORC_SHIFT                        0                   /**< Shift value for DMA_ERRORC */
#define _DMA_ERRORC_ERRORC_MASK                         0x1UL               /**< Bit mask for DMA_ERRORC */
#define DMA_ERRORC_ERRORC_DEFAULT                       (0x00000000UL << 0) /**< Shifted mode DEFAULT for DMA_ERRORC */
#define _DMA_ERRORC_ERRORC_DEFAULT                      0x00000000UL        /**< Mode DEFAULT for DMA_ERRORC */

/* Bit fields for DMA IF */
#define _DMA_IF_RESETVALUE                              0x00000000UL         /**< Default value for DMA_IF */
#define _DMA_IF_MASK                                    0x800000FFUL         /**< Mask for DMA_IF */
#define DMA_IF_CH0DONE                                  (0x1UL << 0)         /**< DMA Channel 1 Complete Interrupt Flag */
#define _DMA_IF_CH0DONE_SHIFT                           0                    /**< Shift value for DMA_CH0DONE */
#define _DMA_IF_CH0DONE_MASK                            0x1UL                /**< Bit mask for DMA_CH0DONE */
#define DMA_IF_CH0DONE_DEFAULT                          (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH0DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH1DONE                                  (0x1UL << 1)         /**< DMA Channel 2 Complete Interrupt Flag */
#define _DMA_IF_CH1DONE_SHIFT                           1                    /**< Shift value for DMA_CH1DONE */
#define _DMA_IF_CH1DONE_MASK                            0x2UL                /**< Bit mask for DMA_CH1DONE */
#define DMA_IF_CH1DONE_DEFAULT                          (0x00000000UL << 1)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH1DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH2DONE                                  (0x1UL << 2)         /**< DMA Channel 3 Complete Interrupt Flag */
#define _DMA_IF_CH2DONE_SHIFT                           2                    /**< Shift value for DMA_CH2DONE */
#define _DMA_IF_CH2DONE_MASK                            0x4UL                /**< Bit mask for DMA_CH2DONE */
#define DMA_IF_CH2DONE_DEFAULT                          (0x00000000UL << 2)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH2DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH3DONE                                  (0x1UL << 3)         /**< DMA Channel 3 Complete Interrupt Flag */
#define _DMA_IF_CH3DONE_SHIFT                           3                    /**< Shift value for DMA_CH3DONE */
#define _DMA_IF_CH3DONE_MASK                            0x8UL                /**< Bit mask for DMA_CH3DONE */
#define DMA_IF_CH3DONE_DEFAULT                          (0x00000000UL << 3)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH3DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH4DONE                                  (0x1UL << 4)         /**< DMA Channel 4 Complete Interrupt Flag */
#define _DMA_IF_CH4DONE_SHIFT                           4                    /**< Shift value for DMA_CH4DONE */
#define _DMA_IF_CH4DONE_MASK                            0x10UL               /**< Bit mask for DMA_CH4DONE */
#define DMA_IF_CH4DONE_DEFAULT                          (0x00000000UL << 4)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH4DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH5DONE                                  (0x1UL << 5)         /**< DMA Channel 5 Complete Interrupt Flag */
#define _DMA_IF_CH5DONE_SHIFT                           5                    /**< Shift value for DMA_CH5DONE */
#define _DMA_IF_CH5DONE_MASK                            0x20UL               /**< Bit mask for DMA_CH5DONE */
#define DMA_IF_CH5DONE_DEFAULT                          (0x00000000UL << 5)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH5DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH6DONE                                  (0x1UL << 6)         /**< DMA Channel 6 Complete Interrupt Flag */
#define _DMA_IF_CH6DONE_SHIFT                           6                    /**< Shift value for DMA_CH6DONE */
#define _DMA_IF_CH6DONE_MASK                            0x40UL               /**< Bit mask for DMA_CH6DONE */
#define DMA_IF_CH6DONE_DEFAULT                          (0x00000000UL << 6)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH6DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_CH7DONE                                  (0x1UL << 7)         /**< DMA Channel 7 Complete Interrupt Flag */
#define _DMA_IF_CH7DONE_SHIFT                           7                    /**< Shift value for DMA_CH7DONE */
#define _DMA_IF_CH7DONE_MASK                            0x80UL               /**< Bit mask for DMA_CH7DONE */
#define DMA_IF_CH7DONE_DEFAULT                          (0x00000000UL << 7)  /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_CH7DONE_DEFAULT                         0x00000000UL         /**< Mode DEFAULT for DMA_IF */
#define DMA_IF_ERR                                      (0x1UL << 31)        /**< DMA Error Interrupt Flag */
#define _DMA_IF_ERR_SHIFT                               31                   /**< Shift value for DMA_ERR */
#define _DMA_IF_ERR_MASK                                0x80000000UL         /**< Bit mask for DMA_ERR */
#define DMA_IF_ERR_DEFAULT                              (0x00000000UL << 31) /**< Shifted mode DEFAULT for DMA_IF */
#define _DMA_IF_ERR_DEFAULT                             0x00000000UL         /**< Mode DEFAULT for DMA_IF */

/* Bit fields for DMA IFS */
#define _DMA_IFS_RESETVALUE                             0x00000000UL         /**< Default value for DMA_IFS */
#define _DMA_IFS_MASK                                   0x800000FFUL         /**< Mask for DMA_IFS */
#define DMA_IFS_CH0DONE                                 (0x1UL << 0)         /**< DMA Channel 0 Complete Interrupt Flag Set */
#define _DMA_IFS_CH0DONE_SHIFT                          0                    /**< Shift value for DMA_CH0DONE */
#define _DMA_IFS_CH0DONE_MASK                           0x1UL                /**< Bit mask for DMA_CH0DONE */
#define DMA_IFS_CH0DONE_DEFAULT                         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH0DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH1DONE                                 (0x1UL << 1)         /**< DMA Channel 1 Complete Interrupt Flag Set */
#define _DMA_IFS_CH1DONE_SHIFT                          1                    /**< Shift value for DMA_CH1DONE */
#define _DMA_IFS_CH1DONE_MASK                           0x2UL                /**< Bit mask for DMA_CH1DONE */
#define DMA_IFS_CH1DONE_DEFAULT                         (0x00000000UL << 1)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH1DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH2DONE                                 (0x1UL << 2)         /**< DMA Channel 2 Complete Interrupt Flag Set */
#define _DMA_IFS_CH2DONE_SHIFT                          2                    /**< Shift value for DMA_CH2DONE */
#define _DMA_IFS_CH2DONE_MASK                           0x4UL                /**< Bit mask for DMA_CH2DONE */
#define DMA_IFS_CH2DONE_DEFAULT                         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH2DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH3DONE                                 (0x1UL << 3)         /**< DMA Channel 3 Complete Interrupt Flag Set */
#define _DMA_IFS_CH3DONE_SHIFT                          3                    /**< Shift value for DMA_CH3DONE */
#define _DMA_IFS_CH3DONE_MASK                           0x8UL                /**< Bit mask for DMA_CH3DONE */
#define DMA_IFS_CH3DONE_DEFAULT                         (0x00000000UL << 3)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH3DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH4DONE                                 (0x1UL << 4)         /**< DMA Channel 4 Complete Interrupt Flag Set */
#define _DMA_IFS_CH4DONE_SHIFT                          4                    /**< Shift value for DMA_CH4DONE */
#define _DMA_IFS_CH4DONE_MASK                           0x10UL               /**< Bit mask for DMA_CH4DONE */
#define DMA_IFS_CH4DONE_DEFAULT                         (0x00000000UL << 4)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH4DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH5DONE                                 (0x1UL << 5)         /**< DMA Channel 5 Complete Interrupt Flag Set */
#define _DMA_IFS_CH5DONE_SHIFT                          5                    /**< Shift value for DMA_CH5DONE */
#define _DMA_IFS_CH5DONE_MASK                           0x20UL               /**< Bit mask for DMA_CH5DONE */
#define DMA_IFS_CH5DONE_DEFAULT                         (0x00000000UL << 5)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH5DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH6DONE                                 (0x1UL << 6)         /**< DMA Channel 6 Complete Interrupt Flag Set */
#define _DMA_IFS_CH6DONE_SHIFT                          6                    /**< Shift value for DMA_CH6DONE */
#define _DMA_IFS_CH6DONE_MASK                           0x40UL               /**< Bit mask for DMA_CH6DONE */
#define DMA_IFS_CH6DONE_DEFAULT                         (0x00000000UL << 6)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH6DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_CH7DONE                                 (0x1UL << 7)         /**< DMA Channel 7 Complete Interrupt Flag Set */
#define _DMA_IFS_CH7DONE_SHIFT                          7                    /**< Shift value for DMA_CH7DONE */
#define _DMA_IFS_CH7DONE_MASK                           0x80UL               /**< Bit mask for DMA_CH7DONE */
#define DMA_IFS_CH7DONE_DEFAULT                         (0x00000000UL << 7)  /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_CH7DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFS */
#define DMA_IFS_ERR                                     (0x1UL << 31)        /**< DMA Error Interrupt Flag Set */
#define _DMA_IFS_ERR_SHIFT                              31                   /**< Shift value for DMA_ERR */
#define _DMA_IFS_ERR_MASK                               0x80000000UL         /**< Bit mask for DMA_ERR */
#define DMA_IFS_ERR_DEFAULT                             (0x00000000UL << 31) /**< Shifted mode DEFAULT for DMA_IFS */
#define _DMA_IFS_ERR_DEFAULT                            0x00000000UL         /**< Mode DEFAULT for DMA_IFS */

/* Bit fields for DMA IFC */
#define _DMA_IFC_RESETVALUE                             0x00000000UL         /**< Default value for DMA_IFC */
#define _DMA_IFC_MASK                                   0x800000FFUL         /**< Mask for DMA_IFC */
#define DMA_IFC_CH0DONE                                 (0x1UL << 0)         /**< DMA Channel 0 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH0DONE_SHIFT                          0                    /**< Shift value for DMA_CH0DONE */
#define _DMA_IFC_CH0DONE_MASK                           0x1UL                /**< Bit mask for DMA_CH0DONE */
#define DMA_IFC_CH0DONE_DEFAULT                         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH0DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH1DONE                                 (0x1UL << 1)         /**< DMA Channel 1 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH1DONE_SHIFT                          1                    /**< Shift value for DMA_CH1DONE */
#define _DMA_IFC_CH1DONE_MASK                           0x2UL                /**< Bit mask for DMA_CH1DONE */
#define DMA_IFC_CH1DONE_DEFAULT                         (0x00000000UL << 1)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH1DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH2DONE                                 (0x1UL << 2)         /**< DMA Channel 2 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH2DONE_SHIFT                          2                    /**< Shift value for DMA_CH2DONE */
#define _DMA_IFC_CH2DONE_MASK                           0x4UL                /**< Bit mask for DMA_CH2DONE */
#define DMA_IFC_CH2DONE_DEFAULT                         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH2DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH3DONE                                 (0x1UL << 3)         /**< DMA Channel 3 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH3DONE_SHIFT                          3                    /**< Shift value for DMA_CH3DONE */
#define _DMA_IFC_CH3DONE_MASK                           0x8UL                /**< Bit mask for DMA_CH3DONE */
#define DMA_IFC_CH3DONE_DEFAULT                         (0x00000000UL << 3)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH3DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH4DONE                                 (0x1UL << 4)         /**< DMA Channel 4 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH4DONE_SHIFT                          4                    /**< Shift value for DMA_CH4DONE */
#define _DMA_IFC_CH4DONE_MASK                           0x10UL               /**< Bit mask for DMA_CH4DONE */
#define DMA_IFC_CH4DONE_DEFAULT                         (0x00000000UL << 4)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH4DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH5DONE                                 (0x1UL << 5)         /**< DMA Channel 5 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH5DONE_SHIFT                          5                    /**< Shift value for DMA_CH5DONE */
#define _DMA_IFC_CH5DONE_MASK                           0x20UL               /**< Bit mask for DMA_CH5DONE */
#define DMA_IFC_CH5DONE_DEFAULT                         (0x00000000UL << 5)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH5DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH6DONE                                 (0x1UL << 6)         /**< DMA Channel 6 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH6DONE_SHIFT                          6                    /**< Shift value for DMA_CH6DONE */
#define _DMA_IFC_CH6DONE_MASK                           0x40UL               /**< Bit mask for DMA_CH6DONE */
#define DMA_IFC_CH6DONE_DEFAULT                         (0x00000000UL << 6)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH6DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_CH7DONE                                 (0x1UL << 7)         /**< DMA Channel 7 Complete Interrupt Flag Clear */
#define _DMA_IFC_CH7DONE_SHIFT                          7                    /**< Shift value for DMA_CH7DONE */
#define _DMA_IFC_CH7DONE_MASK                           0x80UL               /**< Bit mask for DMA_CH7DONE */
#define DMA_IFC_CH7DONE_DEFAULT                         (0x00000000UL << 7)  /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_CH7DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IFC */
#define DMA_IFC_ERR                                     (0x1UL << 31)        /**< DMA Error Interrupt Flag Clear */
#define _DMA_IFC_ERR_SHIFT                              31                   /**< Shift value for DMA_ERR */
#define _DMA_IFC_ERR_MASK                               0x80000000UL         /**< Bit mask for DMA_ERR */
#define DMA_IFC_ERR_DEFAULT                             (0x00000000UL << 31) /**< Shifted mode DEFAULT for DMA_IFC */
#define _DMA_IFC_ERR_DEFAULT                            0x00000000UL         /**< Mode DEFAULT for DMA_IFC */

/* Bit fields for DMA IEN */
#define _DMA_IEN_RESETVALUE                             0x00000000UL         /**< Default value for DMA_IEN */
#define _DMA_IEN_MASK                                   0x800000FFUL         /**< Mask for DMA_IEN */
#define DMA_IEN_CH0DONE                                 (0x1UL << 0)         /**< DMA Channel 0 Complete Interrupt Enable */
#define _DMA_IEN_CH0DONE_SHIFT                          0                    /**< Shift value for DMA_CH0DONE */
#define _DMA_IEN_CH0DONE_MASK                           0x1UL                /**< Bit mask for DMA_CH0DONE */
#define DMA_IEN_CH0DONE_DEFAULT                         (0x00000000UL << 0)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH0DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH1DONE                                 (0x1UL << 1)         /**< DMA Channel 1 Complete Interrupt Enable */
#define _DMA_IEN_CH1DONE_SHIFT                          1                    /**< Shift value for DMA_CH1DONE */
#define _DMA_IEN_CH1DONE_MASK                           0x2UL                /**< Bit mask for DMA_CH1DONE */
#define DMA_IEN_CH1DONE_DEFAULT                         (0x00000000UL << 1)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH1DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH2DONE                                 (0x1UL << 2)         /**< DMA Channel 2 Complete Interrupt Enable */
#define _DMA_IEN_CH2DONE_SHIFT                          2                    /**< Shift value for DMA_CH2DONE */
#define _DMA_IEN_CH2DONE_MASK                           0x4UL                /**< Bit mask for DMA_CH2DONE */
#define DMA_IEN_CH2DONE_DEFAULT                         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH2DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH3DONE                                 (0x1UL << 3)         /**< DMA Channel 3 Complete Interrupt Enable */
#define _DMA_IEN_CH3DONE_SHIFT                          3                    /**< Shift value for DMA_CH3DONE */
#define _DMA_IEN_CH3DONE_MASK                           0x8UL                /**< Bit mask for DMA_CH3DONE */
#define DMA_IEN_CH3DONE_DEFAULT                         (0x00000000UL << 3)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH3DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH4DONE                                 (0x1UL << 4)         /**< DMA Channel 4 Complete Interrupt Enable */
#define _DMA_IEN_CH4DONE_SHIFT                          4                    /**< Shift value for DMA_CH4DONE */
#define _DMA_IEN_CH4DONE_MASK                           0x10UL               /**< Bit mask for DMA_CH4DONE */
#define DMA_IEN_CH4DONE_DEFAULT                         (0x00000000UL << 4)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH4DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH5DONE                                 (0x1UL << 5)         /**< DMA Channel 5 Complete Interrupt Enable */
#define _DMA_IEN_CH5DONE_SHIFT                          5                    /**< Shift value for DMA_CH5DONE */
#define _DMA_IEN_CH5DONE_MASK                           0x20UL               /**< Bit mask for DMA_CH5DONE */
#define DMA_IEN_CH5DONE_DEFAULT                         (0x00000000UL << 5)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH5DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH6DONE                                 (0x1UL << 6)         /**< DMA Channel 6 Complete Interrupt Enable */
#define _DMA_IEN_CH6DONE_SHIFT                          6                    /**< Shift value for DMA_CH6DONE */
#define _DMA_IEN_CH6DONE_MASK                           0x40UL               /**< Bit mask for DMA_CH6DONE */
#define DMA_IEN_CH6DONE_DEFAULT                         (0x00000000UL << 6)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH6DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_CH7DONE                                 (0x1UL << 7)         /**< DMA Channel 7 Complete Interrupt Enable */
#define _DMA_IEN_CH7DONE_SHIFT                          7                    /**< Shift value for DMA_CH7DONE */
#define _DMA_IEN_CH7DONE_MASK                           0x80UL               /**< Bit mask for DMA_CH7DONE */
#define DMA_IEN_CH7DONE_DEFAULT                         (0x00000000UL << 7)  /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_CH7DONE_DEFAULT                        0x00000000UL         /**< Mode DEFAULT for DMA_IEN */
#define DMA_IEN_ERR                                     (0x1UL << 31)        /**< DMA Error Interrupt Flag Enable */
#define _DMA_IEN_ERR_SHIFT                              31                   /**< Shift value for DMA_ERR */
#define _DMA_IEN_ERR_MASK                               0x80000000UL         /**< Bit mask for DMA_ERR */
#define DMA_IEN_ERR_DEFAULT                             (0x00000000UL << 31) /**< Shifted mode DEFAULT for DMA_IEN */
#define _DMA_IEN_ERR_DEFAULT                            0x00000000UL         /**< Mode DEFAULT for DMA_IEN */

/* Bit fields for DMA CH_CTRL */
#define _DMA_CH_CTRL_RESETVALUE                         0x00000000UL         /**< Default value for DMA_CH_CTRL */
#define _DMA_CH_CTRL_MASK                               0x003F000FUL         /**< Mask for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_SHIFT                       0                    /**< Shift value for DMA_SIGSEL */
#define _DMA_CH_CTRL_SIGSEL_MASK                        0xFUL                /**< Bit mask for DMA_SIGSEL */
#define DMA_CH_CTRL_SIGSEL_ADC0SINGLE                   (0x00000000UL << 0)  /**< Shifted mode ADC0SINGLE for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_DAC0CH0                      (0x00000000UL << 0)  /**< Shifted mode DAC0CH0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0RXDATAV                (0x00000000UL << 0)  /**< Shifted mode USART0RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART1RXDATAV                (0x00000000UL << 0)  /**< Shifted mode USART1RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_LEUART0RXDATAV               (0x00000000UL << 0)  /**< Shifted mode LEUART0RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_I2C0RXDATAV                  (0x00000000UL << 0)  /**< Shifted mode I2C0RXDATAV for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0UFOF                   (0x00000000UL << 0)  /**< Shifted mode TIMER0UFOF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1UFOF                   (0x00000000UL << 0)  /**< Shifted mode TIMER1UFOF for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_MSCWDATA                     (0x00000000UL << 0)  /**< Shifted mode MSCWDATA for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_ADC0SCAN                     (0x00000001UL << 0)  /**< Shifted mode ADC0SCAN for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_DAC0CH1                      (0x00000001UL << 0)  /**< Shifted mode DAC0CH1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0TXBL                   (0x00000001UL << 0)  /**< Shifted mode USART0TXBL for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART1TXBL                   (0x00000001UL << 0)  /**< Shifted mode USART1TXBL for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_LEUART0TXBL                  (0x00000001UL << 0)  /**< Shifted mode LEUART0TXBL for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_I2C0TXBL                     (0x00000001UL << 0)  /**< Shifted mode I2C0TXBL for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC0                    (0x00000001UL << 0)  /**< Shifted mode TIMER0CC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC0                    (0x00000001UL << 0)  /**< Shifted mode TIMER1CC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART0TXEMPTY                (0x00000002UL << 0)  /**< Shifted mode USART0TXEMPTY for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_USART1TXEMPTY                (0x00000002UL << 0)  /**< Shifted mode USART1TXEMPTY for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_LEUART0TXEMPTY               (0x00000002UL << 0)  /**< Shifted mode LEUART0TXEMPTY for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC1                    (0x00000002UL << 0)  /**< Shifted mode TIMER0CC1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC1                    (0x00000002UL << 0)  /**< Shifted mode TIMER1CC1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER0CC2                    (0x00000003UL << 0)  /**< Shifted mode TIMER0CC2 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SIGSEL_TIMER1CC2                    (0x00000003UL << 0)  /**< Shifted mode TIMER1CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ADC0SINGLE                  0x00000000UL         /**< Mode ADC0SINGLE for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_DAC0CH0                     0x00000000UL         /**< Mode DAC0CH0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0RXDATAV               0x00000000UL         /**< Mode USART0RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART1RXDATAV               0x00000000UL         /**< Mode USART1RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_LEUART0RXDATAV              0x00000000UL         /**< Mode LEUART0RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_I2C0RXDATAV                 0x00000000UL         /**< Mode I2C0RXDATAV for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0UFOF                  0x00000000UL         /**< Mode TIMER0UFOF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1UFOF                  0x00000000UL         /**< Mode TIMER1UFOF for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_MSCWDATA                    0x00000000UL         /**< Mode MSCWDATA for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_ADC0SCAN                    0x00000001UL         /**< Mode ADC0SCAN for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_DAC0CH1                     0x00000001UL         /**< Mode DAC0CH1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0TXBL                  0x00000001UL         /**< Mode USART0TXBL for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART1TXBL                  0x00000001UL         /**< Mode USART1TXBL for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_LEUART0TXBL                 0x00000001UL         /**< Mode LEUART0TXBL for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_I2C0TXBL                    0x00000001UL         /**< Mode I2C0TXBL for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC0                   0x00000001UL         /**< Mode TIMER0CC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC0                   0x00000001UL         /**< Mode TIMER1CC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART0TXEMPTY               0x00000002UL         /**< Mode USART0TXEMPTY for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_USART1TXEMPTY               0x00000002UL         /**< Mode USART1TXEMPTY for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_LEUART0TXEMPTY              0x00000002UL         /**< Mode LEUART0TXEMPTY for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC1                   0x00000002UL         /**< Mode TIMER0CC1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC1                   0x00000002UL         /**< Mode TIMER1CC1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER0CC2                   0x00000003UL         /**< Mode TIMER0CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SIGSEL_TIMER1CC2                   0x00000003UL         /**< Mode TIMER1CC2 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_SHIFT                    16                   /**< Shift value for DMA_SOURCESEL */
#define _DMA_CH_CTRL_SOURCESEL_MASK                     0x3F0000UL           /**< Bit mask for DMA_SOURCESEL */
#define DMA_CH_CTRL_SOURCESEL_NONE                      (0x00000000UL << 16) /**< Shifted mode NONE for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_ADC0                      (0x00000008UL << 16) /**< Shifted mode ADC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_DAC0                      (0x0000000AUL << 16) /**< Shifted mode DAC0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_USART0                    (0x0000000CUL << 16) /**< Shifted mode USART0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_USART1                    (0x0000000DUL << 16) /**< Shifted mode USART1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_LEUART0                   (0x00000010UL << 16) /**< Shifted mode LEUART0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_I2C0                      (0x00000014UL << 16) /**< Shifted mode I2C0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_TIMER0                    (0x00000018UL << 16) /**< Shifted mode TIMER0 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_TIMER1                    (0x00000019UL << 16) /**< Shifted mode TIMER1 for DMA_CH_CTRL */
#define DMA_CH_CTRL_SOURCESEL_MSC                       (0x00000030UL << 16) /**< Shifted mode MSC for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_NONE                     0x00000000UL         /**< Mode NONE for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_ADC0                     0x00000008UL         /**< Mode ADC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_DAC0                     0x0000000AUL         /**< Mode DAC0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_USART0                   0x0000000CUL         /**< Mode USART0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_USART1                   0x0000000DUL         /**< Mode USART1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_LEUART0                  0x00000010UL         /**< Mode LEUART0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_I2C0                     0x00000014UL         /**< Mode I2C0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_TIMER0                   0x00000018UL         /**< Mode TIMER0 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_TIMER1                   0x00000019UL         /**< Mode TIMER1 for DMA_CH_CTRL */
#define _DMA_CH_CTRL_SOURCESEL_MSC                      0x00000030UL         /**< Mode MSC for DMA_CH_CTRL */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_VCMP
 * @{
 *****************************************************************************/

/* Bit fields for VCMP CTRL */
#define _VCMP_CTRL_RESETVALUE               0x47000000UL         /**< Default value for VCMP_CTRL */
#define _VCMP_CTRL_MASK                     0x4F030715UL         /**< Mask for VCMP_CTRL */
#define VCMP_CTRL_EN                        (0x1UL << 0)         /**< Voltage Supply Comparator Enable */
#define _VCMP_CTRL_EN_SHIFT                 0                    /**< Shift value for VCMP_EN */
#define _VCMP_CTRL_EN_MASK                  0x1UL                /**< Bit mask for VCMP_EN */
#define VCMP_CTRL_EN_DEFAULT                (0x00000000UL << 0)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_EN_DEFAULT               0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_INACTVAL                  (0x1UL << 2)         /**< Inactive Value */
#define _VCMP_CTRL_INACTVAL_SHIFT           2                    /**< Shift value for VCMP_INACTVAL */
#define _VCMP_CTRL_INACTVAL_MASK            0x4UL                /**< Bit mask for VCMP_INACTVAL */
#define VCMP_CTRL_INACTVAL_DEFAULT          (0x00000000UL << 2)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_INACTVAL_DEFAULT         0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_HYSTEN                    (0x1UL << 4)         /**< Hysteresis Enable */
#define _VCMP_CTRL_HYSTEN_SHIFT             4                    /**< Shift value for VCMP_HYSTEN */
#define _VCMP_CTRL_HYSTEN_MASK              0x10UL               /**< Bit mask for VCMP_HYSTEN */
#define VCMP_CTRL_HYSTEN_DEFAULT            (0x00000000UL << 4)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_HYSTEN_DEFAULT           0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_SHIFT           8                    /**< Shift value for VCMP_WARMTIME */
#define _VCMP_CTRL_WARMTIME_MASK            0x700UL              /**< Bit mask for VCMP_WARMTIME */
#define VCMP_CTRL_WARMTIME_DEFAULT          (0x00000000UL << 8)  /**< Shifted mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_4CYCLES          (0x00000000UL << 8)  /**< Shifted mode 4CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_8CYCLES          (0x00000001UL << 8)  /**< Shifted mode 8CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_16CYCLES         (0x00000002UL << 8)  /**< Shifted mode 16CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_32CYCLES         (0x00000003UL << 8)  /**< Shifted mode 32CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_64CYCLES         (0x00000004UL << 8)  /**< Shifted mode 64CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_128CYCLES        (0x00000005UL << 8)  /**< Shifted mode 128CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_256CYCLES        (0x00000006UL << 8)  /**< Shifted mode 256CYCLES for VCMP_CTRL */
#define VCMP_CTRL_WARMTIME_512CYCLES        (0x00000007UL << 8)  /**< Shifted mode 512CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_DEFAULT         0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_4CYCLES         0x00000000UL         /**< Mode 4CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_8CYCLES         0x00000001UL         /**< Mode 8CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_16CYCLES        0x00000002UL         /**< Mode 16CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_32CYCLES        0x00000003UL         /**< Mode 32CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_64CYCLES        0x00000004UL         /**< Mode 64CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_128CYCLES       0x00000005UL         /**< Mode 128CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_256CYCLES       0x00000006UL         /**< Mode 256CYCLES for VCMP_CTRL */
#define _VCMP_CTRL_WARMTIME_512CYCLES       0x00000007UL         /**< Mode 512CYCLES for VCMP_CTRL */
#define VCMP_CTRL_IRISE                     (0x1UL << 16)        /**< Rising Edge Interrupt Sense */
#define _VCMP_CTRL_IRISE_SHIFT              16                   /**< Shift value for VCMP_IRISE */
#define _VCMP_CTRL_IRISE_MASK               0x10000UL            /**< Bit mask for VCMP_IRISE */
#define VCMP_CTRL_IRISE_DEFAULT             (0x00000000UL << 16) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_IRISE_DEFAULT            0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_IFALL                     (0x1UL << 17)        /**< Falling Edge Interrupt Sense */
#define _VCMP_CTRL_IFALL_SHIFT              17                   /**< Shift value for VCMP_IFALL */
#define _VCMP_CTRL_IFALL_MASK               0x20000UL            /**< Bit mask for VCMP_IFALL */
#define VCMP_CTRL_IFALL_DEFAULT             (0x00000000UL << 17) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_IFALL_DEFAULT            0x00000000UL         /**< Mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_BIASPROG_SHIFT           24                   /**< Shift value for VCMP_BIASPROG */
#define _VCMP_CTRL_BIASPROG_MASK            0xF000000UL          /**< Bit mask for VCMP_BIASPROG */
#define VCMP_CTRL_BIASPROG_DEFAULT          (0x00000007UL << 24) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_BIASPROG_DEFAULT         0x00000007UL         /**< Mode DEFAULT for VCMP_CTRL */
#define VCMP_CTRL_HALFBIAS                  (0x1UL << 30)        /**< Half Bias Current */
#define _VCMP_CTRL_HALFBIAS_SHIFT           30                   /**< Shift value for VCMP_HALFBIAS */
#define _VCMP_CTRL_HALFBIAS_MASK            0x40000000UL         /**< Bit mask for VCMP_HALFBIAS */
#define VCMP_CTRL_HALFBIAS_DEFAULT          (0x00000001UL << 30) /**< Shifted mode DEFAULT for VCMP_CTRL */
#define _VCMP_CTRL_HALFBIAS_DEFAULT         0x00000001UL         /**< Mode DEFAULT for VCMP_CTRL */

/* Bit fields for VCMP INPUTSEL */
#define _VCMP_INPUTSEL_RESETVALUE           0x00000000UL        /**< Default value for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_MASK                 0x0000013FUL        /**< Mask for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_SHIFT      0                   /**< Shift value for VCMP_TRIGLEVEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_MASK       0x3FUL              /**< Bit mask for VCMP_TRIGLEVEL */
#define VCMP_INPUTSEL_TRIGLEVEL_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_TRIGLEVEL_DEFAULT    0x00000000UL        /**< Mode DEFAULT for VCMP_INPUTSEL */
#define VCMP_INPUTSEL_LPREF                 (0x1UL << 8)        /**< Low Power Reference */
#define _VCMP_INPUTSEL_LPREF_SHIFT          8                   /**< Shift value for VCMP_LPREF */
#define _VCMP_INPUTSEL_LPREF_MASK           0x100UL             /**< Bit mask for VCMP_LPREF */
#define VCMP_INPUTSEL_LPREF_DEFAULT         (0x00000000UL << 8) /**< Shifted mode DEFAULT for VCMP_INPUTSEL */
#define _VCMP_INPUTSEL_LPREF_DEFAULT        0x00000000UL        /**< Mode DEFAULT for VCMP_INPUTSEL */

/* Bit fields for VCMP STATUS */
#define _VCMP_STATUS_RESETVALUE             0x00000000UL        /**< Default value for VCMP_STATUS */
#define _VCMP_STATUS_MASK                   0x00000003UL        /**< Mask for VCMP_STATUS */
#define VCMP_STATUS_VCMPACT                 (0x1UL << 0)        /**< Voltage Supply Comparator Active */
#define _VCMP_STATUS_VCMPACT_SHIFT          0                   /**< Shift value for VCMP_VCMPACT */
#define _VCMP_STATUS_VCMPACT_MASK           0x1UL               /**< Bit mask for VCMP_VCMPACT */
#define VCMP_STATUS_VCMPACT_DEFAULT         (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_STATUS */
#define _VCMP_STATUS_VCMPACT_DEFAULT        0x00000000UL        /**< Mode DEFAULT for VCMP_STATUS */
#define VCMP_STATUS_VCMPOUT                 (0x1UL << 1)        /**< Voltage Supply Comparator Output */
#define _VCMP_STATUS_VCMPOUT_SHIFT          1                   /**< Shift value for VCMP_VCMPOUT */
#define _VCMP_STATUS_VCMPOUT_MASK           0x2UL               /**< Bit mask for VCMP_VCMPOUT */
#define VCMP_STATUS_VCMPOUT_DEFAULT         (0x00000000UL << 1) /**< Shifted mode DEFAULT for VCMP_STATUS */
#define _VCMP_STATUS_VCMPOUT_DEFAULT        0x00000000UL        /**< Mode DEFAULT for VCMP_STATUS */

/* Bit fields for VCMP IEN */
#define _VCMP_IEN_RESETVALUE                0x00000000UL        /**< Default value for VCMP_IEN */
#define _VCMP_IEN_MASK                      0x00000003UL        /**< Mask for VCMP_IEN */
#define VCMP_IEN_EDGE                       (0x1UL << 0)        /**< Edge Trigger Interrupt Enable */
#define _VCMP_IEN_EDGE_SHIFT                0                   /**< Shift value for VCMP_EDGE */
#define _VCMP_IEN_EDGE_MASK                 0x1UL               /**< Bit mask for VCMP_EDGE */
#define VCMP_IEN_EDGE_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_IEN */
#define _VCMP_IEN_EDGE_DEFAULT              0x00000000UL        /**< Mode DEFAULT for VCMP_IEN */
#define VCMP_IEN_WARMUP                     (0x1UL << 1)        /**< Warm-up Interrupt Enable */
#define _VCMP_IEN_WARMUP_SHIFT              1                   /**< Shift value for VCMP_WARMUP */
#define _VCMP_IEN_WARMUP_MASK               0x2UL               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IEN_WARMUP_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for VCMP_IEN */
#define _VCMP_IEN_WARMUP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for VCMP_IEN */

/* Bit fields for VCMP IF */
#define _VCMP_IF_RESETVALUE                 0x00000000UL        /**< Default value for VCMP_IF */
#define _VCMP_IF_MASK                       0x00000003UL        /**< Mask for VCMP_IF */
#define VCMP_IF_EDGE                        (0x1UL << 0)        /**< Edge Triggered Interrupt Flag */
#define _VCMP_IF_EDGE_SHIFT                 0                   /**< Shift value for VCMP_EDGE */
#define _VCMP_IF_EDGE_MASK                  0x1UL               /**< Bit mask for VCMP_EDGE */
#define VCMP_IF_EDGE_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_IF */
#define _VCMP_IF_EDGE_DEFAULT               0x00000000UL        /**< Mode DEFAULT for VCMP_IF */
#define VCMP_IF_WARMUP                      (0x1UL << 1)        /**< Warm-up Interrupt Flag */
#define _VCMP_IF_WARMUP_SHIFT               1                   /**< Shift value for VCMP_WARMUP */
#define _VCMP_IF_WARMUP_MASK                0x2UL               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IF_WARMUP_DEFAULT              (0x00000000UL << 1) /**< Shifted mode DEFAULT for VCMP_IF */
#define _VCMP_IF_WARMUP_DEFAULT             0x00000000UL        /**< Mode DEFAULT for VCMP_IF */

/* Bit fields for VCMP IFS */
#define _VCMP_IFS_RESETVALUE                0x00000000UL        /**< Default value for VCMP_IFS */
#define _VCMP_IFS_MASK                      0x00000003UL        /**< Mask for VCMP_IFS */
#define VCMP_IFS_EDGE                       (0x1UL << 0)        /**< Edge Triggered Interrupt Flag Set */
#define _VCMP_IFS_EDGE_SHIFT                0                   /**< Shift value for VCMP_EDGE */
#define _VCMP_IFS_EDGE_MASK                 0x1UL               /**< Bit mask for VCMP_EDGE */
#define VCMP_IFS_EDGE_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_IFS */
#define _VCMP_IFS_EDGE_DEFAULT              0x00000000UL        /**< Mode DEFAULT for VCMP_IFS */
#define VCMP_IFS_WARMUP                     (0x1UL << 1)        /**< Warm-up Interrupt Flag Set */
#define _VCMP_IFS_WARMUP_SHIFT              1                   /**< Shift value for VCMP_WARMUP */
#define _VCMP_IFS_WARMUP_MASK               0x2UL               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IFS_WARMUP_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for VCMP_IFS */
#define _VCMP_IFS_WARMUP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for VCMP_IFS */

/* Bit fields for VCMP IFC */
#define _VCMP_IFC_RESETVALUE                0x00000000UL        /**< Default value for VCMP_IFC */
#define _VCMP_IFC_MASK                      0x00000003UL        /**< Mask for VCMP_IFC */
#define VCMP_IFC_EDGE                       (0x1UL << 0)        /**< Edge Triggered Interrupt Flag Clear */
#define _VCMP_IFC_EDGE_SHIFT                0                   /**< Shift value for VCMP_EDGE */
#define _VCMP_IFC_EDGE_MASK                 0x1UL               /**< Bit mask for VCMP_EDGE */
#define VCMP_IFC_EDGE_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for VCMP_IFC */
#define _VCMP_IFC_EDGE_DEFAULT              0x00000000UL        /**< Mode DEFAULT for VCMP_IFC */
#define VCMP_IFC_WARMUP                     (0x1UL << 1)        /**< Warm-up Interrupt Flag Clear */
#define _VCMP_IFC_WARMUP_SHIFT              1                   /**< Shift value for VCMP_WARMUP */
#define _VCMP_IFC_WARMUP_MASK               0x2UL               /**< Bit mask for VCMP_WARMUP */
#define VCMP_IFC_WARMUP_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for VCMP_IFC */
#define _VCMP_IFC_WARMUP_DEFAULT            0x00000000UL        /**< Mode DEFAULT for VCMP_IFC */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_RTC
 * @{
 *****************************************************************************/

/* Bit fields for RTC CTRL */
#define _RTC_CTRL_RESETVALUE             0x00000000UL        /**< Default value for RTC_CTRL */
#define _RTC_CTRL_MASK                   0x00000007UL        /**< Mask for RTC_CTRL */
#define RTC_CTRL_EN                      (0x1UL << 0)        /**< RTC Enable */
#define _RTC_CTRL_EN_SHIFT               0                   /**< Shift value for RTC_EN */
#define _RTC_CTRL_EN_MASK                0x1UL               /**< Bit mask for RTC_EN */
#define RTC_CTRL_EN_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_EN_DEFAULT             0x00000000UL        /**< Mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_DEBUGRUN                (0x1UL << 1)        /**< Debug Mode Run Enable */
#define _RTC_CTRL_DEBUGRUN_SHIFT         1                   /**< Shift value for RTC_DEBUGRUN */
#define _RTC_CTRL_DEBUGRUN_MASK          0x2UL               /**< Bit mask for RTC_DEBUGRUN */
#define RTC_CTRL_DEBUGRUN_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_DEBUGRUN_DEFAULT       0x00000000UL        /**< Mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_COMP0TOP                (0x1UL << 2)        /**< Compare Channel 0 is Top Value */
#define _RTC_CTRL_COMP0TOP_SHIFT         2                   /**< Shift value for RTC_COMP0TOP */
#define _RTC_CTRL_COMP0TOP_MASK          0x4UL               /**< Bit mask for RTC_COMP0TOP */
#define RTC_CTRL_COMP0TOP_DEFAULT        (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_CTRL */
#define RTC_CTRL_COMP0TOP_DISABLE        (0x00000000UL << 2) /**< Shifted mode DISABLE for RTC_CTRL */
#define RTC_CTRL_COMP0TOP_ENABLE         (0x00000001UL << 2) /**< Shifted mode ENABLE for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_DEFAULT       0x00000000UL        /**< Mode DEFAULT for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_DISABLE       0x00000000UL        /**< Mode DISABLE for RTC_CTRL */
#define _RTC_CTRL_COMP0TOP_ENABLE        0x00000001UL        /**< Mode ENABLE for RTC_CTRL */

/* Bit fields for RTC CNT */
#define _RTC_CNT_RESETVALUE              0x00000000UL        /**< Default value for RTC_CNT */
#define _RTC_CNT_MASK                    0x00FFFFFFUL        /**< Mask for RTC_CNT */
#define _RTC_CNT_CNT_SHIFT               0                   /**< Shift value for RTC_CNT */
#define _RTC_CNT_CNT_MASK                0xFFFFFFUL          /**< Bit mask for RTC_CNT */
#define RTC_CNT_CNT_DEFAULT              (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_CNT */
#define _RTC_CNT_CNT_DEFAULT             0x00000000UL        /**< Mode DEFAULT for RTC_CNT */

/* Bit fields for RTC COMP0 */
#define _RTC_COMP0_RESETVALUE            0x00000000UL        /**< Default value for RTC_COMP0 */
#define _RTC_COMP0_MASK                  0x00FFFFFFUL        /**< Mask for RTC_COMP0 */
#define _RTC_COMP0_COMP0_SHIFT           0                   /**< Shift value for RTC_COMP0 */
#define _RTC_COMP0_COMP0_MASK            0xFFFFFFUL          /**< Bit mask for RTC_COMP0 */
#define RTC_COMP0_COMP0_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_COMP0 */
#define _RTC_COMP0_COMP0_DEFAULT         0x00000000UL        /**< Mode DEFAULT for RTC_COMP0 */

/* Bit fields for RTC COMP1 */
#define _RTC_COMP1_RESETVALUE            0x00000000UL        /**< Default value for RTC_COMP1 */
#define _RTC_COMP1_MASK                  0x00FFFFFFUL        /**< Mask for RTC_COMP1 */
#define _RTC_COMP1_COMP1_SHIFT           0                   /**< Shift value for RTC_COMP1 */
#define _RTC_COMP1_COMP1_MASK            0xFFFFFFUL          /**< Bit mask for RTC_COMP1 */
#define RTC_COMP1_COMP1_DEFAULT          (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_COMP1 */
#define _RTC_COMP1_COMP1_DEFAULT         0x00000000UL        /**< Mode DEFAULT for RTC_COMP1 */

/* Bit fields for RTC IF */
#define _RTC_IF_RESETVALUE               0x00000000UL        /**< Default value for RTC_IF */
#define _RTC_IF_MASK                     0x00000007UL        /**< Mask for RTC_IF */
#define RTC_IF_OF                        (0x1UL << 0)        /**< Overflow Interrupt Flag */
#define _RTC_IF_OF_SHIFT                 0                   /**< Shift value for RTC_OF */
#define _RTC_IF_OF_MASK                  0x1UL               /**< Bit mask for RTC_OF */
#define RTC_IF_OF_DEFAULT                (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_OF_DEFAULT               0x00000000UL        /**< Mode DEFAULT for RTC_IF */
#define RTC_IF_COMP0                     (0x1UL << 1)        /**< Compare Match 0 Interrupt Flag */
#define _RTC_IF_COMP0_SHIFT              1                   /**< Shift value for RTC_COMP0 */
#define _RTC_IF_COMP0_MASK               0x2UL               /**< Bit mask for RTC_COMP0 */
#define RTC_IF_COMP0_DEFAULT             (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_COMP0_DEFAULT            0x00000000UL        /**< Mode DEFAULT for RTC_IF */
#define RTC_IF_COMP1                     (0x1UL << 2)        /**< Compare Match 1 Interrupt Flag */
#define _RTC_IF_COMP1_SHIFT              2                   /**< Shift value for RTC_COMP1 */
#define _RTC_IF_COMP1_MASK               0x4UL               /**< Bit mask for RTC_COMP1 */
#define RTC_IF_COMP1_DEFAULT             (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_IF */
#define _RTC_IF_COMP1_DEFAULT            0x00000000UL        /**< Mode DEFAULT for RTC_IF */

/* Bit fields for RTC IFS */
#define _RTC_IFS_RESETVALUE              0x00000000UL        /**< Default value for RTC_IFS */
#define _RTC_IFS_MASK                    0x00000007UL        /**< Mask for RTC_IFS */
#define RTC_IFS_OF                       (0x1UL << 0)        /**< Set Overflow Interrupt Flag */
#define _RTC_IFS_OF_SHIFT                0                   /**< Shift value for RTC_OF */
#define _RTC_IFS_OF_MASK                 0x1UL               /**< Bit mask for RTC_OF */
#define RTC_IFS_OF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for RTC_IFS */
#define RTC_IFS_COMP0                    (0x1UL << 1)        /**< Set Compare match 0 Interrupt Flag */
#define _RTC_IFS_COMP0_SHIFT             1                   /**< Shift value for RTC_COMP0 */
#define _RTC_IFS_COMP0_MASK              0x2UL               /**< Bit mask for RTC_COMP0 */
#define RTC_IFS_COMP0_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IFS */
#define RTC_IFS_COMP1                    (0x1UL << 2)        /**< Set Compare match 1 Interrupt Flag */
#define _RTC_IFS_COMP1_SHIFT             2                   /**< Shift value for RTC_COMP1 */
#define _RTC_IFS_COMP1_MASK              0x4UL               /**< Bit mask for RTC_COMP1 */
#define RTC_IFS_COMP1_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_IFS */
#define _RTC_IFS_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IFS */

/* Bit fields for RTC IFC */
#define _RTC_IFC_RESETVALUE              0x00000000UL        /**< Default value for RTC_IFC */
#define _RTC_IFC_MASK                    0x00000007UL        /**< Mask for RTC_IFC */
#define RTC_IFC_OF                       (0x1UL << 0)        /**< Clear Overflow Interrupt Flag */
#define _RTC_IFC_OF_SHIFT                0                   /**< Shift value for RTC_OF */
#define _RTC_IFC_OF_MASK                 0x1UL               /**< Bit mask for RTC_OF */
#define RTC_IFC_OF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for RTC_IFC */
#define RTC_IFC_COMP0                    (0x1UL << 1)        /**< Clear Compare match 0 Interrupt Flag */
#define _RTC_IFC_COMP0_SHIFT             1                   /**< Shift value for RTC_COMP0 */
#define _RTC_IFC_COMP0_MASK              0x2UL               /**< Bit mask for RTC_COMP0 */
#define RTC_IFC_COMP0_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IFC */
#define RTC_IFC_COMP1                    (0x1UL << 2)        /**< Clear Compare match 1 Interrupt Flag */
#define _RTC_IFC_COMP1_SHIFT             2                   /**< Shift value for RTC_COMP1 */
#define _RTC_IFC_COMP1_MASK              0x4UL               /**< Bit mask for RTC_COMP1 */
#define RTC_IFC_COMP1_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_IFC */
#define _RTC_IFC_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IFC */

/* Bit fields for RTC IEN */
#define _RTC_IEN_RESETVALUE              0x00000000UL        /**< Default value for RTC_IEN */
#define _RTC_IEN_MASK                    0x00000007UL        /**< Mask for RTC_IEN */
#define RTC_IEN_OF                       (0x1UL << 0)        /**< Overflow Interrupt Enable */
#define _RTC_IEN_OF_SHIFT                0                   /**< Shift value for RTC_OF */
#define _RTC_IEN_OF_MASK                 0x1UL               /**< Bit mask for RTC_OF */
#define RTC_IEN_OF_DEFAULT               (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_OF_DEFAULT              0x00000000UL        /**< Mode DEFAULT for RTC_IEN */
#define RTC_IEN_COMP0                    (0x1UL << 1)        /**< Compare Match 0 Interrupt Enable */
#define _RTC_IEN_COMP0_SHIFT             1                   /**< Shift value for RTC_COMP0 */
#define _RTC_IEN_COMP0_MASK              0x2UL               /**< Bit mask for RTC_COMP0 */
#define RTC_IEN_COMP0_DEFAULT            (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_COMP0_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IEN */
#define RTC_IEN_COMP1                    (0x1UL << 2)        /**< Compare Match 1 Interrupt Enable */
#define _RTC_IEN_COMP1_SHIFT             2                   /**< Shift value for RTC_COMP1 */
#define _RTC_IEN_COMP1_MASK              0x4UL               /**< Bit mask for RTC_COMP1 */
#define RTC_IEN_COMP1_DEFAULT            (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_IEN */
#define _RTC_IEN_COMP1_DEFAULT           0x00000000UL        /**< Mode DEFAULT for RTC_IEN */

/* Bit fields for RTC FREEZE */
#define _RTC_FREEZE_RESETVALUE           0x00000000UL        /**< Default value for RTC_FREEZE */
#define _RTC_FREEZE_MASK                 0x00000001UL        /**< Mask for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE             (0x1UL << 0)        /**< Register Update Freeze */
#define _RTC_FREEZE_REGFREEZE_SHIFT      0                   /**< Shift value for RTC_REGFREEZE */
#define _RTC_FREEZE_REGFREEZE_MASK       0x1UL               /**< Bit mask for RTC_REGFREEZE */
#define RTC_FREEZE_REGFREEZE_DEFAULT     (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE_UPDATE      (0x00000000UL << 0) /**< Shifted mode UPDATE for RTC_FREEZE */
#define RTC_FREEZE_REGFREEZE_FREEZE      (0x00000001UL << 0) /**< Shifted mode FREEZE for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_DEFAULT    0x00000000UL        /**< Mode DEFAULT for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_UPDATE     0x00000000UL        /**< Mode UPDATE for RTC_FREEZE */
#define _RTC_FREEZE_REGFREEZE_FREEZE     0x00000001UL        /**< Mode FREEZE for RTC_FREEZE */

/* Bit fields for RTC SYNCBUSY */
#define _RTC_SYNCBUSY_RESETVALUE         0x00000000UL        /**< Default value for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_MASK               0x00000007UL        /**< Mask for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_CTRL                (0x1UL << 0)        /**< RTC_CTRL Register Busy */
#define _RTC_SYNCBUSY_CTRL_SHIFT         0                   /**< Shift value for RTC_CTRL */
#define _RTC_SYNCBUSY_CTRL_MASK          0x1UL               /**< Bit mask for RTC_CTRL */
#define RTC_SYNCBUSY_CTRL_DEFAULT        (0x00000000UL << 0) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_CTRL_DEFAULT       0x00000000UL        /**< Mode DEFAULT for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_COMP0               (0x1UL << 1)        /**< RTC_COMP0 Register Busy */
#define _RTC_SYNCBUSY_COMP0_SHIFT        1                   /**< Shift value for RTC_COMP0 */
#define _RTC_SYNCBUSY_COMP0_MASK         0x2UL               /**< Bit mask for RTC_COMP0 */
#define RTC_SYNCBUSY_COMP0_DEFAULT       (0x00000000UL << 1) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_COMP0_DEFAULT      0x00000000UL        /**< Mode DEFAULT for RTC_SYNCBUSY */
#define RTC_SYNCBUSY_COMP1               (0x1UL << 2)        /**< RTC_COMP1 Register Busy */
#define _RTC_SYNCBUSY_COMP1_SHIFT        2                   /**< Shift value for RTC_COMP1 */
#define _RTC_SYNCBUSY_COMP1_MASK         0x4UL               /**< Bit mask for RTC_COMP1 */
#define RTC_SYNCBUSY_COMP1_DEFAULT       (0x00000000UL << 2) /**< Shifted mode DEFAULT for RTC_SYNCBUSY */
#define _RTC_SYNCBUSY_COMP1_DEFAULT      0x00000000UL        /**< Mode DEFAULT for RTC_SYNCBUSY */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_WDOG
 * @{
 *****************************************************************************/

/* Bit fields for WDOG CTRL */
#define _WDOG_CTRL_RESETVALUE            0x00000F00UL         /**< Default value for WDOG_CTRL */
#define _WDOG_CTRL_MASK                  0x00003F7FUL         /**< Mask for WDOG_CTRL */
#define WDOG_CTRL_EN                     (0x1UL << 0)         /**< Watchdog Timer Enable */
#define _WDOG_CTRL_EN_SHIFT              0                    /**< Shift value for WDOG_EN */
#define _WDOG_CTRL_EN_MASK               0x1UL                /**< Bit mask for WDOG_EN */
#define WDOG_CTRL_EN_DEFAULT             (0x00000000UL << 0)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EN_DEFAULT            0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_DEBUGRUN               (0x1UL << 1)         /**< Debug Mode Run Enable */
#define _WDOG_CTRL_DEBUGRUN_SHIFT        1                    /**< Shift value for WDOG_DEBUGRUN */
#define _WDOG_CTRL_DEBUGRUN_MASK         0x2UL                /**< Bit mask for WDOG_DEBUGRUN */
#define WDOG_CTRL_DEBUGRUN_DEFAULT       (0x00000000UL << 1)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_DEBUGRUN_DEFAULT      0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM2RUN                 (0x1UL << 2)         /**< Energy Mode 2 Run Enable */
#define _WDOG_CTRL_EM2RUN_SHIFT          2                    /**< Shift value for WDOG_EM2RUN */
#define _WDOG_CTRL_EM2RUN_MASK           0x4UL                /**< Bit mask for WDOG_EM2RUN */
#define WDOG_CTRL_EM2RUN_DEFAULT         (0x00000000UL << 2)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM2RUN_DEFAULT        0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM3RUN                 (0x1UL << 3)         /**< Energy Mode 3 Run Enable */
#define _WDOG_CTRL_EM3RUN_SHIFT          3                    /**< Shift value for WDOG_EM3RUN */
#define _WDOG_CTRL_EM3RUN_MASK           0x8UL                /**< Bit mask for WDOG_EM3RUN */
#define WDOG_CTRL_EM3RUN_DEFAULT         (0x00000000UL << 3)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM3RUN_DEFAULT        0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_LOCK                   (0x1UL << 4)         /**< Configuration lock */
#define _WDOG_CTRL_LOCK_SHIFT            4                    /**< Shift value for WDOG_LOCK */
#define _WDOG_CTRL_LOCK_MASK             0x10UL               /**< Bit mask for WDOG_LOCK */
#define WDOG_CTRL_LOCK_DEFAULT           (0x00000000UL << 4)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_LOCK_DEFAULT          0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_EM4BLOCK               (0x1UL << 5)         /**< Energy Mode 4 Block */
#define _WDOG_CTRL_EM4BLOCK_SHIFT        5                    /**< Shift value for WDOG_EM4BLOCK */
#define _WDOG_CTRL_EM4BLOCK_MASK         0x20UL               /**< Bit mask for WDOG_EM4BLOCK */
#define WDOG_CTRL_EM4BLOCK_DEFAULT       (0x00000000UL << 5)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_EM4BLOCK_DEFAULT      0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_SWOSCBLOCK             (0x1UL << 6)         /**< Software Oscillator Disable Block */
#define _WDOG_CTRL_SWOSCBLOCK_SHIFT      6                    /**< Shift value for WDOG_SWOSCBLOCK */
#define _WDOG_CTRL_SWOSCBLOCK_MASK       0x40UL               /**< Bit mask for WDOG_SWOSCBLOCK */
#define WDOG_CTRL_SWOSCBLOCK_DEFAULT     (0x00000000UL << 6)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_SWOSCBLOCK_DEFAULT    0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_PERSEL_SHIFT          8                    /**< Shift value for WDOG_PERSEL */
#define _WDOG_CTRL_PERSEL_MASK           0xF00UL              /**< Bit mask for WDOG_PERSEL */
#define WDOG_CTRL_PERSEL_DEFAULT         (0x0000000FUL << 8)  /**< Shifted mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_PERSEL_DEFAULT        0x0000000FUL         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_SHIFT          12                   /**< Shift value for WDOG_CLKSEL */
#define _WDOG_CTRL_CLKSEL_MASK           0x3000UL             /**< Bit mask for WDOG_CLKSEL */
#define WDOG_CTRL_CLKSEL_DEFAULT         (0x00000000UL << 12) /**< Shifted mode DEFAULT for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_ULFRCO          (0x00000000UL << 12) /**< Shifted mode ULFRCO for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_LFRCO           (0x00000001UL << 12) /**< Shifted mode LFRCO for WDOG_CTRL */
#define WDOG_CTRL_CLKSEL_LFXO            (0x00000002UL << 12) /**< Shifted mode LFXO for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_DEFAULT        0x00000000UL         /**< Mode DEFAULT for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_ULFRCO         0x00000000UL         /**< Mode ULFRCO for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_LFRCO          0x00000001UL         /**< Mode LFRCO for WDOG_CTRL */
#define _WDOG_CTRL_CLKSEL_LFXO           0x00000002UL         /**< Mode LFXO for WDOG_CTRL */

/* Bit fields for WDOG CMD */
#define _WDOG_CMD_RESETVALUE             0x00000000UL        /**< Default value for WDOG_CMD */
#define _WDOG_CMD_MASK                   0x00000001UL        /**< Mask for WDOG_CMD */
#define WDOG_CMD_CLEAR                   (0x1UL << 0)        /**< Watchdog Timer Clear */
#define _WDOG_CMD_CLEAR_SHIFT            0                   /**< Shift value for WDOG_CLEAR */
#define _WDOG_CMD_CLEAR_MASK             0x1UL               /**< Bit mask for WDOG_CLEAR */
#define WDOG_CMD_CLEAR_DEFAULT           (0x00000000UL << 0) /**< Shifted mode DEFAULT for WDOG_CMD */
#define WDOG_CMD_CLEAR_UNCHANGED         (0x00000000UL << 0) /**< Shifted mode UNCHANGED for WDOG_CMD */
#define WDOG_CMD_CLEAR_CLEARED           (0x00000001UL << 0) /**< Shifted mode CLEARED for WDOG_CMD */
#define _WDOG_CMD_CLEAR_DEFAULT          0x00000000UL        /**< Mode DEFAULT for WDOG_CMD */
#define _WDOG_CMD_CLEAR_UNCHANGED        0x00000000UL        /**< Mode UNCHANGED for WDOG_CMD */
#define _WDOG_CMD_CLEAR_CLEARED          0x00000001UL        /**< Mode CLEARED for WDOG_CMD */

/* Bit fields for WDOG SYNCBUSY */
#define _WDOG_SYNCBUSY_RESETVALUE        0x00000000UL        /**< Default value for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_MASK              0x00000003UL        /**< Mask for WDOG_SYNCBUSY */
#define WDOG_SYNCBUSY_CTRL               (0x1UL << 0)        /**< WDOG_CTRL Register Busy */
#define _WDOG_SYNCBUSY_CTRL_SHIFT        0                   /**< Shift value for WDOG_CTRL */
#define _WDOG_SYNCBUSY_CTRL_MASK         0x1UL               /**< Bit mask for WDOG_CTRL */
#define WDOG_SYNCBUSY_CTRL_DEFAULT       (0x00000000UL << 0) /**< Shifted mode DEFAULT for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_CTRL_DEFAULT      0x00000000UL        /**< Mode DEFAULT for WDOG_SYNCBUSY */
#define WDOG_SYNCBUSY_CMD                (0x1UL << 1)        /**< WDOG_CMD Register Busy */
#define _WDOG_SYNCBUSY_CMD_SHIFT         1                   /**< Shift value for WDOG_CMD */
#define _WDOG_SYNCBUSY_CMD_MASK          0x2UL               /**< Bit mask for WDOG_CMD */
#define WDOG_SYNCBUSY_CMD_DEFAULT        (0x00000000UL << 1) /**< Shifted mode DEFAULT for WDOG_SYNCBUSY */
#define _WDOG_SYNCBUSY_CMD_DEFAULT       0x00000000UL        /**< Mode DEFAULT for WDOG_SYNCBUSY */

/**
 * @}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_DEVINFO
 * @\{
 *****************************************************************************/
/* Bit fields for EFM32G200F32_DEVINFO */
#define _DEVINFO_CAL_CRC_MASK                      0xFFFF0000UL  /**< Integrity CRC checksum mask */
#define _DEVINFO_CAL_CRC_SHIFT                     16            /**< Integrity CRC checksum shift */
#define _DEVINFO_CAL_TEMP_MASK                     0x0000FF00UL  /**< Calibration temperature, DegC, mask */
#define _DEVINFO_CAL_TEMP_SHIFT                    8             /**< Calibration temperature shift */
#define _DEVINFO_ADC0CAL0_1V25_GAIN_MASK           0x7F000000UL  /**< Gain for 1V25 reference, mask */
#define _DEVINFO_ADC0CAL0_1V25_GAIN_SHIFT          24            /**< Gain for 1V25 reference, shift */
#define _DEVINFO_ADC0CAL0_1V25_OFFSET_MASK         0x007F0000UL  /**< Offset for 1V25 reference, mask */
#define _DEVINFO_ADC0CAL0_1V25_OFFSET_SHIFT        16            /**< Offset for 1V25 reference, shift */
#define _DEVINFO_ADC0CAL0_2V5_GAIN_MASK            0x00007F00UL  /**< Gain for 2V5 reference, mask */
#define _DEVINFO_ADC0CAL0_2V5_GAIN_SHIFT           8             /**< Gain for 2V5 reference, shift */
#define _DEVINFO_ADC0CAL0_2V5_OFFSET_MASK          0x0000007FUL  /**< Offset for 2V5 reference, mask */
#define _DEVINFO_ADC0CAL0_2V5_OFFSET_SHIFT         0             /**< Offset for 2V5 reference, shift */
#define _DEVINFO_ADC0CAL1_VDD_GAIN_MASK            0x7F000000UL  /**< Gain for VDD reference, mask */
#define _DEVINFO_ADC0CAL1_VDD_GAIN_SHIFT           24            /**< Gain for VDD reference, shift */
#define _DEVINFO_ADC0CAL1_VDD_OFFSET_MASK          0x007F0000UL  /**< Offset for VDD reference, mask */
#define _DEVINFO_ADC0CAL1_VDD_OFFSET_SHIFT         16            /**< Offset for VDD reference, shift */
#define _DEVINFO_ADC0CAL1_5VDIFF_GAIN_MASK         0x00007F00UL  /**< Gain 5VDIFF for 5VDIFF reference, mask */
#define _DEVINFO_ADC0CAL1_5VDIFF_GAIN_SHIFT        8             /**< Gain for 5VDIFF reference, mask */
#define _DEVINFO_ADC0CAL1_5VDIFF_OFFSET_MASK       0x0000007FUL  /**< Offset for 5VDIFF reference, mask */
#define _DEVINFO_ADC0CAL1_5VDIFF_OFFSET_SHIFT      0             /**< Offset for 5VDIFF reference, shift */
#define _DEVINFO_ADC0CAL2_2XVDDVSS_OFFSET_MASK     0x007F0000UL  /**< Offset for 2XVDDVSS reference, mask */
#define _DEVINFO_ADC0CAL2_2XVDDVSS_OFFSET_SHIFT    16            /**< Offset for 2XVDDVSS reference, shift */
#define _DEVINFO_ADC0CAL2_TEMP1V25_MASK            0x00000FFFUL  /**< Temperature reading at 1V25 reference, mask */
#define _DEVINFO_ADC0CAL2_TEMP1V25_SHIFT           0             /**< Temperature reading at 1V25 reference, DegC */
#define _DEVINFO_DACCAL0_1V25_GAIN_MASK            0x007F0000UL  /**< Gain for 1V25 reference, mask */
#define _DEVINFO_DACCAL0_1V25_GAIN_SHIFT           16            /**< Gain for 1V25 reference, shift */
#define _DEVINFO_DACCAL0_1V25_CH0_OFFSET_MASK      0x00003F00UL  /**< Channel 0 offset for 1V25 reference, mask */
#define _DEVINFO_DACCAL0_1V25_CH0_OFFSET_SHIFT     8             /**< Channel 0 offset for 1V25 reference, shift */
#define _DEVINFO_DACCAL0_1V25_CH1_OFFSET_MASK      0x0000003FUL  /**< Channel 1 offset for 1V25 reference, mask */
#define _DEVINFO_DACCAL0_1V25_CH1_OFFSET_SHIFT     0             /**< Channel 1 offset for 1V25 reference, shift */
#define _DEVINFO_DACCAL1_2V5_GAIN_MASK             0x007F00000UL /**< Gain for 2V5 reference, mask */
#define _DEVINFO_DACCAL1_2V5_GAIN_SHIFT            16            /**< Gain for 2V5 reference, shift */
#define _DEVINFO_DACCAL1_2V5_CH0_OFFSET_MASK       0x00003F00UL  /**< Channel 0 offset for 2V5 reference, mask */
#define _DEVINFO_DACCAL1_2V5_CH0_OFFSET_SHIFT      8             /**< Channel 0 offset for 2V5 reference, shift */
#define _DEVINFO_DACCAL1_2V5_CH1_OFFSET_MASK       0x0000003FUL  /**< Channel 1 offset for 2V5 reference, mask */
#define _DEVINFO_DACCAL1_2V5_CH1_OFFSET_SHIFT      0             /**< Channel 1 offset for 2V5 reference, shift */
#define _DEVINFO_DACCAL2_VDD_GAIN_MASK             0x007F0000UL  /**< Gain for VDD reference, mask */
#define _DEVINFO_DACCAL2_VDD_GAIN_SHIFT            16            /**< Gain for VDD reference, shift */
#define _DEVINFO_DACCAL2_VDD_CH0_OFFSET_MASK       0x00003F00UL  /**< Channel 0 offset for VDD reference, mask */
#define _DEVINFO_DACCAL2_VDD_CH0_OFFSET_SHIFT      8             /**< Channel 0 offset for VDD reference, shift */
#define _DEVINFO_DACCAL2_VDD_CH1_OFFSET_MASK       0x0000003FUL  /**< Channel 1 offset for VDD reference, mask */
#define _DEVINFO_DACCAL2_VDD_CH1_OFFSET_SHIFT      0             /**< Channel 1 offset for VDD reference, shift*/
#define _DEVINFO_HFRCOCAL0_BAND1_MASK              0xFF000000UL  /**< 1MHz tuning value for HFRCO, mask */
#define _DEVINFO_HFRCOCAL0_BAND1_SHIFT             24            /**< 1MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL0_BAND7_MASK              0x00FF0000UL  /**< 7MHz tuning value for HFRCO, mask */
#define _DEVINFO_HFRCOCAL0_BAND7_SHIFT             16            /**< 7MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL0_BAND11_MASK             0x0000FF00UL  /**< 11MHz tuning value for HFRCO, mask */
#define _DEVINFO_HFRCOCAL0_BAND11_SHIFT            8             /**< 11MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL0_BAND14_MASK             0x000000FFUL  /**< 14MHz tuning value for HFRCO, mask */
#define _DEVINFO_HFRCOCAL0_BAND14_SHIFT            0             /**< 14MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL1_BAND21_MASK             0xFF000000UL  /**< 21MHz tuning value for HFRCO, mask */
#define _DEVINFO_HFRCOCAL1_BAND21_SHIFT            24            /**< 21MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL1_BAND28_MASK             0x00FF0000UL  /**< 28MHz tuning value for HFRCO, shift */
#define _DEVINFO_HFRCOCAL1_BAND28_SHIFT            8             /**< 28MHz tuning value for HFRCO, mask */
#define _DEVINFO_UNIQUEL_MASK                      0xFFFFFFFFUL  /**< Lower part of  64-bit device unique number */
#define _DEVINFO_UNIQUEL_SHIFT                     0             /**< Unique Low 32-bit shift */
#define _DEVINFO_UNIQUEH_MASK                      0xFFFFFFFFUL  /**< High part of  64-bit device unique number */
#define _DEVINFO_UNIQUEH_SHIFT                     0             /**< Unique High 32-bit shift */
#define _DEVINFO_MSIZE_FLASH_MASK                  0xFFFF0000UL  /**< Flash size in kilobytes */
#define _DEVINFO_MSIZE_FLASH_SHIFT                 16            /**< Bit position for flash size */
#define _DEVINFO_MSIZE_SRAM_MASK                   0x0000FFFFUL  /**< SRAM size in kilobytes */
#define _DEVINFO_MSIZE_SRAM_SHIFT                  0             /**< Bit position for SRAM size */
#define _DEVINFO_PART_PROD_REV_MASK                0xFF000000UL  /**< Production revision */
#define _DEVINFO_PART_PROD_REV_SHIFT               24            /**< Bit position for production revision */
#define _DEVINFO_PART_DEVICE_FAMILY_MASK           0x00FF0000UL  /**< Device Family, 0x47 for Gecko */
#define _DEVINFO_PART_DEVICE_FAMILY_SHIFT          16            /**< Bit position for device family */
#define _DEVINFO_PART_DEVICE_NUMBER_MASK           0x0000FFFFUL  /**< Device number */
#define _DEVINFO_PART_DEVICE_NUMBER_SHIFT          0             /**< Bit position for device number */

/**
 * @\}
 */

/**************************************************************************//**
 * @addtogroup EFM32G200F32_ROMTABLE
 * @\{
 *****************************************************************************/
/* Bit fields for EFM32G200F32_ROMTABLE */
#define _ROMTABLE_PID0_FAMILYLSB_MASK       0x000000C0UL /**< Least Significant Bits [1:0] of CHIP FAMILY, mask */
#define _ROMTABLE_PID0_FAMILYLSB_SHIFT      6            /**< Least Significant Bits [1:0] of CHIP FAMILY, shift */
#define _ROMTABLE_PID0_REVMAJOR_MASK        0x0000003FUL /**< CHIP MAJOR Revison, mask */
#define _ROMTABLE_PID0_REVMAJOR_SHIFT       0            /**< CHIP MAJOR Revison, shift */
#define _ROMTABLE_PID1_FAMILYMSB_MASK       0x0000000FUL /**< Most Significant Bits [5:2] of CHIP FAMILY, mask */
#define _ROMTABLE_PID1_FAMILYMSB_SHIFT      0            /**< Most Significant Bits [5:2] of CHIP FAMILY, shift */
#define _ROMTABLE_PID2_REVMINORMSB_MASK     0x000000F0UL /**< Most Significant Bits [7:4] of CHIP MINOR revision, mask */
#define _ROMTABLE_PID2_REVMINORMSB_SHIFT    4            /**< Most Significant Bits [7:4] of CHIP MINOR revision, mask */
#define _ROMTABLE_PID3_REVMINORLSB_MASK     0x000000F0UL /**< Least Significant Bits [3:0] of CHIP MINOR revision, mask */
#define _ROMTABLE_PID3_REVMINORLSB_SHIFT    4            /**< Least Significant Bits [3:0] of CHIP MINOR revision, shift */

/**
 * @\}
 */

/******************************************************************************
 * Unlock codes
 *****************************************************************************/
/**************************************************************************//**
 * @addtogroup EFM32G200F32_MSC
 * @{
 *****************************************************************************/
#define MSC_UNLOCK_CODE      0x1B71 /**< MSC unlock code */
/**
 * @}
 */
/**************************************************************************//**
 * @addtogroup EFM32G200F32_EMU
 * @{
 *****************************************************************************/
#define EMU_UNLOCK_CODE      0xADE8 /**< EMU unlock code */
/**
 * @}
 */
/**************************************************************************//**
 * @addtogroup EFM32G200F32_CMU
 * @{
 *****************************************************************************/
#define CMU_UNLOCK_CODE      0x580E /**< CMU unlock code */
/**
 * @}
 */
/**************************************************************************//**
 * @addtogroup EFM32G200F32_GPIO
 * @{
 *****************************************************************************/
#define GPIO_UNLOCK_CODE     0xA534 /**< GPIO unlock code */
/**
 * @}
 */
/**************************************************************************//**
 * @addtogroup EFM32G200F32_TIMER
 * @{
 *****************************************************************************/
#define TIMER_UNLOCK_CODE    0xCE80 /**< TIMER unlock code */
/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G200F32_Alternate_Function EFM32G200F32 Alternate Function
 * @{
 *****************************************************************************/

/**************************************************************************//**
 * @defgroup EFM32G200F32_AF_Channels EFM32G200F32 AF Channels
 * @{
 *****************************************************************************/

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX          79
#define AFCHANLOC_MAX       4
/** Analog AF channels */
#define AFACHAN_MAX         37

/** Peripheral Alternate Function (AF) channels */
#define AF_CMU_CLKOUT0      0
#define AF_CMU_CLKOUT1      1
#define AF_EBI_ADDRDAT00    2
#define AF_EBI_ADDRDAT01    3
#define AF_EBI_ADDRDAT02    4
#define AF_EBI_ADDRDAT03    5
#define AF_EBI_ADDRDAT04    6
#define AF_EBI_ADDRDAT05    7
#define AF_EBI_ADDRDAT06    8
#define AF_EBI_ADDRDAT07    9
#define AF_EBI_ADDRDAT08    10
#define AF_EBI_ADDRDAT09    11
#define AF_EBI_ADDRDAT10    12
#define AF_EBI_ADDRDAT11    13
#define AF_EBI_ADDRDAT12    14
#define AF_EBI_ADDRDAT13    15
#define AF_EBI_ADDRDAT14    16
#define AF_EBI_ADDRDAT15    17
#define AF_EBI_CS0          18
#define AF_EBI_CS1          19
#define AF_EBI_CS2          20
#define AF_EBI_CS3          21
#define AF_EBI_WEn          22
#define AF_EBI_REn          23
#define AF_EBI_ARDY         24
#define AF_EBI_ALE          25
#define AF_TIMER0_CC0       26
#define AF_TIMER0_CC1       27
#define AF_TIMER0_CC2       28
#define AF_TIMER0_CCC0      29
#define AF_TIMER0_CCC1      30
#define AF_TIMER0_CCC2      31
#define AF_TIMER1_CC0       32
#define AF_TIMER1_CC1       33
#define AF_TIMER1_CC2       34
#define AF_TIMER1_CCC0      35
#define AF_TIMER1_CCC1      36
#define AF_TIMER1_CCC2      37
#define AF_TIMER2_CC0       38
#define AF_TIMER2_CC1       39
#define AF_TIMER2_CC2       40
#define AF_TIMER2_CCC0      41
#define AF_TIMER2_CCC1      42
#define AF_TIMER2_CCC2      43
#define AF_USART0_TX        44
#define AF_USART0_RX        45
#define AF_USART0_CLK       46
#define AF_USART0_CS        47
#define AF_USART1_TX        48
#define AF_USART1_RX        49
#define AF_USART1_CLK       50
#define AF_USART1_CS        51
#define AF_USART2_TX        52
#define AF_USART2_RX        53
#define AF_USART2_CLK       54
#define AF_USART2_CS        55
#define AF_UART0_TX         56
#define AF_UART0_RX         57
#define AF_UART0_CLK        58
#define AF_UART0_CS         59
#define AF_LEUART0_TX       60
#define AF_LEUART0_RX       61
#define AF_LEUART1_TX       62
#define AF_LEUART1_RX       63
#define AF_LETIMER0_OUT0    64
#define AF_LETIMER0_OUT1    65
#define AF_PCNT0_S0IN       66
#define AF_PCNT0_S1IN       67
#define AF_PCNT1_S0IN       68
#define AF_PCNT1_S1IN       69
#define AF_PCNT2_S0IN       70
#define AF_PCNT2_S1IN       71
#define AF_I2C0_SDA         72
#define AF_I2C0_SCL         73
#define AF_ACMP0_OUT        74
#define AF_ACMP1_OUT        75
#define AF_DBG_SWV          76
#define AF_DBG_SWDITMS      77
#define AF_DBG_SWCLKTCK     78

/** Analog AF channels */
#define AFA_MSC_TM0         0
#define AFA_MSC_TM1         1
#define AFA_MSC_TM2         2
#define AFA_ADC0_CH0        3
#define AFA_ADC0_CH1        4
#define AFA_ADC0_CH2        5
#define AFA_ADC0_CH3        6
#define AFA_ADC0_CH4        7
#define AFA_ADC0_CH5        8
#define AFA_ADC0_CH6        9
#define AFA_ADC0_CH7        10
#define AFA_ADC0_VCM        11
#define AFA_DAC0_OUT0       12
#define AFA_DAC0_OUT1       13
#define AFA_ACMP0_CH0       14
#define AFA_ACMP0_CH1       15
#define AFA_ACMP0_CH2       16
#define AFA_ACMP0_CH3       17
#define AFA_ACMP0_CH4       18
#define AFA_ACMP0_CH5       19
#define AFA_ACMP0_CH6       20
#define AFA_ACMP0_CH7       21
#define AFA_ACMP1_CH0       22
#define AFA_ACMP1_CH1       23
#define AFA_ACMP1_CH2       24
#define AFA_ACMP1_CH3       25
#define AFA_ACMP1_CH4       26
#define AFA_ACMP1_CH5       27
#define AFA_ACMP1_CH6       28
#define AFA_ACMP1_CH7       29
#define AFA_LCD_BCAP_P      30
#define AFA_LCD_BCAP_N      31
#define AFA_LCD_BEXT        32
#define AFA_HFXTAL_P        33
#define AFA_HFXTAL_N        34
#define AFA_LFXTAL_P        35
#define AFA_LFXTAL_N        36

/** Digital AF */
#define AF_TIMER_CC0(i)       ((i) == 0 ? AF_TIMER0_CC0 : (i) == 1 ? AF_TIMER1_CC0 : (i) == 2 ? AF_TIMER2_CC0 :  -1)
#define AF_UART_CLK(i)        ((i) == 0 ? AF_UART0_CLK :  -1)
#define AF_I2C_SDA(i)         ((i) == 0 ? AF_I2C0_SDA :  -1)
#define AF_TIMER_CC1(i)       ((i) == 0 ? AF_TIMER0_CC1 : (i) == 1 ? AF_TIMER1_CC1 : (i) == 2 ? AF_TIMER2_CC1 :  -1)
#define AF_USART_CS(i)        ((i) == 0 ? AF_USART0_CS : (i) == 1 ? AF_USART1_CS : (i) == 2 ? AF_USART2_CS :  -1)
#define AF_I2C_SCL(i)         ((i) == 0 ? AF_I2C0_SCL :  -1)
#define AF_TIMER_CC2(i)       ((i) == 0 ? AF_TIMER0_CC2 : (i) == 1 ? AF_TIMER1_CC2 : (i) == 2 ? AF_TIMER2_CC2 :  -1)
#define AF_USART_CLK(i)       ((i) == 0 ? AF_USART0_CLK : (i) == 1 ? AF_USART1_CLK : (i) == 2 ? AF_USART2_CLK :  -1)
#define AF_UART_RX(i)         ((i) == 0 ? AF_UART0_RX :  -1)
#define AF_UART_TX(i)         ((i) == 0 ? AF_UART0_TX :  -1)
#define AF_LETIMER_OUT1(i)    ((i) == 0 ? AF_LETIMER0_OUT1 :  -1)
#define AF_LEUART_RX(i)       ((i) == 0 ? AF_LEUART0_RX : (i) == 1 ? AF_LEUART1_RX :  -1)
#define AF_TIMER_CCC0(i)      ((i) == 0 ? AF_TIMER0_CCC0 : (i) == 1 ? AF_TIMER1_CCC0 : (i) == 2 ? AF_TIMER2_CCC0 :  -1)
#define AF_PCNT_S1IN(i)       ((i) == 0 ? AF_PCNT0_S1IN : (i) == 1 ? AF_PCNT1_S1IN : (i) == 2 ? AF_PCNT2_S1IN :  -1)
#define AF_LEUART_TX(i)       ((i) == 0 ? AF_LEUART0_TX : (i) == 1 ? AF_LEUART1_TX :  -1)
#define AF_TIMER_CCC2(i)      ((i) == 0 ? AF_TIMER0_CCC2 : (i) == 1 ? AF_TIMER1_CCC2 : (i) == 2 ? AF_TIMER2_CCC2 :  -1)
#define AF_TIMER_CCC1(i)      ((i) == 0 ? AF_TIMER0_CCC1 : (i) == 1 ? AF_TIMER1_CCC1 : (i) == 2 ? AF_TIMER2_CCC1 :  -1)
#define AF_USART_TX(i)        ((i) == 0 ? AF_USART0_TX : (i) == 1 ? AF_USART1_TX : (i) == 2 ? AF_USART2_TX :  -1)
#define AF_LETIMER_OUT0(i)    ((i) == 0 ? AF_LETIMER0_OUT0 :  -1)
#define AF_ACMP_OUT(i)        ((i) == 0 ? AF_ACMP0_OUT : (i) == 1 ? AF_ACMP1_OUT :  -1)
#define AF_USART_RX(i)        ((i) == 0 ? AF_USART0_RX : (i) == 1 ? AF_USART1_RX : (i) == 2 ? AF_USART2_RX :  -1)
#define AF_UART_CS(i)         ((i) == 0 ? AF_UART0_CS :  -1)
#define AF_PCNT_S0IN(i)       ((i) == 0 ? AF_PCNT0_S0IN : (i) == 1 ? AF_PCNT1_S0IN : (i) == 2 ? AF_PCNT2_S0IN :  -1)
#define AFA_DAC_OUT1(i)       ((i) == 0 ? AFA_DAC0_OUT1 :  -1)
#define AFA_DAC_OUT0(i)       ((i) == 0 ? AFA_DAC0_OUT0 :  -1)
#define AFA_ADC_CH7(i)        ((i) == 0 ? AFA_ADC0_CH7 :  -1)
#define AFA_ADC_VCM(i)        ((i) == 0 ? AFA_ADC0_VCM :  -1)
#define AFA_ACMP_CH1(i)       ((i) == 0 ? AFA_ACMP0_CH1 : (i) == 1 ? AFA_ACMP1_CH1 :  -1)
#define AFA_ADC_CH0(i)        ((i) == 0 ? AFA_ADC0_CH0 :  -1)
#define AFA_ACMP_CH0(i)       ((i) == 0 ? AFA_ACMP0_CH0 : (i) == 1 ? AFA_ACMP1_CH0 :  -1)
#define AFA_ACMP_CH3(i)       ((i) == 0 ? AFA_ACMP0_CH3 : (i) == 1 ? AFA_ACMP1_CH3 :  -1)
#define AFA_ADC_CH1(i)        ((i) == 0 ? AFA_ADC0_CH1 :  -1)
#define AFA_ACMP_CH2(i)       ((i) == 0 ? AFA_ACMP0_CH2 : (i) == 1 ? AFA_ACMP1_CH2 :  -1)
#define AFA_ADC_CH2(i)        ((i) == 0 ? AFA_ADC0_CH2 :  -1)
#define AFA_ADC_CH3(i)        ((i) == 0 ? AFA_ADC0_CH3 :  -1)
#define AFA_ADC_CH4(i)        ((i) == 0 ? AFA_ADC0_CH4 :  -1)
#define AFA_ADC_CH5(i)        ((i) == 0 ? AFA_ADC0_CH5 :  -1)
#define AFA_ADC_CH6(i)        ((i) == 0 ? AFA_ADC0_CH6 :  -1)
#define AFA_ACMP_CH5(i)       ((i) == 0 ? AFA_ACMP0_CH5 : (i) == 1 ? AFA_ACMP1_CH5 :  -1)
#define AFA_ACMP_CH4(i)       ((i) == 0 ? AFA_ACMP0_CH4 : (i) == 1 ? AFA_ACMP1_CH4 :  -1)
#define AFA_ACMP_CH7(i)       ((i) == 0 ? AFA_ACMP0_CH7 : (i) == 1 ? AFA_ACMP1_CH7 :  -1)
#define AFA_ACMP_CH6(i)       ((i) == 0 ? AFA_ACMP0_CH6 : (i) == 1 ? AFA_ACMP1_CH6 :  -1)

/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G200F32_AF_Ports EFM32G200F32 AF Ports
 * @{
 *****************************************************************************/

/** AF port for function f */
#define AF_CMU_CLKOUT0_PORT(f)      ((f) == 0 ? 0 : (f) == 1 ? 2 :  -1)
#define AF_CMU_CLKOUT1_PORT(f)      ((f) == 0 ? 0 : (f) == 1 ? 3 :  -1)
#define AF_EBI_ADDRDAT00_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT01_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT02_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT03_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT04_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT05_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT06_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT07_PORT(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT08_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT09_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT10_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT11_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT12_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT13_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT14_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT15_PORT(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_CS0_PORT(f)          ((f) == 0 ? 3 :  -1)
#define AF_EBI_CS1_PORT(f)          ((f) == 0 ? 3 :  -1)
#define AF_EBI_CS2_PORT(f)          ((f) == 0 ? 3 :  -1)
#define AF_EBI_CS3_PORT(f)          ((f) == 0 ? 3 :  -1)
#define AF_EBI_WEn_PORT(f)          ((f) == 0 ? 5 :  -1)
#define AF_EBI_REn_PORT(f)          ((f) == 0 ? 5 :  -1)
#define AF_EBI_ARDY_PORT(f)         ((f) == 0 ? 5 :  -1)
#define AF_EBI_ALE_PORT(f)          ((f) == 0 ? 5 :  -1)
#define AF_TIMER0_CC0_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 5 : (f) == 3 ? 3 :  -1)
#define AF_TIMER0_CC1_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 5 : (f) == 3 ? 3 :  -1)
#define AF_TIMER0_CC2_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 5 : (f) == 3 ? 3 :  -1)
#define AF_TIMER0_CCC0_PORT(f)      ((f) == 0 ? 0 : (f) == 1 ? 2 : (f) == 2 ? 5 : (f) == 3 ? 2 :  -1)
#define AF_TIMER0_CCC1_PORT(f)      ((f) == 0 ? 0 : (f) == 1 ? 2 : (f) == 2 ? 5 : (f) == 3 ? 2 :  -1)
#define AF_TIMER0_CCC2_PORT(f)      ((f) == 0 ? 0 : (f) == 1 ? 2 : (f) == 2 ? 5 : (f) == 3 ? 2 :  -1)
#define AF_TIMER1_CC0_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 4 : (f) == 2 ? 1 :  -1)
#define AF_TIMER1_CC1_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 4 : (f) == 2 ? 1 :  -1)
#define AF_TIMER1_CC2_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 4 : (f) == 2 ? 1 :  -1)
#define AF_TIMER1_CCC0_PORT(f)      (-1)
#define AF_TIMER1_CCC1_PORT(f)      (-1)
#define AF_TIMER1_CCC2_PORT(f)      (-1)
#define AF_TIMER2_CC0_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 2 :  -1)
#define AF_TIMER2_CC1_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 2 :  -1)
#define AF_TIMER2_CC2_PORT(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 2 :  -1)
#define AF_TIMER2_CCC0_PORT(f)      (-1)
#define AF_TIMER2_CCC1_PORT(f)      (-1)
#define AF_TIMER2_CCC2_PORT(f)      (-1)
#define AF_USART0_TX_PORT(f)        ((f) == 0 ? 4 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_USART0_RX_PORT(f)        ((f) == 0 ? 4 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_USART0_CLK_PORT(f)       ((f) == 0 ? 4 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_USART0_CS_PORT(f)        ((f) == 0 ? 4 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_USART1_TX_PORT(f)        ((f) == 0 ? 2 : (f) == 1 ? 3 :  -1)
#define AF_USART1_RX_PORT(f)        ((f) == 0 ? 2 : (f) == 1 ? 3 :  -1)
#define AF_USART1_CLK_PORT(f)       ((f) == 0 ? 1 : (f) == 1 ? 3 :  -1)
#define AF_USART1_CS_PORT(f)        ((f) == 0 ? 1 : (f) == 1 ? 3 :  -1)
#define AF_USART2_TX_PORT(f)        ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_USART2_RX_PORT(f)        ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_USART2_CLK_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_USART2_CS_PORT(f)        ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_UART0_TX_PORT(f)         ((f) == 0 ? 5 : (f) == 1 ? 4 : (f) == 2 ? 0 : (f) == 3 ? 2 :  -1)
#define AF_UART0_RX_PORT(f)         ((f) == 0 ? 5 : (f) == 1 ? 4 : (f) == 2 ? 0 : (f) == 3 ? 2 :  -1)
#define AF_UART0_CLK_PORT(f)        (-1)
#define AF_UART0_CS_PORT(f)         (-1)
#define AF_LEUART0_TX_PORT(f)       ((f) == 0 ? 3 : (f) == 1 ? 1 : (f) == 2 ? 4 :  -1)
#define AF_LEUART0_RX_PORT(f)       ((f) == 0 ? 3 : (f) == 1 ? 1 : (f) == 2 ? 4 :  -1)
#define AF_LEUART1_TX_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 0 :  -1)
#define AF_LEUART1_RX_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 0 :  -1)
#define AF_LETIMER0_OUT0_PORT(f)    ((f) == 0 ? 3 : (f) == 1 ? 1 : (f) == 2 ? 5 : (f) == 3 ? 2 :  -1)
#define AF_LETIMER0_OUT1_PORT(f)    ((f) == 0 ? 3 : (f) == 1 ? 1 : (f) == 2 ? 5 : (f) == 3 ? 2 :  -1)
#define AF_PCNT0_S0IN_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_PCNT0_S1IN_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 4 : (f) == 2 ? 2 :  -1)
#define AF_PCNT1_S0IN_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_PCNT1_S1IN_PORT(f)       ((f) == 0 ? 2 : (f) == 1 ? 1 :  -1)
#define AF_PCNT2_S0IN_PORT(f)       ((f) == 0 ? 3 : (f) == 1 ? 4 :  -1)
#define AF_PCNT2_S1IN_PORT(f)       ((f) == 0 ? 3 : (f) == 1 ? 4 :  -1)
#define AF_I2C0_SDA_PORT(f)         ((f) == 0 ? 0 : (f) == 1 ? 3 : (f) == 2 ? 2 : (f) == 3 ? 3 :  -1)
#define AF_I2C0_SCL_PORT(f)         ((f) == 0 ? 0 : (f) == 1 ? 3 : (f) == 2 ? 2 : (f) == 3 ? 3 :  -1)
#define AF_ACMP0_OUT_PORT(f)        ((f) == 0 ? 4 : (f) == 1 ? 4 :  -1)
#define AF_ACMP1_OUT_PORT(f)        ((f) == 0 ? 5 : (f) == 1 ? 4 :  -1)
#define AF_DBG_SWV_PORT(f)          ((f) == 0 ? 5 : (f) == 1 ? 2 :  -1)
#define AF_DBG_SWDITMS_PORT(f)      ((f) == 0 ? 5 : (f) == 1 ? 5 :  -1)
#define AF_DBG_SWCLKTCK_PORT(f)     ((f) == 0 ? 5 : (f) == 1 ? 5 :  -1)

/**
 * @}
 */

/**************************************************************************//**
 * @defgroup EFM32G200F32_AF_Pins EFM32G200F32 AF Pins
 * @{
 *****************************************************************************/

/** AF pin for function f */
#define AF_CMU_CLKOUT0_PIN(f)      ((f) == 0 ? 2 : (f) == 1 ? 12 :  -1)
#define AF_CMU_CLKOUT1_PIN(f)      ((f) == 0 ? 1 : (f) == 1 ? 8 :  -1)
#define AF_EBI_ADDRDAT00_PIN(f)    ((f) == 0 ? 8 :  -1)
#define AF_EBI_ADDRDAT01_PIN(f)    ((f) == 0 ? 9 :  -1)
#define AF_EBI_ADDRDAT02_PIN(f)    ((f) == 0 ? 10 :  -1)
#define AF_EBI_ADDRDAT03_PIN(f)    ((f) == 0 ? 11 :  -1)
#define AF_EBI_ADDRDAT04_PIN(f)    ((f) == 0 ? 12 :  -1)
#define AF_EBI_ADDRDAT05_PIN(f)    ((f) == 0 ? 13 :  -1)
#define AF_EBI_ADDRDAT06_PIN(f)    ((f) == 0 ? 14 :  -1)
#define AF_EBI_ADDRDAT07_PIN(f)    ((f) == 0 ? 15 :  -1)
#define AF_EBI_ADDRDAT08_PIN(f)    ((f) == 0 ? 15 :  -1)
#define AF_EBI_ADDRDAT09_PIN(f)    ((f) == 0 ? 0 :  -1)
#define AF_EBI_ADDRDAT10_PIN(f)    ((f) == 0 ? 1 :  -1)
#define AF_EBI_ADDRDAT11_PIN(f)    ((f) == 0 ? 2 :  -1)
#define AF_EBI_ADDRDAT12_PIN(f)    ((f) == 0 ? 3 :  -1)
#define AF_EBI_ADDRDAT13_PIN(f)    ((f) == 0 ? 4 :  -1)
#define AF_EBI_ADDRDAT14_PIN(f)    ((f) == 0 ? 5 :  -1)
#define AF_EBI_ADDRDAT15_PIN(f)    ((f) == 0 ? 6 :  -1)
#define AF_EBI_CS0_PIN(f)          ((f) == 0 ? 9 :  -1)
#define AF_EBI_CS1_PIN(f)          ((f) == 0 ? 10 :  -1)
#define AF_EBI_CS2_PIN(f)          ((f) == 0 ? 11 :  -1)
#define AF_EBI_CS3_PIN(f)          ((f) == 0 ? 12 :  -1)
#define AF_EBI_WEn_PIN(f)          ((f) == 0 ? 4 :  -1)
#define AF_EBI_REn_PIN(f)          ((f) == 0 ? 5 :  -1)
#define AF_EBI_ARDY_PIN(f)         ((f) == 0 ? 2 :  -1)
#define AF_EBI_ALE_PIN(f)          ((f) == 0 ? 3 :  -1)
#define AF_TIMER0_CC0_PIN(f)       ((f) == 0 ? 0 : (f) == 1 ? 0 : (f) == 2 ? 6 : (f) == 3 ? 1 :  -1)
#define AF_TIMER0_CC1_PIN(f)       ((f) == 0 ? 1 : (f) == 1 ? 1 : (f) == 2 ? 7 : (f) == 3 ? 2 :  -1)
#define AF_TIMER0_CC2_PIN(f)       ((f) == 0 ? 2 : (f) == 1 ? 2 : (f) == 2 ? 8 : (f) == 3 ? 3 :  -1)
#define AF_TIMER0_CCC0_PIN(f)      ((f) == 0 ? 3 : (f) == 1 ? 13 : (f) == 2 ? 3 : (f) == 3 ? 13 :  -1)
#define AF_TIMER0_CCC1_PIN(f)      ((f) == 0 ? 4 : (f) == 1 ? 14 : (f) == 2 ? 4 : (f) == 3 ? 14 :  -1)
#define AF_TIMER0_CCC2_PIN(f)      ((f) == 0 ? 5 : (f) == 1 ? 15 : (f) == 2 ? 5 : (f) == 3 ? 15 :  -1)
#define AF_TIMER1_CC0_PIN(f)       ((f) == 0 ? 13 : (f) == 1 ? 10 : (f) == 2 ? 0 :  -1)
#define AF_TIMER1_CC1_PIN(f)       ((f) == 0 ? 14 : (f) == 1 ? 11 : (f) == 2 ? 1 :  -1)
#define AF_TIMER1_CC2_PIN(f)       ((f) == 0 ? 15 : (f) == 1 ? 12 : (f) == 2 ? 2 :  -1)
#define AF_TIMER1_CCC0_PIN(f)      (-1)
#define AF_TIMER1_CCC1_PIN(f)      (-1)
#define AF_TIMER1_CCC2_PIN(f)      (-1)
#define AF_TIMER2_CC0_PIN(f)       ((f) == 0 ? 8 : (f) == 1 ? 12 : (f) == 2 ? 8 :  -1)
#define AF_TIMER2_CC1_PIN(f)       ((f) == 0 ? 9 : (f) == 1 ? 13 : (f) == 2 ? 9 :  -1)
#define AF_TIMER2_CC2_PIN(f)       ((f) == 0 ? 10 : (f) == 1 ? 14 : (f) == 2 ? 10 :  -1)
#define AF_TIMER2_CCC0_PIN(f)      (-1)
#define AF_TIMER2_CCC1_PIN(f)      (-1)
#define AF_TIMER2_CCC2_PIN(f)      (-1)
#define AF_USART0_TX_PIN(f)        ((f) == 0 ? 10 : (f) == 1 ? 7 : (f) == 2 ? 11 :  -1)
#define AF_USART0_RX_PIN(f)        ((f) == 0 ? 11 : (f) == 1 ? 6 : (f) == 2 ? 10 :  -1)
#define AF_USART0_CLK_PIN(f)       ((f) == 0 ? 12 : (f) == 1 ? 5 : (f) == 2 ? 9 :  -1)
#define AF_USART0_CS_PIN(f)        ((f) == 0 ? 13 : (f) == 1 ? 4 : (f) == 2 ? 8 :  -1)
#define AF_USART1_TX_PIN(f)        ((f) == 0 ? 0 : (f) == 1 ? 0 :  -1)
#define AF_USART1_RX_PIN(f)        ((f) == 0 ? 1 : (f) == 1 ? 1 :  -1)
#define AF_USART1_CLK_PIN(f)       ((f) == 0 ? 7 : (f) == 1 ? 2 :  -1)
#define AF_USART1_CS_PIN(f)        ((f) == 0 ? 8 : (f) == 1 ? 3 :  -1)
#define AF_USART2_TX_PIN(f)        ((f) == 0 ? 2 : (f) == 1 ? 3 :  -1)
#define AF_USART2_RX_PIN(f)        ((f) == 0 ? 3 : (f) == 1 ? 4 :  -1)
#define AF_USART2_CLK_PIN(f)       ((f) == 0 ? 4 : (f) == 1 ? 5 :  -1)
#define AF_USART2_CS_PIN(f)        ((f) == 0 ? 5 : (f) == 1 ? 6 :  -1)
#define AF_UART0_TX_PIN(f)         ((f) == 0 ? 6 : (f) == 1 ? 0 : (f) == 2 ? 3 : (f) == 3 ? 14 :  -1)
#define AF_UART0_RX_PIN(f)         ((f) == 0 ? 7 : (f) == 1 ? 1 : (f) == 2 ? 4 : (f) == 3 ? 15 :  -1)
#define AF_UART0_CLK_PIN(f)        (-1)
#define AF_UART0_CS_PIN(f)         (-1)
#define AF_LEUART0_TX_PIN(f)       ((f) == 0 ? 4 : (f) == 1 ? 13 : (f) == 2 ? 14 :  -1)
#define AF_LEUART0_RX_PIN(f)       ((f) == 0 ? 5 : (f) == 1 ? 14 : (f) == 2 ? 15 :  -1)
#define AF_LEUART1_TX_PIN(f)       ((f) == 0 ? 6 : (f) == 1 ? 5 :  -1)
#define AF_LEUART1_RX_PIN(f)       ((f) == 0 ? 7 : (f) == 1 ? 6 :  -1)
#define AF_LETIMER0_OUT0_PIN(f)    ((f) == 0 ? 6 : (f) == 1 ? 11 : (f) == 2 ? 0 : (f) == 3 ? 4 :  -1)
#define AF_LETIMER0_OUT1_PIN(f)    ((f) == 0 ? 7 : (f) == 1 ? 12 : (f) == 2 ? 1 : (f) == 3 ? 5 :  -1)
#define AF_PCNT0_S0IN_PIN(f)       ((f) == 0 ? 13 : (f) == 1 ? 0 : (f) == 2 ? 0 :  -1)
#define AF_PCNT0_S1IN_PIN(f)       ((f) == 0 ? 14 : (f) == 1 ? 1 : (f) == 2 ? 1 :  -1)
#define AF_PCNT1_S0IN_PIN(f)       ((f) == 0 ? 4 : (f) == 1 ? 3 :  -1)
#define AF_PCNT1_S1IN_PIN(f)       ((f) == 0 ? 5 : (f) == 1 ? 4 :  -1)
#define AF_PCNT2_S0IN_PIN(f)       ((f) == 0 ? 0 : (f) == 1 ? 8 :  -1)
#define AF_PCNT2_S1IN_PIN(f)       ((f) == 0 ? 1 : (f) == 1 ? 9 :  -1)
#define AF_I2C0_SDA_PIN(f)         ((f) == 0 ? 0 : (f) == 1 ? 6 : (f) == 2 ? 6 : (f) == 3 ? 14 :  -1)
#define AF_I2C0_SCL_PIN(f)         ((f) == 0 ? 1 : (f) == 1 ? 7 : (f) == 2 ? 7 : (f) == 3 ? 15 :  -1)
#define AF_ACMP0_OUT_PIN(f)        ((f) == 0 ? 13 : (f) == 1 ? 2 :  -1)
#define AF_ACMP1_OUT_PIN(f)        ((f) == 0 ? 2 : (f) == 1 ? 3 :  -1)
#define AF_DBG_SWV_PIN(f)          ((f) == 0 ? 2 : (f) == 1 ? 15 :  -1)
#define AF_DBG_SWDITMS_PIN(f)      ((f) == 0 ? 1 : (f) == 1 ? 1 :  -1)
#define AF_DBG_SWCLKTCK_PIN(f)     ((f) == 0 ? 0 : (f) == 1 ? 0 :  -1)

/**
 * @}
 */

/** Grouped by channel c, function f */
#define AF_PORT(c, f)    (                   \
    (c) == 0 ? AF_CMU_CLKOUT0_PORT((f)) :    \
    (c) == 1 ? AF_CMU_CLKOUT1_PORT((f)) :    \
    (c) == 2 ? AF_EBI_ADDRDAT00_PORT((f)) :  \
    (c) == 3 ? AF_EBI_ADDRDAT01_PORT((f)) :  \
    (c) == 4 ? AF_EBI_ADDRDAT02_PORT((f)) :  \
    (c) == 5 ? AF_EBI_ADDRDAT03_PORT((f)) :  \
    (c) == 6 ? AF_EBI_ADDRDAT04_PORT((f)) :  \
    (c) == 7 ? AF_EBI_ADDRDAT05_PORT((f)) :  \
    (c) == 8 ? AF_EBI_ADDRDAT06_PORT((f)) :  \
    (c) == 9 ? AF_EBI_ADDRDAT07_PORT((f)) :  \
    (c) == 10 ? AF_EBI_ADDRDAT08_PORT((f)) : \
    (c) == 11 ? AF_EBI_ADDRDAT09_PORT((f)) : \
    (c) == 12 ? AF_EBI_ADDRDAT10_PORT((f)) : \
    (c) == 13 ? AF_EBI_ADDRDAT11_PORT((f)) : \
    (c) == 14 ? AF_EBI_ADDRDAT12_PORT((f)) : \
    (c) == 15 ? AF_EBI_ADDRDAT13_PORT((f)) : \
    (c) == 16 ? AF_EBI_ADDRDAT14_PORT((f)) : \
    (c) == 17 ? AF_EBI_ADDRDAT15_PORT((f)) : \
    (c) == 18 ? AF_EBI_CS0_PORT((f)) :       \
    (c) == 19 ? AF_EBI_CS1_PORT((f)) :       \
    (c) == 20 ? AF_EBI_CS2_PORT((f)) :       \
    (c) == 21 ? AF_EBI_CS3_PORT((f)) :       \
    (c) == 22 ? AF_EBI_WEn_PORT((f)) :       \
    (c) == 23 ? AF_EBI_REn_PORT((f)) :       \
    (c) == 24 ? AF_EBI_ARDY_PORT((f)) :      \
    (c) == 25 ? AF_EBI_ALE_PORT((f)) :       \
    (c) == 26 ? AF_TIMER0_CC0_PORT((f)) :    \
    (c) == 27 ? AF_TIMER0_CC1_PORT((f)) :    \
    (c) == 28 ? AF_TIMER0_CC2_PORT((f)) :    \
    (c) == 29 ? AF_TIMER0_CCC0_PORT((f)) :   \
    (c) == 30 ? AF_TIMER0_CCC1_PORT((f)) :   \
    (c) == 31 ? AF_TIMER0_CCC2_PORT((f)) :   \
    (c) == 32 ? AF_TIMER1_CC0_PORT((f)) :    \
    (c) == 33 ? AF_TIMER1_CC1_PORT((f)) :    \
    (c) == 34 ? AF_TIMER1_CC2_PORT((f)) :    \
    (c) == 35 ? AF_TIMER1_CCC0_PORT((f)) :   \
    (c) == 36 ? AF_TIMER1_CCC1_PORT((f)) :   \
    (c) == 37 ? AF_TIMER1_CCC2_PORT((f)) :   \
    (c) == 38 ? AF_TIMER2_CC0_PORT((f)) :    \
    (c) == 39 ? AF_TIMER2_CC1_PORT((f)) :    \
    (c) == 40 ? AF_TIMER2_CC2_PORT((f)) :    \
    (c) == 41 ? AF_TIMER2_CCC0_PORT((f)) :   \
    (c) == 42 ? AF_TIMER2_CCC1_PORT((f)) :   \
    (c) == 43 ? AF_TIMER2_CCC2_PORT((f)) :   \
    (c) == 44 ? AF_USART0_TX_PORT((f)) :     \
    (c) == 45 ? AF_USART0_RX_PORT((f)) :     \
    (c) == 46 ? AF_USART0_CLK_PORT((f)) :    \
    (c) == 47 ? AF_USART0_CS_PORT((f)) :     \
    (c) == 48 ? AF_USART1_TX_PORT((f)) :     \
    (c) == 49 ? AF_USART1_RX_PORT((f)) :     \
    (c) == 50 ? AF_USART1_CLK_PORT((f)) :    \
    (c) == 51 ? AF_USART1_CS_PORT((f)) :     \
    (c) == 52 ? AF_USART2_TX_PORT((f)) :     \
    (c) == 53 ? AF_USART2_RX_PORT((f)) :     \
    (c) == 54 ? AF_USART2_CLK_PORT((f)) :    \
    (c) == 55 ? AF_USART2_CS_PORT((f)) :     \
    (c) == 56 ? AF_UART0_TX_PORT((f)) :      \
    (c) == 57 ? AF_UART0_RX_PORT((f)) :      \
    (c) == 58 ? AF_UART0_CLK_PORT((f)) :     \
    (c) == 59 ? AF_UART0_CS_PORT((f)) :      \
    (c) == 60 ? AF_LEUART0_TX_PORT((f)) :    \
    (c) == 61 ? AF_LEUART0_RX_PORT((f)) :    \
    (c) == 62 ? AF_LEUART1_TX_PORT((f)) :    \
    (c) == 63 ? AF_LEUART1_RX_PORT((f)) :    \
    (c) == 64 ? AF_LETIMER0_OUT0_PORT((f)) : \
    (c) == 65 ? AF_LETIMER0_OUT1_PORT((f)) : \
    (c) == 66 ? AF_PCNT0_S0IN_PORT((f)) :    \
    (c) == 67 ? AF_PCNT0_S1IN_PORT((f)) :    \
    (c) == 68 ? AF_PCNT1_S0IN_PORT((f)) :    \
    (c) == 69 ? AF_PCNT1_S1IN_PORT((f)) :    \
    (c) == 70 ? AF_PCNT2_S0IN_PORT((f)) :    \
    (c) == 71 ? AF_PCNT2_S1IN_PORT((f)) :    \
    (c) == 72 ? AF_I2C0_SDA_PORT((f)) :      \
    (c) == 73 ? AF_I2C0_SCL_PORT((f)) :      \
    (c) == 74 ? AF_ACMP0_OUT_PORT((f)) :     \
    (c) == 75 ? AF_ACMP1_OUT_PORT((f)) :     \
    (c) == 76 ? AF_DBG_SWV_PORT((f)) :       \
    (c) == 77 ? AF_DBG_SWDITMS_PORT((f)) :   \
    (c) == 78 ? AF_DBG_SWCLKTCK_PORT((f)) :  \
    -1)

#define AF_PIN(c, f)     (                  \
    (c) == 0 ? AF_CMU_CLKOUT0_PIN((f)) :    \
    (c) == 1 ? AF_CMU_CLKOUT1_PIN((f)) :    \
    (c) == 2 ? AF_EBI_ADDRDAT00_PIN((f)) :  \
    (c) == 3 ? AF_EBI_ADDRDAT01_PIN((f)) :  \
    (c) == 4 ? AF_EBI_ADDRDAT02_PIN((f)) :  \
    (c) == 5 ? AF_EBI_ADDRDAT03_PIN((f)) :  \
    (c) == 6 ? AF_EBI_ADDRDAT04_PIN((f)) :  \
    (c) == 7 ? AF_EBI_ADDRDAT05_PIN((f)) :  \
    (c) == 8 ? AF_EBI_ADDRDAT06_PIN((f)) :  \
    (c) == 9 ? AF_EBI_ADDRDAT07_PIN((f)) :  \
    (c) == 10 ? AF_EBI_ADDRDAT08_PIN((f)) : \
    (c) == 11 ? AF_EBI_ADDRDAT09_PIN((f)) : \
    (c) == 12 ? AF_EBI_ADDRDAT10_PIN((f)) : \
    (c) == 13 ? AF_EBI_ADDRDAT11_PIN((f)) : \
    (c) == 14 ? AF_EBI_ADDRDAT12_PIN((f)) : \
    (c) == 15 ? AF_EBI_ADDRDAT13_PIN((f)) : \
    (c) == 16 ? AF_EBI_ADDRDAT14_PIN((f)) : \
    (c) == 17 ? AF_EBI_ADDRDAT15_PIN((f)) : \
    (c) == 18 ? AF_EBI_CS0_PIN((f)) :       \
    (c) == 19 ? AF_EBI_CS1_PIN((f)) :       \
    (c) == 20 ? AF_EBI_CS2_PIN((f)) :       \
    (c) == 21 ? AF_EBI_CS3_PIN((f)) :       \
    (c) == 22 ? AF_EBI_WEn_PIN((f)) :       \
    (c) == 23 ? AF_EBI_REn_PIN((f)) :       \
    (c) == 24 ? AF_EBI_ARDY_PIN((f)) :      \
    (c) == 25 ? AF_EBI_ALE_PIN((f)) :       \
    (c) == 26 ? AF_TIMER0_CC0_PIN((f)) :    \
    (c) == 27 ? AF_TIMER0_CC1_PIN((f)) :    \
    (c) == 28 ? AF_TIMER0_CC2_PIN((f)) :    \
    (c) == 29 ? AF_TIMER0_CCC0_PIN((f)) :   \
    (c) == 30 ? AF_TIMER0_CCC1_PIN((f)) :   \
    (c) == 31 ? AF_TIMER0_CCC2_PIN((f)) :   \
    (c) == 32 ? AF_TIMER1_CC0_PIN((f)) :    \
    (c) == 33 ? AF_TIMER1_CC1_PIN((f)) :    \
    (c) == 34 ? AF_TIMER1_CC2_PIN((f)) :    \
    (c) == 35 ? AF_TIMER1_CCC0_PIN((f)) :   \
    (c) == 36 ? AF_TIMER1_CCC1_PIN((f)) :   \
    (c) == 37 ? AF_TIMER1_CCC2_PIN((f)) :   \
    (c) == 38 ? AF_TIMER2_CC0_PIN((f)) :    \
    (c) == 39 ? AF_TIMER2_CC1_PIN((f)) :    \
    (c) == 40 ? AF_TIMER2_CC2_PIN((f)) :    \
    (c) == 41 ? AF_TIMER2_CCC0_PIN((f)) :   \
    (c) == 42 ? AF_TIMER2_CCC1_PIN((f)) :   \
    (c) == 43 ? AF_TIMER2_CCC2_PIN((f)) :   \
    (c) == 44 ? AF_USART0_TX_PIN((f)) :     \
    (c) == 45 ? AF_USART0_RX_PIN((f)) :     \
    (c) == 46 ? AF_USART0_CLK_PIN((f)) :    \
    (c) == 47 ? AF_USART0_CS_PIN((f)) :     \
    (c) == 48 ? AF_USART1_TX_PIN((f)) :     \
    (c) == 49 ? AF_USART1_RX_PIN((f)) :     \
    (c) == 50 ? AF_USART1_CLK_PIN((f)) :    \
    (c) == 51 ? AF_USART1_CS_PIN((f)) :     \
    (c) == 52 ? AF_USART2_TX_PIN((f)) :     \
    (c) == 53 ? AF_USART2_RX_PIN((f)) :     \
    (c) == 54 ? AF_USART2_CLK_PIN((f)) :    \
    (c) == 55 ? AF_USART2_CS_PIN((f)) :     \
    (c) == 56 ? AF_UART0_TX_PIN((f)) :      \
    (c) == 57 ? AF_UART0_RX_PIN((f)) :      \
    (c) == 58 ? AF_UART0_CLK_PIN((f)) :     \
    (c) == 59 ? AF_UART0_CS_PIN((f)) :      \
    (c) == 60 ? AF_LEUART0_TX_PIN((f)) :    \
    (c) == 61 ? AF_LEUART0_RX_PIN((f)) :    \
    (c) == 62 ? AF_LEUART1_TX_PIN((f)) :    \
    (c) == 63 ? AF_LEUART1_RX_PIN((f)) :    \
    (c) == 64 ? AF_LETIMER0_OUT0_PIN((f)) : \
    (c) == 65 ? AF_LETIMER0_OUT1_PIN((f)) : \
    (c) == 66 ? AF_PCNT0_S0IN_PIN((f)) :    \
    (c) == 67 ? AF_PCNT0_S1IN_PIN((f)) :    \
    (c) == 68 ? AF_PCNT1_S0IN_PIN((f)) :    \
    (c) == 69 ? AF_PCNT1_S1IN_PIN((f)) :    \
    (c) == 70 ? AF_PCNT2_S0IN_PIN((f)) :    \
    (c) == 71 ? AF_PCNT2_S1IN_PIN((f)) :    \
    (c) == 72 ? AF_I2C0_SDA_PIN((f)) :      \
    (c) == 73 ? AF_I2C0_SCL_PIN((f)) :      \
    (c) == 74 ? AF_ACMP0_OUT_PIN((f)) :     \
    (c) == 75 ? AF_ACMP1_OUT_PIN((f)) :     \
    (c) == 76 ? AF_DBG_SWV_PIN((f)) :       \
    (c) == 77 ? AF_DBG_SWDITMS_PIN((f)) :   \
    (c) == 78 ? AF_DBG_SWCLKTCK_PIN((f)) :  \
    -1)

/** AF channel output count for channel c */
#define AF_COUNT(c)      ( \
    (c) == 0 ? 2 :         \
    (c) == 1 ? 2 :         \
    (c) == 2 ? 1 :         \
    (c) == 3 ? 1 :         \
    (c) == 4 ? 1 :         \
    (c) == 5 ? 1 :         \
    (c) == 6 ? 1 :         \
    (c) == 7 ? 1 :         \
    (c) == 8 ? 1 :         \
    (c) == 9 ? 1 :         \
    (c) == 10 ? 1 :        \
    (c) == 11 ? 1 :        \
    (c) == 12 ? 1 :        \
    (c) == 13 ? 1 :        \
    (c) == 14 ? 1 :        \
    (c) == 15 ? 1 :        \
    (c) == 16 ? 1 :        \
    (c) == 17 ? 1 :        \
    (c) == 18 ? 1 :        \
    (c) == 19 ? 1 :        \
    (c) == 20 ? 1 :        \
    (c) == 21 ? 1 :        \
    (c) == 22 ? 1 :        \
    (c) == 23 ? 1 :        \
    (c) == 24 ? 1 :        \
    (c) == 25 ? 1 :        \
    (c) == 26 ? 4 :        \
    (c) == 27 ? 4 :        \
    (c) == 28 ? 4 :        \
    (c) == 29 ? 4 :        \
    (c) == 30 ? 4 :        \
    (c) == 31 ? 4 :        \
    (c) == 32 ? 3 :        \
    (c) == 33 ? 3 :        \
    (c) == 34 ? 3 :        \
    (c) == 35 ? 0 :        \
    (c) == 36 ? 0 :        \
    (c) == 37 ? 0 :        \
    (c) == 38 ? 3 :        \
    (c) == 39 ? 3 :        \
    (c) == 40 ? 3 :        \
    (c) == 41 ? 0 :        \
    (c) == 42 ? 0 :        \
    (c) == 43 ? 0 :        \
    (c) == 44 ? 3 :        \
    (c) == 45 ? 3 :        \
    (c) == 46 ? 3 :        \
    (c) == 47 ? 3 :        \
    (c) == 48 ? 2 :        \
    (c) == 49 ? 2 :        \
    (c) == 50 ? 2 :        \
    (c) == 51 ? 2 :        \
    (c) == 52 ? 2 :        \
    (c) == 53 ? 2 :        \
    (c) == 54 ? 2 :        \
    (c) == 55 ? 2 :        \
    (c) == 56 ? 4 :        \
    (c) == 57 ? 4 :        \
    (c) == 58 ? 0 :        \
    (c) == 59 ? 0 :        \
    (c) == 60 ? 3 :        \
    (c) == 61 ? 3 :        \
    (c) == 62 ? 2 :        \
    (c) == 63 ? 2 :        \
    (c) == 64 ? 4 :        \
    (c) == 65 ? 4 :        \
    (c) == 66 ? 3 :        \
    (c) == 67 ? 3 :        \
    (c) == 68 ? 2 :        \
    (c) == 69 ? 2 :        \
    (c) == 70 ? 2 :        \
    (c) == 71 ? 2 :        \
    (c) == 72 ? 4 :        \
    (c) == 73 ? 4 :        \
    (c) == 74 ? 2 :        \
    (c) == 75 ? 2 :        \
    (c) == 76 ? 2 :        \
    (c) == 77 ? 2 :        \
    (c) == 78 ? 2 :        \
    -1)

#endif

/**
 * @}
 */

/**
 * @}
 */

/**
 *  @brief Set the value of a bit field within a register.
 *
 *  @param REG
 *       The register to update
 *  @param MASK
 *       The mask for the bit field to update
 *  @param VALUE
 *       The value to write to the bit field
 *  @param OFFSET
 *       The number of bits that the field is offset within the register.
 *       0 (zero) means LSB.
 */
#define SET_BIT_FIELD(REG, MASK, VALUE, OFFSET) \
  REG = ((REG) &~(MASK)) | (((VALUE) << (OFFSET)) & (MASK));

/**
 * @}
 */

/**
 * @}
 */
