/*
#     ___  _ _      ___
#    |    | | |    |
# ___|    |   | ___|    PS2DEV Open Source Project.
#----------------------------------------------------------
# (c) 2006 Eugene Plotnikov <e-plotnikov@operamail.com>
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
*/
#ifndef __SMS_Data_H
# define __SMS_Data_H

# define SMS_IDCT_CONST_SIZE   368
# define SMS_PS2ATAD_SIZE    11805
# define SMS_PS2HDD_SIZE     26169
# define SMS_PS2FS_SIZE      54785
# define SMS_USB_MASS_SIZE   22701
# define SMS_USBD_SIZE       26065
# define SMS_PS2IP_SIZE      76293
# define SMS_PS2SMAP_SIZE    11561
# define SMS_PS2HOST_SIZE    16349
# define SMS_VU0_MPG_SIZE     3248
# define SMS_VU0_DATA_SIZE     512
# define SMS_AUDSRV_SIZE      6717
# define SMS_IOMANX_SIZE      7417
# define SMS_FILEXIO_SIZE     8089
# define SMS_PS2DEV9_SIZE     8005
# define SMS_POWEROFF_SIZE    2925
# define SMS_CDVD_SIZE       20145
# define SMS_SIO2MAN_SIZE     5817

# define SMS_IDCT_CONST_OFFSET 0
# define SMS_PS2ATAD_OFFSET    (  ( SMS_IDCT_CONST_OFFSET + SMS_IDCT_CONST_SIZE + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2HDD_OFFSET     (  ( SMS_PS2ATAD_OFFSET    + SMS_PS2ATAD_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2FS_OFFSET      (  ( SMS_PS2HDD_OFFSET     + SMS_PS2HDD_SIZE     + 15 ) & 0xFFFFFFF0  )
# define SMS_USB_MASS_OFFSET   (  ( SMS_PS2FS_OFFSET      + SMS_PS2FS_SIZE      + 15 ) & 0xFFFFFFF0  )
# define SMS_USBD_OFFSET       (  ( SMS_USB_MASS_OFFSET   + SMS_USB_MASS_SIZE   + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2IP_OFFSET      (  ( SMS_USBD_OFFSET       + SMS_USBD_SIZE       + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2SMAP_OFFSET    (  ( SMS_PS2IP_OFFSET      + SMS_PS2IP_SIZE      + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2HOST_OFFSET    (  ( SMS_PS2SMAP_OFFSET    + SMS_PS2SMAP_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_VU0_MPG_OFFSET    (  ( SMS_PS2HOST_OFFSET    + SMS_PS2HOST_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_VU0_DATA_OFFSET   (  ( SMS_VU0_MPG_OFFSET    + SMS_VU0_MPG_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_AUDSRV_OFFSET     (  ( SMS_VU0_DATA_OFFSET   + SMS_VU0_DATA_SIZE   + 15 ) & 0xFFFFFFF0  )
# define SMS_IOMANX_OFFSET     (  ( SMS_AUDSRV_OFFSET     + SMS_AUDSRV_SIZE     + 15 ) & 0xFFFFFFF0  )
# define SMS_FILEXIO_OFFSET    (  ( SMS_IOMANX_OFFSET     + SMS_IOMANX_SIZE     + 15 ) & 0xFFFFFFF0  )
# define SMS_PS2DEV9_OFFSET    (  ( SMS_FILEXIO_OFFSET    + SMS_FILEXIO_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_POWEROFF_OFFSET   (  ( SMS_PS2DEV9_OFFSET    + SMS_PS2DEV9_SIZE    + 15 ) & 0xFFFFFFF0  )
# define SMS_CDVD_OFFSET       (  ( SMS_POWEROFF_OFFSET   + SMS_POWEROFF_SIZE   + 15 ) & 0xFFFFFFF0  )
# define SMS_SIO2MAN_OFFSET    (  ( SMS_CDVD_OFFSET       + SMS_CDVD_SIZE       + 15 ) & 0xFFFFFFF0  )
# define SMS_DATA_BUFFER_SIZE  (  ( SMS_SIO2MAN_OFFSET    + SMS_SIO2MAN_SIZE    + 15 ) & 0xFFFFFFF0  )

extern unsigned char g_DataBuffer[ SMS_DATA_BUFFER_SIZE ] __attribute__(   (  aligned( 64 )  )   );

# define SMS_AUDIO_BUFFER        &g_DataBuffer[ SMS_AUDSRV_OFFSET ]
# define SMS_AUDIO_BUFFER_SIZE ( &g_DataBuffer[ SMS_DATA_BUFFER_SIZE ] - SMS_AUDIO_BUFFER )
#endif  /* __SMS_Data_H */
