package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderControlPanel._

case class ServerOrderControlPanel (
  /* Control Panel ID. */
  id: Option[String],
/* Control Panel price. */
  price: Option[Integer],
/* Control Panel image. */
  img: Option[String],
/* Short description of the control panel. */
  short_desc: Option[String],
/* Long description of the control panel. */
  long_desc: Option[String],
/* OS types compatible with the control panel. */
  os_type: Option[String],
/* Monthly price. */
  monthly_price: Option[Integer],
/* List of types. */
  types: Option[List[String]],
/* Display of control panel price. */
  price_display: Option[String],
/* Display of monthly control panel price. */
  monthly_price_display: Option[String])

object ServerOrderControlPanel {
  import DateTimeCodecs._

  implicit val ServerOrderControlPanelCodecJson: CodecJson[ServerOrderControlPanel] = CodecJson.derive[ServerOrderControlPanel]
  implicit val ServerOrderControlPanelDecoder: EntityDecoder[ServerOrderControlPanel] = jsonOf[ServerOrderControlPanel]
  implicit val ServerOrderControlPanelEncoder: EntityEncoder[ServerOrderControlPanel] = jsonEncoderOf[ServerOrderControlPanel]
}
