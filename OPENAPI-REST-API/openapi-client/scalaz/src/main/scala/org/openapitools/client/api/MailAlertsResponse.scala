package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import MailAlertsResponse._

case class MailAlertsResponse (
  
object MailAlertsResponse {
  import DateTimeCodecs._

  implicit val MailAlertsResponseCodecJson: CodecJson[MailAlertsResponse] = CodecJson.derive[MailAlertsResponse]
  implicit val MailAlertsResponseDecoder: EntityDecoder[MailAlertsResponse] = jsonOf[MailAlertsResponse]
  implicit val MailAlertsResponseEncoder: EntityEncoder[MailAlertsResponse] = jsonEncoderOf[MailAlertsResponse]
}
