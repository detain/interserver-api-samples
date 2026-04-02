package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class InlineResponse20019   {
  @JsonProperty("text")
  private String text = null;
  @JsonProperty("invoice")
  private Integer invoice = null;
  @JsonProperty("order")
  private Integer order = null;
  /**
   * Status message.
   **/
  public InlineResponse20019 text(String text) {
    this.text = text;
    return this;
  }

  
  @Schema(example = "Order Completed", description = "Status message.")
  @JsonProperty("text")
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

  
  @Schema(description = "Invoice ID for payment.")
  @JsonProperty("invoice")
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

  
  @Schema(description = "Server order ID.")
  @JsonProperty("order")
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
