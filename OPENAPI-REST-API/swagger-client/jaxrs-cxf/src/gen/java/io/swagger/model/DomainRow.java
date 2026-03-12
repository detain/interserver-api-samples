package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
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

/**
  * A result row from the `Domains` `GET` request.
 **/
@Schema(description="A result row from the `Domains` `GET` request.")
public class DomainRow   {
  
  @Schema(example = "59237", description = "The ID number of the domain in our billing system.")
 /**
   * The ID number of the domain in our billing system.  
  **/
  private String domainId = null;
  
  @Schema(example = "mydomain.com", description = "The hostname of the domain.")
 /**
   * The hostname of the domain.  
  **/
  private String domainHostname = null;
  
  @Schema(example = "2023-08-14T00:59:38.000Z", description = "The expiration date of the domain.")
 /**
   * The expiration date of the domain.  
  **/
  private String domainExpireDate = null;
  
  @Schema(example = "11.00", description = "The cost of the domain.")
 /**
   * The cost of the domain.  
  **/
  private String cost = null;
  
  @Schema(example = "active", description = "The billing / registration status of the domain.")
 /**
   * The billing / registration status of the domain.  
  **/
  private String domainStatus = null;
 /**
   * The ID number of the domain in our billing system.
   * @return domainId
  **/
  @JsonProperty("domain_id")
  @NotNull
  public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DomainRow domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

 /**
   * The hostname of the domain.
   * @return domainHostname
  **/
  @JsonProperty("domain_hostname")
  @NotNull
  public String getDomainHostname() {
    return domainHostname;
  }

  public void setDomainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
  }

  public DomainRow domainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
    return this;
  }

 /**
   * The expiration date of the domain.
   * @return domainExpireDate
  **/
  @JsonProperty("domain_expire_date")
  @NotNull
  public String getDomainExpireDate() {
    return domainExpireDate;
  }

  public void setDomainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
  }

  public DomainRow domainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
    return this;
  }

 /**
   * The cost of the domain.
   * @return cost
  **/
  @JsonProperty("cost")
  @NotNull
  public String getCost() {
    return cost;
  }

  public void setCost(String cost) {
    this.cost = cost;
  }

  public DomainRow cost(String cost) {
    this.cost = cost;
    return this;
  }

 /**
   * The billing / registration status of the domain.
   * @return domainStatus
  **/
  @JsonProperty("domain_status")
  @NotNull
  public String getDomainStatus() {
    return domainStatus;
  }

  public void setDomainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
  }

  public DomainRow domainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainRow {\n");
    
    sb.append("    domainId: ").append(toIndentedString(domainId)).append("\n");
    sb.append("    domainHostname: ").append(toIndentedString(domainHostname)).append("\n");
    sb.append("    domainExpireDate: ").append(toIndentedString(domainExpireDate)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    domainStatus: ").append(toIndentedString(domainStatus)).append("\n");
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
