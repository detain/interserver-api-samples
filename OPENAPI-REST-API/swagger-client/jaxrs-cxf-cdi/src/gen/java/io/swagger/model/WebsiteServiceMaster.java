package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class WebsiteServiceMaster   {
  private String websiteId = null;
  private String websiteName = null;
  private String websiteIp = null;
  private String websiteType = null;
  private String websiteAvailable = null;
  private String websiteHdsize = null;
  private String websiteHdfree = null;
  private String websiteLoad = null;
  private String websiteLastUpdate = null;
  private String websiteMaxSites = null;
  private String websiteOrder = null;
  private String websitePartitions = null;
  private String websiteDns1 = null;
  private String websiteDns2 = null;

  /**
   * Website ID for the service master
   **/
  public WebsiteServiceMaster websiteId(String websiteId) {
    this.websiteId = websiteId;
    return this;
  }

  
  
  @Schema(example = "543", description = "Website ID for the service master")
  @JsonProperty("website_id")
  @NotNull
  public String getWebsiteId() {
    return websiteId;
  }
  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  /**
   * Website name for the service master
   **/
  public WebsiteServiceMaster websiteName(String websiteName) {
    this.websiteName = websiteName;
    return this;
  }

  
  
  @Schema(example = "vda4200.is.cc", description = "Website name for the service master")
  @JsonProperty("website_name")
  @NotNull
  public String getWebsiteName() {
    return websiteName;
  }
  public void setWebsiteName(String websiteName) {
    this.websiteName = websiteName;
  }

  /**
   * IP address for the service master
   **/
  public WebsiteServiceMaster websiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
    return this;
  }

  
  
  @Schema(example = "74.50.80.15", description = "IP address for the service master")
  @JsonProperty("website_ip")
  @NotNull
  public String getWebsiteIp() {
    return websiteIp;
  }
  public void setWebsiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
  }

  /**
   * Website type for the service master
   **/
  public WebsiteServiceMaster websiteType(String websiteType) {
    this.websiteType = websiteType;
    return this;
  }

  
  
  @Schema(example = "206", description = "Website type for the service master")
  @JsonProperty("website_type")
  @NotNull
  public String getWebsiteType() {
    return websiteType;
  }
  public void setWebsiteType(String websiteType) {
    this.websiteType = websiteType;
  }

  /**
   * Availability status for the service master
   **/
  public WebsiteServiceMaster websiteAvailable(String websiteAvailable) {
    this.websiteAvailable = websiteAvailable;
    return this;
  }

  
  
  @Schema(example = "0", description = "Availability status for the service master")
  @JsonProperty("website_available")
  @NotNull
  public String getWebsiteAvailable() {
    return websiteAvailable;
  }
  public void setWebsiteAvailable(String websiteAvailable) {
    this.websiteAvailable = websiteAvailable;
  }

  /**
   * Hard drive size for the service master
   **/
  public WebsiteServiceMaster websiteHdsize(String websiteHdsize) {
    this.websiteHdsize = websiteHdsize;
    return this;
  }

  
  
  @Schema(example = "2062", description = "Hard drive size for the service master")
  @JsonProperty("website_hdsize")
  @NotNull
  public String getWebsiteHdsize() {
    return websiteHdsize;
  }
  public void setWebsiteHdsize(String websiteHdsize) {
    this.websiteHdsize = websiteHdsize;
  }

  /**
   * Free hard drive space for the service master
   **/
  public WebsiteServiceMaster websiteHdfree(String websiteHdfree) {
    this.websiteHdfree = websiteHdfree;
    return this;
  }

  
  
  @Schema(example = "196", description = "Free hard drive space for the service master")
  @JsonProperty("website_hdfree")
  @NotNull
  public String getWebsiteHdfree() {
    return websiteHdfree;
  }
  public void setWebsiteHdfree(String websiteHdfree) {
    this.websiteHdfree = websiteHdfree;
  }

  /**
   * Load for the service master
   **/
  public WebsiteServiceMaster websiteLoad(String websiteLoad) {
    this.websiteLoad = websiteLoad;
    return this;
  }

  
  
  @Schema(example = "6.55", description = "Load for the service master")
  @JsonProperty("website_load")
  @NotNull
  public String getWebsiteLoad() {
    return websiteLoad;
  }
  public void setWebsiteLoad(String websiteLoad) {
    this.websiteLoad = websiteLoad;
  }

  /**
   * Last update date for the service master
   **/
  public WebsiteServiceMaster websiteLastUpdate(String websiteLastUpdate) {
    this.websiteLastUpdate = websiteLastUpdate;
    return this;
  }

  
  
  @Schema(example = "2023-08-17T23:01:02.000Z", description = "Last update date for the service master")
  @JsonProperty("website_last_update")
  @NotNull
  public String getWebsiteLastUpdate() {
    return websiteLastUpdate;
  }
  public void setWebsiteLastUpdate(String websiteLastUpdate) {
    this.websiteLastUpdate = websiteLastUpdate;
  }

  /**
   * Maximum number of sites for the service master
   **/
  public WebsiteServiceMaster websiteMaxSites(String websiteMaxSites) {
    this.websiteMaxSites = websiteMaxSites;
    return this;
  }

  
  
  @Schema(example = "300", description = "Maximum number of sites for the service master")
  @JsonProperty("website_max_sites")
  @NotNull
  public String getWebsiteMaxSites() {
    return websiteMaxSites;
  }
  public void setWebsiteMaxSites(String websiteMaxSites) {
    this.websiteMaxSites = websiteMaxSites;
  }

  /**
   * Order number for the service master
   **/
  public WebsiteServiceMaster websiteOrder(String websiteOrder) {
    this.websiteOrder = websiteOrder;
    return this;
  }

  
  
  @Schema(example = "58984", description = "Order number for the service master")
  @JsonProperty("website_order")
  @NotNull
  public String getWebsiteOrder() {
    return websiteOrder;
  }
  public void setWebsiteOrder(String websiteOrder) {
    this.websiteOrder = websiteOrder;
  }

  /**
   * Partitions for the service master
   **/
  public WebsiteServiceMaster websitePartitions(String websitePartitions) {
    this.websitePartitions = websitePartitions;
    return this;
  }

  
  
  @Schema(description = "Partitions for the service master")
  @JsonProperty("website_partitions")
  @NotNull
  public String getWebsitePartitions() {
    return websitePartitions;
  }
  public void setWebsitePartitions(String websitePartitions) {
    this.websitePartitions = websitePartitions;
  }

  /**
   * DNS server 1 for the service master
   **/
  public WebsiteServiceMaster websiteDns1(String websiteDns1) {
    this.websiteDns1 = websiteDns1;
    return this;
  }

  
  
  @Schema(example = "vda4200a.trouble-free.net", description = "DNS server 1 for the service master")
  @JsonProperty("website_dns1")
  @NotNull
  public String getWebsiteDns1() {
    return websiteDns1;
  }
  public void setWebsiteDns1(String websiteDns1) {
    this.websiteDns1 = websiteDns1;
  }

  /**
   * DNS server 2 for the service master
   **/
  public WebsiteServiceMaster websiteDns2(String websiteDns2) {
    this.websiteDns2 = websiteDns2;
    return this;
  }

  
  
  @Schema(example = "vda4200b.trouble-free.net", description = "DNS server 2 for the service master")
  @JsonProperty("website_dns2")
  @NotNull
  public String getWebsiteDns2() {
    return websiteDns2;
  }
  public void setWebsiteDns2(String websiteDns2) {
    this.websiteDns2 = websiteDns2;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteServiceMaster websiteServiceMaster = (WebsiteServiceMaster) o;
    return Objects.equals(websiteId, websiteServiceMaster.websiteId) &&
        Objects.equals(websiteName, websiteServiceMaster.websiteName) &&
        Objects.equals(websiteIp, websiteServiceMaster.websiteIp) &&
        Objects.equals(websiteType, websiteServiceMaster.websiteType) &&
        Objects.equals(websiteAvailable, websiteServiceMaster.websiteAvailable) &&
        Objects.equals(websiteHdsize, websiteServiceMaster.websiteHdsize) &&
        Objects.equals(websiteHdfree, websiteServiceMaster.websiteHdfree) &&
        Objects.equals(websiteLoad, websiteServiceMaster.websiteLoad) &&
        Objects.equals(websiteLastUpdate, websiteServiceMaster.websiteLastUpdate) &&
        Objects.equals(websiteMaxSites, websiteServiceMaster.websiteMaxSites) &&
        Objects.equals(websiteOrder, websiteServiceMaster.websiteOrder) &&
        Objects.equals(websitePartitions, websiteServiceMaster.websitePartitions) &&
        Objects.equals(websiteDns1, websiteServiceMaster.websiteDns1) &&
        Objects.equals(websiteDns2, websiteServiceMaster.websiteDns2);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
