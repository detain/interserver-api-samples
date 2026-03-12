package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailAlertUpdateRequest._

case class MailAlertUpdateRequest (
  /* Alert ID to update. */
  alert_id: Option[Integer],
/* Alert type identifier. */
  `type`: Option[String],
/* Alert value or threshold. */
  value: Option[String],
/* Email address to notify. */
  to: Option[String],
/* Whether the alert is enabled. */
  enabled: Option[String])

object MailAlertUpdateRequest {
  import DateTimeCodecs._

  implicit val MailAlertUpdateRequestCodecJson: CodecJson[MailAlertUpdateRequest] = CodecJson.derive[MailAlertUpdateRequest]
  implicit val MailAlertUpdateRequestDecoder: EntityDecoder[MailAlertUpdateRequest] = jsonOf[MailAlertUpdateRequest]
  implicit val MailAlertUpdateRequestEncoder: EntityEncoder[MailAlertUpdateRequest] = jsonEncoderOf[MailAlertUpdateRequest]
}
