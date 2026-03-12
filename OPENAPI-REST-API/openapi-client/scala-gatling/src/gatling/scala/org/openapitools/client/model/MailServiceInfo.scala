
package org.openapitools.client.model


case class MailServiceInfo (
    /* The ID of the mail service. */
    _mail_id: String,
    /* The type of mail service. */
    _mail_type: String,
    /* The currency of the mail service. */
    _mail_currency: String,
    /* The order date of the mail service. */
    _mail_order_date: String,
    /* The customer ID associated with the mail service. */
    _mail_custid: String,
    /* The mail quota for the service. */
    _mail_quota: String,
    /* The status of the mail service. */
    _mail_status: String,
    /* The invoice ID of the mail service. */
    _mail_invoice: String,
    /* The username associated with the mail service. */
    _mail_username: Option[String],
    /* The IP address associated with the mail service. */
    _mail_ip: Option[String],
    /* The coupon associated with the mail service. */
    _mail_coupon: Option[String],
    /* Additional information for the mail service. */
    _mail_extra: Option[String],
    /* The server status of the mail service. */
    _mail_server_status: Option[String],
    /* Additional comments for the mail service. */
    _mail_comment: Option[String]
)
object MailServiceInfo {
    def toStringBody(var_mail_id: Object, var_mail_type: Object, var_mail_currency: Object, var_mail_order_date: Object, var_mail_custid: Object, var_mail_quota: Object, var_mail_status: Object, var_mail_invoice: Object, var_mail_username: Object, var_mail_ip: Object, var_mail_coupon: Object, var_mail_extra: Object, var_mail_server_status: Object, var_mail_comment: Object) =
        s"""
        | {
        | "mail_id":$var_mail_id,"mail_type":$var_mail_type,"mail_currency":$var_mail_currency,"mail_order_date":$var_mail_order_date,"mail_custid":$var_mail_custid,"mail_quota":$var_mail_quota,"mail_status":$var_mail_status,"mail_invoice":$var_mail_invoice,"mail_username":$var_mail_username,"mail_ip":$var_mail_ip,"mail_coupon":$var_mail_coupon,"mail_extra":$var_mail_extra,"mail_server_status":$var_mail_server_status,"mail_comment":$var_mail_comment
        | }
        """.stripMargin
}
