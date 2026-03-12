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

public class WebsitesOrderPackagesInfo   {
  
  @Schema(example = "11440", required = true, description = "The ID of the package.")
 /**
   * The ID of the package.  
  **/
  private String servicesId = null;
  
  @Schema(example = "DA BOOST X", required = true, description = "The name of the package.")
 /**
   * The name of the package.  
  **/
  private String servicesName = null;
  
  @Schema(example = "69.95", required = true, description = "The cost of the package.")
 /**
   * The cost of the package.  
  **/
  private String servicesCost = null;
  
  @Schema(example = "204", required = true, description = "The category of the package.")
 /**
   * The category of the package.  
  **/
  private String servicesCategory = null;
  
  @Schema(example = "1", required = true, description = "Indicates if the package is buyable (1 for yes, 0 for no).")
 /**
   * Indicates if the package is buyable (1 for yes, 0 for no).  
  **/
  private String servicesBuyable = null;
  
  @Schema(example = "206", required = true, description = "The type of the package.")
 /**
   * The type of the package.  
  **/
  private String servicesType = null;
  
  @Schema(description = "Additional field 1 for the package.")
 /**
   * Additional field 1 for the package.  
  **/
  private String servicesField1 = null;
  
  @Schema(example = "BoostX", description = "Additional field 2 for the package.")
 /**
   * Additional field 2 for the package.  
  **/
  private String servicesField2 = null;
  
  @Schema(example = "webhosting", required = true, description = "The module of the package.")
 /**
   * The module of the package.  
  **/
  private String servicesModule = null;
  
  @Schema(description = "HTML content for the package.")
 /**
   * HTML content for the package.  
  **/
  private String servicesHtml = null;
  
  @Schema(example = "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.", required = true, description = "Description of the package.")
 /**
   * Description of the package.  
  **/
  private String servicesDescription = null;
  
  @Schema(description = "URL for more information about the package.")
 /**
   * URL for more information about the package.  
  **/
  private String servicesMoreinfoUrl = null;
  
  @Schema(example = "0", description = "Indicates if the package is hidden (1 for yes, 0 for no).")
 /**
   * Indicates if the package is hidden (1 for yes, 0 for no).  
  **/
  private String servicesHidden = null;
 /**
   * The ID of the package.
   * @return servicesId
  **/
  @JsonProperty("services_id")
  @NotNull
  public String getServicesId() {
    return servicesId;
  }

  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  public WebsitesOrderPackagesInfo servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

 /**
   * The name of the package.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public WebsitesOrderPackagesInfo servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The cost of the package.
   * @return servicesCost
  **/
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }

  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  public WebsitesOrderPackagesInfo servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

 /**
   * The category of the package.
   * @return servicesCategory
  **/
  @JsonProperty("services_category")
  @NotNull
  public String getServicesCategory() {
    return servicesCategory;
  }

  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  public WebsitesOrderPackagesInfo servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

 /**
   * Indicates if the package is buyable (1 for yes, 0 for no).
   * @return servicesBuyable
  **/
  @JsonProperty("services_buyable")
  @NotNull
  public String getServicesBuyable() {
    return servicesBuyable;
  }

  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  public WebsitesOrderPackagesInfo servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

 /**
   * The type of the package.
   * @return servicesType
  **/
  @JsonProperty("services_type")
  @NotNull
  public String getServicesType() {
    return servicesType;
  }

  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  public WebsitesOrderPackagesInfo servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

 /**
   * Additional field 1 for the package.
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
  @NotNull
  public String getServicesField1() {
    return servicesField1;
  }

  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  public WebsitesOrderPackagesInfo servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

 /**
   * Additional field 2 for the package.
   * @return servicesField2
  **/
  @JsonProperty("services_field2")
  @NotNull
  public String getServicesField2() {
    return servicesField2;
  }

  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  public WebsitesOrderPackagesInfo servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

 /**
   * The module of the package.
   * @return servicesModule
  **/
  @JsonProperty("services_module")
  @NotNull
  public String getServicesModule() {
    return servicesModule;
  }

  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  public WebsitesOrderPackagesInfo servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

 /**
   * HTML content for the package.
   * @return servicesHtml
  **/
  @JsonProperty("services_html")
  @NotNull
  public String getServicesHtml() {
    return servicesHtml;
  }

  public void setServicesHtml(String servicesHtml) {
    this.servicesHtml = servicesHtml;
  }

  public WebsitesOrderPackagesInfo servicesHtml(String servicesHtml) {
    this.servicesHtml = servicesHtml;
    return this;
  }

 /**
   * Description of the package.
   * @return servicesDescription
  **/
  @JsonProperty("services_description")
  @NotNull
  public String getServicesDescription() {
    return servicesDescription;
  }

  public void setServicesDescription(String servicesDescription) {
    this.servicesDescription = servicesDescription;
  }

  public WebsitesOrderPackagesInfo servicesDescription(String servicesDescription) {
    this.servicesDescription = servicesDescription;
    return this;
  }

 /**
   * URL for more information about the package.
   * @return servicesMoreinfoUrl
  **/
  @JsonProperty("services_moreinfo_url")
  @NotNull
  public String getServicesMoreinfoUrl() {
    return servicesMoreinfoUrl;
  }

  public void setServicesMoreinfoUrl(String servicesMoreinfoUrl) {
    this.servicesMoreinfoUrl = servicesMoreinfoUrl;
  }

  public WebsitesOrderPackagesInfo servicesMoreinfoUrl(String servicesMoreinfoUrl) {
    this.servicesMoreinfoUrl = servicesMoreinfoUrl;
    return this;
  }

 /**
   * Indicates if the package is hidden (1 for yes, 0 for no).
   * @return servicesHidden
  **/
  @JsonProperty("services_hidden")
  @NotNull
  public String getServicesHidden() {
    return servicesHidden;
  }

  public void setServicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
  }

  public WebsitesOrderPackagesInfo servicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderPackagesInfo {\n");
    
    sb.append("    servicesId: ").append(toIndentedString(servicesId)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    servicesCost: ").append(toIndentedString(servicesCost)).append("\n");
    sb.append("    servicesCategory: ").append(toIndentedString(servicesCategory)).append("\n");
    sb.append("    servicesBuyable: ").append(toIndentedString(servicesBuyable)).append("\n");
    sb.append("    servicesType: ").append(toIndentedString(servicesType)).append("\n");
    sb.append("    servicesField1: ").append(toIndentedString(servicesField1)).append("\n");
    sb.append("    servicesField2: ").append(toIndentedString(servicesField2)).append("\n");
    sb.append("    servicesModule: ").append(toIndentedString(servicesModule)).append("\n");
    sb.append("    servicesHtml: ").append(toIndentedString(servicesHtml)).append("\n");
    sb.append("    servicesDescription: ").append(toIndentedString(servicesDescription)).append("\n");
    sb.append("    servicesMoreinfoUrl: ").append(toIndentedString(servicesMoreinfoUrl)).append("\n");
    sb.append("    servicesHidden: ").append(toIndentedString(servicesHidden)).append("\n");
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
