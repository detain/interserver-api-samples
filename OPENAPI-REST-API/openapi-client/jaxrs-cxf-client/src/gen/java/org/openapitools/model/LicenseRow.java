package org.openapitools.model;

import java.util.Date;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Licenses` `GET` request.
 */
@ApiModel(description="A result row from the `Licenses` `GET` request.")

public class LicenseRow  {
  
 /**
  * The id of the license.
  */
  @ApiModelProperty(example = "386111", value = "The id of the license.")

  private String licenseId;

 /**
  * The hostname of the license.
  */
  @ApiModelProperty(example = "", value = "The hostname of the license.")

  private String licenseHostname;

 /**
  * The ip of the license.
  */
  @ApiModelProperty(example = "66.45.228.100", value = "The ip of the license.")

  private String licenseIp;

 /**
  * The services name of the license.
  */
  @ApiModelProperty(example = "Imunify360 up to 30 users", value = "The services name of the license.")

  private String servicesName;

 /**
  * The cost of the license.
  */
  @ApiModelProperty(example = "25.00", value = "The cost of the license.")

  private String cost;

 /**
  * The status of the license.
  */
  @ApiModelProperty(example = "canceled", value = "The status of the license.")

  private String licenseStatus;

 /**
  * The invoices paid of the license.
  */
  @ApiModelProperty(example = "1", value = "The invoices paid of the license.")

  private String invoicesPaid;

 /**
  * The invoices date of the license.
  */
  @ApiModelProperty(example = "2019-08-28T14:27:22Z", value = "The invoices date of the license.")

  private Date invoicesDate;
 /**
   * The id of the license.
   * @return licenseId
  **/
  @JsonProperty("license_id")
  public String getLicenseId() {
    return licenseId;
  }

  public void setLicenseId(String licenseId) {
    this.licenseId = licenseId;
  }

  public LicenseRow licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

 /**
   * The hostname of the license.
   * @return licenseHostname
  **/
  @JsonProperty("license_hostname")
  public String getLicenseHostname() {
    return licenseHostname;
  }

  public void setLicenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
  }

  public LicenseRow licenseHostname(String licenseHostname) {
    this.licenseHostname = licenseHostname;
    return this;
  }

 /**
   * The ip of the license.
   * @return licenseIp
  **/
  @JsonProperty("license_ip")
  public String getLicenseIp() {
    return licenseIp;
  }

  public void setLicenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
  }

  public LicenseRow licenseIp(String licenseIp) {
    this.licenseIp = licenseIp;
    return this;
  }

 /**
   * The services name of the license.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public LicenseRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The cost of the license.
   * @return cost
  **/
  @JsonProperty("cost")
  public String getCost() {
    return cost;
  }

  public void setCost(String cost) {
    this.cost = cost;
  }

  public LicenseRow cost(String cost) {
    this.cost = cost;
    return this;
  }

 /**
   * The status of the license.
   * @return licenseStatus
  **/
  @JsonProperty("license_status")
  public String getLicenseStatus() {
    return licenseStatus;
  }

  public void setLicenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
  }

  public LicenseRow licenseStatus(String licenseStatus) {
    this.licenseStatus = licenseStatus;
    return this;
  }

 /**
   * The invoices paid of the license.
   * @return invoicesPaid
  **/
  @JsonProperty("invoices_paid")
  public String getInvoicesPaid() {
    return invoicesPaid;
  }

  public void setInvoicesPaid(String invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
  }

  public LicenseRow invoicesPaid(String invoicesPaid) {
    this.invoicesPaid = invoicesPaid;
    return this;
  }

 /**
   * The invoices date of the license.
   * @return invoicesDate
  **/
  @JsonProperty("invoices_date")
  public Date getInvoicesDate() {
    return invoicesDate;
  }

  public void setInvoicesDate(Date invoicesDate) {
    this.invoicesDate = invoicesDate;
  }

  public LicenseRow invoicesDate(Date invoicesDate) {
    this.invoicesDate = invoicesDate;
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
    LicenseRow licenseRow = (LicenseRow) o;
    return Objects.equals(this.licenseId, licenseRow.licenseId) &&
        Objects.equals(this.licenseHostname, licenseRow.licenseHostname) &&
        Objects.equals(this.licenseIp, licenseRow.licenseIp) &&
        Objects.equals(this.servicesName, licenseRow.servicesName) &&
        Objects.equals(this.cost, licenseRow.cost) &&
        Objects.equals(this.licenseStatus, licenseRow.licenseStatus) &&
        Objects.equals(this.invoicesPaid, licenseRow.invoicesPaid) &&
        Objects.equals(this.invoicesDate, licenseRow.invoicesDate);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

