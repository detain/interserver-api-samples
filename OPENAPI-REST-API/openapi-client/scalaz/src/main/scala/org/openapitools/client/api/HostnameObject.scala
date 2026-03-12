package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HostnameObject._

case class HostnameObject (
  hostname: Option[String])

object HostnameObject {
  import DateTimeCodecs._

  implicit val HostnameObjectCodecJson: CodecJson[HostnameObject] = CodecJson.derive[HostnameObject]
  implicit val HostnameObjectDecoder: EntityDecoder[HostnameObject] = jsonOf[HostnameObject]
  implicit val HostnameObjectEncoder: EntityEncoder[HostnameObject] = jsonEncoderOf[HostnameObject]
}
