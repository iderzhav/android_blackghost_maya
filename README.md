# BlakGhost Kernel
This BlackGHost custom kernel (3.18.140) source adapted to Bluboo Maya (MT6580).

Original kernel sources by svoboda18 :)

## Known information:
| Subsystem | Driver name | Availability | Working |
|-----------|-------------|--------------|---------|
| LCM driver | `s6d7aa0_dsi_vdo_common` | Yes | Yes |
| Touch panel | `FT5X0X (i2c 1-0038)` | Yes | Yes |
| GPU | `Mali-400 MP2` | Yes | Yes |
| Camera #1 | `hi843b_mipi_raw` | Yes | - |
| Camera #2 | `gc5005_mipi_raw` | Yes | Yes |
| Accelerometer | `MXC622X (i2c 2-0015)` | Yes | Yes (Inverted) |
| Flash | `DS2016` | - | Yes |
| Lens | `DW9714AF` | Yes | Yes |
| RAM | `2 GB LPDDR3_1066` | - | Yes |
| Sound | `amp_6323pmic_spk` | Yes | - |
| Accdet | `mt6580-accdet` | - | Yes |
| Other | `kd_camera_hw (i2c 0-0036)` | Yes | Yes |

## Current kernel features:
* Overclock CPU To 1500MHz (Disabled).
* Underclock CPU To 260MHz.
* Added 17+ CPU Governors. (smartmax,dancedance,pegasusq,ondmand_x,ondemandPlus,Blu_active,elementalX,nightmare,zzmoove,intelliactive,impulse,HYPER,bioshock,darkness,thunderX,Lionheart,bioshock),bioshock As Default.
* Added 6+ i/0 Scheduler. (bfq,fifo,fiops,sio,sioplus,zen), zen As Default.
* Added 13+ TCP Scheduler. (reno,bic,westwood,hispeed,hybla,htcp,vegas,veno,scalable,lp,yeah,illinols,cubic), westwood As Default.
* Optimized SLUB.
* Added KSM.
* Added Frandom.
* Added crc check control. 
* Added DT2W Gesture.
* Added THUNDERQUAKE ENGINE.
* Added Fast Charging Support. (Upto 1.5AM)
* Tweaked Mali For More Faster Rendering.
* MTK Dynamic Boost.
* Touch Boost.
* Added Color control.
* Removed io blockplugs for better performance. 
* Added Alucard Hotplug. 
* Added AuroSmp Hotplug.
* Added Thunder Charge Control.
* Added Dynamic Fsync 1.5.
* Added Power Suspend V1.8.1.
* Added Wireguard Support.
* Compiled with linaro 6. 
* Many Performance Changes. (crc and other checks are disabled) 
* Network tweaks, Responsive settings. 
* Lock wakelock for some services. 

## Build process:
* Clone that repo, by running:
`git clone https://github.com/ruben1863/android_blackghost_maya kernel`
* Start the build:
`sudo chmod -R 777 kernel`
`cd kernel ; bash Build-BlackGhostKernel`
* Then type `b` to **build** the kernel
  - Output kernel will be in zip named with date of the build.

## Acknowledgements:
* [andrey167 (4pda.ru)](https://4pda.ru/forum/index.php?showuser=6516960) [(@andrey167)](https://github.com/andrey167)
* [SnowCatPDA (4pda.ru)](https://4pda.ru/forum/index.php?showuser=334271) [(@SnowCat6)](https://github.com/SnowCat6)
* [nik-kst (4pda.ru)](https://4pda.ru/forum/index.php?showuser=4052130) [(@nik124seleznev)](https://github.com/nik124seleznev)

