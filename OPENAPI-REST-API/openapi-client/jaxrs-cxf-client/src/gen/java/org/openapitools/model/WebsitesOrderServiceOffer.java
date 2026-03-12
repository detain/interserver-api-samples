package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsitesOrderServiceOffer  {
  
 /**
  * The ID of the service offer.
  */
  @ApiModelProperty(example = "136", required = true, value = "The ID of the service offer.")

  private String serviceOfferId;

 /**
  * The ID of the associated service.
  */
  @ApiModelProperty(example = "1026", required = true, value = "The ID of the associated service.")

  private String serviceId;

 /**
  * The introductory cost of the service offer.
  */
  @ApiModelProperty(example = "96.00", required = true, value = "The introductory cost of the service offer.")

  private String introCost;

 /**
  * The renewal cost of the service offer.
  */
  @ApiModelProperty(example = "96.00", required = true, value = "The renewal cost of the service offer.")

  private String renewalCost;

 /**
  * The introductory frequency of the service offer.
  */
  @ApiModelProperty(example = "12", required = true, value = "The introductory frequency of the service offer.")

  private String introFrequency;

 /**
  * The renewal frequency of the service offer.
  */
  @ApiModelProperty(example = "12", required = true, value = "The renewal frequency of the service offer.")

  private String renewalFrequency;

 /**
  * Indicates if coupons are allowed (1 for yes, 0 for no).
  */
  @ApiModelProperty(example = "1", required = true, value = "Indicates if coupons are allowed (1 for yes, 0 for no).")

  private String allowCoupon;

 /**
  * The module of the service offer.
  */
  @ApiModelProperty(example = "webhosting", required = true, value = "The module of the service offer.")

  private String serviceModule;

 /**
  * The creation timestamp of the service offer.
  */
  @ApiModelProperty(example = "2023-01-25T14:50:55.000Z", required = true, value = "The creation timestamp of the service offer.")

  private String createdAt;

 /**
  * The update timestamp of the service offer.
  */
  @ApiModelProperty(value = "The update timestamp of the service offer.")

  private String updatedAt;

 /**
  * The deletion timestamp of the service offer.
  */
  @ApiModelProperty(value = "The deletion timestamp of the service offer.")

  private String deletedAt;
 /**
   * The ID of the service offer.
   * @return serviceOfferId
  **/
  @JsonProperty("service_offer_id")
  public String getServiceOfferId() {
    return serviceOfferId;
  }

  public void setServiceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  public WebsitesOrderServiceOffer serviceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

 /**
   * The ID of the associated service.
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public String getServiceId() {
    return serviceId;
  }

  public void setServiceId(String serviceId) {
    this.serviceId = serviceId;
  }

  public WebsitesOrderServiceOffer serviceId(String serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * The introductory cost of the service offer.
   * @return introCost
  **/
  @JsonProperty("intro_cost")
  public String getIntroCost() {
    return introCost;
  }

  public void setIntroCost(String introCost) {
    this.introCost = introCost;
  }

  public WebsitesOrderServiceOffer introCost(String introCost) {
    this.introCost = introCost;
    return this;
  }

 /**
   * The renewal cost of the service offer.
   * @return renewalCost
  **/
  @JsonProperty("renewal_cost")
  public String getRenewalCost() {
    return renewalCost;
  }

  public void setRenewalCost(String renewalCost) {
    this.renewalCost = renewalCost;
  }

  public WebsitesOrderServiceOffer renewalCost(String renewalCost) {
    this.renewalCost = renewalCost;
    return this;
  }

 /**
   * The introductory frequency of the service offer.
   * @return introFrequency
  **/
  @JsonProperty("intro_frequency")
  public String getIntroFrequency() {
    return introFrequency;
  }

  public void setIntroFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
  }

  public WebsitesOrderServiceOffer introFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
    return this;
  }

 /**
   * The renewal frequency of the service offer.
   * @return renewalFrequency
  **/
  @JsonProperty("renewal_frequency")
  public String getRenewalFrequency() {
    return renewalFrequency;
  }

  public void setRenewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
  }

  public WebsitesOrderServiceOffer renewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
    return this;
  }

 /**
   * Indicates if coupons are allowed (1 for yes, 0 for no).
   * @return allowCoupon
  **/
  @JsonProperty("allow_coupon")
  public String getAllowCoupon() {
    return allowCoupon;
  }

  public void setAllowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
  }

  public WebsitesOrderServiceOffer allowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
    return this;
  }

 /**
   * The module of the service offer.
   * @return serviceModule
  **/
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public WebsitesOrderServiceOffer serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

 /**
   * The creation timestamp of the service offer.
   * @return createdAt
  **/
  @JsonProperty("created_at")
  public String getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  public WebsitesOrderServiceOffer createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

 /**
   * The update timestamp of the service offer.
   * @return updatedAt
  **/
  @JsonProperty("updated_at")
  public String getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  public WebsitesOrderServiceOffer updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

 /**
   * The deletion timestamp of the service offer.
   * @return deletedAt
  **/
  @JsonProperty("deleted_at")
  public String getDeletedAt() {
    return deletedAt;
  }

  public void setDeletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
  }

  public WebsitesOrderServiceOffer deletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
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
    WebsitesOrderServiceOffer websitesOrderServiceOffer = (WebsitesOrderServiceOffer) o;
    return Objects.equals(this.serviceOfferId, websitesOrderServiceOffer.serviceOfferId) &&
        Objects.equals(this.serviceId, websitesOrderServiceOffer.serviceId) &&
        Objects.equals(this.introCost, websitesOrderServiceOffer.introCost) &&
        Objects.equals(this.renewalCost, websitesOrderServiceOffer.renewalCost) &&
        Objects.equals(this.introFrequency, websitesOrderServiceOffer.introFrequency) &&
        Objects.equals(this.renewalFrequency, websitesOrderServiceOffer.renewalFrequency) &&
        Objects.equals(this.allowCoupon, websitesOrderServiceOffer.allowCoupon) &&
        Objects.equals(this.serviceModule, websitesOrderServiceOffer.serviceModule) &&
        Objects.equals(this.createdAt, websitesOrderServiceOffer.createdAt) &&
        Objects.equals(this.updatedAt, websitesOrderServiceOffer.updatedAt) &&
        Objects.equals(this.deletedAt, websitesOrderServiceOffer.deletedAt);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceOfferId, serviceId, introCost, renewalCost, introFrequency, renewalFrequency, allowCoupon, serviceModule, createdAt, updatedAt, deletedAt);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrderServiceOffer {\n");
    
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
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

