package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteServiceMaster  {
  
 /**
  * Website ID for the service master
  */
  @ApiModelProperty(example = "543", value = "Website ID for the service master")

  private String websiteId;

 /**
  * Website name for the service master
  */
  @ApiModelProperty(example = "vda4200.is.cc", value = "Website name for the service master")

  private String websiteName;

 /**
  * IP address for the service master
  */
  @ApiModelProperty(example = "74.50.80.15", value = "IP address for the service master")

  private String websiteIp;

 /**
  * Website type for the service master
  */
  @ApiModelProperty(example = "206", value = "Website type for the service master")

  private String websiteType;

 /**
  * Availability status for the service master
  */
  @ApiModelProperty(example = "0", value = "Availability status for the service master")

  private String websiteAvailable;

 /**
  * Hard drive size for the service master
  */
  @ApiModelProperty(example = "2062", value = "Hard drive size for the service master")

  private String websiteHdsize;

 /**
  * Free hard drive space for the service master
  */
  @ApiModelProperty(example = "196", value = "Free hard drive space for the service master")

  private String websiteHdfree;

 /**
  * Load for the service master
  */
  @ApiModelProperty(example = "6.55", value = "Load for the service master")

  private String websiteLoad;

 /**
  * Last update date for the service master
  */
  @ApiModelProperty(example = "2023-08-17T23:01:02.000Z", value = "Last update date for the service master")

  private String websiteLastUpdate;

 /**
  * Maximum number of sites for the service master
  */
  @ApiModelProperty(example = "300", value = "Maximum number of sites for the service master")

  private String websiteMaxSites;

 /**
  * Order number for the service master
  */
  @ApiModelProperty(example = "58984", value = "Order number for the service master")

  private String websiteOrder;

 /**
  * Partitions for the service master
  */
  @ApiModelProperty(value = "Partitions for the service master")

  private String websitePartitions;

 /**
  * DNS server 1 for the service master
  */
  @ApiModelProperty(example = "vda4200a.trouble-free.net", value = "DNS server 1 for the service master")

  private String websiteDns1;

 /**
  * DNS server 2 for the service master
  */
  @ApiModelProperty(example = "vda4200b.trouble-free.net", value = "DNS server 2 for the service master")

  private String websiteDns2;
 /**
   * Website ID for the service master
   * @return websiteId
  **/
  @JsonProperty("website_id")
  public String getWebsiteId() {
    return websiteId;
  }

  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  public WebsiteServiceMaster websiteId(String websiteId) {
    this.websiteId = websiteId;
    return this;
  }

 /**
   * Website name for the service master
   * @return websiteName
  **/
  @JsonProperty("website_name")
  public String getWebsiteName() {
    return websiteName;
  }

  public void setWebsiteName(String websiteName) {
    this.websiteName = websiteName;
  }

  public WebsiteServiceMaster websiteName(String websiteName) {
    this.websiteName = websiteName;
    return this;
  }

 /**
   * IP address for the service master
   * @return websiteIp
  **/
  @JsonProperty("website_ip")
  public String getWebsiteIp() {
    return websiteIp;
  }

  public void setWebsiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
  }

  public WebsiteServiceMaster websiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
    return this;
  }

 /**
   * Website type for the service master
   * @return websiteType
  **/
  @JsonProperty("website_type")
  public String getWebsiteType() {
    return websiteType;
  }

  public void setWebsiteType(String websiteType) {
    this.websiteType = websiteType;
  }

  public WebsiteServiceMaster websiteType(String websiteType) {
    this.websiteType = websiteType;
    return this;
  }

 /**
   * Availability status for the service master
   * @return websiteAvailable
  **/
  @JsonProperty("website_available")
  public String getWebsiteAvailable() {
    return websiteAvailable;
  }

  public void setWebsiteAvailable(String websiteAvailable) {
    this.websiteAvailable = websiteAvailable;
  }

  public WebsiteServiceMaster websiteAvailable(String websiteAvailable) {
    this.websiteAvailable = websiteAvailable;
    return this;
  }

 /**
   * Hard drive size for the service master
   * @return websiteHdsize
  **/
  @JsonProperty("website_hdsize")
  public String getWebsiteHdsize() {
    return websiteHdsize;
  }

  public void setWebsiteHdsize(String websiteHdsize) {
    this.websiteHdsize = websiteHdsize;
  }

  public WebsiteServiceMaster websiteHdsize(String websiteHdsize) {
    this.websiteHdsize = websiteHdsize;
    return this;
  }

 /**
   * Free hard drive space for the service master
   * @return websiteHdfree
  **/
  @JsonProperty("website_hdfree")
  public String getWebsiteHdfree() {
    return websiteHdfree;
  }

  public void setWebsiteHdfree(String websiteHdfree) {
    this.websiteHdfree = websiteHdfree;
  }

  public WebsiteServiceMaster websiteHdfree(String websiteHdfree) {
    this.websiteHdfree = websiteHdfree;
    return this;
  }

 /**
   * Load for the service master
   * @return websiteLoad
  **/
  @JsonProperty("website_load")
  public String getWebsiteLoad() {
    return websiteLoad;
  }

  public void setWebsiteLoad(String websiteLoad) {
    this.websiteLoad = websiteLoad;
  }

  public WebsiteServiceMaster websiteLoad(String websiteLoad) {
    this.websiteLoad = websiteLoad;
    return this;
  }

 /**
   * Last update date for the service master
   * @return websiteLastUpdate
  **/
  @JsonProperty("website_last_update")
  public String getWebsiteLastUpdate() {
    return websiteLastUpdate;
  }

  public void setWebsiteLastUpdate(String websiteLastUpdate) {
    this.websiteLastUpdate = websiteLastUpdate;
  }

  public WebsiteServiceMaster websiteLastUpdate(String websiteLastUpdate) {
    this.websiteLastUpdate = websiteLastUpdate;
    return this;
  }

 /**
   * Maximum number of sites for the service master
   * @return websiteMaxSites
  **/
  @JsonProperty("website_max_sites")
  public String getWebsiteMaxSites() {
    return websiteMaxSites;
  }

  public void setWebsiteMaxSites(String websiteMaxSites) {
    this.websiteMaxSites = websiteMaxSites;
  }

  public WebsiteServiceMaster websiteMaxSites(String websiteMaxSites) {
    this.websiteMaxSites = websiteMaxSites;
    return this;
  }

 /**
   * Order number for the service master
   * @return websiteOrder
  **/
  @JsonProperty("website_order")
  public String getWebsiteOrder() {
    return websiteOrder;
  }

  public void setWebsiteOrder(String websiteOrder) {
    this.websiteOrder = websiteOrder;
  }

  public WebsiteServiceMaster websiteOrder(String websiteOrder) {
    this.websiteOrder = websiteOrder;
    return this;
  }

 /**
   * Partitions for the service master
   * @return websitePartitions
  **/
  @JsonProperty("website_partitions")
  public String getWebsitePartitions() {
    return websitePartitions;
  }

  public void setWebsitePartitions(String websitePartitions) {
    this.websitePartitions = websitePartitions;
  }

  public WebsiteServiceMaster websitePartitions(String websitePartitions) {
    this.websitePartitions = websitePartitions;
    return this;
  }

 /**
   * DNS server 1 for the service master
   * @return websiteDns1
  **/
  @JsonProperty("website_dns1")
  public String getWebsiteDns1() {
    return websiteDns1;
  }

  public void setWebsiteDns1(String websiteDns1) {
    this.websiteDns1 = websiteDns1;
  }

  public WebsiteServiceMaster websiteDns1(String websiteDns1) {
    this.websiteDns1 = websiteDns1;
    return this;
  }

 /**
   * DNS server 2 for the service master
   * @return websiteDns2
  **/
  @JsonProperty("website_dns2")
  public String getWebsiteDns2() {
    return websiteDns2;
  }

  public void setWebsiteDns2(String websiteDns2) {
    this.websiteDns2 = websiteDns2;
  }

  public WebsiteServiceMaster websiteDns2(String websiteDns2) {
    this.websiteDns2 = websiteDns2;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteServiceMaster websiteServiceMaster = (WebsiteServiceMaster) o;
    return Objects.equals(this.websiteId, websiteServiceMaster.websiteId) &&
        Objects.equals(this.websiteName, websiteServiceMaster.websiteName) &&
        Objects.equals(this.websiteIp, websiteServiceMaster.websiteIp) &&
        Objects.equals(this.websiteType, websiteServiceMaster.websiteType) &&
        Objects.equals(this.websiteAvailable, websiteServiceMaster.websiteAvailable) &&
        Objects.equals(this.websiteHdsize, websiteServiceMaster.websiteHdsize) &&
        Objects.equals(this.websiteHdfree, websiteServiceMaster.websiteHdfree) &&
        Objects.equals(this.websiteLoad, websiteServiceMaster.websiteLoad) &&
        Objects.equals(this.websiteLastUpdate, websiteServiceMaster.websiteLastUpdate) &&
        Objects.equals(this.websiteMaxSites, websiteServiceMaster.websiteMaxSites) &&
        Objects.equals(this.websiteOrder, websiteServiceMaster.websiteOrder) &&
        Objects.equals(this.websitePartitions, websiteServiceMaster.websitePartitions) &&
        Objects.equals(this.websiteDns1, websiteServiceMaster.websiteDns1) &&
        Objects.equals(this.websiteDns2, websiteServiceMaster.websiteDns2);
  }

  @Override
  public int hashCode() {
    return Objects.hash(websiteId, websiteName, websiteIp, websiteType, websiteAvailable, websiteHdsize, websiteHdfree, websiteLoad, websiteLastUpdate, websiteMaxSites, websiteOrder, websitePartitions, websiteDns1, websiteDns2);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteServiceMaster {\n");
    
    sb.append("    websiteId: ").append(toIndentedString(websiteId)).append("\n");
    sb.append("    websiteName: ").append(toIndentedString(websiteName)).append("\n");
    sb.append("    websiteIp: ").append(toIndentedString(websiteIp)).append("\n");
    sb.append("    websiteType: ").append(toIndentedString(websiteType)).append("\n");
    sb.append("    websiteAvailable: ").append(toIndentedString(websiteAvailable)).append("\n");
    sb.append("    websiteHdsize: ").append(toIndentedString(websiteHdsize)).append("\n");
    sb.append("    websiteHdfree: ").append(toIndentedString(websiteHdfree)).append("\n");
    sb.append("    websiteLoad: ").append(toIndentedString(websiteLoad)).append("\n");
    sb.append("    websiteLastUpdate: ").append(toIndentedString(websiteLastUpdate)).append("\n");
    sb.append("    websiteMaxSites: ").append(toIndentedString(websiteMaxSites)).append("\n");
    sb.append("    websiteOrder: ").append(toIndentedString(websiteOrder)).append("\n");
    sb.append("    websitePartitions: ").append(toIndentedString(websitePartitions)).append("\n");
    sb.append("    websiteDns1: ").append(toIndentedString(websiteDns1)).append("\n");
    sb.append("    websiteDns2: ").append(toIndentedString(websiteDns2)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

