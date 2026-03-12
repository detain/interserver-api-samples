
package org.openapitools.client.model


case class ServerOrderFormValues (
    /* Memory value for the server order. */
    _memory: Option[Integer],
    /* Bandwidth value for the server order. */
    _bandwidth: Option[String],
    /* IPs value for the server order. */
    _ips: Option[String],
    /* Operating System value for the server order. */
    _os: Option[String],
    /* Control Panel value for the server order. */
    _cp: Option[Integer],
    /* RAID value for the server order. */
    _raid: Option[String],
    /* Hard Drives value for the server order. */
    _hd: Option[String]
)
object ServerOrderFormValues {
    def toStringBody(var_memory: Object, var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object, var_hd: Object) =
        s"""
        | {
        | "memory":$var_memory,"bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid,"hd":$var_hd
        | }
        """.stripMargin
}
