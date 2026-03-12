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

public class WebsitesOrderServiceOffer   {
  
  @Schema(example = "136", required = true, description = "The ID of the service offer.")
 /**
   * The ID of the service offer.  
  **/
  private String serviceOfferId = null;
  
  @Schema(example = "1026", required = true, description = "The ID of the associated service.")
 /**
   * The ID of the associated service.  
  **/
  private String serviceId = null;
  
  @Schema(example = "96.00", required = true, description = "The introductory cost of the service offer.")
 /**
   * The introductory cost of the service offer.  
  **/
  private String introCost = null;
  
  @Schema(example = "96.00", required = true, description = "The renewal cost of the service offer.")
 /**
   * The renewal cost of the service offer.  
  **/
  private String renewalCost = null;
  
  @Schema(example = "12", required = true, description = "The introductory frequency of the service offer.")
 /**
   * The introductory frequency of the service offer.  
  **/
  private String introFrequency = null;
  
  @Schema(example = "12", required = true, description = "The renewal frequency of the service offer.")
 /**
   * The renewal frequency of the service offer.  
  **/
  private String renewalFrequency = null;
  
  @Schema(example = "1", required = true, description = "Indicates if coupons are allowed (1 for yes, 0 for no).")
 /**
   * Indicates if coupons are allowed (1 for yes, 0 for no).  
  **/
  private String allowCoupon = null;
  
  @Schema(example = "webhosting", required = true, description = "The module of the service offer.")
 /**
   * The module of the service offer.  
  **/
  private String serviceModule = null;
  
  @Schema(example = "2023-01-25T14:50:55.000Z", required = true, description = "The creation timestamp of the service offer.")
 /**
   * The creation timestamp of the service offer.  
  **/
  private String createdAt = null;
  
  @Schema(description = "The update timestamp of the service offer.")
 /**
   * The update timestamp of the service offer.  
  **/
  private String updatedAt = null;
  
  @Schema(description = "The deletion timestamp of the service offer.")
 /**
   * The deletion timestamp of the service offer.  
  **/
  private String deletedAt = null;
 /**
   * The ID of the service offer.
   * @return serviceOfferId
  **/
  @JsonProperty("service_offer_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
