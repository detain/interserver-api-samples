
package org.openapitools.client.model


case class ServerNetworkInfo (
    /* List of VLANs. */
    _vlans: List[String],
    /* List of IPv6 VLANs. */
    _vlans6: List[String],
    _assets: ServerNetworkInfoAssets,
    _switchports: ServerNetworkInfoSwitchports
)
object ServerNetworkInfo {
    def toStringBody(var_vlans: Object, var_vlans6: Object, var_assets: Object, var_switchports: Object) =
        s"""
        | {
        | "vlans":$var_vlans,"vlans6":$var_vlans6,"assets":$var_assets,"switchports":$var_switchports
        | }
        """.stripMargin
}
