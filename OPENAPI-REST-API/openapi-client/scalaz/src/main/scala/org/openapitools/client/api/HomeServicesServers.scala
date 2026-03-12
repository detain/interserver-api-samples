package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesServers._

case class HomeServicesServers (
  links: Option[HomeServicesServersLinks],
/* Number of servers. */
  count: Option[Integer])

object HomeServicesServers {
  import DateTimeCodecs._

  implicit val HomeServicesServersCodecJson: CodecJson[HomeServicesServers] = CodecJson.derive[HomeServicesServers]
  implicit val HomeServicesServersDecoder: EntityDecoder[HomeServicesServers] = jsonOf[HomeServicesServers]
  implicit val HomeServicesServersEncoder: EntityEncoder[HomeServicesServers] = jsonEncoderOf[HomeServicesServers]
}
