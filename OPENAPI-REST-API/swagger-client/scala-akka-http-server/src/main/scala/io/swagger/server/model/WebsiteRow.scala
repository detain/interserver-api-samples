package io.swagger.server.model


/**
 * = WebsiteRow =
 *
 * A result row from the `Webhosting` `GET` request.
 *
 * @param website_id The id of the website. for example: ''376359''
 * @param website_hostname The hostname of the website. for example: ''hussfamily.com''
 * @param repeat_invoices_cost The repeat invoices cost of the website. for example: ''5.99''
 * @param website_status The status of the website. for example: ''active''
 * @param services_name The services name of the website. for example: ''Standard Web Hosting''
 * @param website_comment The comment of the website. for example: ''website for manhattan project.''
 */
case class WebsiteRow (
  website_id: String,
  website_hostname: String,
  repeat_invoices_cost: String,
  website_status: String,
  services_name: String,
  website_comment: String
)

