package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Details of the placed order.
 */
@ApiModel(description="Details of the placed order.")

public class ServersBuyNowResponseOrderDetails  {
  
 /**
  * The newly created service ID for the ordered server.
  */
  @ApiModelProperty(example = "1234", value = "The newly created service ID for the ordered server.")

  private BigDecimal serviceId;

 /**
  * The invoice ID generated for the order.
  */
  @ApiModelProperty(example = "2342355", value = "The invoice ID generated for the order.")

  private BigDecimal invoiceId;
 /**
   * The newly created service ID for the ordered server.
   * @return serviceId
  **/
  @JsonProperty("service_id")
  public BigDecimal getServiceId() {
    return serviceId;
  }

  public void setServiceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
  }

  public ServersBuyNowResponseOrderDetails serviceId(BigDecimal serviceId) {
    this.serviceId = serviceId;
    return this;
  }

 /**
   * The invoice ID generated for the order.
   * @return invoiceId
  **/
  @JsonProperty("invoice_id")
  public BigDecimal getInvoiceId() {
    return invoiceId;
  }

  public void setInvoiceId(BigDecimal invoiceId) {
    this.invoiceId = invoiceId;
  }

  public ServersBuyNowResponseOrderDetails invoiceId(BigDecimal invoiceId) {
    this.invoiceId = invoiceId;
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

