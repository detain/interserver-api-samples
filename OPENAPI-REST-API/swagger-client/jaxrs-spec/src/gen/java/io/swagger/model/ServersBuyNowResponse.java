package io.swagger.model;

import io.swagger.model.ServersBuyNowResponseOrderDetails;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Success response after placing a buy-it-now dedicated server order.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Success response after placing a buy-it-now dedicated server order.")

public class ServersBuyNowResponse   {

  private @Valid Boolean success = null;

  private @Valid String text = null;

  private @Valid ServersBuyNowResponseOrderDetails orderDetails = null;

  /**
   * Whether the order was placed successfully.
   **/
  public ServersBuyNowResponse success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @ApiModelProperty(example = "true", value = "Whether the order was placed successfully.")
  @JsonProperty("success")
  @NotNull

  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * Human-readable status message.
   **/
  public ServersBuyNowResponse text(String text) {
    this.text = text;
    return this;
  }

  
  @ApiModelProperty(example = "Server order is placed.", value = "Human-readable status message.")
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
  public ServersBuyNowResponse orderDetails(ServersBuyNowResponseOrderDetails orderDetails) {
    this.orderDetails = orderDetails;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("order_details")
  @NotNull

  public ServersBuyNowResponseOrderDetails getOrderDetails() {
    return orderDetails;
  }
  public void setOrderDetails(ServersBuyNowResponseOrderDetails orderDetails) {
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
    ServersBuyNowResponse serversBuyNowResponse = (ServersBuyNowResponse) o;
    return Objects.equals(success, serversBuyNowResponse.success) &&
        Objects.equals(text, serversBuyNowResponse.text) &&
        Objects.equals(orderDetails, serversBuyNowResponse.orderDetails);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, text, orderDetails);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServersBuyNowResponse {\n");
    
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
