package io.swagger.server.model


/**
 * Dashboard module configuration for software license services.
 *
 * @param icon The icon for licenses. for example: ''id-card''
 * @param view_link Link to view license. for example: ''view_license''
 * @param heading Heading for licenses. for example: ''Licenses''
 * @param buy_link Link to order license. for example: ''order_license''
 * @param list_link Link to view licenses list. for example: ''view_licenses_list''
 */
case class HomeDetailsModulesLicenses (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

