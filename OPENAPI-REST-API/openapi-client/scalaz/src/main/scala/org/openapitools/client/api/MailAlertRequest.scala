package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailAlertRequest._

case class MailAlertRequest (
  /* Alert type identifier. */
  `type`: Option[String],
/* Alert value or threshold. */
  value: Option[String],
/* Email address to notify. */
  to: Option[String],
/* Whether the alert is enabled. */
  enabled: Option[String])

object MailAlertRequest {
  import DateTimeCodecs._

  implicit val MailAlertRequestCodecJson: CodecJson[MailAlertRequest] = CodecJson.derive[MailAlertRequest]
  implicit val MailAlertRequestDecoder: EntityDecoder[MailAlertRequest] = jsonOf[MailAlertRequest]
  implicit val MailAlertRequestEncoder: EntityEncoder[MailAlertRequest] = jsonEncoderOf[MailAlertRequest]
}
