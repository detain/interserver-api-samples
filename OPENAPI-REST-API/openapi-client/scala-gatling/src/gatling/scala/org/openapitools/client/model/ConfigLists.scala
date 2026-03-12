
package org.openapitools.client.model


case class ConfigLists (
    _cpu_li: Option[Map[String, Cpu]],
    _memory_li: Option[Map[String, Map[String, MemoryOption]]],
    _hd_li: Option[Map[String, Map[String, HardDrive]]],
    _bandwidth_li: Option[Map[String, Bandwidth]],
    _ips_li: Option[Map[String, IpBlock]],
    _os_li: Option[Map[String, OperatingSystem]],
    _cp_li: Option[Map[String, ControlPanel]],
    _raid_li: Option[List[RaidOption]]
)
object ConfigLists {
    def toStringBody(var_cpu_li: Object, var_memory_li: Object, var_hd_li: Object, var_bandwidth_li: Object, var_ips_li: Object, var_os_li: Object, var_cp_li: Object, var_raid_li: Object) =
        s"""
        | {
        | "cpu_li":$var_cpu_li,"memory_li":$var_memory_li,"hd_li":$var_hd_li,"bandwidth_li":$var_bandwidth_li,"ips_li":$var_ips_li,"os_li":$var_os_li,"cp_li":$var_cp_li,"raid_li":$var_raid_li
        | }
        """.stripMargin
}
