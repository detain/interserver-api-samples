
package org.openapitools.client.model


case class ServerOrderConfigIds (
    /* Memory configuration ID for the server order. */
    _memory: Option[Integer],
    /* Bandwidth configuration ID for the server order. */
    _bandwidth: Option[String],
    /* IPs configuration ID for the server order. */
    _ips: Option[String],
    /* Operating System configuration ID for the server order. */
    _os: Option[String],
    /* Control Panel configuration ID for the server order. */
    _cp: Option[Integer],
    /* RAID configuration ID for the server order. */
    _raid: Option[String],
    /* Hard Drives configuration ID for the server order. */
    _hd: Option[String]
)
object ServerOrderConfigIds {
    def toStringBody(var_memory: Object, var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object, var_hd: Object) =
        s"""
        | {
        | "memory":$var_memory,"bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid,"hd":$var_hd
        | }
        """.stripMargin
}
