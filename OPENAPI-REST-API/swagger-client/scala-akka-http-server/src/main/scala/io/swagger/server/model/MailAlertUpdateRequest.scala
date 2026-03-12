package io.swagger.server.model


/**
 * Payload for updating an existing mail alert.
 *
 * @param alert_id Alert ID to update.
 * @param `type` Alert type identifier.
 * @param value Alert value or threshold.
 * @param to Email address to notify.
 * @param enabled Whether the alert is enabled.
 */
case class MailAlertUpdateRequest (
  alert_id: Option[Int],
  `type`: Option[String],
  value: Option[String],
  to: Option[String],
  enabled: Option[String]
)

