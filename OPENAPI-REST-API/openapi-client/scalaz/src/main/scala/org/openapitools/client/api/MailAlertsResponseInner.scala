package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailAlertsResponseInner._

case class MailAlertsResponseInner (
  alert_id: Option[Integer],
alert_type: Option[String],
alert_value: Option[String],
alert_to: Option[String],
alert_enabled: Option[String])

object MailAlertsResponseInner {
  import DateTimeCodecs._

  implicit val MailAlertsResponseInnerCodecJson: CodecJson[MailAlertsResponseInner] = CodecJson.derive[MailAlertsResponseInner]
  implicit val MailAlertsResponseInnerDecoder: EntityDecoder[MailAlertsResponseInner] = jsonOf[MailAlertsResponseInner]
  implicit val MailAlertsResponseInnerEncoder: EntityEncoder[MailAlertsResponseInner] = jsonEncoderOf[MailAlertsResponseInner]
}
