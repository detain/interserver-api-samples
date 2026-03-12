package io.swagger.server.model


/**
 * = BackupLoginResponse =
 *
 * Login session response for backup storage.
 *
 * @param success Indicates whether a login session was created.
 * @param text Login URL or error text returned by the storage provider.
 */
case class BackupLoginResponse (
  success: Option[Boolean],
  text: Option[String]
)

