
package org.openapitools.client.model


case class CreateFirewallRule (
    /* 1 = TCP, 2 = UDP */
    _protocol_id: Integer,
    /* 1 = Block,  0 = Whitelist */
    _xdp_action: Integer,
    _destination_port: Option[Integer],
    /* Source IP address to match. Use '0.0.0.0' to match any source. */
    _source_ip: Option[String],
    _source_port: Option[Integer]
)
object CreateFirewallRule {
    def toStringBody(var_protocol_id: Object, var_xdp_action: Object, var_destination_port: Object, var_source_ip: Object, var_source_port: Object) =
        s"""
        | {
        | "protocol_id":$var_protocol_id,"xdp_action":$var_xdp_action,"destination_port":$var_destination_port,"source_ip":$var_source_ip,"source_port":$var_source_port
        | }
        """.stripMargin
}
