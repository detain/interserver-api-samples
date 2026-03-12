package io.swagger.server.model


/**
 * @param cpu CPU details of the server. for example: ''AMD Ryzen 9 5900X 12-Core Processor''
 * @param ram RAM capacity of the server. for example: ''119GB''
 * @param hd Hard disk capacity of the server. for example: ''1760GB''
 * @param cores Number of CPU cores. for example: ''24''
 * @param cost Cost of the server. for example: ''$140.00''
 */
case class QuickserverOrderServerDetails381 (
  cpu: Option[String],
  ram: Option[String],
  hd: Option[String],
  cores: Option[Int],
  cost: Option[String]
)

