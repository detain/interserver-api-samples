
package org.openapitools.client.model

import java.time.OffsetDateTime

case class LicenseRow (
    /* The id of the license. */
    _license_id: Option[String],
    /* The hostname of the license. */
    _license_hostname: Option[String],
    /* The ip of the license. */
    _license_ip: Option[String],
    /* The services name of the license. */
    _services_name: Option[String],
    /* The cost of the license. */
    _cost: Option[String],
    /* The status of the license. */
    _license_status: Option[String],
    /* The invoices paid of the license. */
    _invoices_paid: Option[String],
    /* The invoices date of the license. */
    _invoices_date: Option[OffsetDateTime]
)
object LicenseRow {
    def toStringBody(var_license_id: Object, var_license_hostname: Object, var_license_ip: Object, var_services_name: Object, var_cost: Object, var_license_status: Object, var_invoices_paid: Object, var_invoices_date: Object) =
        s"""
        | {
        | "license_id":$var_license_id,"license_hostname":$var_license_hostname,"license_ip":$var_license_ip,"services_name":$var_services_name,"cost":$var_cost,"license_status":$var_license_status,"invoices_paid":$var_invoices_paid,"invoices_date":$var_invoices_date
        | }
        """.stripMargin
}
