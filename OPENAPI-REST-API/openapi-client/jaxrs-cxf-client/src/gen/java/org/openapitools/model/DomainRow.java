package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Domains` `GET` request.
 */
@ApiModel(description="A result row from the `Domains` `GET` request.")

public class DomainRow  {
  
 /**
  * The ID number of the domain in our billing system.
  */
  @ApiModelProperty(example = "59237", value = "The ID number of the domain in our billing system.")

  private String domainId;

 /**
  * The hostname of the domain.
  */
  @ApiModelProperty(example = "mydomain.com", value = "The hostname of the domain.")

  private String domainHostname;

 /**
  * The expiration date of the domain.
  */
  @ApiModelProperty(example = "2023-08-14T00:59:38.000Z", value = "The expiration date of the domain.")

  private String domainExpireDate;

 /**
  * The cost of the domain.
  */
  @ApiModelProperty(example = "11.00", value = "The cost of the domain.")

  private String cost;

 /**
  * The billing / registration status of the domain.
  */
  @ApiModelProperty(example = "active", value = "The billing / registration status of the domain.")

  private String domainStatus;
 /**
   * The ID number of the domain in our billing system.
   * @return domainId
  **/
  @JsonProperty("domain_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainRow domainRow = (DomainRow) o;
    return Objects.equals(this.domainId, domainRow.domainId) &&
        Objects.equals(this.domainHostname, domainRow.domainHostname) &&
        Objects.equals(this.domainExpireDate, domainRow.domainExpireDate) &&
        Objects.equals(this.cost, domainRow.cost) &&
        Objects.equals(this.domainStatus, domainRow.domainStatus);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

