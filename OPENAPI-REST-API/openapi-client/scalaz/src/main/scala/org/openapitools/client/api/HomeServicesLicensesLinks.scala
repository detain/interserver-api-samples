package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesLicensesLinks._

case class HomeServicesLicensesLinks (
  /* Link to a license. */
  `386522`: Option[String])

object HomeServicesLicensesLinks {
  import DateTimeCodecs._

  implicit val HomeServicesLicensesLinksCodecJson: CodecJson[HomeServicesLicensesLinks] = CodecJson.derive[HomeServicesLicensesLinks]
  implicit val HomeServicesLicensesLinksDecoder: EntityDecoder[HomeServicesLicensesLinks] = jsonOf[HomeServicesLicensesLinks]
  implicit val HomeServicesLicensesLinksEncoder: EntityEncoder[HomeServicesLicensesLinks] = jsonEncoderOf[HomeServicesLicensesLinks]
}
