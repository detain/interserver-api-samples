package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerAssets._

case class ServerAssets (
  /* The title of the assets. */
  title: Option[String],
/* The size of the assets. */
  size: Option[Integer],
/* The type of the assets. */
  `type`: Option[String],
/* The header of the assets table. */
  header: Option[List[String]],
/* The rows of the assets table. */
  rows: Option[List[List[String]]])

object ServerAssets {
  import DateTimeCodecs._

  implicit val ServerAssetsCodecJson: CodecJson[ServerAssets] = CodecJson.derive[ServerAssets]
  implicit val ServerAssetsDecoder: EntityDecoder[ServerAssets] = jsonOf[ServerAssets]
  implicit val ServerAssetsEncoder: EntityEncoder[ServerAssets] = jsonEncoderOf[ServerAssets]
}
