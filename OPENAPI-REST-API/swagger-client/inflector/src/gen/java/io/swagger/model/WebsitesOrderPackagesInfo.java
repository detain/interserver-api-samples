package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class WebsitesOrderPackagesInfo   {
  @JsonProperty("services_id")
  private String servicesId = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  @JsonProperty("services_cost")
  private String servicesCost = null;
  @JsonProperty("services_category")
  private String servicesCategory = null;
  @JsonProperty("services_buyable")
  private String servicesBuyable = null;
  @JsonProperty("services_type")
  private String servicesType = null;
  @JsonProperty("services_field1")
  private String servicesField1 = null;
  @JsonProperty("services_field2")
  private String servicesField2 = null;
  @JsonProperty("services_module")
  private String servicesModule = null;
  @JsonProperty("services_html")
  private String servicesHtml = null;
  @JsonProperty("services_description")
  private String servicesDescription = null;
  @JsonProperty("services_moreinfo_url")
  private String servicesMoreinfoUrl = null;
  @JsonProperty("services_hidden")
  private String servicesHidden = null;
  /**
   * The ID of the package.
   **/
  public WebsitesOrderPackagesInfo servicesId(String servicesId) {
    this.servicesId = servicesId;
    return this;
  }

  
  @Schema(example = "11440", required = true, description = "The ID of the package.")
  @JsonProperty("services_id")
  public String getServicesId() {
    return servicesId;
  }
  public void setServicesId(String servicesId) {
    this.servicesId = servicesId;
  }

  /**
   * The name of the package.
   **/
  public WebsitesOrderPackagesInfo servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @Schema(example = "DA BOOST X", required = true, description = "The name of the package.")
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The cost of the package.
   **/
  public WebsitesOrderPackagesInfo servicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
    return this;
  }

  
  @Schema(example = "69.95", required = true, description = "The cost of the package.")
  @JsonProperty("services_cost")
  public String getServicesCost() {
    return servicesCost;
  }
  public void setServicesCost(String servicesCost) {
    this.servicesCost = servicesCost;
  }

  /**
   * The category of the package.
   **/
  public WebsitesOrderPackagesInfo servicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
    return this;
  }

  
  @Schema(example = "204", required = true, description = "The category of the package.")
  @JsonProperty("services_category")
  public String getServicesCategory() {
    return servicesCategory;
  }
  public void setServicesCategory(String servicesCategory) {
    this.servicesCategory = servicesCategory;
  }

  /**
   * Indicates if the package is buyable (1 for yes, 0 for no).
   **/
  public WebsitesOrderPackagesInfo servicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "Indicates if the package is buyable (1 for yes, 0 for no).")
  @JsonProperty("services_buyable")
  public String getServicesBuyable() {
    return servicesBuyable;
  }
  public void setServicesBuyable(String servicesBuyable) {
    this.servicesBuyable = servicesBuyable;
  }

  /**
   * The type of the package.
   **/
  public WebsitesOrderPackagesInfo servicesType(String servicesType) {
    this.servicesType = servicesType;
    return this;
  }

  
  @Schema(example = "206", required = true, description = "The type of the package.")
  @JsonProperty("services_type")
  public String getServicesType() {
    return servicesType;
  }
  public void setServicesType(String servicesType) {
    this.servicesType = servicesType;
  }

  /**
   * Additional field 1 for the package.
   **/
  public WebsitesOrderPackagesInfo servicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
    return this;
  }

  
  @Schema(description = "Additional field 1 for the package.")
  @JsonProperty("services_field1")
  public String getServicesField1() {
    return servicesField1;
  }
  public void setServicesField1(String servicesField1) {
    this.servicesField1 = servicesField1;
  }

  /**
   * Additional field 2 for the package.
   **/
  public WebsitesOrderPackagesInfo servicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
    return this;
  }

  
  @Schema(example = "BoostX", description = "Additional field 2 for the package.")
  @JsonProperty("services_field2")
  public String getServicesField2() {
    return servicesField2;
  }
  public void setServicesField2(String servicesField2) {
    this.servicesField2 = servicesField2;
  }

  /**
   * The module of the package.
   **/
  public WebsitesOrderPackagesInfo servicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
    return this;
  }

  
  @Schema(example = "webhosting", required = true, description = "The module of the package.")
  @JsonProperty("services_module")
  public String getServicesModule() {
    return servicesModule;
  }
  public void setServicesModule(String servicesModule) {
    this.servicesModule = servicesModule;
  }

  /**
   * HTML content for the package.
   **/
  public WebsitesOrderPackagesInfo servicesHtml(String servicesHtml) {
    this.servicesHtml = servicesHtml;
    return this;
  }

  
  @Schema(description = "HTML content for the package.")
  @JsonProperty("services_html")
  public String getServicesHtml() {
    return servicesHtml;
  }
  public void setServicesHtml(String servicesHtml) {
    this.servicesHtml = servicesHtml;
  }

  /**
   * Description of the package.
   **/
  public WebsitesOrderPackagesInfo servicesDescription(String servicesDescription) {
    this.servicesDescription = servicesDescription;
    return this;
  }

  
  @Schema(example = "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.", required = true, description = "Description of the package.")
  @JsonProperty("services_description")
  public String getServicesDescription() {
    return servicesDescription;
  }
  public void setServicesDescription(String servicesDescription) {
    this.servicesDescription = servicesDescription;
  }

  /**
   * URL for more information about the package.
   **/
  public WebsitesOrderPackagesInfo servicesMoreinfoUrl(String servicesMoreinfoUrl) {
    this.servicesMoreinfoUrl = servicesMoreinfoUrl;
    return this;
  }

  
  @Schema(description = "URL for more information about the package.")
  @JsonProperty("services_moreinfo_url")
  public String getServicesMoreinfoUrl() {
    return servicesMoreinfoUrl;
  }
  public void setServicesMoreinfoUrl(String servicesMoreinfoUrl) {
    this.servicesMoreinfoUrl = servicesMoreinfoUrl;
  }

  /**
   * Indicates if the package is hidden (1 for yes, 0 for no).
   **/
  public WebsitesOrderPackagesInfo servicesHidden(String servicesHidden) {
    this.servicesHidden = servicesHidden;
    return this;
  }

  
  @Schema(example = "0", description = "Indicates if the package is hidden (1 for yes, 0 for no).")
  @JsonProperty("services_hidden")
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
