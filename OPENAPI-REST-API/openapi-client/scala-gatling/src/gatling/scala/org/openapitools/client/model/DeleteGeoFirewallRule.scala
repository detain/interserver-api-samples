
package org.openapitools.client.model


case class DeleteGeoFirewallRule (
    _rule_id: Integer
)
object DeleteGeoFirewallRule {
    def toStringBody(var_rule_id: Object) =
        s"""
        | {
        | "rule_id":$var_rule_id
        | }
        """.stripMargin
}
