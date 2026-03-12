package io.swagger.server.model


/**
 * Dashboard module configuration for backup storage services.
 *
 * @param icon The icon for storages. for example: ''warehouse''
 * @param view_link Link to view backup. for example: ''view_backup''
 * @param heading Heading for storages. for example: ''Storages''
 * @param buy_link Link to order storage. for example: ''order_storage''
 * @param list_link Link to view backups list. for example: ''view_backups_list''
 */
case class HomeDetailsModulesBackups (
  icon: Option[String],
  view_link: Option[String],
  heading: Option[String],
  buy_link: Option[String],
  list_link: Option[String]
)

