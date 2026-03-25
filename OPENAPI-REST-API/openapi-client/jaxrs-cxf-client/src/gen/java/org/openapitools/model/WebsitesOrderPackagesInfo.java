package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsitesOrderPackagesInfo  {
  
 /**
  * The ID of the package.
  */
  @ApiModelProperty(example = "11440", required = true, value = "The ID of the package.")

  private String servicesId;

 /**
  * The name of the package.
  */
  @ApiModelProperty(example = "DA BOOST X", required = true, value = "The name of the package.")

  private String servicesName;

 /**
  * The cost of the package.
  */
  @ApiModelProperty(example = "69.95", required = true, value = "The cost of the package.")

  private String servicesCost;

 /**
  * The category of the package.
  */
  @ApiModelProperty(example = "204", required = true, value = "The category of the package.")

  private String servicesCategory;

 /**
  * Indicates if the package is buyable (1 for yes, 0 for no).
  */
  @ApiModelProperty(example = "1", required = true, value = "Indicates if the package is buyable (1 for yes, 0 for no).")

  private String servicesBuyable;

 /**
  * The type of the package.
  */
  @ApiModelProperty(example = "206", required = true, value = "The type of the package.")

  private String servicesType;

 /**
  * The module of the package.
  */
  @ApiModelProperty(example = "webhosting", required = true, value = "The module of the package.")

  private String servicesModule;

 /**
  * Description of the package.
  */
  @ApiModelProperty(example = "Direct Admin Web hosting package with 10x more resources over our standard web hosting package.", required = true, value = "Description of the package.")

  private String servicesDescription;

 /**
  * Additional field 1 for the package.
  */
  @ApiModelProperty(example = "", value = "Additional field 1 for the package.")

  private String servicesField1;

 /**
  * Additional field 2 for the package.
  */
  @ApiModelProperty(example = "BoostX", value = "Additional field 2 for the package.")

  private String servicesField2;

 /**
  * HTML content for the package.
  */
  @ApiModelProperty(example = "", value = "HTML content for the package.")

  private String servicesHtml;

 /**
  * URL for more information about the package.
  */
  @ApiModelProperty(example = "", value = "URL for more information about the package.")

  private String servicesMoreinfoUrl;

 /**
  * Indicates if the package is hidden (1 for yes, 0 for no).
  */
  @ApiModelProperty(example = "0", value = "Indicates if the package is hidden (1 for yes, 0 for no).")

  private String servicesHidden;
 /**
   * The ID of the package.
   * @return servicesId
  **/
  @JsonProperty("services_id")
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
   * The module of the package.
   * @return servicesModule
  **/
  @JsonProperty("services_module")
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
   * Description of the package.
   * @return servicesDescription
  **/
  @JsonProperty("services_description")
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
   * Additional field 1 for the package.
   * @return servicesField1
  **/
  @JsonProperty("services_field1")
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
   * HTML content for the package.
   * @return servicesHtml
  **/
  @JsonProperty("services_html")
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
   * URL for more information about the package.
   * @return servicesMoreinfoUrl
  **/
  @JsonProperty("services_moreinfo_url")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderPackagesInfo websitesOrderPackagesInfo = (WebsitesOrderPackagesInfo) o;
    return Objects.equals(this.servicesId, websitesOrderPackagesInfo.servicesId) &&
        Objects.equals(this.servicesName, websitesOrderPackagesInfo.servicesName) &&
        Objects.equals(this.servicesCost, websitesOrderPackagesInfo.servicesCost) &&
        Objects.equals(this.servicesCategory, websitesOrderPackagesInfo.servicesCategory) &&
        Objects.equals(this.servicesBuyable, websitesOrderPackagesInfo.servicesBuyable) &&
        Objects.equals(this.servicesType, websitesOrderPackagesInfo.servicesType) &&
        Objects.equals(this.servicesModule, websitesOrderPackagesInfo.servicesModule) &&
        Objects.equals(this.servicesDescription, websitesOrderPackagesInfo.servicesDescription) &&
        Objects.equals(this.servicesField1, websitesOrderPackagesInfo.servicesField1) &&
        Objects.equals(this.servicesField2, websitesOrderPackagesInfo.servicesField2) &&
        Objects.equals(this.servicesHtml, websitesOrderPackagesInfo.servicesHtml) &&
        Objects.equals(this.servicesMoreinfoUrl, websitesOrderPackagesInfo.servicesMoreinfoUrl) &&
        Objects.equals(this.servicesHidden, websitesOrderPackagesInfo.servicesHidden);
  }

  @Override
  public int hashCode() {
    return Objects.hash(servicesId, servicesName, servicesCost, servicesCategory, servicesBuyable, servicesType, servicesModule, servicesDescription, servicesField1, servicesField2, servicesHtml, servicesMoreinfoUrl, servicesHidden);
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
    sb.append("    servicesModule: ").append(toIndentedString(servicesModule)).append("\n");
    sb.append("    servicesDescription: ").append(toIndentedString(servicesDescription)).append("\n");
    sb.append("    servicesField1: ").append(toIndentedString(servicesField1)).append("\n");
    sb.append("    servicesField2: ").append(toIndentedString(servicesField2)).append("\n");
    sb.append("    servicesHtml: ").append(toIndentedString(servicesHtml)).append("\n");
    sb.append("    servicesMoreinfoUrl: ").append(toIndentedString(servicesMoreinfoUrl)).append("\n");
    sb.append("    servicesHidden: ").append(toIndentedString(servicesHidden)).append("\n");
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

