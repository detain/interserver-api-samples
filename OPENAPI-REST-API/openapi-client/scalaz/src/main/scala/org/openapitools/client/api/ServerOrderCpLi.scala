package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderCpLi._

case class ServerOrderCpLi (
  `9`: Option[ServerOrderControlPanel])

object ServerOrderCpLi {
  import DateTimeCodecs._

  implicit val ServerOrderCpLiCodecJson: CodecJson[ServerOrderCpLi] = CodecJson.derive[ServerOrderCpLi]
  implicit val ServerOrderCpLiDecoder: EntityDecoder[ServerOrderCpLi] = jsonOf[ServerOrderCpLi]
  implicit val ServerOrderCpLiEncoder: EntityEncoder[ServerOrderCpLi] = jsonEncoderOf[ServerOrderCpLi]
}
