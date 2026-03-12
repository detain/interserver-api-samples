package io.swagger.server.model


/**
 * Dashboard module configuration for dedicated server services.
 *
 * @param icon The icon for dedicated servers. for example: ''server''
 * @param view_link Link to view server. for example: ''view_server''
 * @param heading Heading for dedicated servers. for example: ''Dedicated Servers''
 * @param buy_link Link to order server. for example: ''order_server''
 * @param list_link Link to view servers list. for example: ''view_servers_list''
 */
case class HomeDetailsModulesServers (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

