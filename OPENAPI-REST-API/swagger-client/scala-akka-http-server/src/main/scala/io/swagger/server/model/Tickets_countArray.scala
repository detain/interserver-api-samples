package io.swagger.server.model


/**
 * @param Open 
 * @param On Hold 
 * @param Closed 
 */
case class Tickets_countArray (
  Open: Option[Int],
  On Hold: Option[Int],
  Closed: Option[Int]
)

