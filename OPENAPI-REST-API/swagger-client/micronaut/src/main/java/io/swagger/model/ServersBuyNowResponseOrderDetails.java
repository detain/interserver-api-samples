package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Details of the placed order.
 */
@Schema(description = "Details of the placed order.")
@Validated
@Introspected

public class ServersBuyNowResponseOrderDetails   {
  @JsonProperty("service_id")
  private BigDecimal serviceId = null;

  @JsonProperty("invoice_id")
  private BigDecimal invoiceId = null;

  public ServersBuyNowResponseOrderDetails serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

  /**
   * The newly created service ID for the ordered server.
   * @return serviceId
  **/
  @Schema(example = "1234", description = "The newly created service ID for the ordered server.")
  @NotNull

  @Valid
  public BigDecimal getServiceId() {
    return serviceId;
  }

  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  public ServersBuyNowResponseOrderDetails invoiceId(BigDecimal invoiceId) {
    this.invoiceId = invoiceId;
    return this;
  }

  /**
   * The invoice ID generated for the order.
   * @return invoiceId
  **/
  @Schema(example = "2342355", description = "The invoice ID generated for the order.")
  @NotNull

  @Valid
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
    return Objects.equals(this.serviceId, serversBuyNowResponseOrderDetails.serviceId) &&
        Objects.equals(this.invoiceId, serversBuyNowResponseOrderDetails.invoiceId);
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
