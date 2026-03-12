package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Details of the placed order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Details of the placed order.")

public class ServersBuyNowResponseOrderDetails   {

  private @Valid BigDecimal serviceId = null;

  private @Valid BigDecimal invoiceId = null;

  /**
   * The newly created service ID for the ordered server.
   **/
  public ServersBuyNowResponseOrderDetails serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  
  @ApiModelProperty(example = "1234", value = "The newly created service ID for the ordered server.")
  @JsonProperty("service_id")
  @NotNull

  public BigDecimal getServiceId() {
    return serviceId;
  }
  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  /**
   * The invoice ID generated for the order.
   **/
  public ServersBuyNowResponseOrderDetails invoiceId(BigDecimal invoiceId) {
    this.invoiceId = invoiceId;
    return this;
  }

  
  @ApiModelProperty(example = "2342355", value = "The invoice ID generated for the order.")
  @JsonProperty("invoice_id")
  @NotNull

  public BigDecimal getInvoiceId() {
    return invoiceId;
  }
  public void setInvoiceId(BigDecimal invoiceId) {
    this.invoiceId = invoiceId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServersBuyNowResponseOrderDetails serversBuyNowResponseOrderDetails = (ServersBuyNowResponseOrderDetails) o;
    return Objects.equals(serviceId, serversBuyNowResponseOrderDetails.serviceId) &&
        Objects.equals(invoiceId, serversBuyNowResponseOrderDetails.invoiceId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(serviceId, invoiceId);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServersBuyNowResponseOrderDetails {\n");
    
    sb.append("    serviceId: ").append(toIndentedString(serviceId)).append("\n");
    sb.append("    invoiceId: ").append(toIndentedString(invoiceId)).append("\n");
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
