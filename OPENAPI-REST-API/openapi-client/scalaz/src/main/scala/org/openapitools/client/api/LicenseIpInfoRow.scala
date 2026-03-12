package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import LicenseIpInfoRow._

case class LicenseIpInfoRow (
  /* Row description */
  desc: Option[String],
/* Row value */
  value: Option[String])

object LicenseIpInfoRow {
  import DateTimeCodecs._

  implicit val LicenseIpInfoRowCodecJson: CodecJson[LicenseIpInfoRow] = CodecJson.derive[LicenseIpInfoRow]
  implicit val LicenseIpInfoRowDecoder: EntityDecoder[LicenseIpInfoRow] = jsonOf[LicenseIpInfoRow]
  implicit val LicenseIpInfoRowEncoder: EntityEncoder[LicenseIpInfoRow] = jsonEncoderOf[LicenseIpInfoRow]
}
