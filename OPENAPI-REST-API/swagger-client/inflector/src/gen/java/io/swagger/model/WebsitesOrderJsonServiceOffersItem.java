package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





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
  /**
   * Service offer ID
   **/
  public WebsitesOrderJsonServiceOffersItem serviceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

  
  @Schema(example = "136", description = "Service offer ID")
  @JsonProperty("service_offer_id")
  public String getServiceOfferId() {
    return serviceOfferId;
  }
  public void setServiceOfferId(String serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  /**
   * Service ID
   **/
  public WebsitesOrderJsonServiceOffersItem serviceId(String serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @Schema(example = "1026", description = "Service ID")
  @JsonProperty("service_id")
  public String getServiceId() {
    return serviceId;
  }
  public void setServiceId(String serviceId) {
    this.serviceId = serviceId;
  }

  /**
   * Introductory cost
   **/
  public WebsitesOrderJsonServiceOffersItem introCost(Integer introCost) {
    this.introCost = introCost;
    return this;
  }

  
  @Schema(example = "96", description = "Introductory cost")
  @JsonProperty("intro_cost")
  public Integer getIntroCost() {
    return introCost;
  }
  public void setIntroCost(Integer introCost) {
    this.introCost = introCost;
  }

  /**
   * Renewal cost
   **/
  public WebsitesOrderJsonServiceOffersItem renewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
    return this;
  }

  
  @Schema(example = "96", description = "Renewal cost")
  @JsonProperty("renewal_cost")
  public Integer getRenewalCost() {
    return renewalCost;
  }
  public void setRenewalCost(Integer renewalCost) {
    this.renewalCost = renewalCost;
  }

  /**
   * Introductory frequency
   **/
  public WebsitesOrderJsonServiceOffersItem introFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
    return this;
  }

  
  @Schema(example = "12", description = "Introductory frequency")
  @JsonProperty("intro_frequency")
  public String getIntroFrequency() {
    return introFrequency;
  }
  public void setIntroFrequency(String introFrequency) {
    this.introFrequency = introFrequency;
  }

  /**
   * Renewal frequency
   **/
  public WebsitesOrderJsonServiceOffersItem renewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
    return this;
  }

  
  @Schema(example = "12", description = "Renewal frequency")
  @JsonProperty("renewal_frequency")
  public String getRenewalFrequency() {
    return renewalFrequency;
  }
  public void setRenewalFrequency(String renewalFrequency) {
    this.renewalFrequency = renewalFrequency;
  }

  /**
   * Allow coupon
   **/
  public WebsitesOrderJsonServiceOffersItem allowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
    return this;
  }

  
  @Schema(example = "1", description = "Allow coupon")
  @JsonProperty("allow_coupon")
  public String getAllowCoupon() {
    return allowCoupon;
  }
  public void setAllowCoupon(String allowCoupon) {
    this.allowCoupon = allowCoupon;
  }

  /**
   * Service module
   **/
  public WebsitesOrderJsonServiceOffersItem serviceModule(String serviceModule) {
    this.serviceModule = serviceModule;
    return this;
  }

  
  @Schema(example = "webhosting", description = "Service module")
  @JsonProperty("service_module")
  public String getServiceModule() {
    return serviceModule;
  }
  public void setServiceModule(String serviceModule) {
    this.serviceModule = serviceModule;
  }

  /**
   * Creation date
   **/
  public WebsitesOrderJsonServiceOffersItem createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

  
  @Schema(example = "2023-01-25T14:50:55.000Z", description = "Creation date")
  @JsonProperty("created_at")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  /**
   * Update date
   **/
  public WebsitesOrderJsonServiceOffersItem updatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
    return this;
  }

  
  @Schema(description = "Update date")
  @JsonProperty("updated_at")
  public String getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  /**
   * Deletion date
   **/
  public WebsitesOrderJsonServiceOffersItem deletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
    return this;
  }

  
  @Schema(description = "Deletion date")
  @JsonProperty("deleted_at")
  public String getDeletedAt() {
    return deletedAt;
  }
  public void setDeletedAt(String deletedAt) {
    this.deletedAt = deletedAt;
  }

  /**
   * Currency symbol
   **/
  public WebsitesOrderJsonServiceOffersItem currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  @Schema(example = "$", description = "Currency symbol")
  @JsonProperty("currencySymbol")
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
    return Objects.equals(serviceOfferId, websitesOrderJsonServiceOffersItem.serviceOfferId) &&
        Objects.equals(serviceId, websitesOrderJsonServiceOffersItem.serviceId) &&
        Objects.equals(introCost, websitesOrderJsonServiceOffersItem.introCost) &&
        Objects.equals(renewalCost, websitesOrderJsonServiceOffersItem.renewalCost) &&
        Objects.equals(introFrequency, websitesOrderJsonServiceOffersItem.introFrequency) &&
        Objects.equals(renewalFrequency, websitesOrderJsonServiceOffersItem.renewalFrequency) &&
        Objects.equals(allowCoupon, websitesOrderJsonServiceOffersItem.allowCoupon) &&
        Objects.equals(serviceModule, websitesOrderJsonServiceOffersItem.serviceModule) &&
        Objects.equals(createdAt, websitesOrderJsonServiceOffersItem.createdAt) &&
        Objects.equals(updatedAt, websitesOrderJsonServiceOffersItem.updatedAt) &&
        Objects.equals(deletedAt, websitesOrderJsonServiceOffersItem.deletedAt) &&
        Objects.equals(currencySymbol, websitesOrderJsonServiceOffersItem.currencySymbol);
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
