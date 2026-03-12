package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderMemoryLi._

case class ServerOrderMemoryLi (
  `254`: Option[ServerOrderMemoryLi254])

object ServerOrderMemoryLi {
  import DateTimeCodecs._

  implicit val ServerOrderMemoryLiCodecJson: CodecJson[ServerOrderMemoryLi] = CodecJson.derive[ServerOrderMemoryLi]
  implicit val ServerOrderMemoryLiDecoder: EntityDecoder[ServerOrderMemoryLi] = jsonOf[ServerOrderMemoryLi]
  implicit val ServerOrderMemoryLiEncoder: EntityEncoder[ServerOrderMemoryLi] = jsonEncoderOf[ServerOrderMemoryLi]
}
