package io.swagger.server.model


/**
 * Dashboard module configuration for domain registration services.
 *
 * @param icon The icon for domains. for example: ''globe''
 * @param view_link Link to view domain. for example: ''view_domain''
 * @param heading Heading for domains. for example: ''Domains''
 * @param buy_link Link to order domain. for example: ''domain_order''
 * @param list_link Link to view domains list. for example: ''view_domains_list''
 */
case class HomeDetailsModulesDomains (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

