
package org.openapitools.client.model


case class ConfigIds (
    /* Configuration ID for the selected memory option. */
    _memory: Option[Integer],
    /* Configuration ID for the selected hard drive option. */
    _hd: Option[Integer],
    /* Configuration ID for the selected bandwidth option. */
    _bandwidth: Option[Integer],
    /* Configuration ID for the selected IP block option. */
    _ips: Option[Integer],
    /* Configuration ID for the selected operating system. */
    _os: Option[Integer],
    /* Configuration ID for the selected control panel. */
    _cp: Option[Integer],
    /* Configuration ID for the selected RAID option. */
    _raid: Option[Integer]
)
object ConfigIds {
    def toStringBody(var_memory: Object, var_hd: Object, var_bandwidth: Object, var_ips: Object, var_os: Object, var_cp: Object, var_raid: Object) =
        s"""
        | {
        | "memory":$var_memory,"hd":$var_hd,"bandwidth":$var_bandwidth,"ips":$var_ips,"os":$var_os,"cp":$var_cp,"raid":$var_raid
        | }
        """.stripMargin
}
