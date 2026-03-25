package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsitesOrderJsonServiceOffersItem  {
  
 /**
  * Service offer ID
  */
  @ApiModelProperty(example = "136", value = "Service offer ID")

  private String serviceOfferId;

 /**
  * Service ID
  */
  @ApiModelProperty(example = "1026", value = "Service ID")

  private String serviceId;

 /**
  * Introductory cost
  */
  @ApiModelProperty(example = "96", value = "Introductory cost")

  private Integer introCost;

 /**
  * Renewal cost
  */
  @ApiModelProperty(example = "96", value = "Renewal cost")

  private Integer renewalCost;

 /**
  * Introductory frequency
  */
  @ApiModelProperty(example = "12", value = "Introductory frequency")

  private String introFrequency;

 /**
  * Renewal frequency
  */
  @ApiModelProperty(example = "12", value = "Renewal frequency")

  private String renewalFrequency;

 /**
  * Allow coupon
  */
  @ApiModelProperty(example = "1", value = "Allow coupon")

  private String allowCoupon;

 /**
  * Service module
  */
  @ApiModelProperty(example = "webhosting", value = "Service module")

  private String serviceModule;

 /**
  * Creation date
  */
  @ApiModelProperty(example = "2023-01-25T14:50:55.000Z", value = "Creation date")

  private String createdAt;

 /**
  * Update date
  */
  @ApiModelProperty(value = "Update date")

  private String updatedAt;

 /**
  * Deletion date
  */
  @ApiModelProperty(value = "Deletion date")

  private String deletedAt;

 /**
  * Currency symbol
  */
  @ApiModelProperty(example = "$", value = "Currency symbol")

  private String currencySymbol;
 /**
   * Service offer ID
   * @return serviceOfferId
  **/
  @JsonProperty("service_offer_id")
  public String getServiceOfferId() {
    return serviceOfferId;
  }

  public void setServiceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  public WebsitesOrderJsonServiceOffersItem serviceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

 /**
   * Service ID
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public String getServiceId() {
    return serviceId;
  }

  public void setServiceId(String serviceId) {
    this.serviceId = serviceId;
  }

  public WebsitesOrderJsonServiceOffersItem serviceId(String serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * Introductory cost
   * @return introCost
  **/
  @JsonProperty("intro_cost")
  public Integer getIntroCost() {
    return introCost;
  }

  public void setIntroCost(Integer introCost) {
    this.introCost = introCost;
  }

  public WebsitesOrderJsonServiceOffersItem introCost(Integer introCost) {
    this.introCost = introCost;
    return this;
  }

 /**
   * Renewal cost
   * @return renewalCost
  **/
  @JsonProperty("renewal_cost")
  public Integer getRenewalCost() {
    return renewalCost;
  }

  public void setRenewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
  }

  public WebsitesOrderJsonServiceOffersItem renewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
    return this;
  }

 /**
   * Introductory frequency
   * @return introFrequency
  **/
  @JsonProperty("intro_frequency")
  public String getIntroFrequency() {
    return introFrequency;
  }

  public void setIntroFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
  }

  public WebsitesOrderJsonServiceOffersItem introFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
    return this;
  }

 /**
   * Renewal frequency
   * @return renewalFrequency
  **/
  @JsonProperty("renewal_frequency")
  public String getRenewalFrequency() {
    return renewalFrequency;
  }

  public void setRenewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
  }

  public WebsitesOrderJsonServiceOffersItem renewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
    return this;
  }

 /**
   * Allow coupon
   * @return allowCoupon
  **/
  @JsonProperty("allow_coupon")
  public String getAllowCoupon() {
    return allowCoupon;
  }

  public void setAllowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
  }

  public WebsitesOrderJsonServiceOffersItem allowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
    return this;
  }

 /**
   * Service module
   * @return serviceModule
  **/
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public WebsitesOrderJsonServiceOffersItem serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

 /**
   * Creation date
   * @return createdAt
  **/
  @JsonProperty("created_at")
  public String getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  public WebsitesOrderJsonServiceOffersItem createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

 /**
   * Update date
   * @return updatedAt
  **/
  @JsonProperty("updated_at")
  public String getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  public WebsitesOrderJsonServiceOffersItem updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

 /**
   * Deletion date
   * @return deletedAt
  **/
  @JsonProperty("deleted_at")
  public String getDeletedAt() {
    return deletedAt;
  }

  public void setDeletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
  }

  public WebsitesOrderJsonServiceOffersItem deletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
    return this;
  }

 /**
   * Currency symbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public WebsitesOrderJsonServiceOffersItem currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
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
    WebsitesOrderJsonServiceOffersItem websitesOrderJsonServiceOffersItem = (WebsitesOrderJsonServiceOffersItem) o;
    return Objects.equals(this.serviceOfferId, websitesOrderJsonServiceOffersItem.serviceOfferId) &&
        Objects.equals(this.serviceId, websitesOrderJsonServiceOffersItem.serviceId) &&
        Objects.equals(this.introCost, websitesOrderJsonServiceOffersItem.introCost) &&
        Objects.equals(this.renewalCost, websitesOrderJsonServiceOffersItem.renewalCost) &&
        Objects.equals(this.introFrequency, websitesOrderJsonServiceOffersItem.introFrequency) &&
        Objects.equals(this.renewalFrequency, websitesOrderJsonServiceOffersItem.renewalFrequency) &&
        Objects.equals(this.allowCoupon, websitesOrderJsonServiceOffersItem.allowCoupon) &&
        Objects.equals(this.serviceModule, websitesOrderJsonServiceOffersItem.serviceModule) &&
        Objects.equals(this.createdAt, websitesOrderJsonServiceOffersItem.createdAt) &&
        Objects.equals(this.updatedAt, websitesOrderJsonServiceOffersItem.updatedAt) &&
        Objects.equals(this.deletedAt, websitesOrderJsonServiceOffersItem.deletedAt) &&
        Objects.equals(this.currencySymbol, websitesOrderJsonServiceOffersItem.currencySymbol);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceOfferId, serviceId, introCost, renewalCost, introFrequency, renewalFrequency, allowCoupon, serviceModule, createdAt, updatedAt, deletedAt, currencySymbol);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderJsonServiceOffersItem {\n");
    
    sb.append("    serviceOfferId: ").append(toIndentedString(serviceOfferId)).append("\n");
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    introCost: ").append(toIndentedString(introCost)).append("\n");
    sb.append("    renewalCost: ").append(toIndentedString(renewalCost)).append("\n");
    sb.append("    introFrequency: ").append(toIndentedString(introFrequency)).append("\n");
    sb.append("    renewalFrequency: ").append(toIndentedString(renewalFrequency)).append("\n");
    sb.append("    allowCoupon: ").append(toIndentedString(allowCoupon)).append("\n");
    sb.append("    serviceModule: ").append(toIndentedString(serviceModule)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    deletedAt: ").append(toIndentedString(deletedAt)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
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

