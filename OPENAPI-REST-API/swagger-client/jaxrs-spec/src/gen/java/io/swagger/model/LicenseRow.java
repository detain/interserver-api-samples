package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Date;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A result row from the `Licenses` `GET` request.")

public class LicenseRow   {

  private @Valid String licenseId = null;

  private @Valid String licenseHostname = null;

  private @Valid String licenseIp = null;

  private @Valid String servicesName = null;

  private @Valid String cost = null;

  private @Valid String licenseStatus = null;

  private @Valid String invoicesPaid = null;

  private @Valid Date invoicesDate = null;

  /**
   * The id of the license.
   **/
  public LicenseRow licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

  
  @ApiModelProperty(example = "386111", value = "The id of the license.")
  @JsonProperty("license_id")
  @NotNull

  public String getLicenseId() {
    return licenseId;
  }
  public void setLicenseId(String licenseId) {
    this.licenseId = licenseId;
  }

  /**
   * The hostname of the license.
   **/
  public LicenseRow licenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
    return this;
  }

  
  @ApiModelProperty(value = "The hostname of the license.")
  @JsonProperty("license_hostname")
  @NotNull

  public String getLicenseHostname() {
    return licenseHostname;
  }
  public void setLicenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
  }

  /**
   * The ip of the license.
   **/
  public LicenseRow licenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
    return this;
  }

  
  @ApiModelProperty(example = "66.45.228.100", value = "The ip of the license.")
  @JsonProperty("license_ip")
  @NotNull

  public String getLicenseIp() {
    return licenseIp;
  }
  public void setLicenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
  }

  /**
   * The services name of the license.
   **/
  public LicenseRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

  
  @ApiModelProperty(example = "Imunify360 up to 30 users", value = "The services name of the license.")
  @JsonProperty("services_name")
  @NotNull

  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The cost of the license.
   **/
  public LicenseRow cost(String cost) {
    this.cost = cost;
    return this;
  }

  
  @ApiModelProperty(example = "25.00", value = "The cost of the license.")
  @JsonProperty("cost")
  @NotNull

  public String getCost() {
    return cost;
  }
  public void setCost(String cost) {
    this.cost = cost;
  }

  /**
   * The status of the license.
   **/
  public LicenseRow licenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
    return this;
  }

  
  @ApiModelProperty(example = "canceled", value = "The status of the license.")
  @JsonProperty("license_status")
  @NotNull

  public String getLicenseStatus() {
    return licenseStatus;
  }
  public void setLicenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
  }

  /**
   * The invoices paid of the license.
   **/
  public LicenseRow invoicesPaid(String invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

  
  @ApiModelProperty(example = "1", value = "The invoices paid of the license.")
  @JsonProperty("invoices_paid")
  @NotNull

  public String getInvoicesPaid() {
    return invoicesPaid;
  }
  public void setInvoicesPaid(String invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  /**
   * The invoices date of the license.
   **/
  public LicenseRow invoicesDate(Date invoicesDate) {
    this.invoicesDate = invoicesDate;
    return this;
  }

  
  @ApiModelProperty(example = "2019-08-28T14:27:22Z", value = "The invoices date of the license.")
  @JsonProperty("invoices_date")
  @NotNull

  public Date getInvoicesDate() {
    return invoicesDate;
  }
  public void setInvoicesDate(Date invoicesDate) {
    this.invoicesDate = invoicesDate;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseRow licenseRow = (LicenseRow) o;
    return Objects.equals(licenseId, licenseRow.licenseId) &&
        Objects.equals(licenseHostname, licenseRow.licenseHostname) &&
        Objects.equals(licenseIp, licenseRow.licenseIp) &&
        Objects.equals(servicesName, licenseRow.servicesName) &&
        Objects.equals(cost, licenseRow.cost) &&
        Objects.equals(licenseStatus, licenseRow.licenseStatus) &&
        Objects.equals(invoicesPaid, licenseRow.invoicesPaid) &&
        Objects.equals(invoicesDate, licenseRow.invoicesDate);
  }

  @Override
  public int hashCode() {
    return Objects.hash(licenseId, licenseHostname, licenseIp, servicesName, cost, licenseStatus, invoicesPaid, invoicesDate);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseRow {\n");
    
    sb.append("    licenseId: ").append(toIndentedString(licenseId)).append("\n");
    sb.append("    licenseHostname: ").append(toIndentedString(licenseHostname)).append("\n");
    sb.append("    licenseIp: ").append(toIndentedString(licenseIp)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    cost: ").append(toIndentedString(cost)).append("\n");
    sb.append("    licenseStatus: ").append(toIndentedString(licenseStatus)).append("\n");
    sb.append("    invoicesPaid: ").append(toIndentedString(invoicesPaid)).append("\n");
    sb.append("    invoicesDate: ").append(toIndentedString(invoicesDate)).append("\n");
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
