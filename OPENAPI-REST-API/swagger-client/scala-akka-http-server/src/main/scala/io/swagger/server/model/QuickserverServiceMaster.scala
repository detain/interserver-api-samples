package io.swagger.server.model


/**
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 *
 * @param qs_id Quickserver ID for example: ''365''
 * @param qs_name Quickserver name for example: ''Qs365''
 * @param qs_ip IP address
 * @param qs_type Type for example: ''14''
 * @param qs_hdsize HDD size for example: ''1760''
 * @param qs_hdfree Free HDD space for example: ''1192''
 * @param qs_bits Bits for example: ''64''
 * @param qs_load Load for example: ''3.45''
 * @param qs_ram RAM information for example: ''29550679''
 * @param qs_cpu_model CPU model for example: ''Intel(R) Xeon(R) CPU E3-1271 v3 @ 3.60GHz''
 * @param qs_cpu_mhz CPU frequency for example: ''2900''
 * @param qs_location Location for example: ''1''
 * @param qs_available Available information for example: ''0''
 * @param qs_cost Cost for example: ''49''
 * @param qs_last_update Last update date for example: ''2023-08-17T23:52:02.000Z''
 * @param qs_cores Number of cores for example: ''8''
 * @param qs_iowait I/O wait for example: ''6.89''
 * @param qs_raid_status RAID status for example: ''OK: zfs:all pools are healthy''
 * @param qs_drive_type Drive type for example: ''SSD''
 * @param qs_order Order number for example: ''92263''
 * @param qs_raid_building RAID building information for example: ''0''
 * @param qs_kernel Kernel version for example: ''5.15.0-69-generic''
 * @param qs_ioping IOPing information for example: ''330707348''
 * @param qs_speed Speed information for example: ''1000''
 * @param qs_distro Distribution name for example: ''Ubuntu''
 * @param qs_distro_version Distribution version for example: ''22.04''
 * @param qs_bytes_sec_in Bytes/sec in for example: ''0''
 * @param qs_bytes_sec_out Bytes/sec out for example: ''0''
 * @param qs_packets_sec_in Packets/sec in for example: ''0''
 * @param qs_packets_sec_out Packets/sec out for example: ''0''
 * @param qs_last_install_time Last install time (null)
 * @param qs_partitions Partitions information (null)
 * @param qs_cpu_flags CPU flags
 */
case class QuickserverServiceMaster (
  qs_id: Option[String],
  qs_name: Option[String],
  qs_ip: Option[String],
  qs_type: Option[String],
  qs_hdsize: Option[String],
  qs_hdfree: Option[String],
  qs_bits: Option[String],
  qs_load: Option[String],
  qs_ram: Option[String],
  qs_cpu_model: Option[String],
  qs_cpu_mhz: Option[String],
  qs_location: Option[String],
  qs_available: Option[String],
  qs_cost: Option[String],
  qs_last_update: Option[String],
  qs_cores: Option[String],
  qs_iowait: Option[String],
  qs_raid_status: Option[String],
  qs_drive_type: Option[String],
  qs_order: Option[String],
  qs_raid_building: Option[String],
  qs_kernel: Option[String],
  qs_ioping: Option[String],
  qs_speed: Option[String],
  qs_distro: Option[String],
  qs_distro_version: Option[String],
  qs_bytes_sec_in: Option[String],
  qs_bytes_sec_out: Option[String],
  qs_packets_sec_in: Option[String],
  qs_packets_sec_out: Option[String],
  qs_last_install_time: Option[String],
  qs_partitions: Option[String],
  qs_cpu_flags: Option[String]
)

