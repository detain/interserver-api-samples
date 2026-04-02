package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class AddServer200Response  {
  
 /**
  * Status message.
  */
  @ApiModelProperty(example = "Order Completed", value = "Status message.")

  private String text;

 /**
  * Invoice ID for payment.
  */
  @ApiModelProperty(value = "Invoice ID for payment.")

  private Integer invoice;

 /**
  * Server order ID.
  */
  @ApiModelProperty(value = "Server order ID.")

  private Integer order;
 /**
   * Status message.
   * @return text
  **/
  @JsonProperty("text")
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public AddServer200Response text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Invoice ID for payment.
   * @return invoice
  **/
  @JsonProperty("invoice")
  public Integer getInvoice() {
    return invoice;
  }

  public void setInvoice(Integer invoice) {
    this.invoice = invoice;
  }

  public AddServer200Response invoice(Integer invoice) {
    this.invoice = invoice;
    return this;
  }

 /**
   * Server order ID.
   * @return order
  **/
  @JsonProperty("order")
  public Integer getOrder() {
    return order;
  }

  public void setOrder(Integer order) {
    this.order = order;
  }

  public AddServer200Response order(Integer order) {
    this.order = order;
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
    AddServer200Response addServer200Response = (AddServer200Response) o;
    return Objects.equals(this.text, addServer200Response.text) &&
        Objects.equals(this.invoice, addServer200Response.invoice) &&
        Objects.equals(this.order, addServer200Response.order);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, invoice, order);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AddServer200Response {\n");
    
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    invoice: ").append(toIndentedString(invoice)).append("\n");
    sb.append("    order: ").append(toIndentedString(order)).append("\n");
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

