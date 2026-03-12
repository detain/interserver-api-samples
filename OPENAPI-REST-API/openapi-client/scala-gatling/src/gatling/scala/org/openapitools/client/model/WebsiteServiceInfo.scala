
package org.openapitools.client.model


case class WebsiteServiceInfo (
    /* Website ID */
    _website_id: Option[String],
    /* Website server */
    _website_server: Option[String],
    /* Website type */
    _website_type: Option[String],
    /* Currency of the website */
    _website_currency: Option[String],
    /* Order date of the website */
    _website_order_date: Option[String],
    /* Customer ID of the website */
    _website_custid: Option[String],
    /* IP address of the website */
    _website_ip: Option[String],
    /* Status of the website */
    _website_status: Option[String],
    /* Invoice of the website */
    _website_invoice: Option[String],
    /* Coupon for the website */
    _website_coupon: Option[String],
    /* Extra information in JSON format for the website */
    _website_extra: Option[String],
    /* Hostname of the website */
    _website_hostname: Option[String],
    /* Comment for the website */
    _website_comment: Option[String],
    /* Username for the website */
    _website_username: Option[String],
    /* Server status of the website */
    _website_server_status: Option[String]
)
object WebsiteServiceInfo {
    def toStringBody(var_website_id: Object, var_website_server: Object, var_website_type: Object, var_website_currency: Object, var_website_order_date: Object, var_website_custid: Object, var_website_ip: Object, var_website_status: Object, var_website_invoice: Object, var_website_coupon: Object, var_website_extra: Object, var_website_hostname: Object, var_website_comment: Object, var_website_username: Object, var_website_server_status: Object) =
        s"""
        | {
        | "website_id":$var_website_id,"website_server":$var_website_server,"website_type":$var_website_type,"website_currency":$var_website_currency,"website_order_date":$var_website_order_date,"website_custid":$var_website_custid,"website_ip":$var_website_ip,"website_status":$var_website_status,"website_invoice":$var_website_invoice,"website_coupon":$var_website_coupon,"website_extra":$var_website_extra,"website_hostname":$var_website_hostname,"website_comment":$var_website_comment,"website_username":$var_website_username,"website_server_status":$var_website_server_status
        | }
        """.stripMargin
}
