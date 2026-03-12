
package org.openapitools.client.model

import java.time.OffsetDateTime

case class LicenseServiceInfo (
    /* License ID */
    _license_id: String,
    /* License type */
    _license_type: String,
    /* License currency */
    _license_currency: String,
    /* License order date */
    _license_order_date: OffsetDateTime,
    /* Customer ID */
    _license_custid: String,
    /* License IP */
    _license_ip: String,
    /* License status */
    _license_status: String,
    /* License invoice */
    _license_invoice: String,
    /* License coupon */
    _license_coupon: String,
    /* License hostname */
    _license_hostname: Option[String],
    /* License key */
    _license_key: Option[String],
    /* Additional license information */
    _license_extra: Option[String]
)
object LicenseServiceInfo {
    def toStringBody(var_license_id: Object, var_license_type: Object, var_license_currency: Object, var_license_order_date: Object, var_license_custid: Object, var_license_ip: Object, var_license_status: Object, var_license_invoice: Object, var_license_coupon: Object, var_license_hostname: Object, var_license_key: Object, var_license_extra: Object) =
        s"""
        | {
        | "license_id":$var_license_id,"license_type":$var_license_type,"license_currency":$var_license_currency,"license_order_date":$var_license_order_date,"license_custid":$var_license_custid,"license_ip":$var_license_ip,"license_status":$var_license_status,"license_invoice":$var_license_invoice,"license_coupon":$var_license_coupon,"license_hostname":$var_license_hostname,"license_key":$var_license_key,"license_extra":$var_license_extra
        | }
        """.stripMargin
}
