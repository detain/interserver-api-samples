package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import TicketCustomFieldDetails._

case class TicketCustomFieldDetails (
  Customer_Server_Access: Option[CustomerServerAccess],
Ip_Address: Option[String],
Root_Password: Option[String],
Sudo_User: Option[String],
Sudo_Password: Option[Integer],
Port: Option[Integer])

object TicketCustomFieldDetails {
  import DateTimeCodecs._
  sealed trait CustomerServerAccess
  case object `Y` extends CustomerServerAccess
  case object `N` extends CustomerServerAccess

  object CustomerServerAccess {
    def toCustomerServerAccess(s: String): Option[CustomerServerAccess] = s match {
      case "`Y`" => Some(`Y`)
      case "`N`" => Some(`N`)
      case _ => None
    }

    def fromCustomerServerAccess(x: CustomerServerAccess): String = x match {
      case `Y` => "`Y`"
      case `N` => "`N`"
    }
  }

  implicit val CustomerServerAccessEnumEncoder: EncodeJson[CustomerServerAccess] =
    EncodeJson[CustomerServerAccess](is => StringEncodeJson(CustomerServerAccess.fromCustomerServerAccess(is)))

  implicit val CustomerServerAccessEnumDecoder: DecodeJson[CustomerServerAccess] =
    DecodeJson.optionDecoder[CustomerServerAccess](n => n.string.flatMap(jStr => CustomerServerAccess.toCustomerServerAccess(jStr)), "CustomerServerAccess failed to de-serialize")

  implicit val TicketCustomFieldDetailsCodecJson: CodecJson[TicketCustomFieldDetails] = CodecJson.derive[TicketCustomFieldDetails]
  implicit val TicketCustomFieldDetailsDecoder: EntityDecoder[TicketCustomFieldDetails] = jsonOf[TicketCustomFieldDetails]
  implicit val TicketCustomFieldDetailsEncoder: EntityEncoder[TicketCustomFieldDetails] = jsonEncoderOf[TicketCustomFieldDetails]
}
