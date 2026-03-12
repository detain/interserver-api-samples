
package org.openapitools.client.model


case class WebsiteRow (
    /* The id of the website. */
    _website_id: String,
    /* The hostname of the website. */
    _website_hostname: String,
    /* The repeat invoices cost of the website. */
    _repeat_invoices_cost: String,
    /* The status of the website. */
    _website_status: String,
    /* The services name of the website. */
    _services_name: String,
    /* The comment of the website. */
    _website_comment: String
)
object WebsiteRow {
    def toStringBody(var_website_id: Object, var_website_hostname: Object, var_repeat_invoices_cost: Object, var_website_status: Object, var_services_name: Object, var_website_comment: Object) =
        s"""
        | {
        | "website_id":$var_website_id,"website_hostname":$var_website_hostname,"repeat_invoices_cost":$var_repeat_invoices_cost,"website_status":$var_website_status,"services_name":$var_services_name,"website_comment":$var_website_comment
        | }
        """.stripMargin
}
