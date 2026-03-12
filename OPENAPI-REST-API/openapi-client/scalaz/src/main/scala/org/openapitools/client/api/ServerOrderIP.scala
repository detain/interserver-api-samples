package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderIP._

case class ServerOrderIP (
  /* IP ID. */
  id: Option[String],
/* IP price. */
  price: Option[Integer],
/* IP image. */
  img: Option[String],
/* Short description of the IP. */
  short_desc: Option[String],
/* Long description of the IP. */
  long_desc: Option[String],
/* Quantity of IPs. */
  qty: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Display of IP price. */
  price_display: Option[String],
/* Display of monthly IP price. */
  monthly_price_display: Option[String])

object ServerOrderIP {
  import DateTimeCodecs._

  implicit val ServerOrderIPCodecJson: CodecJson[ServerOrderIP] = CodecJson.derive[ServerOrderIP]
  implicit val ServerOrderIPDecoder: EntityDecoder[ServerOrderIP] = jsonOf[ServerOrderIP]
  implicit val ServerOrderIPEncoder: EntityEncoder[ServerOrderIP] = jsonEncoderOf[ServerOrderIP]
}
