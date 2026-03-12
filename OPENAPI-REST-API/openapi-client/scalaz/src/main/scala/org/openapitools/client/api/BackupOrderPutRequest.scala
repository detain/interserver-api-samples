package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupOrderPutRequest._

case class BackupOrderPutRequest (
  validateOnly: Option[Boolean],
serviceType: Option[Integer],
coupon: Option[String])

object BackupOrderPutRequest {
  import DateTimeCodecs._

  implicit val BackupOrderPutRequestCodecJson: CodecJson[BackupOrderPutRequest] = CodecJson.derive[BackupOrderPutRequest]
  implicit val BackupOrderPutRequestDecoder: EntityDecoder[BackupOrderPutRequest] = jsonOf[BackupOrderPutRequest]
  implicit val BackupOrderPutRequestEncoder: EntityEncoder[BackupOrderPutRequest] = jsonEncoderOf[BackupOrderPutRequest]
}
