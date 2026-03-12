package io.swagger.model;

import io.swagger.model.ServersBuyNowResponseOrderDetails;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Success response after placing a buy-it-now dedicated server order.
 **/
@Schema(description="Success response after placing a buy-it-now dedicated server order.")
public class ServersBuyNowResponse   {
  
  @Schema(example = "true", description = "Whether the order was placed successfully.")
 /**
   * Whether the order was placed successfully.  
  **/
  private Boolean success = null;
  
  @Schema(example = "Server order is placed.", description = "Human-readable status message.")
 /**
   * Human-readable status message.  
  **/
  private String text = null;
  
  @Schema(description = "")
  private ServersBuyNowResponseOrderDetails orderDetails = null;
 /**
   * Whether the order was placed successfully.
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ServersBuyNowResponse success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Human-readable status message.
   * @return text
  **/
  @JsonProperty("text")
  @NotNull
  public String getText() {
    return text;
  }

  public void setText(String text) {
    this.text = text;
  }

  public ServersBuyNowResponse text(String text) {
    this.text = text;
    return this;
  }

 /**
   * Get orderDetails
   * @return orderDetails
  **/
  @JsonProperty("order_details")
  @NotNull
  public ServersBuyNowResponseOrderDetails getOrderDetails() {
    return orderDetails;
  }

  public void setOrderDetails(ServersBuyNowResponseOrderDetails orderDetails) {
    this.orderDetails = orderDetails;
  }

  public ServersBuyNowResponse orderDetails(ServersBuyNowResponseOrderDetails orderDetails) {
    this.orderDetails = orderDetails;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
