package io.swagger.model;

import io.swagger.model.WebsitesOrderJsonServiceOffers;
import io.swagger.model.WebsitesOrderJsonServices;
import io.swagger.model.WebsitesOrderPackages;
import io.swagger.model.WebsitesOrderPackges;
import io.swagger.model.WebsitesOrderServiceOffers;
import io.swagger.model.WebsitesOrderServiceTypes;
import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * Schema for the WebsitesOrder object
 **/
@Schema(description="Schema for the WebsitesOrder object")
public class WebsitesOrder   {
  
  @Schema(example = "order_form", required = true, description = "Step description")
 /**
   * Step description  
  **/
  private String step = null;
  
  @Schema(required = true, description = "Website description")
 /**
   * Website description  
  **/
  private String website = null;
  
  @Schema(example = "1", required = true, description = "Period description")
 /**
   * Period description  
  **/
  private Integer period = null;
  
  @Schema(example = "0", required = true, description = "Service offer ID description")
 /**
   * Service offer ID description  
  **/
  private Integer serviceOfferId = null;
  
  @Schema(required = true, description = "")
  private WebsitesOrderPackages packages = null;
  
  @Schema(example = "false", required = true, description = "Enable domain registering description")
 /**
   * Enable domain registering description  
  **/
  private Boolean enableDomainRegistering = null;
  
  @Schema(required = true, description = "")
  private WebsitesOrderJsonServices jsonServices = null;
  
  @Schema(required = true, description = "")
  private WebsitesOrderJsonServiceOffers jsonServiceOffers = null;
  
  @Schema(required = true, description = "")
  private WebsitesOrderServiceTypes serviceTypes = null;
  
  @Schema(required = true, description = "")
  private WebsitesOrderServiceOffers serviceOffers = null;
  
  @Schema(description = "")
  private WebsitesOrderPackges packges = null;
 /**
   * Step description
   * @return step
  **/
  @JsonProperty("step")
  public String getStep() {
    return step;
  }

  public void setStep(String step) {
    this.step = step;
  }

  public WebsitesOrder step(String step) {
    this.step = step;
    return this;
  }

 /**
   * Website description
   * @return website
  **/
  @JsonProperty("website")
  public String getWebsite() {
    return website;
  }

  public void setWebsite(String website) {
    this.website = website;
  }

  public WebsitesOrder website(String website) {
    this.website = website;
    return this;
  }

 /**
   * Period description
   * @return period
  **/
  @JsonProperty("period")
  public Integer getPeriod() {
    return period;
  }

  public void setPeriod(Integer period) {
    this.period = period;
  }

  public WebsitesOrder period(Integer period) {
    this.period = period;
    return this;
  }

 /**
   * Service offer ID description
   * @return serviceOfferId
  **/
  @JsonProperty("serviceOfferId")
  public Integer getServiceOfferId() {
    return serviceOfferId;
  }

  public void setServiceOfferId(Integer serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
  }

  public WebsitesOrder serviceOfferId(Integer serviceOfferId) {
    this.serviceOfferId = serviceOfferId;
    return this;
  }

 /**
   * Get packages
   * @return packages
  **/
  @JsonProperty("packages")
  public WebsitesOrderPackages getPackages() {
    return packages;
  }

  public void setPackages(WebsitesOrderPackages packages) {
    this.packages = packages;
  }

  public WebsitesOrder packages(WebsitesOrderPackages packages) {
    this.packages = packages;
    return this;
  }

 /**
   * Enable domain registering description
   * @return enableDomainRegistering
  **/
  @JsonProperty("enableDomainRegistering")
  public Boolean isEnableDomainRegistering() {
    return enableDomainRegistering;
  }

  public void setEnableDomainRegistering(Boolean enableDomainRegistering) {
    this.enableDomainRegistering = enableDomainRegistering;
  }

  public WebsitesOrder enableDomainRegistering(Boolean enableDomainRegistering) {
    this.enableDomainRegistering = enableDomainRegistering;
    return this;
  }

 /**
   * Get jsonServices
   * @return jsonServices
  **/
  @JsonProperty("jsonServices")
  public WebsitesOrderJsonServices getJsonServices() {
    return jsonServices;
  }

  public void setJsonServices(WebsitesOrderJsonServices jsonServices) {
    this.jsonServices = jsonServices;
  }

  public WebsitesOrder jsonServices(WebsitesOrderJsonServices jsonServices) {
    this.jsonServices = jsonServices;
    return this;
  }

 /**
   * Get jsonServiceOffers
   * @return jsonServiceOffers
  **/
  @JsonProperty("jsonServiceOffers")
  public WebsitesOrderJsonServiceOffers getJsonServiceOffers() {
    return jsonServiceOffers;
  }

  public void setJsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers) {
    this.jsonServiceOffers = jsonServiceOffers;
  }

  public WebsitesOrder jsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers) {
    this.jsonServiceOffers = jsonServiceOffers;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public WebsitesOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(WebsitesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public WebsitesOrder serviceTypes(WebsitesOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

 /**
   * Get serviceOffers
   * @return serviceOffers
  **/
  @JsonProperty("serviceOffers")
  public WebsitesOrderServiceOffers getServiceOffers() {
    return serviceOffers;
  }

  public void setServiceOffers(WebsitesOrderServiceOffers serviceOffers) {
    this.serviceOffers = serviceOffers;
  }

  public WebsitesOrder serviceOffers(WebsitesOrderServiceOffers serviceOffers) {
    this.serviceOffers = serviceOffers;
    return this;
  }

 /**
   * Get packges
   * @return packges
  **/
  @JsonProperty("packges")
  public WebsitesOrderPackges getPackges() {
    return packges;
  }

  public void setPackges(WebsitesOrderPackges packges) {
    this.packges = packges;
  }

  public WebsitesOrder packges(WebsitesOrderPackges packges) {
    this.packges = packges;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
