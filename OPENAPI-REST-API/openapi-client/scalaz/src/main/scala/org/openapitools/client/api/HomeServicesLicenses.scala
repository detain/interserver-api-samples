package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesLicenses._

case class HomeServicesLicenses (
  links: Option[HomeServicesLicensesLinks],
/* Number of licenses. */
  count: Option[Integer])

object HomeServicesLicenses {
  import DateTimeCodecs._

  implicit val HomeServicesLicensesCodecJson: CodecJson[HomeServicesLicenses] = CodecJson.derive[HomeServicesLicenses]
  implicit val HomeServicesLicensesDecoder: EntityDecoder[HomeServicesLicenses] = jsonOf[HomeServicesLicenses]
  implicit val HomeServicesLicensesEncoder: EntityEncoder[HomeServicesLicenses] = jsonEncoderOf[HomeServicesLicenses]
}
