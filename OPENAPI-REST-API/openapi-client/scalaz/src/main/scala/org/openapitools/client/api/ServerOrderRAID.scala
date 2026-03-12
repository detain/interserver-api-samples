package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderRAID._

case class ServerOrderRAID (
  /* RAID ID. */
  id: Option[String],
/* RAID price. */
  price: Option[Integer],
/* RAID image. */
  img: Option[String],
/* Short description of the RAID. */
  short_desc: Option[String],
/* Long description of the RAID. */
  long_desc: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Active status. */
  active: Option[String],
/* Display of RAID price. */
  price_display: Option[String],
/* Display of monthly RAID price. */
  monthly_price_display: Option[String])

object ServerOrderRAID {
  import DateTimeCodecs._

  implicit val ServerOrderRAIDCodecJson: CodecJson[ServerOrderRAID] = CodecJson.derive[ServerOrderRAID]
  implicit val ServerOrderRAIDDecoder: EntityDecoder[ServerOrderRAID] = jsonOf[ServerOrderRAID]
  implicit val ServerOrderRAIDEncoder: EntityEncoder[ServerOrderRAID] = jsonEncoderOf[ServerOrderRAID]
}
