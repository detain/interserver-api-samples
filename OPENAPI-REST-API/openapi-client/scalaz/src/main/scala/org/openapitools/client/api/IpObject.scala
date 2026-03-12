package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import IpObject._

case class IpObject (
  /* IP Address */
  ip: String)

object IpObject {
  import DateTimeCodecs._

  implicit val IpObjectCodecJson: CodecJson[IpObject] = CodecJson.derive[IpObject]
  implicit val IpObjectDecoder: EntityDecoder[IpObject] = jsonOf[IpObject]
  implicit val IpObjectEncoder: EntityEncoder[IpObject] = jsonEncoderOf[IpObject]
}
