
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseFilterFirewallRulesInner (
    _id: Option[String],
    _source_ip: Option[String],
    _destination_ip: Option[String],
    _protocol_id: Option[String],
    _source_port: Option[String],
    _destination_port: Option[String],
    _xdp_action: Option[String],
    _global_drop: Option[String]
)
object GetScrubIpDetails200ResponseFilterFirewallRulesInner {
    def toStringBody(var_id: Object, var_source_ip: Object, var_destination_ip: Object, var_protocol_id: Object, var_source_port: Object, var_destination_port: Object, var_xdp_action: Object, var_global_drop: Object) =
        s"""
        | {
        | "id":$var_id,"source_ip":$var_source_ip,"destination_ip":$var_destination_ip,"protocol_id":$var_protocol_id,"source_port":$var_source_port,"destination_port":$var_destination_port,"xdp_action":$var_xdp_action,"global_drop":$var_global_drop
        | }
        """.stripMargin
}
