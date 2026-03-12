
package org.openapitools.client.model


case class VpsExtraInfoTables (
    _ip_info: Option[VpsIPInfo]
)
object VpsExtraInfoTables {
    def toStringBody(var_ip_info: Object) =
        s"""
        | {
        | "ip_info":$var_ip_info
        | }
        """.stripMargin
}
