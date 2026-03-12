
package org.openapitools.client.model


case class QuickserverOrder (
    /* Quickserver ID. */
    _qs_id: Option[String],
    _server_details: Option[QuickserverOrderServerDetails],
    _templates: Option[QuickserverOrderTemplates],
    _version: Option[QuickserverOrderVersion],
    _distro_sel: Option[QuickserverOrderDistroSel]
)
object QuickserverOrder {
    def toStringBody(var_qs_id: Object, var_server_details: Object, var_templates: Object, var_version: Object, var_distro_sel: Object) =
        s"""
        | {
        | "qs_id":$var_qs_id,"server_details":$var_server_details,"templates":$var_templates,"version":$var_version,"distro_sel":$var_distro_sel
        | }
        """.stripMargin
}
