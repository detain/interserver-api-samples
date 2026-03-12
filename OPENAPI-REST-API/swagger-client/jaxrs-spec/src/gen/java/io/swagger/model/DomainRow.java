package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Domains` `GET` request.")

public class DomainRow   {

  private @Valid String domainId = null;

  private @Valid String domainHostname = null;

  private @Valid String domainExpireDate = null;

  private @Valid String cost = null;

  private @Valid String domainStatus = null;

  /**
   * The ID number of the domain in our billing system.
   **/
  public DomainRow domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  
  @ApiModelProperty(example = "59237", value = "The ID number of the domain in our billing system.")
  @JsonProperty("domain_id")
  @NotNull

  public String getDomainId() {
    return domainId;
  }
  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  /**
   * The hostname of the domain.
   **/
  public DomainRow domainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
    return this;
  }

  
  @ApiModelProperty(example = "mydomain.com", value = "The hostname of the domain.")
  @JsonProperty("domain_hostname")
  @NotNull

  public String getDomainHostname() {
    return domainHostname;
  }
  public void setDomainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
  }

  /**
   * The expiration date of the domain.
   **/
  public DomainRow domainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-08-14T00:59:38.000Z", value = "The expiration date of the domain.")
  @JsonProperty("domain_expire_date")
  @NotNull

  public String getDomainExpireDate() {
    return domainExpireDate;
  }
  public void setDomainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
  }

  /**
   * The cost of the domain.
   **/
  public DomainRow cost(String cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(example = "11.00", value = "The cost of the domain.")
  @JsonProperty("cost")
  @NotNull

  public String getCost() {
    return cost;
  }
  public void setCost(String cost) {
    this.cost = cost;
  }

  /**
   * The billing / registration status of the domain.
   **/
  public DomainRow domainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
    return this;
  }

  
  @ApiModelProperty(example = "active", value = "The billing / registration status of the domain.")
  @JsonProperty("domain_status")
  @NotNull

  public String getDomainStatus() {
    return domainStatus;
  }
  public void setDomainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainRow domainRow = (DomainRow) o;
    return Objects.equals(domainId, domainRow.domainId) &&
        Objects.equals(domainHostname, domainRow.domainHostname) &&
        Objects.equals(domainExpireDate, domainRow.domainExpireDate) &&
        Objects.equals(cost, domainRow.cost) &&
        Objects.equals(domainStatus, domainRow.domainStatus);
  }

  @Override
  public int hashCode() {
    return Objects.hash(domainId, domainHostname, domainExpireDate, cost, domainStatus);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
