package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeServicesServersLinks._

case class HomeServicesServersLinks (
  /* Link to a server. */
  `16058`: Option[String])

object HomeServicesServersLinks {
  import DateTimeCodecs._

  implicit val HomeServicesServersLinksCodecJson: CodecJson[HomeServicesServersLinks] = CodecJson.derive[HomeServicesServersLinks]
  implicit val HomeServicesServersLinksDecoder: EntityDecoder[HomeServicesServersLinks] = jsonOf[HomeServicesServersLinks]
  implicit val HomeServicesServersLinksEncoder: EntityEncoder[HomeServicesServersLinks] = jsonEncoderOf[HomeServicesServersLinks]
}
