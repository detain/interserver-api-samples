
package org.openapitools.client.model


case class MailRow (
    /* The id of the mail. */
    _mail_id: Option[String],
    /* The repeat invoices cost of the mail. */
    _repeat_invoices_cost: Option[String],
    /* The username of the mail. */
    _mail_username: Option[String],
    /* The status of the mail. */
    _mail_status: Option[String],
    /* The services name of the mail. */
    _services_name: Option[String]
)
object MailRow {
    def toStringBody(var_mail_id: Object, var_repeat_invoices_cost: Object, var_mail_username: Object, var_mail_status: Object, var_services_name: Object) =
        s"""
        | {
        | "mail_id":$var_mail_id,"repeat_invoices_cost":$var_repeat_invoices_cost,"mail_username":$var_mail_username,"mail_status":$var_mail_status,"services_name":$var_services_name
        | }
        """.stripMargin
}
