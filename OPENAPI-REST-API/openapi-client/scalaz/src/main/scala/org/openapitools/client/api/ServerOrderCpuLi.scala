package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderCpuLi._

case class ServerOrderCpuLi (
  `254`: Option[ServerOrderCPU])

object ServerOrderCpuLi {
  import DateTimeCodecs._

  implicit val ServerOrderCpuLiCodecJson: CodecJson[ServerOrderCpuLi] = CodecJson.derive[ServerOrderCpuLi]
  implicit val ServerOrderCpuLiDecoder: EntityDecoder[ServerOrderCpuLi] = jsonOf[ServerOrderCpuLi]
  implicit val ServerOrderCpuLiEncoder: EntityEncoder[ServerOrderCpuLi] = jsonEncoderOf[ServerOrderCpuLi]
}
