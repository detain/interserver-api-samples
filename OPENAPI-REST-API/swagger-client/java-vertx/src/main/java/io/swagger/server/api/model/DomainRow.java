package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 */




public class DomainRow   {
  private String domainId = null;

  private String domainHostname = null;

  private String domainExpireDate = null;

  private String cost = null;

  private String domainStatus = null;

  public DomainRow domainId(String domainId) {
    this.domainId = domainId;
    return this;
  }

  /**
   * The ID number of the domain in our billing system.
   * @return domainId
   **/
    public String getDomainId() {
    return domainId;
  }

  public void setDomainId(String domainId) {
    this.domainId = domainId;
  }

  public DomainRow domainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
    return this;
  }

  /**
   * The hostname of the domain.
   * @return domainHostname
   **/
    public String getDomainHostname() {
    return domainHostname;
  }

  public void setDomainHostname(String domainHostname) {
    this.domainHostname = domainHostname;
  }

  public DomainRow domainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
    return this;
  }

  /**
   * The expiration date of the domain.
   * @return domainExpireDate
   **/
    public String getDomainExpireDate() {
    return domainExpireDate;
  }

  public void setDomainExpireDate(String domainExpireDate) {
    this.domainExpireDate = domainExpireDate;
  }

  public DomainRow cost(String cost) {
    this.cost = cost;
    return this;
  }

  /**
   * The cost of the domain.
   * @return cost
   **/
    public String getCost() {
    return cost;
  }

  public void setCost(String cost) {
    this.cost = cost;
  }

  public DomainRow domainStatus(String domainStatus) {
    this.domainStatus = domainStatus;
    return this;
  }

  /**
   * The billing / registration status of the domain.
   * @return domainStatus
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
