package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderIpsLi._

case class ServerOrderIpsLi (
  `9`: Option[ServerOrderIP])

object ServerOrderIpsLi {
  import DateTimeCodecs._

  implicit val ServerOrderIpsLiCodecJson: CodecJson[ServerOrderIpsLi] = CodecJson.derive[ServerOrderIpsLi]
  implicit val ServerOrderIpsLiDecoder: EntityDecoder[ServerOrderIpsLi] = jsonOf[ServerOrderIpsLi]
  implicit val ServerOrderIpsLiEncoder: EntityEncoder[ServerOrderIpsLi] = jsonEncoderOf[ServerOrderIpsLi]
}
