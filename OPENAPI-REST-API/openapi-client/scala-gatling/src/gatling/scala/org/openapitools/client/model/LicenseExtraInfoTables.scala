
package org.openapitools.client.model


case class LicenseExtraInfoTables (
    _ip_info: Option[LicenseIpInfo]
)
object LicenseExtraInfoTables {
    def toStringBody(var_ip_info: Object) =
        s"""
        | {
        | "ip_info":$var_ip_info
        | }
        """.stripMargin
}
