package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerNetworkInfo._

case class ServerNetworkInfo (
  /* List of VLANs. */
  vlans: List[String],
/* List of IPv6 VLANs. */
  vlans6: List[String],
assets: ServerNetworkInfoAssets,
switchports: ServerNetworkInfoSwitchports)

object ServerNetworkInfo {
  import DateTimeCodecs._

  implicit val ServerNetworkInfoCodecJson: CodecJson[ServerNetworkInfo] = CodecJson.derive[ServerNetworkInfo]
  implicit val ServerNetworkInfoDecoder: EntityDecoder[ServerNetworkInfo] = jsonOf[ServerNetworkInfo]
  implicit val ServerNetworkInfoEncoder: EntityEncoder[ServerNetworkInfo] = jsonEncoderOf[ServerNetworkInfo]
}
