package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20019   {

  private @Valid String text = null;

  private @Valid Integer invoice = null;

  private @Valid Integer order = null;

  /**
   * Status message.
   **/
  public InlineResponse20019 text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "Order Completed", value = "Status message.")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   * Invoice ID for payment.
   **/
  public InlineResponse20019 invoice(Integer invoice) {
    this.invoice = invoice;
    return this;
  }

  
  @ApiModelProperty(value = "Invoice ID for payment.")
  @JsonProperty("invoice")
  @NotNull

  public Integer getInvoice() {
    return invoice;
  }
  public void setInvoice(Integer invoice) {
    this.invoice = invoice;
  }

  /**
   * Server order ID.
   **/
  public InlineResponse20019 order(Integer order) {
    this.order = order;
    return this;
  }

  
  @ApiModelProperty(value = "Server order ID.")
  @JsonProperty("order")
  @NotNull

  public Integer getOrder() {
    return order;
  }
  public void setOrder(Integer order) {
    this.order = order;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20019 inlineResponse20019 = (InlineResponse20019) o;
    return Objects.equals(text, inlineResponse20019.text) &&
        Objects.equals(invoice, inlineResponse20019.invoice) &&
        Objects.equals(order, inlineResponse20019.order);
  }

  @Override
  public int hashCode() {
    return Objects.hash(text, invoice, order);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20019 {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
