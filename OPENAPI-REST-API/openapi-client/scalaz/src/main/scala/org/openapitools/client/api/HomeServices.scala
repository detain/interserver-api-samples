package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServices._

case class HomeServices (
  domains: Option[HomeServicesDomains],
webhosting: Option[HomeServicesWebhosting],
vps: Option[HomeServicesVps],
licenses: Option[HomeServicesLicenses],
servers: Option[HomeServicesServers],
backups: Option[HomeServicesBackups])

object HomeServices {
  import DateTimeCodecs._

  implicit val HomeServicesCodecJson: CodecJson[HomeServices] = CodecJson.derive[HomeServices]
  implicit val HomeServicesDecoder: EntityDecoder[HomeServices] = jsonOf[HomeServices]
  implicit val HomeServicesEncoder: EntityEncoder[HomeServices] = jsonEncoderOf[HomeServices]
}
