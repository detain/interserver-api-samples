package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * WebsitesOrderJsonServiceOffersItem
 */
@Validated
@Introspected

public class WebsitesOrderJsonServiceOffersItem   {
  @JsonProperty("service_offer_id")
  private String serviceOfferId = null;

  @JsonProperty("service_id")
  private String serviceId = null;

  @JsonProperty("intro_cost")
  private Integer introCost = null;

  @JsonProperty("renewal_cost")
  private Integer renewalCost = null;

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

  @JsonProperty("currencySymbol")
  private String currencySymbol = null;

  public WebsitesOrderJsonServiceOffersItem serviceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

  /**
   * Service offer ID
   * @return serviceOfferId
  **/
  @Schema(example = "136", description = "Service offer ID")
  @NotNull

  public String getServiceOfferId() {
    return serviceOfferId;
  }

  public void setServiceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  public WebsitesOrderJsonServiceOffersItem serviceId(String serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  /**
   * Service ID
   * @return serviceId
  **/
  @Schema(example = "1026", description = "Service ID")
  @NotNull

  public String getServiceId() {
    return serviceId;
  }

  public void setServiceId(String serviceId) {
    this.serviceId = serviceId;
  }

  public WebsitesOrderJsonServiceOffersItem introCost(Integer introCost) {
    this.introCost = introCost;
    return this;
  }

  /**
   * Introductory cost
   * @return introCost
  **/
  @Schema(example = "96", description = "Introductory cost")
  @NotNull

  public Integer getIntroCost() {
    return introCost;
  }

  public void setIntroCost(Integer introCost) {
    this.introCost = introCost;
  }

  public WebsitesOrderJsonServiceOffersItem renewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
    return this;
  }

  /**
   * Renewal cost
   * @return renewalCost
  **/
  @Schema(example = "96", description = "Renewal cost")
  @NotNull

  public Integer getRenewalCost() {
    return renewalCost;
  }

  public void setRenewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
  }

  public WebsitesOrderJsonServiceOffersItem introFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
    return this;
  }

  /**
   * Introductory frequency
   * @return introFrequency
  **/
  @Schema(example = "12", description = "Introductory frequency")
  @NotNull

  public String getIntroFrequency() {
    return introFrequency;
  }

  public void setIntroFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
  }

  public WebsitesOrderJsonServiceOffersItem renewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
    return this;
  }

  /**
   * Renewal frequency
   * @return renewalFrequency
  **/
  @Schema(example = "12", description = "Renewal frequency")
  @NotNull

  public String getRenewalFrequency() {
    return renewalFrequency;
  }

  public void setRenewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
  }

  public WebsitesOrderJsonServiceOffersItem allowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
    return this;
  }

  /**
   * Allow coupon
   * @return allowCoupon
  **/
  @Schema(example = "1", description = "Allow coupon")
  @NotNull

  public String getAllowCoupon() {
    return allowCoupon;
  }

  public void setAllowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
  }

  public WebsitesOrderJsonServiceOffersItem serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  /**
   * Service module
   * @return serviceModule
  **/
  @Schema(example = "webhosting", description = "Service module")
  @NotNull

  public String getServiceModule() {
    return serviceModule;
  }

  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  public WebsitesOrderJsonServiceOffersItem createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

  /**
   * Creation date
   * @return createdAt
  **/
  @Schema(example = "2023-01-25T14:50:55.000Z", description = "Creation date")
  @NotNull

  public String getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  public WebsitesOrderJsonServiceOffersItem updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

  /**
   * Update date
   * @return updatedAt
  **/
  @Schema(description = "Update date")
  @NotNull

  public String getUpdatedAt() {
    return updatedAt;
  }

  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  public WebsitesOrderJsonServiceOffersItem deletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
    return this;
  }

  /**
   * Deletion date
   * @return deletedAt
  **/
  @Schema(description = "Deletion date")
  @NotNull

  public String getDeletedAt() {
    return deletedAt;
  }

  public void setDeletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
  }

  public WebsitesOrderJsonServiceOffersItem currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  /**
   * Currency symbol
   * @return currencySymbol
  **/
  @Schema(example = "$", description = "Currency symbol")
  @NotNull

  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
