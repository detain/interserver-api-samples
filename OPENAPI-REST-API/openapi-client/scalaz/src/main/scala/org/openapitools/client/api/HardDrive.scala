package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HardDrive._

case class HardDrive (
  id: Option[Integer],
short_desc: Option[String],
size: Option[String],
drive_type: Option[String],
monthly_price: Option[BigDecimal],
monthly_price_display: Option[String])

object HardDrive {
  import DateTimeCodecs._

  implicit val HardDriveCodecJson: CodecJson[HardDrive] = CodecJson.derive[HardDrive]
  implicit val HardDriveDecoder: EntityDecoder[HardDrive] = jsonOf[HardDrive]
  implicit val HardDriveEncoder: EntityEncoder[HardDrive] = jsonEncoderOf[HardDrive]
}
