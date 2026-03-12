
package org.openapitools.client.model


case class ServerOrder (
    _form_values: Option[ServerOrderFormValues],
    _config_ids: Option[ServerOrderConfigIds],
    /* Number of CPUs for the server order. */
    _cpu: Option[Integer],
    _field_label: Option[ServerOrderFieldLabels],
    _cpu_li: Option[ServerOrderCpuLi],
    _memory_li: Option[ServerOrderMemoryLi],
    _bandwidth_li: Option[ServerOrderBandwidthLi],
    _ips_li: Option[ServerOrderIpsLi],
    _os_li: Option[ServerOrderOsLi],
    _cp_li: Option[ServerOrderCpLi],
    /* RAID options for the server order. */
    _raid_li: Option[List[ServerOrderRAID]]
)
object ServerOrder {
    def toStringBody(var_form_values: Object, var_config_ids: Object, var_cpu: Object, var_field_label: Object, var_cpu_li: Object, var_memory_li: Object, var_bandwidth_li: Object, var_ips_li: Object, var_os_li: Object, var_cp_li: Object, var_raid_li: Object) =
        s"""
        | {
        | "form_values":$var_form_values,"config_ids":$var_config_ids,"cpu":$var_cpu,"field_label":$var_field_label,"cpu_li":$var_cpu_li,"memory_li":$var_memory_li,"bandwidth_li":$var_bandwidth_li,"ips_li":$var_ips_li,"os_li":$var_os_li,"cp_li":$var_cp_li,"raid_li":$var_raid_li
        | }
        """.stripMargin
}
