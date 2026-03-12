package io.swagger.server.model


/**
 * Dashboard module configuration for VPS services.
 *
 * @param icon The icon for VPS. for example: ''cloud-meatball''
 * @param view_link Link to view VPS. for example: ''view_vps''
 * @param heading Heading for VPS. for example: ''VPS''
 * @param buy_link Link to order VPS. for example: ''order_vps''
 * @param list_link Link to view VPS list. for example: ''view_vps_list''
 */
case class HomeDetailsModulesVps (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

