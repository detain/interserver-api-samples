
package org.openapitools.client.model


case class QuickserverExtraInfoTables (
    _ip_info: Option[QuickserverIpInfo],
    _addons: Option[QuickserverAddons]
)
object QuickserverExtraInfoTables {
    def toStringBody(var_ip_info: Object, var_addons: Object) =
        s"""
        | {
        | "ip_info":$var_ip_info,"addons":$var_addons
        | }
        """.stripMargin
}
