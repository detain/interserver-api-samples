package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerLocations._

case class ServerLocations (
  `1`: Option[ServerLocation1])

object ServerLocations {
  import DateTimeCodecs._

  implicit val ServerLocationsCodecJson: CodecJson[ServerLocations] = CodecJson.derive[ServerLocations]
  implicit val ServerLocationsDecoder: EntityDecoder[ServerLocations] = jsonOf[ServerLocations]
  implicit val ServerLocationsEncoder: EntityEncoder[ServerLocations] = jsonEncoderOf[ServerLocations]
}
