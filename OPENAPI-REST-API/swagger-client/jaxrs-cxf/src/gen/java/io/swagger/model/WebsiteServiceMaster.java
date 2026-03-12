package io.swagger.model;

import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class WebsiteServiceMaster   {
  
  @Schema(example = "543", description = "Website ID for the service master")
 /**
   * Website ID for the service master  
  **/
  private String websiteId = null;
  
  @Schema(example = "vda4200.is.cc", description = "Website name for the service master")
 /**
   * Website name for the service master  
  **/
  private String websiteName = null;
  
  @Schema(example = "74.50.80.15", description = "IP address for the service master")
 /**
   * IP address for the service master  
  **/
  private String websiteIp = null;
  
  @Schema(example = "206", description = "Website type for the service master")
 /**
   * Website type for the service master  
  **/
  private String websiteType = null;
  
  @Schema(example = "0", description = "Availability status for the service master")
 /**
   * Availability status for the service master  
  **/
  private String websiteAvailable = null;
  
  @Schema(example = "2062", description = "Hard drive size for the service master")
 /**
   * Hard drive size for the service master  
  **/
  private String websiteHdsize = null;
  
  @Schema(example = "196", description = "Free hard drive space for the service master")
 /**
   * Free hard drive space for the service master  
  **/
  private String websiteHdfree = null;
  
  @Schema(example = "6.55", description = "Load for the service master")
 /**
   * Load for the service master  
  **/
  private String websiteLoad = null;
  
  @Schema(example = "2023-08-17T23:01:02.000Z", description = "Last update date for the service master")
 /**
   * Last update date for the service master  
  **/
  private String websiteLastUpdate = null;
  
  @Schema(example = "300", description = "Maximum number of sites for the service master")
 /**
   * Maximum number of sites for the service master  
  **/
  private String websiteMaxSites = null;
  
  @Schema(example = "58984", description = "Order number for the service master")
 /**
   * Order number for the service master  
  **/
  private String websiteOrder = null;
  
  @Schema(description = "Partitions for the service master")
 /**
   * Partitions for the service master  
  **/
  private String websitePartitions = null;
  
  @Schema(example = "vda4200a.trouble-free.net", description = "DNS server 1 for the service master")
 /**
   * DNS server 1 for the service master  
  **/
  private String websiteDns1 = null;
  
  @Schema(example = "vda4200b.trouble-free.net", description = "DNS server 2 for the service master")
 /**
   * DNS server 2 for the service master  
  **/
  private String websiteDns2 = null;
 /**
   * Website ID for the service master
   * @return websiteId
  **/
  @JsonProperty("website_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
