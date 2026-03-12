package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerIpmiLiveRequest._

case class ServerIpmiLiveRequest (
  /* Your IP Address you wish to connect to the IPMI system from. */
  ip: String,
/* Asset ID */
  asset: Option[Integer])

object ServerIpmiLiveRequest {
  import DateTimeCodecs._

  implicit val ServerIpmiLiveRequestCodecJson: CodecJson[ServerIpmiLiveRequest] = CodecJson.derive[ServerIpmiLiveRequest]
  implicit val ServerIpmiLiveRequestDecoder: EntityDecoder[ServerIpmiLiveRequest] = jsonOf[ServerIpmiLiveRequest]
  implicit val ServerIpmiLiveRequestEncoder: EntityEncoder[ServerIpmiLiveRequest] = jsonEncoderOf[ServerIpmiLiveRequest]
}
