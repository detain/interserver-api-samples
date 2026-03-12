package io.swagger.server.model


/**
 * A pre-configured asset server available for immediate provisioning.
 *
 * @param id 
 * @param Region 
 * @param price 
 * @param CPU 
 * @param Memory 
 * @param Bandwidth 
 * @param IPs 
 * @param HD 
 */
case class AssetServer (
  id: Option[Int],
  Region: Option[String],
  price: Option[String],
  CPU: Option[List[OneOfAssetServerCPUItems]],
  Memory: Option[List[OneOfAssetServerMemoryItems]],
  Bandwidth: Option[List[OneOfAssetServerBandwidthItems]],
  IPs: Option[List[OneOfAssetServerIPsItems]],
  HD: Option[Map[String, String]]
)

