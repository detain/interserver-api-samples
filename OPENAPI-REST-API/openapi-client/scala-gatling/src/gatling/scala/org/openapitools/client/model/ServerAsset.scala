
package org.openapitools.client.model


case class ServerAsset (
    /* Unique identifier for the asset. */
    _id: Integer,
    /* Order identifier for the asset. */
    _order_id: String,
    /* Hostname associated with the asset. */
    _hostname: String,
    /* Status of the asset. */
    _status: String,
    /* Primary IPv4 address of the asset. */
    _primary_ipv4: String,
    /* Primary IPv6 address of the asset. */
    _primary_ipv6: String,
    /* Datacenter identifier for the asset. */
    _datacenter: String,
    /* Type identifier for the asset. */
    _type_id: String,
    /* Asset tag associated with the asset. */
    _asset_tag: String,
    /* Rack identifier for the asset. */
    _rack: String,
    /* Row identifier for the asset. */
    _row: String,
    /* Column identifier for the asset. */
    _col: String,
    /* Starting unit identifier for the asset. */
    _unit_start: String,
    /* Ending unit identifier for the asset. */
    _unit_end: String,
    /* Subunit identifier for the asset. */
    _unit_sub: String,
    /* IPMI MAC address associated with the asset. */
    _ipmi_mac: String,
    /* IPMI IP address associated with the asset. */
    _ipmi_ip: String,
    /* IPMI working status associated with the asset. */
    _ipmi_working: String,
    /* Company associated with the asset. */
    _company: String,
    /* Comments associated with the asset. */
    _comments: String,
    /* Make of the asset. */
    _make: String,
    /* Model of the asset. */
    _model: String,
    /* Description of the asset. */
    _description: String,
    /* Customer identifier for the asset. */
    _customer_id: String,
    /* External identifier for the asset. */
    _external_id: String,
    /* Billing status of the asset. */
    _billing_status: String,
    /* Overdue status of the asset. */
    _overdue: String,
    /* Asset identifier for the asset. */
    _asset_id: String,
    /* Name of the asset. */
    _asset_name: String,
    /* Rack identifier for the asset. */
    _rack_id: String,
    /* Rack name associated with the asset. */
    _rack_name: String,
    /* Location of the rack associated with the asset. */
    _rack_location: String,
    /* Size of the rack associated with the asset. */
    _rack_size: String,
    /* X-coordinate of the asset within the rack. */
    _rack_x: String,
    /* Y-coordinate of the asset within the rack. */
    _rack_y: String,
    /* List of switchports associated with the asset. */
    _switchports: List[Integer],
    /* List of VLANs associated with the asset. */
    _vlans: List[String],
    /* List of IPv6 VLANs associated with the asset. */
    _vlans6: List[String],
    _lease: ServerLease,
    /* MAC address associated with the asset. */
    _mac: Option[AnyType],
    /* IPMI admin username associated with the asset. */
    _ipmi_admin_username: Option[AnyType],
    /* IPMI admin password associated with the asset. */
    _ipmi_admin_password: Option[AnyType],
    /* IPMI client username associated with the asset. */
    _ipmi_client_username: Option[AnyType],
    /* IPMI client password associated with the asset. */
    _ipmi_client_password: Option[AnyType],
    /* IPMI update status associated with the asset. */
    _ipmi_updated: Option[AnyType],
    /* Timestamp of asset creation. */
    _create_timestamp: Option[AnyType],
    /* Timestamp of asset update. */
    _update_timestamp: Option[AnyType],
    /* Comment associated with the asset. */
    _comment: Option[AnyType]
)
object ServerAsset {
    def toStringBody(var_id: Object, var_order_id: Object, var_hostname: Object, var_status: Object, var_primary_ipv4: Object, var_primary_ipv6: Object, var_datacenter: Object, var_type_id: Object, var_asset_tag: Object, var_rack: Object, var_row: Object, var_col: Object, var_unit_start: Object, var_unit_end: Object, var_unit_sub: Object, var_ipmi_mac: Object, var_ipmi_ip: Object, var_ipmi_working: Object, var_company: Object, var_comments: Object, var_make: Object, var_model: Object, var_description: Object, var_customer_id: Object, var_external_id: Object, var_billing_status: Object, var_overdue: Object, var_asset_id: Object, var_asset_name: Object, var_rack_id: Object, var_rack_name: Object, var_rack_location: Object, var_rack_size: Object, var_rack_x: Object, var_rack_y: Object, var_switchports: Object, var_vlans: Object, var_vlans6: Object, var_lease: Object, var_mac: Object, var_ipmi_admin_username: Object, var_ipmi_admin_password: Object, var_ipmi_client_username: Object, var_ipmi_client_password: Object, var_ipmi_updated: Object, var_create_timestamp: Object, var_update_timestamp: Object, var_comment: Object) =
        s"""
        | {
        | "id":$var_id,"order_id":$var_order_id,"hostname":$var_hostname,"status":$var_status,"primary_ipv4":$var_primary_ipv4,"primary_ipv6":$var_primary_ipv6,"datacenter":$var_datacenter,"type_id":$var_type_id,"asset_tag":$var_asset_tag,"rack":$var_rack,"row":$var_row,"col":$var_col,"unit_start":$var_unit_start,"unit_end":$var_unit_end,"unit_sub":$var_unit_sub,"ipmi_mac":$var_ipmi_mac,"ipmi_ip":$var_ipmi_ip,"ipmi_working":$var_ipmi_working,"company":$var_company,"comments":$var_comments,"make":$var_make,"model":$var_model,"description":$var_description,"customer_id":$var_customer_id,"external_id":$var_external_id,"billing_status":$var_billing_status,"overdue":$var_overdue,"asset_id":$var_asset_id,"asset_name":$var_asset_name,"rack_id":$var_rack_id,"rack_name":$var_rack_name,"rack_location":$var_rack_location,"rack_size":$var_rack_size,"rack_x":$var_rack_x,"rack_y":$var_rack_y,"switchports":$var_switchports,"vlans":$var_vlans,"vlans6":$var_vlans6,"lease":$var_lease,"mac":$var_mac,"ipmi_admin_username":$var_ipmi_admin_username,"ipmi_admin_password":$var_ipmi_admin_password,"ipmi_client_username":$var_ipmi_client_username,"ipmi_client_password":$var_ipmi_client_password,"ipmi_updated":$var_ipmi_updated,"create_timestamp":$var_create_timestamp,"update_timestamp":$var_update_timestamp,"comment":$var_comment
        | }
        """.stripMargin
}
