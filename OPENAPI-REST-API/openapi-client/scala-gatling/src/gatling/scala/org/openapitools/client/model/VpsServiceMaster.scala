
package org.openapitools.client.model


case class VpsServiceMaster (
    /* VPS ID */
    _vps_id: Option[String],
    /* VPS name */
    _vps_name: Option[String],
    /* IP address of the VPS */
    _vps_ip: Option[String],
    /* VPS type */
    _vps_type: Option[String],
    /* Hard drive size */
    _vps_hdsize: Option[String],
    /* Free hard drive space */
    _vps_hdfree: Option[String],
    /* Bits */
    _vps_bits: Option[String],
    /* CPU load */
    _vps_load: Option[String],
    /* RAM */
    _vps_ram: Option[String],
    /* CPU model */
    _vps_cpu_model: Option[String],
    /* CPU frequency in MHz */
    _vps_cpu_mhz: Option[String],
    /* Location of the VPS */
    _vps_location: Option[String],
    /* Last update date */
    _vps_last_update: Option[String],
    /* RAID building status */
    _vps_raid_building: Option[String],
    /* Kernel version */
    _vps_kernel: Option[String],
    /* Available */
    _vps_available: Option[String],
    /* Number of CPU cores */
    _vps_cores: Option[String],
    /* I/O wait */
    _vps_iowait: Option[String],
    /* RAID status */
    _vps_raid_status: Option[String],
    /* Mounts */
    _vps_mounts: Option[String],
    /* Maximum number of servers */
    _vps_server_max: Option[String],
    /* Maximum number of server slices */
    _vps_server_max_slices: Option[String],
    /* Drive type */
    _vps_drive_type: Option[String],
    /* Order number */
    _vps_order: Option[String]
)
object VpsServiceMaster {
    def toStringBody(var_vps_id: Object, var_vps_name: Object, var_vps_ip: Object, var_vps_type: Object, var_vps_hdsize: Object, var_vps_hdfree: Object, var_vps_bits: Object, var_vps_load: Object, var_vps_ram: Object, var_vps_cpu_model: Object, var_vps_cpu_mhz: Object, var_vps_location: Object, var_vps_last_update: Object, var_vps_raid_building: Object, var_vps_kernel: Object, var_vps_available: Object, var_vps_cores: Object, var_vps_iowait: Object, var_vps_raid_status: Object, var_vps_mounts: Object, var_vps_server_max: Object, var_vps_server_max_slices: Object, var_vps_drive_type: Object, var_vps_order: Object) =
        s"""
        | {
        | "vps_id":$var_vps_id,"vps_name":$var_vps_name,"vps_ip":$var_vps_ip,"vps_type":$var_vps_type,"vps_hdsize":$var_vps_hdsize,"vps_hdfree":$var_vps_hdfree,"vps_bits":$var_vps_bits,"vps_load":$var_vps_load,"vps_ram":$var_vps_ram,"vps_cpu_model":$var_vps_cpu_model,"vps_cpu_mhz":$var_vps_cpu_mhz,"vps_location":$var_vps_location,"vps_last_update":$var_vps_last_update,"vps_raid_building":$var_vps_raid_building,"vps_kernel":$var_vps_kernel,"vps_available":$var_vps_available,"vps_cores":$var_vps_cores,"vps_iowait":$var_vps_iowait,"vps_raid_status":$var_vps_raid_status,"vps_mounts":$var_vps_mounts,"vps_server_max":$var_vps_server_max,"vps_server_max_slices":$var_vps_server_max_slices,"vps_drive_type":$var_vps_drive_type,"vps_order":$var_vps_order
        | }
        """.stripMargin
}
