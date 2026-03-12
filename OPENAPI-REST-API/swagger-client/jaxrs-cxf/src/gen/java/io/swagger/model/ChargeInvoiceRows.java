package io.swagger.model;

import io.swagger.model.ChargeInvoiceRowsInvoices;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
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
  * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 **/
@Schema(description="Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.")
public class ChargeInvoiceRows   {
  
  @Schema(description = "Whether the invoice retrieval was successful.")
 /**
   * Whether the invoice retrieval was successful.  
  **/
  private Boolean success = null;
  
  @Schema(description = "List of invoices for the service.")
 /**
   * List of invoices for the service.  
  **/
  private Map<String, ChargeInvoiceRowsInvoices> invoices = null;
 /**
   * Whether the invoice retrieval was successful.
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ChargeInvoiceRows success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * List of invoices for the service.
   * @return invoices
  **/
  @JsonProperty("invoices")
  @NotNull
  public Map<String, ChargeInvoiceRowsInvoices> getInvoices() {
    return invoices;
  }

  public void setInvoices(Map<String, ChargeInvoiceRowsInvoices> invoices) {
    this.invoices = invoices;
  }

  public ChargeInvoiceRows invoices(Map<String, ChargeInvoiceRowsInvoices> invoices) {
    this.invoices = invoices;
    return this;
  }

  public ChargeInvoiceRows putInvoicesItem(String key, ChargeInvoiceRowsInvoices invoicesItem) {
    this.invoices.put(key, invoicesItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ChargeInvoiceRows {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    invoices: ").append(toIndentedString(invoices)).append("\n");
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
