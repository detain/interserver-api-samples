package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 **/
@Schema(description = "A result row from the `Domains` `GET` request.")


public class DomainRow   {
  @JsonProperty("domain_id")
  private String domainId = null;
  @JsonProperty("domain_hostname")
  private String domainHostname = null;
  @JsonProperty("domain_expire_date")
  private String domainExpireDate = null;
  @JsonProperty("cost")
  private String cost = null;
  @JsonProperty("domain_status")
  private String domainStatus = null;
  /**
   * The ID number of the domain in our billing system.
   **/
  public DomainRow domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  
  @Schema(example = "59237", description = "The ID number of the domain in our billing system.")
  @JsonProperty("domain_id")
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

  
  @Schema(example = "mydomain.com", description = "The hostname of the domain.")
  @JsonProperty("domain_hostname")
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

  
  @Schema(example = "2023-08-14T00:59:38.000Z", description = "The expiration date of the domain.")
  @JsonProperty("domain_expire_date")
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

  
  @Schema(example = "11.00", description = "The cost of the domain.")
  @JsonProperty("cost")
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

  
  @Schema(example = "active", description = "The billing / registration status of the domain.")
  @JsonProperty("domain_status")
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
