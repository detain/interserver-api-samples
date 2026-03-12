
package org.openapitools.client.model


case class VpsRow (
    /* The id of the vps. */
    _vps_id: String,
    /* The name of the vps. */
    _vps_name: String,
    /* The repeat invoices cost of the vps. */
    _repeat_invoices_cost: String,
    /* The hostname of the vps. */
    _vps_hostname: String,
    /* The ip of the vps. */
    _vps_ip: String,
    /* The status of the vps. */
    _vps_status: String,
    /* The services name of the vps. */
    _services_name: String,
    /* The comment of the vps. */
    _vps_comment: String
)
object VpsRow {
    def toStringBody(var_vps_id: Object, var_vps_name: Object, var_repeat_invoices_cost: Object, var_vps_hostname: Object, var_vps_ip: Object, var_vps_status: Object, var_services_name: Object, var_vps_comment: Object) =
        s"""
        | {
        | "vps_id":$var_vps_id,"vps_name":$var_vps_name,"repeat_invoices_cost":$var_repeat_invoices_cost,"vps_hostname":$var_vps_hostname,"vps_ip":$var_vps_ip,"vps_status":$var_vps_status,"services_name":$var_services_name,"vps_comment":$var_vps_comment
        | }
        """.stripMargin
}
