#ifndef _ALTERA_F2H_MEM_WINDOW_FF800000_H_
#define _ALTERA_F2H_MEM_WINDOW_FF800000_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'Computer_System' in
 * file 'Computer_System.sopcinfo'.
 */

/*
 * This file contains macros for module 'F2H_Mem_Window_FF800000' and devices
 * connected to the following master:
 *   expanded_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for module 'F2H_Mem_Window_FF800000', class 'altera_address_span_extender'.
 * The macros have no prefix.
 */
#define BURSTCOUNT_WIDTH 1
#define BYTEENABLE_WIDTH 4
#define CNTL_ADDRESS_WIDTH 1
#define DATA_WIDTH 32
#define MASTER_ADDRESS_WIDTH 32
#define MAX_BURST_BYTES 4
#define MAX_BURST_WORDS 1
#define SLAVE_ADDRESS_SHIFT 2
#define SLAVE_ADDRESS_WIDTH 21
#define SUB_WINDOW_COUNT 1

/*
 * Macros for device 'ARM_A9_HPS_axi_sdram', class 'axi_sdram'
 * The macros are prefixed with 'ARM_A9_HPS_AXI_SDRAM_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_AXI_SDRAM_COMPONENT_TYPE axi_sdram
#define ARM_A9_HPS_AXI_SDRAM_COMPONENT_NAME ARM_A9_HPS_axi_sdram
#define ARM_A9_HPS_AXI_SDRAM_BASE 0x0
#define ARM_A9_HPS_AXI_SDRAM_SPAN 0x80000000
#define ARM_A9_HPS_AXI_SDRAM_END 0x7fffffff
#define ARM_A9_HPS_AXI_SDRAM_SIZE_MULTIPLE 1
#define ARM_A9_HPS_AXI_SDRAM_SIZE_VALUE 1<<31
#define ARM_A9_HPS_AXI_SDRAM_WRITABLE 1
#define ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_GENERATE_HEX 0
#define ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 31

/*
 * Macros for device 'ARM_A9_HPS_gmac0', class 'stmmac'
 * The macros are prefixed with 'ARM_A9_HPS_GMAC0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_GMAC0_COMPONENT_TYPE stmmac
#define ARM_A9_HPS_GMAC0_COMPONENT_NAME ARM_A9_HPS_gmac0
#define ARM_A9_HPS_GMAC0_BASE 0xff700000
#define ARM_A9_HPS_GMAC0_SPAN 8192
#define ARM_A9_HPS_GMAC0_END 0xff701fff

/*
 * Macros for device 'ARM_A9_HPS_gmac1', class 'stmmac'
 * The macros are prefixed with 'ARM_A9_HPS_GMAC1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_GMAC1_COMPONENT_TYPE stmmac
#define ARM_A9_HPS_GMAC1_COMPONENT_NAME ARM_A9_HPS_gmac1
#define ARM_A9_HPS_GMAC1_BASE 0xff702000
#define ARM_A9_HPS_GMAC1_SPAN 8192
#define ARM_A9_HPS_GMAC1_END 0xff703fff

/*
 * Macros for device 'ARM_A9_HPS_sdmmc', class 'sdmmc'
 * The macros are prefixed with 'ARM_A9_HPS_SDMMC_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_SDMMC_COMPONENT_TYPE sdmmc
#define ARM_A9_HPS_SDMMC_COMPONENT_NAME ARM_A9_HPS_sdmmc
#define ARM_A9_HPS_SDMMC_BASE 0xff704000
#define ARM_A9_HPS_SDMMC_SPAN 4096
#define ARM_A9_HPS_SDMMC_END 0xff704fff

/*
 * Macros for device 'ARM_A9_HPS_qspi', class 'cadence_qspi'
 * The macros are prefixed with 'ARM_A9_HPS_QSPI_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_QSPI_COMPONENT_TYPE cadence_qspi
#define ARM_A9_HPS_QSPI_COMPONENT_NAME ARM_A9_HPS_qspi
#define ARM_A9_HPS_QSPI_BASE 0xff705000
#define ARM_A9_HPS_QSPI_SPAN 256
#define ARM_A9_HPS_QSPI_END 0xff7050ff

/*
 * Macros for device 'ARM_A9_HPS_fpgamgr', class 'altera_fpgamgr'
 * The macros are prefixed with 'ARM_A9_HPS_FPGAMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_FPGAMGR_COMPONENT_TYPE altera_fpgamgr
#define ARM_A9_HPS_FPGAMGR_COMPONENT_NAME ARM_A9_HPS_fpgamgr
#define ARM_A9_HPS_FPGAMGR_BASE 0xff706000
#define ARM_A9_HPS_FPGAMGR_SPAN 4096
#define ARM_A9_HPS_FPGAMGR_END 0xff706fff

/*
 * Macros for device 'ARM_A9_HPS_gpio0', class 'dw_gpio'
 * The macros are prefixed with 'ARM_A9_HPS_GPIO0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_GPIO0_COMPONENT_TYPE dw_gpio
#define ARM_A9_HPS_GPIO0_COMPONENT_NAME ARM_A9_HPS_gpio0
#define ARM_A9_HPS_GPIO0_BASE 0xff708000
#define ARM_A9_HPS_GPIO0_SPAN 256
#define ARM_A9_HPS_GPIO0_END 0xff7080ff

/*
 * Macros for device 'ARM_A9_HPS_gpio1', class 'dw_gpio'
 * The macros are prefixed with 'ARM_A9_HPS_GPIO1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_GPIO1_COMPONENT_TYPE dw_gpio
#define ARM_A9_HPS_GPIO1_COMPONENT_NAME ARM_A9_HPS_gpio1
#define ARM_A9_HPS_GPIO1_BASE 0xff709000
#define ARM_A9_HPS_GPIO1_SPAN 256
#define ARM_A9_HPS_GPIO1_END 0xff7090ff

/*
 * Macros for device 'ARM_A9_HPS_gpio2', class 'dw_gpio'
 * The macros are prefixed with 'ARM_A9_HPS_GPIO2_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_GPIO2_COMPONENT_TYPE dw_gpio
#define ARM_A9_HPS_GPIO2_COMPONENT_NAME ARM_A9_HPS_gpio2
#define ARM_A9_HPS_GPIO2_BASE 0xff70a000
#define ARM_A9_HPS_GPIO2_SPAN 256
#define ARM_A9_HPS_GPIO2_END 0xff70a0ff

/*
 * Macros for device 'ARM_A9_HPS_l3regs', class 'altera_l3regs'
 * The macros are prefixed with 'ARM_A9_HPS_L3REGS_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_L3REGS_COMPONENT_TYPE altera_l3regs
#define ARM_A9_HPS_L3REGS_COMPONENT_NAME ARM_A9_HPS_l3regs
#define ARM_A9_HPS_L3REGS_BASE 0xff800000
#define ARM_A9_HPS_L3REGS_SPAN 4096
#define ARM_A9_HPS_L3REGS_END 0xff800fff

/*
 * Macros for device 'ARM_A9_HPS_nand0', class 'denali_nand'
 * The macros are prefixed with 'ARM_A9_HPS_NAND0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_NAND0_COMPONENT_TYPE denali_nand
#define ARM_A9_HPS_NAND0_COMPONENT_NAME ARM_A9_HPS_nand0
#define ARM_A9_HPS_NAND0_BASE 0xff900000
#define ARM_A9_HPS_NAND0_SPAN 65536
#define ARM_A9_HPS_NAND0_END 0xff90ffff

/*
 * Macros for device 'ARM_A9_HPS_usb0', class 'usb'
 * The macros are prefixed with 'ARM_A9_HPS_USB0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_USB0_COMPONENT_TYPE usb
#define ARM_A9_HPS_USB0_COMPONENT_NAME ARM_A9_HPS_usb0
#define ARM_A9_HPS_USB0_BASE 0xffb00000
#define ARM_A9_HPS_USB0_SPAN 262144
#define ARM_A9_HPS_USB0_END 0xffb3ffff

/*
 * Macros for device 'ARM_A9_HPS_usb1', class 'usb'
 * The macros are prefixed with 'ARM_A9_HPS_USB1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_USB1_COMPONENT_TYPE usb
#define ARM_A9_HPS_USB1_COMPONENT_NAME ARM_A9_HPS_usb1
#define ARM_A9_HPS_USB1_BASE 0xffb40000
#define ARM_A9_HPS_USB1_SPAN 262144
#define ARM_A9_HPS_USB1_END 0xffb7ffff

/*
 * Macros for device 'ARM_A9_HPS_dcan0', class 'bosch_dcan'
 * The macros are prefixed with 'ARM_A9_HPS_DCAN0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_DCAN0_COMPONENT_TYPE bosch_dcan
#define ARM_A9_HPS_DCAN0_COMPONENT_NAME ARM_A9_HPS_dcan0
#define ARM_A9_HPS_DCAN0_BASE 0xffc00000
#define ARM_A9_HPS_DCAN0_SPAN 4096
#define ARM_A9_HPS_DCAN0_END 0xffc00fff

/*
 * Macros for device 'ARM_A9_HPS_dcan1', class 'bosch_dcan'
 * The macros are prefixed with 'ARM_A9_HPS_DCAN1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_DCAN1_COMPONENT_TYPE bosch_dcan
#define ARM_A9_HPS_DCAN1_COMPONENT_NAME ARM_A9_HPS_dcan1
#define ARM_A9_HPS_DCAN1_BASE 0xffc01000
#define ARM_A9_HPS_DCAN1_SPAN 4096
#define ARM_A9_HPS_DCAN1_END 0xffc01fff

/*
 * Macros for device 'ARM_A9_HPS_uart0', class 'snps_uart'
 * The macros are prefixed with 'ARM_A9_HPS_UART0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_UART0_COMPONENT_TYPE snps_uart
#define ARM_A9_HPS_UART0_COMPONENT_NAME ARM_A9_HPS_uart0
#define ARM_A9_HPS_UART0_BASE 0xffc02000
#define ARM_A9_HPS_UART0_SPAN 256
#define ARM_A9_HPS_UART0_END 0xffc020ff
#define ARM_A9_HPS_UART0_FIFO_DEPTH 128
#define ARM_A9_HPS_UART0_FIFO_HWFC 0
#define ARM_A9_HPS_UART0_FIFO_MODE 1
#define ARM_A9_HPS_UART0_FIFO_SWFC 0
#define ARM_A9_HPS_UART0_FREQ 100000000

/*
 * Macros for device 'ARM_A9_HPS_uart1', class 'snps_uart'
 * The macros are prefixed with 'ARM_A9_HPS_UART1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_UART1_COMPONENT_TYPE snps_uart
#define ARM_A9_HPS_UART1_COMPONENT_NAME ARM_A9_HPS_uart1
#define ARM_A9_HPS_UART1_BASE 0xffc03000
#define ARM_A9_HPS_UART1_SPAN 256
#define ARM_A9_HPS_UART1_END 0xffc030ff
#define ARM_A9_HPS_UART1_FIFO_DEPTH 128
#define ARM_A9_HPS_UART1_FIFO_HWFC 0
#define ARM_A9_HPS_UART1_FIFO_MODE 1
#define ARM_A9_HPS_UART1_FIFO_SWFC 0
#define ARM_A9_HPS_UART1_FREQ 100000000

/*
 * Macros for device 'ARM_A9_HPS_i2c0', class 'designware_i2c'
 * The macros are prefixed with 'ARM_A9_HPS_I2C0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_I2C0_COMPONENT_TYPE designware_i2c
#define ARM_A9_HPS_I2C0_COMPONENT_NAME ARM_A9_HPS_i2c0
#define ARM_A9_HPS_I2C0_BASE 0xffc04000
#define ARM_A9_HPS_I2C0_SPAN 256
#define ARM_A9_HPS_I2C0_END 0xffc040ff

/*
 * Macros for device 'ARM_A9_HPS_i2c1', class 'designware_i2c'
 * The macros are prefixed with 'ARM_A9_HPS_I2C1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_I2C1_COMPONENT_TYPE designware_i2c
#define ARM_A9_HPS_I2C1_COMPONENT_NAME ARM_A9_HPS_i2c1
#define ARM_A9_HPS_I2C1_BASE 0xffc05000
#define ARM_A9_HPS_I2C1_SPAN 256
#define ARM_A9_HPS_I2C1_END 0xffc050ff

/*
 * Macros for device 'ARM_A9_HPS_i2c2', class 'designware_i2c'
 * The macros are prefixed with 'ARM_A9_HPS_I2C2_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_I2C2_COMPONENT_TYPE designware_i2c
#define ARM_A9_HPS_I2C2_COMPONENT_NAME ARM_A9_HPS_i2c2
#define ARM_A9_HPS_I2C2_BASE 0xffc06000
#define ARM_A9_HPS_I2C2_SPAN 256
#define ARM_A9_HPS_I2C2_END 0xffc060ff

/*
 * Macros for device 'ARM_A9_HPS_i2c3', class 'designware_i2c'
 * The macros are prefixed with 'ARM_A9_HPS_I2C3_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_I2C3_COMPONENT_TYPE designware_i2c
#define ARM_A9_HPS_I2C3_COMPONENT_NAME ARM_A9_HPS_i2c3
#define ARM_A9_HPS_I2C3_BASE 0xffc07000
#define ARM_A9_HPS_I2C3_SPAN 256
#define ARM_A9_HPS_I2C3_END 0xffc070ff

/*
 * Macros for device 'ARM_A9_HPS_timer0', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'ARM_A9_HPS_TIMER0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_TIMER0_COMPONENT_TYPE dw_apb_timer_sp
#define ARM_A9_HPS_TIMER0_COMPONENT_NAME ARM_A9_HPS_timer0
#define ARM_A9_HPS_TIMER0_BASE 0xffc08000
#define ARM_A9_HPS_TIMER0_SPAN 256
#define ARM_A9_HPS_TIMER0_END 0xffc080ff

/*
 * Macros for device 'ARM_A9_HPS_timer1', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'ARM_A9_HPS_TIMER1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_TIMER1_COMPONENT_TYPE dw_apb_timer_sp
#define ARM_A9_HPS_TIMER1_COMPONENT_NAME ARM_A9_HPS_timer1
#define ARM_A9_HPS_TIMER1_BASE 0xffc09000
#define ARM_A9_HPS_TIMER1_SPAN 256
#define ARM_A9_HPS_TIMER1_END 0xffc090ff

/*
 * Macros for device 'ARM_A9_HPS_sdrctl', class 'altera_sdrctl'
 * The macros are prefixed with 'ARM_A9_HPS_SDRCTL_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_SDRCTL_COMPONENT_TYPE altera_sdrctl
#define ARM_A9_HPS_SDRCTL_COMPONENT_NAME ARM_A9_HPS_sdrctl
#define ARM_A9_HPS_SDRCTL_BASE 0xffc25000
#define ARM_A9_HPS_SDRCTL_SPAN 4096
#define ARM_A9_HPS_SDRCTL_END 0xffc25fff

/*
 * Macros for device 'ARM_A9_HPS_timer2', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'ARM_A9_HPS_TIMER2_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_TIMER2_COMPONENT_TYPE dw_apb_timer_osc
#define ARM_A9_HPS_TIMER2_COMPONENT_NAME ARM_A9_HPS_timer2
#define ARM_A9_HPS_TIMER2_BASE 0xffd00000
#define ARM_A9_HPS_TIMER2_SPAN 256
#define ARM_A9_HPS_TIMER2_END 0xffd000ff

/*
 * Macros for device 'ARM_A9_HPS_timer3', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'ARM_A9_HPS_TIMER3_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_TIMER3_COMPONENT_TYPE dw_apb_timer_osc
#define ARM_A9_HPS_TIMER3_COMPONENT_NAME ARM_A9_HPS_timer3
#define ARM_A9_HPS_TIMER3_BASE 0xffd01000
#define ARM_A9_HPS_TIMER3_SPAN 256
#define ARM_A9_HPS_TIMER3_END 0xffd010ff

/*
 * Macros for device 'ARM_A9_HPS_clkmgr', class 'asimov_clkmgr'
 * The macros are prefixed with 'ARM_A9_HPS_CLKMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_CLKMGR_COMPONENT_TYPE asimov_clkmgr
#define ARM_A9_HPS_CLKMGR_COMPONENT_NAME ARM_A9_HPS_clkmgr
#define ARM_A9_HPS_CLKMGR_BASE 0xffd04000
#define ARM_A9_HPS_CLKMGR_SPAN 4096
#define ARM_A9_HPS_CLKMGR_END 0xffd04fff

/*
 * Macros for device 'ARM_A9_HPS_rstmgr', class 'altera_rstmgr'
 * The macros are prefixed with 'ARM_A9_HPS_RSTMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_RSTMGR_COMPONENT_TYPE altera_rstmgr
#define ARM_A9_HPS_RSTMGR_COMPONENT_NAME ARM_A9_HPS_rstmgr
#define ARM_A9_HPS_RSTMGR_BASE 0xffd05000
#define ARM_A9_HPS_RSTMGR_SPAN 256
#define ARM_A9_HPS_RSTMGR_END 0xffd050ff

/*
 * Macros for device 'ARM_A9_HPS_sysmgr', class 'altera_sysmgr'
 * The macros are prefixed with 'ARM_A9_HPS_SYSMGR_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_SYSMGR_COMPONENT_TYPE altera_sysmgr
#define ARM_A9_HPS_SYSMGR_COMPONENT_NAME ARM_A9_HPS_sysmgr
#define ARM_A9_HPS_SYSMGR_BASE 0xffd08000
#define ARM_A9_HPS_SYSMGR_SPAN 1024
#define ARM_A9_HPS_SYSMGR_END 0xffd083ff

/*
 * Macros for device 'ARM_A9_HPS_dma', class 'arm_pl330_dma'
 * The macros are prefixed with 'ARM_A9_HPS_DMA_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_DMA_COMPONENT_TYPE arm_pl330_dma
#define ARM_A9_HPS_DMA_COMPONENT_NAME ARM_A9_HPS_dma
#define ARM_A9_HPS_DMA_BASE 0xffe01000
#define ARM_A9_HPS_DMA_SPAN 4096
#define ARM_A9_HPS_DMA_END 0xffe01fff

/*
 * Macros for device 'ARM_A9_HPS_spim0', class 'spi'
 * The macros are prefixed with 'ARM_A9_HPS_SPIM0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_SPIM0_COMPONENT_TYPE spi
#define ARM_A9_HPS_SPIM0_COMPONENT_NAME ARM_A9_HPS_spim0
#define ARM_A9_HPS_SPIM0_BASE 0xfff00000
#define ARM_A9_HPS_SPIM0_SPAN 256
#define ARM_A9_HPS_SPIM0_END 0xfff000ff

/*
 * Macros for device 'ARM_A9_HPS_spim1', class 'spi'
 * The macros are prefixed with 'ARM_A9_HPS_SPIM1_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_SPIM1_COMPONENT_TYPE spi
#define ARM_A9_HPS_SPIM1_COMPONENT_NAME ARM_A9_HPS_spim1
#define ARM_A9_HPS_SPIM1_BASE 0xfff01000
#define ARM_A9_HPS_SPIM1_SPAN 256
#define ARM_A9_HPS_SPIM1_END 0xfff010ff

/*
 * Macros for device 'ARM_A9_HPS_timer', class 'arm_internal_timer'
 * The macros are prefixed with 'ARM_A9_HPS_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_TIMER_COMPONENT_TYPE arm_internal_timer
#define ARM_A9_HPS_TIMER_COMPONENT_NAME ARM_A9_HPS_timer
#define ARM_A9_HPS_TIMER_BASE 0xfffec600
#define ARM_A9_HPS_TIMER_SPAN 256
#define ARM_A9_HPS_TIMER_END 0xfffec6ff

/*
 * Macros for device 'ARM_A9_HPS_arm_gic_0', class 'arm_gic'
 * The macros are prefixed with 'ARM_A9_HPS_ARM_GIC_0_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_ARM_GIC_0_COMPONENT_TYPE arm_gic
#define ARM_A9_HPS_ARM_GIC_0_COMPONENT_NAME ARM_A9_HPS_arm_gic_0
#define ARM_A9_HPS_ARM_GIC_0_BASE 0xfffed000
#define ARM_A9_HPS_ARM_GIC_0_SPAN 4096
#define ARM_A9_HPS_ARM_GIC_0_END 0xfffedfff

/*
 * Macros for device 'ARM_A9_HPS_L2', class 'arm_pl310_L2'
 * The macros are prefixed with 'ARM_A9_HPS_L2_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_L2_COMPONENT_TYPE arm_pl310_L2
#define ARM_A9_HPS_L2_COMPONENT_NAME ARM_A9_HPS_L2
#define ARM_A9_HPS_L2_BASE 0xfffef000
#define ARM_A9_HPS_L2_SPAN 4096
#define ARM_A9_HPS_L2_END 0xfffeffff

/*
 * Macros for device 'ARM_A9_HPS_axi_ocram', class 'axi_ocram'
 * The macros are prefixed with 'ARM_A9_HPS_AXI_OCRAM_'.
 * The prefix is the slave descriptor.
 */
#define ARM_A9_HPS_AXI_OCRAM_COMPONENT_TYPE axi_ocram
#define ARM_A9_HPS_AXI_OCRAM_COMPONENT_NAME ARM_A9_HPS_axi_ocram
#define ARM_A9_HPS_AXI_OCRAM_BASE 0xffff0000
#define ARM_A9_HPS_AXI_OCRAM_SPAN 65536
#define ARM_A9_HPS_AXI_OCRAM_END 0xffffffff
#define ARM_A9_HPS_AXI_OCRAM_SIZE_MULTIPLE 1
#define ARM_A9_HPS_AXI_OCRAM_SIZE_VALUE 1<<16
#define ARM_A9_HPS_AXI_OCRAM_WRITABLE 1
#define ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_GENERATE_HEX 0
#define ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 16


#endif /* _ALTERA_F2H_MEM_WINDOW_FF800000_H_ */
