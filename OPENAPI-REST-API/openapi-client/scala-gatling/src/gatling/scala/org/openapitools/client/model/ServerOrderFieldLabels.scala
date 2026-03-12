
package org.openapitools.client.model


case class ServerOrderFieldLabels (
    /* Bandwidth field label. */
    _bandwidth: Option[ServerOrderFieldLabel],
    /* IPs field label. */
    _ips: Option[ServerOrderFieldLabel],
    /* Operating System field label. */
    _os: Option[ServerOrderFieldLabel],
    /* Control Panel field label. */
    _cp: Option[ServerOrderFieldLabel],
    /* RAID field label. */
    _raid: Option[ServerOrderFieldLabel],
    /* Memory field label. */
    _memory: Option[ServerOrderFieldLabel],
    /* Hard Drives field label */
    _hd: Option[ServerOrderFieldLabel]
)
object ServerOrderFieldLabels {
    def toStringBody(var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object, var_memory: Object, var_hd: Object) =
        s"""
        | {
        | "bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid,"memory":$var_memory,"hd":$var_hd
        | }
        """.stripMargin
}
