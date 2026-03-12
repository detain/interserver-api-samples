
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseFilterFirewall (
    _rules: Option[List[GetScrubIpDetails200ResponseFilterFirewallRulesInner]],
    _filters: Option[List[GetScrubIpDetails200ResponseFilterFirewallFiltersInner]],
    _scrub_enabled: Option[Integer]
)
object GetScrubIpDetails200ResponseFilterFirewall {
    def toStringBody(var_rules: Object, var_filters: Object, var_scrub_enabled: Object) =
        s"""
        | {
        | "rules":$var_rules,"filters":$var_filters,"scrub_enabled":$var_scrub_enabled
        | }
        """.stripMargin
}
