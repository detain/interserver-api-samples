package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerNetworkInfoSwitchports._

case class ServerNetworkInfoSwitchports (
  `10414`: ServerSwitchport)

object ServerNetworkInfoSwitchports {
  import DateTimeCodecs._

  implicit val ServerNetworkInfoSwitchportsCodecJson: CodecJson[ServerNetworkInfoSwitchports] = CodecJson.derive[ServerNetworkInfoSwitchports]
  implicit val ServerNetworkInfoSwitchportsDecoder: EntityDecoder[ServerNetworkInfoSwitchports] = jsonOf[ServerNetworkInfoSwitchports]
  implicit val ServerNetworkInfoSwitchportsEncoder: EntityEncoder[ServerNetworkInfoSwitchports] = jsonEncoderOf[ServerNetworkInfoSwitchports]
}
