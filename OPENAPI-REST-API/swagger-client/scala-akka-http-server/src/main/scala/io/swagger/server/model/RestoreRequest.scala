package io.swagger.server.model


/**
 * = Root Type for RestoreRequest =
 *
 * Request data to trigger a restore from backup.
 *
 * @param backup 
 * @param password 
 */
case class RestoreRequest (
  backup: Option[String],
  password: Option[String]
)

