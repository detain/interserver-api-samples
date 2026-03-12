package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServersBuyNowResponseOrderDetails;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Success response after placing a buy-it-now dedicated server order.")

public class ServersBuyNowResponse   {
  private Boolean success = null;  private String text = null;  private ServersBuyNowResponseOrderDetails orderDetails = null;

  /**
   * Whether the order was placed successfully.
   **/
  
  @Schema(example = "true", description = "Whether the order was placed successfully.")
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
  
  @Schema(example = "Server order is placed.", description = "Human-readable status message.")
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
  
  @Schema(description = "")
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
