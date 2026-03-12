package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ChargeInvoiceRowsInvoices;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.")

public class ChargeInvoiceRows   {
  private Boolean success = null;
  private Map<String, ChargeInvoiceRowsInvoices> invoices = new HashMap<String, ChargeInvoiceRowsInvoices>();

  /**
   * Whether the invoice retrieval was successful.
   **/
  public ChargeInvoiceRows success(Boolean success) {
    this.success = success;
    return this;
  }

  
  
  @Schema(description = "Whether the invoice retrieval was successful.")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * List of invoices for the service.
   **/
  public ChargeInvoiceRows invoices(Map<String, ChargeInvoiceRowsInvoices> invoices) {
    this.invoices = invoices;
    return this;
  }

  
  
  @Schema(description = "List of invoices for the service.")
  @JsonProperty("invoices")
  @NotNull
  @Valid
  public Map<String, ChargeInvoiceRowsInvoices> getInvoices() {
    return invoices;
  }
  public void setInvoices(Map<String, ChargeInvoiceRowsInvoices> invoices) {
    this.invoices = invoices;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ChargeInvoiceRows chargeInvoiceRows = (ChargeInvoiceRows) o;
    return Objects.equals(success, chargeInvoiceRows.success) &&
        Objects.equals(invoices, chargeInvoiceRows.invoices);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, invoices);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
