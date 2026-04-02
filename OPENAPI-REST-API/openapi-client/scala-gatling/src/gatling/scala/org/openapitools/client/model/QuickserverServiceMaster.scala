
package org.openapitools.client.model


case class QuickserverServiceMaster (
    /* Quickserver ID */
    _qs_id: Option[String],
    /* Quickserver name */
    _qs_name: Option[String],
    /* IP address */
    _qs_ip: Option[String],
    /* Type */
    _qs_type: Option[String],
    /* HDD size */
    _qs_hdsize: Option[String],
    /* Free HDD space */
    _qs_hdfree: Option[String],
    /* Bits */
    _qs_bits: Option[String],
    /* Load */
    _qs_load: Option[String],
    /* RAM information */
    _qs_ram: Option[String],
    /* CPU model */
    _qs_cpu_model: Option[String],
    /* CPU frequency */
    _qs_cpu_mhz: Option[String],
    /* Location */
    _qs_location: Option[String],
    /* Available information */
    _qs_available: Option[String],
    /* Cost */
    _qs_cost: Option[String],
    /* Last update date */
    _qs_last_update: Option[String],
    /* Number of cores */
    _qs_cores: Option[String],
    /* I/O wait */
    _qs_iowait: Option[String],
    /* RAID status */
    _qs_raid_status: Option[String],
    /* Drive type */
    _qs_drive_type: Option[String],
    /* Order number */
    _qs_order: Option[String],
    /* RAID building information */
    _qs_raid_building: Option[String],
    /* Kernel version */
    _qs_kernel: Option[String],
    /* IOPing information */
    _qs_ioping: Option[String],
    /* Speed information */
    _qs_speed: Option[String],
    /* Distribution name */
    _qs_distro: Option[String],
    /* Distribution version */
    _qs_distro_version: Option[String],
    /* Bytes/sec in */
    _qs_bytes_sec_in: Option[String],
    /* Bytes/sec out */
    _qs_bytes_sec_out: Option[String],
    /* Packets/sec in */
    _qs_packets_sec_in: Option[String],
    /* Packets/sec out */
    _qs_packets_sec_out: Option[String],
    /* Last install time (null) */
    _qs_last_install_time: Option[String],
    /* Partitions information (null) */
    _qs_partitions: Option[String],
    /* CPU flags */
    _qs_cpu_flags: Option[String]
)
object QuickserverServiceMaster {
    def toStringBody(var_qs_id: Object, var_qs_name: Object, var_qs_ip: Object, var_qs_type: Object, var_qs_hdsize: Object, var_qs_hdfree: Object, var_qs_bits: Object, var_qs_load: Object, var_qs_ram: Object, var_qs_cpu_model: Object, var_qs_cpu_mhz: Object, var_qs_location: Object, var_qs_available: Object, var_qs_cost: Object, var_qs_last_update: Object, var_qs_cores: Object, var_qs_iowait: Object, var_qs_raid_status: Object, var_qs_drive_type: Object, var_qs_order: Object, var_qs_raid_building: Object, var_qs_kernel: Object, var_qs_ioping: Object, var_qs_speed: Object, var_qs_distro: Object, var_qs_distro_version: Object, var_qs_bytes_sec_in: Object, var_qs_bytes_sec_out: Object, var_qs_packets_sec_in: Object, var_qs_packets_sec_out: Object, var_qs_last_install_time: Object, var_qs_partitions: Object, var_qs_cpu_flags: Object) =
        s"""
        | {
        | "qs_id":$var_qs_id,"qs_name":$var_qs_name,"qs_ip":$var_qs_ip,"qs_type":$var_qs_type,"qs_hdsize":$var_qs_hdsize,"qs_hdfree":$var_qs_hdfree,"qs_bits":$var_qs_bits,"qs_load":$var_qs_load,"qs_ram":$var_qs_ram,"qs_cpu_model":$var_qs_cpu_model,"qs_cpu_mhz":$var_qs_cpu_mhz,"qs_location":$var_qs_location,"qs_available":$var_qs_available,"qs_cost":$var_qs_cost,"qs_last_update":$var_qs_last_update,"qs_cores":$var_qs_cores,"qs_iowait":$var_qs_iowait,"qs_raid_status":$var_qs_raid_status,"qs_drive_type":$var_qs_drive_type,"qs_order":$var_qs_order,"qs_raid_building":$var_qs_raid_building,"qs_kernel":$var_qs_kernel,"qs_ioping":$var_qs_ioping,"qs_speed":$var_qs_speed,"qs_distro":$var_qs_distro,"qs_distro_version":$var_qs_distro_version,"qs_bytes_sec_in":$var_qs_bytes_sec_in,"qs_bytes_sec_out":$var_qs_bytes_sec_out,"qs_packets_sec_in":$var_qs_packets_sec_in,"qs_packets_sec_out":$var_qs_packets_sec_out,"qs_last_install_time":$var_qs_last_install_time,"qs_partitions":$var_qs_partitions,"qs_cpu_flags":$var_qs_cpu_flags
        | }
        """.stripMargin
}
