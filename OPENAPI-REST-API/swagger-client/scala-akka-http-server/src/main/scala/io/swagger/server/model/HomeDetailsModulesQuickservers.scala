package io.swagger.server.model


/**
 * Dashboard module configuration for QuickServer services.
 *
 * @param icon The icon for quick servers. for example: ''database''
 * @param view_link Link to view quick servers. for example: ''view_qs''
 * @param heading Heading for quick servers. for example: ''Quick Servers''
 * @param buy_link Link to order quick server. for example: ''order_quickserver''
 * @param list_link Link to view quick servers list. for example: ''view_quickservers_list''
 */
case class HomeDetailsModulesQuickservers (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

