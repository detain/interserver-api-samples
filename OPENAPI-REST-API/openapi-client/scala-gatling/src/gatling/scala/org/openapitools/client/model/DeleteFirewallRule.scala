
package org.openapitools.client.model


case class DeleteFirewallRule (
    _rule_id: Integer
)
object DeleteFirewallRule {
    def toStringBody(var_rule_id: Object) =
        s"""
        | {
        | "rule_id":$var_rule_id
        | }
        """.stripMargin
}
