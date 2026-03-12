package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderOsLi._

case class ServerOrderOsLi (
  `51`: Option[ServerOrderOS])

object ServerOrderOsLi {
  import DateTimeCodecs._

  implicit val ServerOrderOsLiCodecJson: CodecJson[ServerOrderOsLi] = CodecJson.derive[ServerOrderOsLi]
  implicit val ServerOrderOsLiDecoder: EntityDecoder[ServerOrderOsLi] = jsonOf[ServerOrderOsLi]
  implicit val ServerOrderOsLiEncoder: EntityEncoder[ServerOrderOsLi] = jsonEncoderOf[ServerOrderOsLi]
}
