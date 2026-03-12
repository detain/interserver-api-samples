
package org.openapitools.client.model


case class ServerSwitchport (
    /* Unique identifier for the switchport. */
    _switchport_id: Integer,
    /* Unique identifier for the switch associated with the switchport. */
    _switch_id: String,
    /* Name of the switch associated with the switchport. */
    _switch: String,
    /* Port name on the switch. */
    _port: String,
    /* Blade name associated with the port. */
    _blade: String,
    /* Port identifier. */
    _justport: String,
    /* Identifier for the graph associated with the switchport. */
    _graph_id: String,
    /* Unique identifier of the asset associated with the switchport. */
    _asset_id: Integer,
    /* List of VLANs associated with the switchport. */
    _vlans: Option[List[String]],
    /* List of IPv6 VLANs associated with the switchport. */
    _vlans6: Option[List[String]]
)
object ServerSwitchport {
    def toStringBody(var_switchport_id: Object, var_switch_id: Object, var_switch: Object, var_port: Object, var_blade: Object, var_justport: Object, var_graph_id: Object, var_asset_id: Object, var_vlans: Object, var_vlans6: Object) =
        s"""
        | {
        | "switchport_id":$var_switchport_id,"switch_id":$var_switch_id,"switch":$var_switch,"port":$var_port,"blade":$var_blade,"justport":$var_justport,"graph_id":$var_graph_id,"asset_id":$var_asset_id,"vlans":$var_vlans,"vlans6":$var_vlans6
        | }
        """.stripMargin
}
