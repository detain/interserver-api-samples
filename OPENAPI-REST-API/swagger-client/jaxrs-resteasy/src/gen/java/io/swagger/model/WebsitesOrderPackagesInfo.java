package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class WebsitesOrderPackagesInfo   {
  private String servicesId = null;  private String servicesName = null;  private String servicesCost = null;  private String servicesCategory = null;  private String servicesBuyable = null;  private String servicesType = null;  private String servicesField1 = null;  private String servicesField2 = null;  private String servicesModule = null;  private String servicesHtml = null;  private String servicesDescription = null;  private String servicesMoreinfoUrl = null;  private String servicesHidden = null;

  /**
   * The ID of the package.
   **/
  
  @Schema(example = "11440", required = true, description = "The ID of the package.")
  @JsonProperty("services_id")
  @NotNull
  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * The name of the package.
   **/
  
  @Schema(example = "DA BOOST X", required = true, description = "The name of the package.")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The cost of the package.
   **/
  
  @Schema(example = "69.95", required = true, description = "The cost of the package.")
  @JsonProperty("services_cost")
  @NotNull
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * The category of the package.
   **/
  
  @Schema(example = "204", required = true, description = "The category of the package.")
  @JsonProperty("services_category")
  @NotNull
  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Indicates if the package is buyable (1 for yes, 0 for no).
   **/
  
  @Schema(example = "1", required = true, description = "Indicates if the package is buyable (1 for yes, 0 for no).")
  @JsonProperty("services_buyable")
  @NotNull
  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * The type of the package.
   **/
  
  @Schema(example = "206", required = true, description = "The type of the package.")
  @JsonProperty("services_type")
  @NotNull
  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Additional field 1 for the package.
   **/
  
  @Schema(description = "Additional field 1 for the package.")
  @JsonProperty("services_field1")
  @NotNull
  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Additional field 2 for the package.
   **/
  
  @Schema(example = "BoostX", description = "Additional field 2 for the package.")
  @JsonProperty("services_field2")
  @NotNull
  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * The module of the package.
   **/
  
  @Schema(example = "webhosting", required = true, description = "The module of the package.")
  @JsonProperty("services_module")
  @NotNull
  public String getServicesModule() {
    return servicesModule;
  }
  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  /**
   * HTML content for the package.
   **/
  
  @Schema(description = "HTML content for the package.")
  @JsonProperty("services_html")
  @NotNull
  public String getServicesHtml() {
    return servicesHtml;
  }
  public void setServicesHtml(String servicesHtml) {
    this.servicesHtml = servicesHtml;
  }

  /**
   * Description of the package.
   **/
  
  @Schema(example = "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.", required = true, description = "Description of the package.")
  @JsonProperty("services_description")
  @NotNull
  public String getServicesDescription() {
    return servicesDescription;
  }
  public void setServicesDescription(String servicesDescription) {
    this.servicesDescription = servicesDescription;
  }

  /**
   * URL for more information about the package.
   **/
  
  @Schema(description = "URL for more information about the package.")
  @JsonProperty("services_moreinfo_url")
  @NotNull
  public String getServicesMoreinfoUrl() {
    return servicesMoreinfoUrl;
  }
  public void setServicesMoreinfoUrl(String servicesMoreinfoUrl) {
    this.servicesMoreinfoUrl = servicesMoreinfoUrl;
  }

  /**
   * Indicates if the package is hidden (1 for yes, 0 for no).
   **/
  
  @Schema(example = "0", description = "Indicates if the package is hidden (1 for yes, 0 for no).")
  @JsonProperty("services_hidden")
  @NotNull
  public String getServicesHidden() {
    return servicesHidden;
  }
  public void setServicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderPackagesInfo websitesOrderPackagesInfo = (WebsitesOrderPackagesInfo) o;
    return Objects.equals(servicesId, websitesOrderPackagesInfo.servicesId) &&
        Objects.equals(servicesName, websitesOrderPackagesInfo.servicesName) &&
        Objects.equals(servicesCost, websitesOrderPackagesInfo.servicesCost) &&
        Objects.equals(servicesCategory, websitesOrderPackagesInfo.servicesCategory) &&
        Objects.equals(servicesBuyable, websitesOrderPackagesInfo.servicesBuyable) &&
        Objects.equals(servicesType, websitesOrderPackagesInfo.servicesType) &&
        Objects.equals(servicesField1, websitesOrderPackagesInfo.servicesField1) &&
        Objects.equals(servicesField2, websitesOrderPackagesInfo.servicesField2) &&
        Objects.equals(servicesModule, websitesOrderPackagesInfo.servicesModule) &&
        Objects.equals(servicesHtml, websitesOrderPackagesInfo.servicesHtml) &&
        Objects.equals(servicesDescription, websitesOrderPackagesInfo.servicesDescription) &&
        Objects.equals(servicesMoreinfoUrl, websitesOrderPackagesInfo.servicesMoreinfoUrl) &&
        Objects.equals(servicesHidden, websitesOrderPackagesInfo.servicesHidden);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesField1, servicesField2, servicesModule, servicesHtml, servicesDescription, servicesMoreinfoUrl, servicesHidden);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
