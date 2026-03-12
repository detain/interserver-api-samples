
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseFilterFirewallFiltersInner (
    _daddr: Option[String],
    _dest: Option[String],
    _filter_name: Option[String],
    _destination_ip: Option[String],
    _filter: Option[String]
)
object GetScrubIpDetails200ResponseFilterFirewallFiltersInner {
    def toStringBody(var_daddr: Object, var_dest: Object, var_filter_name: Object, var_destination_ip: Object, var_filter: Object) =
        s"""
        | {
        | "daddr":$var_daddr,"dest":$var_dest,"filter_name":$var_filter_name,"destination_ip":$var_destination_ip,"filter":$var_filter
        | }
        """.stripMargin
}
