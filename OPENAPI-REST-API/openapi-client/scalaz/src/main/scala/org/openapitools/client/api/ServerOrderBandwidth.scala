package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderBandwidth._

case class ServerOrderBandwidth (
  /* Bandwidth ID. */
  id: Option[String],
/* Bandwidth price. */
  price: Option[Integer],
/* Bandwidth image. */
  img: Option[String],
/* Short description of the bandwidth. */
  short_desc: Option[String],
/* Long description of the bandwidth. */
  long_desc: Option[String],
/* Bandwidth type. */
  `type`: Option[String],
/* Quantity of bandwidth. */
  qty: Option[String],
/* Active status. */
  active: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Display of bandwidth price. */
  price_display: Option[String],
/* Display of monthly bandwidth price. */
  monthly_price_display: Option[String])

object ServerOrderBandwidth {
  import DateTimeCodecs._

  implicit val ServerOrderBandwidthCodecJson: CodecJson[ServerOrderBandwidth] = CodecJson.derive[ServerOrderBandwidth]
  implicit val ServerOrderBandwidthDecoder: EntityDecoder[ServerOrderBandwidth] = jsonOf[ServerOrderBandwidth]
  implicit val ServerOrderBandwidthEncoder: EntityEncoder[ServerOrderBandwidth] = jsonEncoderOf[ServerOrderBandwidth]
}
