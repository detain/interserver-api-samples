
package org.openapitools.client.model


case class VpsPlesk12Data (
    _admin: Option[VpsPleskLicense],
    _pro: Option[VpsPleskLicense],
    _host: Option[VpsPleskLicense]
)
object VpsPlesk12Data {
    def toStringBody(var_admin: Object, var_pro: Object, var_host: Object) =
        s"""
        | {
        | "admin":$var_admin,"pro":$var_pro,"host":$var_host
        | }
        """.stripMargin
}
