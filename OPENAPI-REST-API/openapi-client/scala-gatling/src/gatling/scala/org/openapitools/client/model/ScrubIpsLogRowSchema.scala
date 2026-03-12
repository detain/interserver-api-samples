
package org.openapitools.client.model


case class ScrubIpsLogRowSchema (
    _date: Option[String],
    _filter: Option[String],
    _blocked_ip: Option[String],
    _target_ip: Option[String],
    _target_port: Option[Number],
    _protocol: Option[String],
    _byte_count: Option[Number],
    _xdp_action: Option[String]
)
object ScrubIpsLogRowSchema {
    def toStringBody(var_date: Object, var_filter: Object, var_blocked_ip: Object, var_target_ip: Object, var_target_port: Object, var_protocol: Object, var_byte_count: Object, var_xdp_action: Object) =
        s"""
        | {
        | "date":$var_date,"filter":$var_filter,"blocked_ip":$var_blocked_ip,"target_ip":$var_target_ip,"target_port":$var_target_port,"protocol":$var_protocol,"byte_count":$var_byte_count,"xdp_action":$var_xdp_action
        | }
        """.stripMargin
}
