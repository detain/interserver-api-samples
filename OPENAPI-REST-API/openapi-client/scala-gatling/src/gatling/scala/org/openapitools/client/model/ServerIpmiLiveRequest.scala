
package org.openapitools.client.model


case class ServerIpmiLiveRequest (
    /* Your IP Address you wish to connect to the IPMI system from. */
    _ip: String,
    /* Asset ID */
    _asset: Option[Integer]
)
object ServerIpmiLiveRequest {
    def toStringBody(var_ip: Object, var_asset: Object) =
        s"""
        | {
        | "ip":$var_ip,"asset":$var_asset
        | }
        """.stripMargin
}
