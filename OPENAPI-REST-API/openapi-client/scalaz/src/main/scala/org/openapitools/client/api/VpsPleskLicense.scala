package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsPleskLicense._

case class VpsPleskLicense (
  id: Option[Integer],
name: Option[String],
sub_name: Option[String],
cost: Option[Integer])

object VpsPleskLicense {
  import DateTimeCodecs._

  implicit val VpsPleskLicenseCodecJson: CodecJson[VpsPleskLicense] = CodecJson.derive[VpsPleskLicense]
  implicit val VpsPleskLicenseDecoder: EntityDecoder[VpsPleskLicense] = jsonOf[VpsPleskLicense]
  implicit val VpsPleskLicenseEncoder: EntityEncoder[VpsPleskLicense] = jsonEncoderOf[VpsPleskLicense]
}
