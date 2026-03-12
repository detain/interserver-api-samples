package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderBandwidthLi._

case class ServerOrderBandwidthLi (
  `15`: Option[ServerOrderBandwidth])

object ServerOrderBandwidthLi {
  import DateTimeCodecs._

  implicit val ServerOrderBandwidthLiCodecJson: CodecJson[ServerOrderBandwidthLi] = CodecJson.derive[ServerOrderBandwidthLi]
  implicit val ServerOrderBandwidthLiDecoder: EntityDecoder[ServerOrderBandwidthLi] = jsonOf[ServerOrderBandwidthLi]
  implicit val ServerOrderBandwidthLiEncoder: EntityEncoder[ServerOrderBandwidthLi] = jsonEncoderOf[ServerOrderBandwidthLi]
}
