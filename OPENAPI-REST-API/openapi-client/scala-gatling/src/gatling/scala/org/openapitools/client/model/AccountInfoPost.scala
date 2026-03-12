
package org.openapitools.client.model


case class AccountInfoPost (
    /* Your name. */
    _name: String,
    /* Your address. */
    _address: String,
    /* Your city. */
    _city: String,
    /* Your state. */
    _state: String,
    /* Your ZIP code. */
    _zip: String,
    /* Your country. */
    _country: String,
    /* Your phone number. */
    _phone: String,
    /* Your company name. */
    _company: Option[String],
    /* Additional address information. */
    _address2: Option[String],
    /* Your preferred locale. */
    _locale: Option[String],
    /* Your email for invoice notifications. */
    _email_invoices: Option[String],
    /* Your email for abuse notifications. */
    _email_abuse: Option[String],
    /* Set to `true` to disable account resets, or `false` to enable them. */
    _disable_reset: Option[Boolean],
    /* Set to `true` to disable server reinstalls, or `false` to enable them. */
    _disable_reinstall: Option[Boolean],
    /* Set to `true` to disable server notifications, or `false` to enable them. */
    _disable_server_notifications: Option[Boolean],
    /* Set to `true` to disable email notifications, or `false` to enable them. */
    _disable_email_notifications: Option[Boolean],
    /* Your GST identification number (if applicable). */
    _gstin: Option[String]
)
object AccountInfoPost {
    def toStringBody(var_name: Object, var_address: Object, var_city: Object, var_state: Object, var_zip: Object, var_country: Object, var_phone: Object, var_company: Object, var_address2: Object, var_locale: Object, var_email_invoices: Object, var_email_abuse: Object, var_disable_reset: Object, var_disable_reinstall: Object, var_disable_server_notifications: Object, var_disable_email_notifications: Object, var_gstin: Object) =
        s"""
        | {
        | "name":$var_name,"address":$var_address,"city":$var_city,"state":$var_state,"zip":$var_zip,"country":$var_country,"phone":$var_phone,"company":$var_company,"address2":$var_address2,"locale":$var_locale,"email_invoices":$var_email_invoices,"email_abuse":$var_email_abuse,"disable_reset":$var_disable_reset,"disable_reinstall":$var_disable_reinstall,"disable_server_notifications":$var_disable_server_notifications,"disable_email_notifications":$var_disable_email_notifications,"gstin":$var_gstin
        | }
        """.stripMargin
}
