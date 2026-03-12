package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import UpdateTicket._

case class UpdateTicket (
  ip: Option[String],
ip_address: Option[String],
customer_server_access: Option[CustomerServerAccess],
root_password: Option[String],
sudo_username: Option[String],
sudo_password: Option[String],
port: Option[Integer])

object UpdateTicket {
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

  implicit val UpdateTicketCodecJson: CodecJson[UpdateTicket] = CodecJson.derive[UpdateTicket]
  implicit val UpdateTicketDecoder: EntityDecoder[UpdateTicket] = jsonOf[UpdateTicket]
  implicit val UpdateTicketEncoder: EntityEncoder[UpdateTicket] = jsonEncoderOf[UpdateTicket]
}
