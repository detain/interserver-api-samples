package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AssetServerCPUInner._

case class AssetServerCPUInner (
  
object AssetServerCPUInner {
  import DateTimeCodecs._

  implicit val AssetServerCPUInnerCodecJson: CodecJson[AssetServerCPUInner] = CodecJson.derive[AssetServerCPUInner]
  implicit val AssetServerCPUInnerDecoder: EntityDecoder[AssetServerCPUInner] = jsonOf[AssetServerCPUInner]
  implicit val AssetServerCPUInnerEncoder: EntityEncoder[AssetServerCPUInner] = jsonEncoderOf[AssetServerCPUInner]
}
