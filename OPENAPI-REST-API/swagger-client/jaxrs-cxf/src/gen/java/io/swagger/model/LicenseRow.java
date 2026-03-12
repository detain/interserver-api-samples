package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Date;
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
  * A result row from the `Licenses` `GET` request.
 **/
@Schema(description="A result row from the `Licenses` `GET` request.")
public class LicenseRow   {
  
  @Schema(example = "386111", description = "The id of the license.")
 /**
   * The id of the license.  
  **/
  private String licenseId = null;
  
  @Schema(description = "The hostname of the license.")
 /**
   * The hostname of the license.  
  **/
  private String licenseHostname = null;
  
  @Schema(example = "66.45.228.100", description = "The ip of the license.")
 /**
   * The ip of the license.  
  **/
  private String licenseIp = null;
  
  @Schema(example = "Imunify360 up to 30 users", description = "The services name of the license.")
 /**
   * The services name of the license.  
  **/
  private String servicesName = null;
  
  @Schema(example = "25.00", description = "The cost of the license.")
 /**
   * The cost of the license.  
  **/
  private String cost = null;
  
  @Schema(example = "canceled", description = "The status of the license.")
 /**
   * The status of the license.  
  **/
  private String licenseStatus = null;
  
  @Schema(example = "1", description = "The invoices paid of the license.")
 /**
   * The invoices paid of the license.  
  **/
  private String invoicesPaid = null;
  
  @Schema(example = "2019-08-28T14:27:22Z", description = "The invoices date of the license.")
 /**
   * The invoices date of the license.  
  **/
  private Date invoicesDate = null;
 /**
   * The id of the license.
   * @return licenseId
  **/
  @JsonProperty("license_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
