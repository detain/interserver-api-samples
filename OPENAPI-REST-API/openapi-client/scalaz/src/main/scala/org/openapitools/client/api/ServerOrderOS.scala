package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderOS._

case class ServerOrderOS (
  /* Operating System ID. */
  id: Option[String],
/* Operating System price. */
  price: Option[Integer],
/* Operating System image. */
  img: Option[String],
/* Short description of the OS. */
  short_desc: Option[String],
/* Long description of the OS. */
  long_desc: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Active status. */
  active: Option[String],
/* Display of OS price. */
  price_display: Option[String],
/* Display of monthly OS price. */
  monthly_price_display: Option[String])

object ServerOrderOS {
  import DateTimeCodecs._

  implicit val ServerOrderOSCodecJson: CodecJson[ServerOrderOS] = CodecJson.derive[ServerOrderOS]
  implicit val ServerOrderOSDecoder: EntityDecoder[ServerOrderOS] = jsonOf[ServerOrderOS]
  implicit val ServerOrderOSEncoder: EntityEncoder[ServerOrderOS] = jsonEncoderOf[ServerOrderOS]
}
