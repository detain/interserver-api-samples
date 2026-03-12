package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AssetServer._

case class AssetServer (
  id: Option[Integer],
Region: Option[String],
price: Option[String],
CPU: Option[List[AssetServerCPUInner]],
Memory: Option[List[AssetServerCPUInner]],
Bandwidth: Option[List[AssetServerCPUInner]],
IPs: Option[List[AssetServerCPUInner]],
HD: Option[Map[String, String]])

object AssetServer {
  import DateTimeCodecs._

  implicit val AssetServerCodecJson: CodecJson[AssetServer] = CodecJson.derive[AssetServer]
  implicit val AssetServerDecoder: EntityDecoder[AssetServer] = jsonOf[AssetServer]
  implicit val AssetServerEncoder: EntityEncoder[AssetServer] = jsonEncoderOf[AssetServer]
}
