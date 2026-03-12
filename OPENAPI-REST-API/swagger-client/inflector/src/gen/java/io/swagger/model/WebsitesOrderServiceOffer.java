package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class WebsitesOrderServiceOffer   {
  @JsonProperty("service_offer_id")
  private String serviceOfferId = null;
  @JsonProperty("service_id")
  private String serviceId = null;
  @JsonProperty("intro_cost")
  private String introCost = null;
  @JsonProperty("renewal_cost")
  private String renewalCost = null;
  @JsonProperty("intro_frequency")
  private String introFrequency = null;
  @JsonProperty("renewal_frequency")
  private String renewalFrequency = null;
  @JsonProperty("allow_coupon")
  private String allowCoupon = null;
  @JsonProperty("service_module")
  private String serviceModule = null;
  @JsonProperty("created_at")
  private String createdAt = null;
  @JsonProperty("updated_at")
  private String updatedAt = null;
  @JsonProperty("deleted_at")
  private String deletedAt = null;
  /**
   * The ID of the service offer.
   **/
  public WebsitesOrderServiceOffer serviceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

  
  @Schema(example = "136", required = true, description = "The ID of the service offer.")
  @JsonProperty("service_offer_id")
  public String getServiceOfferId() {
    return serviceOfferId;
  }
  public void setServiceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  /**
   * The ID of the associated service.
   **/
  public WebsitesOrderServiceOffer serviceId(String serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @Schema(example = "1026", required = true, description = "The ID of the associated service.")
  @JsonProperty("service_id")
  public String getServiceId() {
    return serviceId;
  }
  public void setServiceId(String serviceId) {
    this.serviceId = serviceId;
  }

  /**
   * The introductory cost of the service offer.
   **/
  public WebsitesOrderServiceOffer introCost(String introCost) {
    this.introCost = introCost;
    return this;
  }

  
  @Schema(example = "96.00", required = true, description = "The introductory cost of the service offer.")
  @JsonProperty("intro_cost")
  public String getIntroCost() {
    return introCost;
  }
  public void setIntroCost(String introCost) {
    this.introCost = introCost;
  }

  /**
   * The renewal cost of the service offer.
   **/
  public WebsitesOrderServiceOffer renewalCost(String renewalCost) {
    this.renewalCost = renewalCost;
    return this;
  }

  
  @Schema(example = "96.00", required = true, description = "The renewal cost of the service offer.")
  @JsonProperty("renewal_cost")
  public String getRenewalCost() {
    return renewalCost;
  }
  public void setRenewalCost(String renewalCost) {
    this.renewalCost = renewalCost;
  }

  /**
   * The introductory frequency of the service offer.
   **/
  public WebsitesOrderServiceOffer introFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
    return this;
  }

  
  @Schema(example = "12", required = true, description = "The introductory frequency of the service offer.")
  @JsonProperty("intro_frequency")
  public String getIntroFrequency() {
    return introFrequency;
  }
  public void setIntroFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
  }

  /**
   * The renewal frequency of the service offer.
   **/
  public WebsitesOrderServiceOffer renewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
    return this;
  }

  
  @Schema(example = "12", required = true, description = "The renewal frequency of the service offer.")
  @JsonProperty("renewal_frequency")
  public String getRenewalFrequency() {
    return renewalFrequency;
  }
  public void setRenewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
  }

  /**
   * Indicates if coupons are allowed (1 for yes, 0 for no).
   **/
  public WebsitesOrderServiceOffer allowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "Indicates if coupons are allowed (1 for yes, 0 for no).")
  @JsonProperty("allow_coupon")
  public String getAllowCoupon() {
    return allowCoupon;
  }
  public void setAllowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
  }

  /**
   * The module of the service offer.
   **/
  public WebsitesOrderServiceOffer serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  
  @Schema(example = "webhosting", required = true, description = "The module of the service offer.")
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }
  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  /**
   * The creation timestamp of the service offer.
   **/
  public WebsitesOrderServiceOffer createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

  
  @Schema(example = "2023-01-25T14:50:55.000Z", required = true, description = "The creation timestamp of the service offer.")
  @JsonProperty("created_at")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  /**
   * The update timestamp of the service offer.
   **/
  public WebsitesOrderServiceOffer updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

  
  @Schema(description = "The update timestamp of the service offer.")
  @JsonProperty("updated_at")
  public String getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  /**
   * The deletion timestamp of the service offer.
   **/
  public WebsitesOrderServiceOffer deletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
    return this;
  }

  
  @Schema(description = "The deletion timestamp of the service offer.")
  @JsonProperty("deleted_at")
  public String getDeletedAt() {
    return deletedAt;
  }
  public void setDeletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrderServiceOffer websitesOrderServiceOffer = (WebsitesOrderServiceOffer) o;
    return Objects.equals(serviceOfferId, websitesOrderServiceOffer.serviceOfferId) &&
        Objects.equals(serviceId, websitesOrderServiceOffer.serviceId) &&
        Objects.equals(introCost, websitesOrderServiceOffer.introCost) &&
        Objects.equals(renewalCost, websitesOrderServiceOffer.renewalCost) &&
        Objects.equals(introFrequency, websitesOrderServiceOffer.introFrequency) &&
        Objects.equals(renewalFrequency, websitesOrderServiceOffer.renewalFrequency) &&
        Objects.equals(allowCoupon, websitesOrderServiceOffer.allowCoupon) &&
        Objects.equals(serviceModule, websitesOrderServiceOffer.serviceModule) &&
        Objects.equals(createdAt, websitesOrderServiceOffer.createdAt) &&
        Objects.equals(updatedAt, websitesOrderServiceOffer.updatedAt) &&
        Objects.equals(deletedAt, websitesOrderServiceOffer.deletedAt);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
