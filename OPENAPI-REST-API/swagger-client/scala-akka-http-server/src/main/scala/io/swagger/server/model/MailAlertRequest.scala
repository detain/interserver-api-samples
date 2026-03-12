package io.swagger.server.model


/**
 * Payload for creating a mail alert.
 *
 * @param `type` Alert type identifier.
 * @param value Alert value or threshold.
 * @param to Email address to notify.
 * @param enabled Whether the alert is enabled.
 */
case class MailAlertRequest (
  `type`: Option[String],
  value: Option[String],
  to: Option[String],
  enabled: Option[String]
)

