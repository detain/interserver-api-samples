package io.swagger.model;

import io.swagger.model.InlineResponse2012OrderDetails;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse2012   {

  private @Valid Boolean success = null;

  private @Valid String text = null;

  private @Valid InlineResponse2012OrderDetails orderDetails = null;

  /**
   **/
  public InlineResponse2012 success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "")
  @JsonProperty("success")
  @NotNull

  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   **/
  public InlineResponse2012 text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "ScrubIp order is placed.", value = "")
  @JsonProperty("text")
  @NotNull

  public String getText() {
    return text;
  }
  public void setText(String text) {
    this.text = text;
  }

  /**
   **/
  public InlineResponse2012 orderDetails(InlineResponse2012OrderDetails orderDetails) {
    this.orderDetails = orderDetails;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("order_details")
  @NotNull

  public InlineResponse2012OrderDetails getOrderDetails() {
    return orderDetails;
  }
  public void setOrderDetails(InlineResponse2012OrderDetails orderDetails) {
    this.orderDetails = orderDetails;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2012 inlineResponse2012 = (InlineResponse2012) o;
    return Objects.equals(success, inlineResponse2012.success) &&
        Objects.equals(text, inlineResponse2012.text) &&
        Objects.equals(orderDetails, inlineResponse2012.orderDetails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, orderDetails);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2012 {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    text: ").append(toIndentedString(text)).append("\n");
    sb.append("    orderDetails: ").append(toIndentedString(orderDetails)).append("\n");
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
