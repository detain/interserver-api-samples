
package org.openapitools.client.model


case class FormValues (
    /* Selected memory option ID. */
    _memory: Option[Integer],
    /* Selected bandwidth option ID. */
    _bandwidth: Option[Integer],
    /* Selected IP block option ID. */
    _ips: Option[Integer],
    /* Selected operating system option ID. */
    _os: Option[Integer],
    /* Selected control panel option ID. */
    _cp: Option[Integer],
    /* Selected RAID option ID. */
    _raid: Option[Integer],
    /* Selected hard drive option ID. */
    _hd: Option[Integer],
    /* Selected datacenter region ID. */
    _region: Option[Integer]
)
object FormValues {
    def toStringBody(var_memory: Object, var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object, var_hd: Object, var_region: Object) =
        s"""
        | {
        | "memory":$var_memory,"bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid,"hd":$var_hd,"region":$var_region
        | }
        """.stripMargin
}
