package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;

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
  * Details of the placed order.
 **/
@Schema(description="Details of the placed order.")
public class ServersBuyNowResponseOrderDetails   {
  
  @Schema(example = "1234", description = "The newly created service ID for the ordered server.")
 /**
   * The newly created service ID for the ordered server.  
  **/
  private BigDecimal serviceId = null;
  
  @Schema(example = "2342355", description = "The invoice ID generated for the order.")
 /**
   * The invoice ID generated for the order.  
  **/
  private BigDecimal invoiceId = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
