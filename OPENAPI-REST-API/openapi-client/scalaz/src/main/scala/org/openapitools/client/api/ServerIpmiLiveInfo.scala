package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerIpmiLiveInfo._

case class ServerIpmiLiveInfo (
  text: Option[String],
public_ip: Option[String],
allowed_ip: Option[String],
client_username: Option[String],
client_password: Option[String])

object ServerIpmiLiveInfo {
  import DateTimeCodecs._

  implicit val ServerIpmiLiveInfoCodecJson: CodecJson[ServerIpmiLiveInfo] = CodecJson.derive[ServerIpmiLiveInfo]
  implicit val ServerIpmiLiveInfoDecoder: EntityDecoder[ServerIpmiLiveInfo] = jsonOf[ServerIpmiLiveInfo]
  implicit val ServerIpmiLiveInfoEncoder: EntityEncoder[ServerIpmiLiveInfo] = jsonEncoderOf[ServerIpmiLiveInfo]
}
