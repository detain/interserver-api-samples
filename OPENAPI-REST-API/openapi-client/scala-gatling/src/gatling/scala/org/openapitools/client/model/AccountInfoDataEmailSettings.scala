
package org.openapitools.client.model


case class AccountInfoDataEmailSettings (
    _admin_cc_bad_response: Option[String],
    _admin_mass_communications_tpl: Option[String]
)
object AccountInfoDataEmailSettings {
    def toStringBody(var_admin_cc_bad_response: Object, var_admin_mass_communications_tpl: Object) =
        s"""
        | {
        | "admin_cc_bad_response":$var_admin_cc_bad_response,"admin_mass_communications_tpl":$var_admin_mass_communications_tpl
        | }
        """.stripMargin
}
