package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderMemoryLi254._

case class ServerOrderMemoryLi254 (
  `65`: Option[ServerOrderMemory])

object ServerOrderMemoryLi254 {
  import DateTimeCodecs._

  implicit val ServerOrderMemoryLi254CodecJson: CodecJson[ServerOrderMemoryLi254] = CodecJson.derive[ServerOrderMemoryLi254]
  implicit val ServerOrderMemoryLi254Decoder: EntityDecoder[ServerOrderMemoryLi254] = jsonOf[ServerOrderMemoryLi254]
  implicit val ServerOrderMemoryLi254Encoder: EntityEncoder[ServerOrderMemoryLi254] = jsonEncoderOf[ServerOrderMemoryLi254]
}
