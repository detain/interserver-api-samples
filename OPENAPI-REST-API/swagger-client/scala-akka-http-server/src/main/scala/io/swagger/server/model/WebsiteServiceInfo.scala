package io.swagger.server.model


/**
 * @param website_id Website ID for example: ''1196829''
 * @param website_server Website server for example: ''543''
 * @param website_type Website type for example: ''11363''
 * @param website_currency Currency of the website for example: ''USD''
 * @param website_order_date Order date of the website for example: ''2023-03-16T22:51:54.000Z''
 * @param website_custid Customer ID of the website for example: ''85872''
 * @param website_ip IP address of the website for example: ''74.50.80.15''
 * @param website_status Status of the website for example: ''active''
 * @param website_invoice Invoice of the website for example: ''20261994''
 * @param website_coupon Coupon for the website for example: ''1690''
 * @param website_extra Extra information in JSON format for the website for example: ''[]''
 * @param website_hostname Hostname of the website for example: ''vintagevultures.com''
 * @param website_comment Comment for the website
 * @param website_username Username for the website for example: ''vintagev''
 * @param website_server_status Server status of the website
 */
case class WebsiteServiceInfo (
  website_id: Option[String],
  website_server: Option[String],
  website_type: Option[String],
  website_currency: Option[String],
  website_order_date: Option[String],
  website_custid: Option[String],
  website_ip: Option[String],
  website_status: Option[String],
  website_invoice: Option[String],
  website_coupon: Option[String],
  website_extra: Option[String],
  website_hostname: Option[String],
  website_comment: Option[String],
  website_username: Option[String],
  website_server_status: Option[String]
)

