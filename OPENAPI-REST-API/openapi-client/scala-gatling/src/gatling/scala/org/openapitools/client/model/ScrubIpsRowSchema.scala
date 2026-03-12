
package org.openapitools.client.model


case class ScrubIpsRowSchema (
    _scrub_ip_id: Option[Integer],
    _repeat_invoices_cost: Option[Number],
    _scrub_ip_ip: Option[String],
    _scrub_ip_status: Option[String],
    _services_name: Option[String]
)
object ScrubIpsRowSchema {
    def toStringBody(var_scrub_ip_id: Object, var_repeat_invoices_cost: Object, var_scrub_ip_ip: Object, var_scrub_ip_status: Object, var_services_name: Object) =
        s"""
        | {
        | "scrub_ip_id":$var_scrub_ip_id,"repeat_invoices_cost":$var_repeat_invoices_cost,"scrub_ip_ip":$var_scrub_ip_ip,"scrub_ip_status":$var_scrub_ip_status,"services_name":$var_services_name
        | }
        """.stripMargin
}
