package io.swagger.server.model


/**
 * Dashboard module configuration for webhosting services.
 *
 * @param icon The icon for web hosting. for example: ''window-maximize''
 * @param view_link Link to view website. for example: ''view_website''
 * @param heading Heading for web hosting. for example: ''Web Hosting''
 * @param buy_link Link to order website. for example: ''order_website''
 * @param list_link Link to view websites list. for example: ''view_websites_list''
 */
case class HomeDetailsModulesWebhosting (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

