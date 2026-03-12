package io.swagger.server.model


/**
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 *
 * @param vps_id VPS ID for example: ''2439''
 * @param vps_name VPS name for example: ''Mystaging''
 * @param vps_ip IP address of the VPS for example: ''10.11.12.13''
 * @param vps_type VPS type for example: ''14''
 * @param vps_hdsize Hard drive size for example: ''1856''
 * @param vps_hdfree Free hard drive space for example: ''1559''
 * @param vps_bits Bits for example: ''64''
 * @param vps_load CPU load for example: ''0.17''
 * @param vps_ram RAM for example: ''263998228''
 * @param vps_cpu_model CPU model for example: ''Intel(R) Xeon(R) CPU E5-2678 v3 @ 2.50GHz''
 * @param vps_cpu_mhz CPU frequency in MHz for example: ''1198.86''
 * @param vps_location Location of the VPS for example: ''1''
 * @param vps_last_update Last update date for example: ''2023-08-17T22:19:04.000Z''
 * @param vps_raid_building RAID building status for example: ''0''
 * @param vps_kernel Kernel version for example: ''5.4.0-121-generic''
 * @param vps_available Available for example: ''0''
 * @param vps_cores Number of CPU cores for example: ''48''
 * @param vps_iowait I/O wait for example: ''0.09''
 * @param vps_raid_status RAID status for example: ''OK: zfs:all pools are healthy''
 * @param vps_mounts Mounts for example: ''udev:125:0:125:/dev,/dev/md1:91:53:38:/,securityfs:0:0:0:/sys/kernel/security,cgroup2:0:0:0:/sys/fs/cgroup/unified,pstore:0:0:0:/sys/fs/pstore,efivarfs:0:0:0:/sys/firmware/efi/efivars,systemd-1:0:0:0:/proc/sys/fs/binfmt_misc,hugetlbfs:0:0:0:/dev/hugepages''
 * @param vps_server_max Maximum number of servers for example: ''50''
 * @param vps_server_max_slices Maximum number of server slices for example: ''80''
 * @param vps_drive_type Drive type for example: ''SSD''
 * @param vps_order Order number for example: ''36978''
 */
case class VpsServiceMaster (
  vps_id: Option[String],
  vps_name: Option[String],
  vps_ip: Option[String],
  vps_type: Option[String],
  vps_hdsize: Option[String],
  vps_hdfree: Option[String],
  vps_bits: Option[String],
  vps_load: Option[String],
  vps_ram: Option[String],
  vps_cpu_model: Option[String],
  vps_cpu_mhz: Option[String],
  vps_location: Option[String],
  vps_last_update: Option[String],
  vps_raid_building: Option[String],
  vps_kernel: Option[String],
  vps_available: Option[String],
  vps_cores: Option[String],
  vps_iowait: Option[String],
  vps_raid_status: Option[String],
  vps_mounts: Option[String],
  vps_server_max: Option[String],
  vps_server_max_slices: Option[String],
  vps_drive_type: Option[String],
  vps_order: Option[String]
)

