package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerNetworkInfoAssets._

case class ServerNetworkInfoAssets (
  `3497`: ServerAsset)

object ServerNetworkInfoAssets {
  import DateTimeCodecs._

  implicit val ServerNetworkInfoAssetsCodecJson: CodecJson[ServerNetworkInfoAssets] = CodecJson.derive[ServerNetworkInfoAssets]
  implicit val ServerNetworkInfoAssetsDecoder: EntityDecoder[ServerNetworkInfoAssets] = jsonOf[ServerNetworkInfoAssets]
  implicit val ServerNetworkInfoAssetsEncoder: EntityEncoder[ServerNetworkInfoAssets] = jsonEncoderOf[ServerNetworkInfoAssets]
}
