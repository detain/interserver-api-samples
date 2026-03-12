package io.swagger.server.model


/**
 * @param links List of backup links.
 * @param count Number of backups. for example: ''0''
 */
case class Home_services_backups (
  links: Option[List[String]],
  count: Option[Int]
)

