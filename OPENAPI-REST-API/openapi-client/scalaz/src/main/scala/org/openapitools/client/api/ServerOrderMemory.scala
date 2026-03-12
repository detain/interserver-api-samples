package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderMemory._

case class ServerOrderMemory (
  /* Memory ID. */
  id: Option[String],
/* Memory price. */
  price: Option[String],
/* Memory image. */
  img: Option[String],
/* Short description of the memory. */
  short_desc: Option[String],
/* Long description of the memory. */
  long_desc: Option[String],
/* Manufacturer information. */
  manu: Option[String],
/* Memory size. */
  size: Option[String],
/* Memory type. */
  `type`: Option[String],
/* Hidden status. */
  hidden: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* Drive type. */
  drive_type: Option[String],
/* Display of monthly memory price. */
  monthly_price_display: Option[String])

object ServerOrderMemory {
  import DateTimeCodecs._

  implicit val ServerOrderMemoryCodecJson: CodecJson[ServerOrderMemory] = CodecJson.derive[ServerOrderMemory]
  implicit val ServerOrderMemoryDecoder: EntityDecoder[ServerOrderMemory] = jsonOf[ServerOrderMemory]
  implicit val ServerOrderMemoryEncoder: EntityEncoder[ServerOrderMemory] = jsonEncoderOf[ServerOrderMemory]
}
