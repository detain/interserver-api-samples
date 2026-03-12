package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import VpsDALicense._

case class VpsDALicense (
  /* License tier name. */
  name: Option[String],
/* License tier sub-name. */
  sub_name: Option[String],
/* Monthly cost in cents. */
  cost: Option[Integer],
/* Image path for the disabled state icon. */
  img_disabled: Option[String],
/* Image path for the active state icon. */
  img_active: Option[String])

object VpsDALicense {
  import DateTimeCodecs._

  implicit val VpsDALicenseCodecJson: CodecJson[VpsDALicense] = CodecJson.derive[VpsDALicense]
  implicit val VpsDALicenseDecoder: EntityDecoder[VpsDALicense] = jsonOf[VpsDALicense]
  implicit val VpsDALicenseEncoder: EntityEncoder[VpsDALicense] = jsonEncoderOf[VpsDALicense]
}
