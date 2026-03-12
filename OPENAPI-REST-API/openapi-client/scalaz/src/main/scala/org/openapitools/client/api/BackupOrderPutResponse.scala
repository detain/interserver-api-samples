package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupOrderPutResponse._

case class BackupOrderPutResponse (
  continue: Option[Boolean],
errors: Option[List[String]],
serviceType: Option[Integer],
serviceCost: Option[String],
originalCost: Option[String],
repeatServiceCost: Option[String],
hostname: Option[String],
password: Option[String],
coupon: Option[String],
couponCode: Option[Integer])

object BackupOrderPutResponse {
  import DateTimeCodecs._

  implicit val BackupOrderPutResponseCodecJson: CodecJson[BackupOrderPutResponse] = CodecJson.derive[BackupOrderPutResponse]
  implicit val BackupOrderPutResponseDecoder: EntityDecoder[BackupOrderPutResponse] = jsonOf[BackupOrderPutResponse]
  implicit val BackupOrderPutResponseEncoder: EntityEncoder[BackupOrderPutResponse] = jsonEncoderOf[BackupOrderPutResponse]
}
