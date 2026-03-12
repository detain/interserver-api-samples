package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsitesOrderJsonServiceOffers;
import io.swagger.model.WebsitesOrderJsonServices;
import io.swagger.model.WebsitesOrderPackages;
import io.swagger.model.WebsitesOrderPackges;
import io.swagger.model.WebsitesOrderServiceOffers;
import io.swagger.model.WebsitesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Schema for the WebsitesOrder object
 **/
@Schema(description = "Schema for the WebsitesOrder object")


public class WebsitesOrder   {
  @JsonProperty("step")
  private String step = null;
  @JsonProperty("website")
  private String website = null;
  @JsonProperty("period")
  private Integer period = null;
  @JsonProperty("serviceOfferId")
  private Integer serviceOfferId = null;
  @JsonProperty("packages")
  private WebsitesOrderPackages packages = null;
  @JsonProperty("enableDomainRegistering")
  private Boolean enableDomainRegistering = null;
  @JsonProperty("jsonServices")
  private WebsitesOrderJsonServices jsonServices = null;
  @JsonProperty("jsonServiceOffers")
  private WebsitesOrderJsonServiceOffers jsonServiceOffers = null;
  @JsonProperty("serviceTypes")
  private WebsitesOrderServiceTypes serviceTypes = null;
  @JsonProperty("serviceOffers")
  private WebsitesOrderServiceOffers serviceOffers = null;
  @JsonProperty("packges")
  private WebsitesOrderPackges packges = null;
  /**
   * Step description
   **/
  public WebsitesOrder step(String step) {
    this.step = step;
    return this;
  }

  
  @Schema(example = "order_form", required = true, description = "Step description")
  @JsonProperty("step")
  public String getStep() {
    return step;
  }
  public void setStep(String step) {
    this.step = step;
  }

  /**
   * Website description
   **/
  public WebsitesOrder website(String website) {
    this.website = website;
    return this;
  }

  
  @Schema(required = true, description = "Website description")
  @JsonProperty("website")
  public String getWebsite() {
    return website;
  }
  public void setWebsite(String website) {
    this.website = website;
  }

  /**
   * Period description
   **/
  public WebsitesOrder period(Integer period) {
    this.period = period;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "Period description")
  @JsonProperty("period")
  public Integer getPeriod() {
    return period;
  }
  public void setPeriod(Integer period) {
    this.period = period;
  }

  /**
   * Service offer ID description
   **/
  public WebsitesOrder serviceOfferId(Integer serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

  
  @Schema(example = "0", required = true, description = "Service offer ID description")
  @JsonProperty("serviceOfferId")
  public Integer getServiceOfferId() {
    return serviceOfferId;
  }
  public void setServiceOfferId(Integer serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  /**
   **/
  public WebsitesOrder packages(WebsitesOrderPackages packages) {
    this.packages = packages;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("packages")
  public WebsitesOrderPackages getPackages() {
    return packages;
  }
  public void setPackages(WebsitesOrderPackages packages) {
    this.packages = packages;
  }

  /**
   * Enable domain registering description
   **/
  public WebsitesOrder enableDomainRegistering(Boolean enableDomainRegistering) {
    this.enableDomainRegistering = enableDomainRegistering;
    return this;
  }

  
  @Schema(example = "false", required = true, description = "Enable domain registering description")
  @JsonProperty("enableDomainRegistering")
  public Boolean isEnableDomainRegistering() {
    return enableDomainRegistering;
  }
  public void setEnableDomainRegistering(Boolean enableDomainRegistering) {
    this.enableDomainRegistering = enableDomainRegistering;
  }

  /**
   **/
  public WebsitesOrder jsonServices(WebsitesOrderJsonServices jsonServices) {
    this.jsonServices = jsonServices;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("jsonServices")
  public WebsitesOrderJsonServices getJsonServices() {
    return jsonServices;
  }
  public void setJsonServices(WebsitesOrderJsonServices jsonServices) {
    this.jsonServices = jsonServices;
  }

  /**
   **/
  public WebsitesOrder jsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers) {
    this.jsonServiceOffers = jsonServiceOffers;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("jsonServiceOffers")
  public WebsitesOrderJsonServiceOffers getJsonServiceOffers() {
    return jsonServiceOffers;
  }
  public void setJsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers) {
    this.jsonServiceOffers = jsonServiceOffers;
  }

  /**
   **/
  public WebsitesOrder serviceTypes(WebsitesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceTypes")
  public WebsitesOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(WebsitesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  /**
   **/
  public WebsitesOrder serviceOffers(WebsitesOrderServiceOffers serviceOffers) {
    this.serviceOffers = serviceOffers;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("serviceOffers")
  public WebsitesOrderServiceOffers getServiceOffers() {
    return serviceOffers;
  }
  public void setServiceOffers(WebsitesOrderServiceOffers serviceOffers) {
    this.serviceOffers = serviceOffers;
  }

  /**
   **/
  public WebsitesOrder packges(WebsitesOrderPackges packges) {
    this.packges = packges;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("packges")
  public WebsitesOrderPackges getPackges() {
    return packges;
  }
  public void setPackges(WebsitesOrderPackges packges) {
    this.packges = packges;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsitesOrder websitesOrder = (WebsitesOrder) o;
    return Objects.equals(step, websitesOrder.step) &&
        Objects.equals(website, websitesOrder.website) &&
        Objects.equals(period, websitesOrder.period) &&
        Objects.equals(serviceOfferId, websitesOrder.serviceOfferId) &&
        Objects.equals(packages, websitesOrder.packages) &&
        Objects.equals(enableDomainRegistering, websitesOrder.enableDomainRegistering) &&
        Objects.equals(jsonServices, websitesOrder.jsonServices) &&
        Objects.equals(jsonServiceOffers, websitesOrder.jsonServiceOffers) &&
        Objects.equals(serviceTypes, websitesOrder.serviceTypes) &&
        Objects.equals(serviceOffers, websitesOrder.serviceOffers) &&
        Objects.equals(packges, websitesOrder.packges);
  }

  @Override
  public int hashCode() {
    return Objects.hash(step, website, period, serviceOfferId, packages, enableDomainRegistering, jsonServices, jsonServiceOffers, serviceTypes, serviceOffers, packges);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsitesOrder {\n");
    sb.append("    step: ").append(toIndentedString(step)).append("\n");
    sb.append("    website: ").append(toIndentedString(website)).append("\n");
    sb.append("    period: ").append(toIndentedString(period)).append("\n");
    sb.append("    serviceOfferId: ").append(toIndentedString(serviceOfferId)).append("\n");
    sb.append("    packages: ").append(toIndentedString(packages)).append("\n");
    sb.append("    enableDomainRegistering: ").append(toIndentedString(enableDomainRegistering)).append("\n");
    sb.append("    jsonServices: ").append(toIndentedString(jsonServices)).append("\n");
    sb.append("    jsonServiceOffers: ").append(toIndentedString(jsonServiceOffers)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    serviceOffers: ").append(toIndentedString(serviceOffers)).append("\n");
    sb.append("    packges: ").append(toIndentedString(packges)).append("\n");
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
