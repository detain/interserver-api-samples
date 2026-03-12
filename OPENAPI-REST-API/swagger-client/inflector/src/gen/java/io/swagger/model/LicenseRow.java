package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Date;


/**
 * A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
 **/
@Schema(description = "A result row from the `Licenses` `GET` request.")


public class LicenseRow   {
  @JsonProperty("license_id")
  private String licenseId = null;
  @JsonProperty("license_hostname")
  private String licenseHostname = null;
  @JsonProperty("license_ip")
  private String licenseIp = null;
  @JsonProperty("services_name")
  private String servicesName = null;
  @JsonProperty("cost")
  private String cost = null;
  @JsonProperty("license_status")
  private String licenseStatus = null;
  @JsonProperty("invoices_paid")
  private String invoicesPaid = null;
  @JsonProperty("invoices_date")
  private Date invoicesDate = null;
  /**
   * The id of the license.
   **/
  public LicenseRow licenseId(String licenseId) {
    this.licenseId = licenseId;
    return this;
  }

  
  @Schema(example = "386111", description = "The id of the license.")
  @JsonProperty("license_id")
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

  
  @Schema(description = "The hostname of the license.")
  @JsonProperty("license_hostname")
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

  
  @Schema(example = "66.45.228.100", description = "The ip of the license.")
  @JsonProperty("license_ip")
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

  
  @Schema(example = "Imunify360 up to 30 users", description = "The services name of the license.")
  @JsonProperty("services_name")
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

  
  @Schema(example = "25.00", description = "The cost of the license.")
  @JsonProperty("cost")
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

  
  @Schema(example = "canceled", description = "The status of the license.")
  @JsonProperty("license_status")
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

  
  @Schema(example = "1", description = "The invoices paid of the license.")
  @JsonProperty("invoices_paid")
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

  
  @Schema(example = "2019-08-28T14:27:22Z", description = "The invoices date of the license.")
  @JsonProperty("invoices_date")
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
